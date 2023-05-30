
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	TCONST	258
#define	TELSE	259
#define	TIF	260
#define	TINT	261
#define	TRETURN	262
#define	TVOID	263
#define	TWHILE	264
#define	TPOINT	265
#define	TILLSP	266
#define	TPLUS	267
#define	TMINUS	268
#define	TSTAR	269
#define	TSLASH	270
#define	TMOD	271
#define	TASSIGN	272
#define	TADDASSIGN	273
#define	TSUBASSIGN	274
#define	TMULASSIGN	275
#define	TDIVASSIGN	276
#define	TMODASSIGN	277
#define	TOR	278
#define	TEQUAL	279
#define	TNOTEQU	280
#define	TLESS	281
#define	TOVER	282
#define	TLESSE	283
#define	TINC	284
#define	TDEC	285
#define	TOSBRA	286
#define	TCSBRA	287
#define	TCOMMA	288
#define	TOMBRA	289
#define	TCMBRA	290
#define	TOLBRA	291
#define	TCLBRA	292
#define	TSEMI	293
#define	TNUMBER	294
#define	TFLOAT	295
#define	TLONG	296
#define	TNOT	297
#define	TAND	298
#define	TOVERE	299
#define	TILLIDENT	300
#define	TONECMT	301
#define	TMULCMT	302
#define	TIDENT	303
#define	TGREATE	304
#define	LOWER_THAN_ELSE	305

#line 1 "parser.y"

/*
* parser.y.- yacc source for the MiniC(HW3)
*
* Programmer - team2
*
* date -  5/26/2021
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <malloc.h>

#include "glob.h"

 int type_int=0;
 int type_void=0;
 int type_float=0;
 int param_int=0;
 int param_float=0;


extern reporterror();
extern yylex();
extern yyerror(char *s);


#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		169
#define	YYFLAG		-32768
#define	YYNTBASE	51

#define YYTRANSLATE(x) ((unsigned)(x) <= 305 ? yytranslate[x] : 96)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    14,    17,    20,    24,
    26,    28,    31,    33,    35,    37,    39,    41,    43,    45,
    47,    49,    53,    55,    56,    58,    62,    65,    70,    75,
    77,    78,    80,    83,    87,    91,    93,    97,    99,   103,
   107,   109,   114,   119,   121,   123,   125,   127,   128,   130,
   131,   133,   136,   139,   141,   143,   145,   147,   149,   152,
   155,   157,   158,   164,   172,   178,   182,   184,   186,   190,
   194,   198,   202,   206,   210,   212,   216,   218,   222,   224,
   228,   232,   234,   238,   242,   246,   250,   252,   256,   260,
   262,   266,   270,   274,   276,   279,   282,   285,   288,   290,
   295,   300,   303,   306,   308,   309,   311,   313,   317,   319,
   321,   323
};

static const short yyrhs[] = {    52,
     0,    53,     0,    52,    53,     0,    54,     0,    69,     0,
    55,    66,     0,    55,    38,     0,    55,     1,     0,    56,
    61,    62,     0,    57,     0,    58,     0,    57,    58,     0,
    59,     0,    60,     0,     3,     0,     6,     0,     8,     0,
    40,     0,    48,     0,    45,     0,    41,     0,    31,    63,
    32,     0,    64,     0,     0,    65,     0,    64,    33,    65,
     0,    56,    72,     0,    34,    67,    74,    35,     0,    34,
    67,    74,     1,     0,    68,     0,     0,    69,     0,    68,
    69,     0,    56,    70,    38,     0,    56,    70,     1,     0,
    71,     0,    70,    33,    71,     0,    72,     0,    72,    17,
    39,     0,    72,    17,    10,     0,    48,     0,    48,    36,
    73,    37,     0,    48,    36,    73,     1,     0,    45,     0,
    41,     0,    39,     0,    10,     0,     0,    75,     0,     0,
    76,     0,    75,    76,     0,    75,    69,     0,    66,     0,
    77,     0,    79,     0,    80,     0,    81,     0,    78,    38,
     0,    82,     1,     0,    82,     0,     0,     5,    31,    82,
    32,    76,     0,     5,    31,    82,    32,    76,     4,    76,
     0,     9,    31,    82,    32,    76,     0,     7,    78,    38,
     0,    83,     0,    84,     0,    90,    17,    83,     0,    90,
    18,    83,     0,    90,    19,    83,     0,    90,    20,    83,
     0,    90,    21,    83,     0,    90,    22,    83,     0,    85,
     0,    84,    23,    85,     0,    86,     0,    85,    43,    86,
     0,    87,     0,    86,    24,    87,     0,    86,    25,    87,
     0,    88,     0,    87,    27,    88,     0,    87,    26,    88,
     0,    87,    49,    88,     0,    87,    28,    88,     0,    89,
     0,    88,    12,    89,     0,    88,    13,    89,     0,    90,
     0,    89,    14,    90,     0,    89,    15,    90,     0,    89,
    16,    90,     0,    91,     0,    13,    90,     0,    42,    90,
     0,    29,    90,     0,    30,    90,     0,    95,     0,    91,
    36,    82,    37,     0,    91,    31,    92,    32,     0,    91,
    29,     0,    91,    30,     0,    93,     0,     0,    94,     0,
    83,     0,    94,    33,    83,     0,    48,     0,    39,     0,
    10,     0,    31,    82,    32,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    41,    43,    44,    46,    47,    49,    50,    51,    60,    62,
    64,    65,    67,    68,    70,    75,    76,    77,    80,   105,
   106,   110,   112,   113,   115,   116,   120,   136,   137,   143,
   144,   146,   147,   149,   154,   163,   164,   166,   167,   168,
   170,   186,   197,   201,   202,   205,   206,   207,   209,   210,
   212,   213,   214,   216,   217,   218,   219,   220,   222,   223,
   229,   230,   232,   233,   235,   237,   239,   241,   242,   243,
   244,   245,   246,   247,   249,   250,   252,   253,   255,   256,
   257,   259,   260,   261,   262,   263,   265,   266,   267,   269,
   270,   271,   272,   274,   275,   276,   277,   278,   280,   281,
   282,   283,   284,   286,   287,   289,   291,   292,   294,   300,
   301,   302
};

static const char * const yytname[] = {   "$","error","$undefined.","TCONST",
"TELSE","TIF","TINT","TRETURN","TVOID","TWHILE","TPOINT","TILLSP","TPLUS","TMINUS",
"TSTAR","TSLASH","TMOD","TASSIGN","TADDASSIGN","TSUBASSIGN","TMULASSIGN","TDIVASSIGN",
"TMODASSIGN","TOR","TEQUAL","TNOTEQU","TLESS","TOVER","TLESSE","TINC","TDEC",
"TOSBRA","TCSBRA","TCOMMA","TOMBRA","TCMBRA","TOLBRA","TCLBRA","TSEMI","TNUMBER",
"TFLOAT","TLONG","TNOT","TAND","TOVERE","TILLIDENT","TONECMT","TMULCMT","TIDENT",
"TGREATE","LOWER_THAN_ELSE","mini_c","translation_unit","external_dcl","function_def",
"function_header","dcl_spec","dcl_specifiers","dcl_specifier","type_qualifier",
"type_specifier","function_name","formal_param","opt_formal_param","formal_param_list",
"param_dcl","compound_st","opt_dcl_list","declaration_list","declaration","init_dcl_list",
"init_declarator","declarator","opt_number","opt_stat_list","statement_list",
"statement","expression_st","opt_expression","if_st","while_st","return_st",
"expression","assignment_exp","logical_or_exp","logical_and_exp","equality_exp",
"relational_exp","additive_exp","multiplicative_exp","unary_exp","postfix_exp",
"opt_actual_param","actual_param","actual_param_list","primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    51,    52,    52,    53,    53,    54,    54,    54,    55,    56,
    57,    57,    58,    58,    59,    60,    60,    60,    61,    61,
    61,    62,    63,    63,    64,    64,    65,    66,    66,    67,
    67,    68,    68,    69,    69,    70,    70,    71,    71,    71,
    72,    72,    72,    72,    72,    73,    73,    73,    74,    74,
    75,    75,    75,    76,    76,    76,    76,    76,    77,    77,
    78,    78,    79,    79,    80,    81,    82,    83,    83,    83,
    83,    83,    83,    83,    84,    84,    85,    85,    86,    86,
    86,    87,    87,    87,    87,    87,    88,    88,    88,    89,
    89,    89,    89,    90,    90,    90,    90,    90,    91,    91,
    91,    91,    91,    92,    92,    93,    94,    94,    95,    95,
    95,    95
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     3,     1,
     1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     3,     1,     0,     1,     3,     2,     4,     4,     1,
     0,     1,     2,     3,     3,     1,     3,     1,     3,     3,
     1,     4,     4,     1,     1,     1,     1,     0,     1,     0,
     1,     2,     2,     1,     1,     1,     1,     1,     2,     2,
     1,     0,     5,     7,     5,     3,     1,     1,     3,     3,
     3,     3,     3,     3,     1,     3,     1,     3,     1,     3,
     3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
     3,     3,     3,     1,     2,     2,     2,     2,     1,     4,
     4,     2,     2,     1,     0,     1,     1,     3,     1,     1,
     1,     3
};

static const short yydefact[] = {     0,
    15,    16,    17,    18,     1,     2,     4,     0,     0,    10,
    11,    13,    14,     5,     3,     8,    31,     7,     6,    45,
    44,    41,     0,     0,    36,    38,    12,     0,    50,    30,
    32,    48,    24,     9,    35,     0,    34,     0,    45,    44,
    41,     0,    62,     0,   111,     0,     0,     0,     0,   110,
     0,   109,    54,     0,    49,    51,    55,     0,    56,    57,
    58,     0,    67,    68,    75,    77,    79,    82,    87,    90,
    94,    99,    33,    47,    46,     0,     0,     0,    23,    25,
    37,    40,    39,     0,     0,    61,     0,    95,    97,    98,
     0,    96,    29,    28,    53,    52,    59,    60,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   102,   103,   105,
     0,    43,    42,    27,    22,     0,     0,    66,     0,   112,
    76,    90,    78,    80,    81,    84,    83,    86,    85,    88,
    89,    91,    92,    93,    69,    70,    71,    72,    73,    74,
   107,     0,   104,   106,     0,    26,    62,    62,   101,     0,
   100,    63,    65,   108,    62,    64,     0,     0,     0
};

static const short yydefgoto[] = {   167,
     5,     6,     7,     8,    28,    10,    11,    12,    13,    23,
    34,    78,    79,    80,    53,    29,    30,    14,    24,    25,
    26,    76,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
   152,   153,   154,    72
};

static const short yypact[] = {    39,
-32768,-32768,-32768,-32768,    39,-32768,-32768,    23,    82,    39,
-32768,-32768,-32768,-32768,-32768,-32768,    39,-32768,-32768,   -27,
   -25,    77,   -19,    54,-32768,     5,-32768,   111,    76,    39,
-32768,    -3,    39,-32768,-32768,   111,-32768,    43,-32768,-32768,
    20,     7,   119,    29,-32768,   119,   119,   119,   119,-32768,
   119,-32768,-32768,     2,    10,-32768,-32768,    46,-32768,-32768,
-32768,    50,-32768,    68,    59,     1,    67,   132,    62,    79,
   104,-32768,-32768,-32768,-32768,    53,   111,    80,    87,-32768,
-32768,-32768,-32768,   119,    71,-32768,   119,-32768,-32768,-32768,
    96,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   119,   119,
   119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
   119,   119,   119,   119,   119,   119,   119,-32768,-32768,   119,
   119,-32768,-32768,-32768,-32768,    39,    99,-32768,   115,-32768,
    59,-32768,     1,    67,    67,   132,   132,   132,   132,    62,
    62,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   121,-32768,   122,   120,-32768,   112,   112,-32768,   119,
-32768,   162,-32768,-32768,   112,-32768,   168,   169,-32768
};

static const short yypgoto[] = {-32768,
-32768,   165,-32768,-32768,     0,-32768,   161,-32768,-32768,-32768,
-32768,-32768,-32768,    47,   164,-32768,-32768,     4,-32768,   138,
    98,-32768,-32768,-32768,   -54,-32768,   133,-32768,-32768,-32768,
   -41,   -85,-32768,    78,    81,    61,    33,    57,   -37,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		181


static const short yytable[] = {     9,
    96,    86,    93,   -21,     9,   -20,    74,    91,    88,    89,
    90,    33,     1,    92,    42,     2,    43,     3,    44,    45,
    31,    38,    46,    16,   101,   102,   145,   146,   147,   148,
   149,   150,    77,    73,   151,    75,    94,    84,    47,    48,
    49,     1,   127,    17,     2,   129,     3,   -62,    50,     4,
    98,    51,    82,   122,    35,    32,    17,    52,    95,    87,
    18,   132,   132,   132,   132,   132,   132,   132,   132,   132,
   132,   142,   143,   144,   164,   109,   110,   111,     4,   155,
    42,    83,    43,    97,    44,    45,    36,   -61,    46,   123,
    99,    37,   103,   104,   105,   112,   113,   114,   115,   116,
   117,   100,   162,   163,    47,    48,    49,   -19,   128,    17,
   166,   125,    32,   -62,    50,   106,    42,    51,    43,   126,
    44,    45,    20,    52,    46,    77,    21,   130,    45,    22,
   157,    46,   118,   119,   120,   136,   137,   138,   139,   121,
    47,    48,    49,   107,   108,    17,   158,    47,    48,    49,
    50,    39,   159,    51,   160,    40,   161,    50,    41,    52,
    51,   134,   135,   140,   141,   165,    52,   168,   169,    15,
    27,    19,   156,    81,   124,    85,   131,     0,     0,     0,
   133
};

static const short yycheck[] = {     0,
    55,    43,     1,    31,     5,    31,    10,    49,    46,    47,
    48,    31,     3,    51,     5,     6,     7,     8,     9,    10,
    17,    17,    13,     1,    24,    25,   112,   113,   114,   115,
   116,   117,    33,    30,   120,    39,    35,    31,    29,    30,
    31,     3,    84,    34,     6,    87,     8,    38,    39,    40,
     1,    42,    10,     1,     1,    36,    34,    48,    55,    31,
    38,    99,   100,   101,   102,   103,   104,   105,   106,   107,
   108,   109,   110,   111,   160,    14,    15,    16,    40,   121,
     5,    39,     7,    38,     9,    10,    33,    38,    13,    37,
    23,    38,    26,    27,    28,    17,    18,    19,    20,    21,
    22,    43,   157,   158,    29,    30,    31,    31,    38,    34,
   165,    32,    36,    38,    39,    49,     5,    42,     7,    33,
     9,    10,    41,    48,    13,   126,    45,    32,    10,    48,
    32,    13,    29,    30,    31,   103,   104,   105,   106,    36,
    29,    30,    31,    12,    13,    34,    32,    29,    30,    31,
    39,    41,    32,    42,    33,    45,    37,    39,    48,    48,
    42,   101,   102,   107,   108,     4,    48,     0,     0,     5,
    10,     8,   126,    36,    77,    43,    99,    -1,    -1,    -1,
   100
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 8:
#line 52 "parser.y"
{

                    /* type을 0(default)로 세팅 */    
                    look_tmp->type=0;
                    yyerrok;
                    reporterror(wrong_funcdef);    
                  ;
    break;}
case 16:
#line 75 "parser.y"
{type_int=1;;
    break;}
case 17:
#line 76 "parser.y"
{type_void=1;;
    break;}
case 18:
#line 77 "parser.y"
{type_float=1;;
    break;}
case 19:
#line 82 "parser.y"
{

                  /* type이 identifier about parse error또는 
                  not defined identifier/function로 설정된 경우 */
                  if(look_id->type==0||look_id->type==5){
                        
                        /* void인지 int인지 float인지에 따라 function type 설정*/
                        if(type_void==1){
                              look_id->type=4; /* function, return type=void */
                        }else if(type_int==1){
                              look_id->type=8; /* function, return type=int */
                        }else if(type_float==1){
                              look_id->type=9; /* function, return type=float */
                        }
                    
                        type_int=0;
                        type_void=0;
                        type_float=0;
                        look_tmp=look_id;
                  }
                  ;
    break;}
case 27:
#line 120 "parser.y"
{
                  if(type_int==1){ /* int로 설정된 경우 */
                        param_int=1; 
                        look_id->type=10;  /* integer scalar parameter */
                  }else if(type_float==1){ /* float으로 설정된 경우 */
                        param_float=1;
                        look_id->type=11; /* float scalar parameter */
                  }
                  type_int=0;
                  type_void=0;
                  type_float=0;
                  param_int=0;
                  param_float=0;

;
    break;}
case 29:
#line 138 "parser.y"
{
                        yyerrok;
                        reporterror(nobrace); /* no brace error */
                  ;
    break;}
case 34:
#line 149 "parser.y"
{
                        type_int=0;
                        type_void=0;
                        type_float=0;
                  ;
    break;}
case 35:
#line 154 "parser.y"
{
                        look_tmp->type=0; /* identifier about parse error*/
                        yyerrok;
                        type_int=0;
                        type_void=0;
                        type_float=0;
                        reporterror(nosemi); /* no semicolon error */
                  ;
    break;}
case 41:
#line 170 "parser.y"
{
                  if(look_id->type==0){

                        /* scalar : int인지 void인지 float인지에 따라*/
                        if(type_int==1){
                              look_id->type=1; /* integer scalar variable */
                        }
                        else if(type_void==1)
                              look_id->type=2; /* void scalar variable */
                        else if(type_float==1){
                              look_id->type=6; /* float scalar variable */
                        }     
                  }
                  look_tmp=look_id;

            ;
    break;}
case 42:
#line 187 "parser.y"
{
                  /* array : int인지 float인지에 따라*/
                  if(look_id->type==0){
                        if(type_int==1)look_id->type=3; /* array integer variable */
                        else if(type_float==1) look_id->type=7;  /* array float variable */            
                  }

                   look_tmp=look_id;

            ;
    break;}
case 43:
#line 197 "parser.y"
{
                  yyerrok;
                  reporterror(nobracket); /* no bracekt error */
            ;
    break;}
case 60:
#line 224 "parser.y"
{
                        yyerrok;
                        reporterror(nosemi); /* no semicolon error */
                  ;
    break;}
case 109:
#line 295 "parser.y"
{
                  if(look_id->type==0)
                        look_id->type=5; /* not defined identifier/function */

            ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 305 "parser.y"


