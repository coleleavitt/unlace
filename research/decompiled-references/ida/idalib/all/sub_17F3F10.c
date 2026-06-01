__int64 __fastcall sub_17F3F10(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4,
        char a5,
        unsigned __int8 a6,
        __m128i a7,
        double a8)
{
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _WORD *v15; // r15
  _DWORD *v16; // r14
  int v17; // r12d
  __int64 (*v18)(); // r13
  size_t v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rcx
  __int64 v24; // r12
  unsigned int v25; // r13d
  _WORD *v26; // r15
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  _BYTE *v29; // r12
  unsigned __int8 v30; // al
  __int64 v31; // rax
  bool v32; // r15
  _WORD *v33; // rdi
  __int64 *v34; // r12
  __int64 v35; // rdx
  __int64 *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *v39; // r14
  __int64 v40; // r13
  __int64 *v41; // rax
  __int64 **v42; // rax
  unsigned __int64 *v43; // rax
  _WORD *v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // r12
  unsigned __int64 *v50; // rax
  _WORD *v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rax
  __int64 i; // r13
  _QWORD *v57; // rax
  _WORD *v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _WORD *v61; // rdx
  unsigned __int64 v62; // rax
  unsigned __int64 *v63; // rax
  _WORD *v64; // rcx
  __int64 v65; // r9
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rax
  __int64 v68; // r8
  __int64 **v69; // rax
  __int64 *v70; // rdx
  unsigned __int64 v71; // rax
  __int64 *v72; // rcx
  __int64 v73; // r9
  char v74; // al
  void *v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // r12
  __int64 v79; // r13
  unsigned __int64 v80; // r14
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  unsigned __int64 *v85; // rax
  __int64 *v86; // rax
  __int64 v87; // rcx
  unsigned __int64 *v88; // rax
  unsigned __int64 *v89; // rax
  char v90; // r12
  unsigned __int64 *v91; // rax
  unsigned __int64 *v92; // rax
  int v93; // eax
  __int64 v94; // rax
  _QWORD *v95; // rdi
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // r9
  char v99; // al
  _QWORD *v100; // rax
  __int64 v101; // rax
  unsigned int v102; // eax
  __int64 *v103; // rax
  __int64 *v104; // rax
  __int64 *v105; // rax
  _WORD **v106; // rax
  _WORD **v107; // rax
  _WORD **v108; // rax
  _WORD **v109; // rax
  __int64 *v110; // rax
  __int64 v111; // rcx
  _WORD **v112; // rax
  unsigned __int64 v113; // r12
  void *v114; // rdi
  _QWORD *v115; // rax
  unsigned __int64 v116; // r12
  __int64 v117; // rdx
  __int64 v118; // rcx
  unsigned __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rsi
  __int64 v125; // rdi
  unsigned __int64 v126; // rsi
  unsigned __int64 v127; // rdx
  unsigned __int64 *v128; // rax
  unsigned __int64 *v129; // rax
  __int64 v130; // r12
  _QWORD *v131; // rdi
  unsigned __int64 v132; // rax
  __int64 v133; // rdi
  __int64 v134; // r12
  __int64 v135; // rdi
  unsigned __int64 v136; // r13
  __int64 v137; // r12
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  unsigned int *v142; // r12
  __int64 v143; // rax
  __int64 v144; // r9
  unsigned __int64 v145; // r8
  __int64 v146; // rax
  __int64 v147; // r9
  unsigned __int64 v148; // r8
  char v149; // al
  __int64 v150; // rax
  __int64 *v151; // rax
  __int64 v152; // r12
  int v153; // r14d
  signed __int64 *v154; // rax
  signed __int64 v155; // rdi
  unsigned __int64 v156; // rsi
  signed __int64 v157; // rax
  size_t v158; // rax
  unsigned __int64 *v159; // rax
  unsigned __int64 v160; // rax
  __int64 v161; // r12
  _QWORD *v162; // r14
  __int64 v163; // r13
  _QWORD *v164; // r15
  unsigned __int64 v165; // rdi
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rax
  __int64 *v171; // rax
  __int64 v172; // r13
  __int64 v173; // rax
  __int64 v174; // r12
  __int64 v175; // r15
  __int64 v176; // rax
  unsigned __int64 v177; // rax
  unsigned int v178; // eax
  char *v179; // rsi
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 *v182; // rax
  __int64 *v183; // r12
  __int64 v184; // rax
  char *v185; // rdx
  __int64 v186; // rax
  __int16 v187; // cx
  __int16 v188; // cx
  __int64 v189; // rax
  __int16 v190; // cx
  __int16 v191; // cx
  __int16 v192; // di
  __int16 v193; // di
  unsigned __int64 *v194; // rax
  unsigned __int64 *v195; // rax
  unsigned __int64 v196; // rdi
  unsigned __int64 *v197; // rax
  unsigned __int64 *v198; // rax
  unsigned __int64 v199; // rdi
  unsigned __int64 *v200; // rax
  unsigned __int64 *v201; // rax
  unsigned __int64 v202; // rdi
  unsigned __int64 *v203; // rax
  unsigned __int64 *v204; // rax
  _QWORD *v205; // r12
  __int64 v206; // rax
  unsigned __int64 *v207; // rax
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 *v210; // r12
  char *v211; // rax
  __int64 v212; // rcx
  char *v213; // rdx
  __int64 v214; // rcx
  char *v215; // rcx
  unsigned int v216; // r12d
  __int64 v217; // r13
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // r8
  __int64 v221; // r9
  __int64 v222; // rax
  __int64 v223; // rax
  __int64 v224; // rax
  __int64 *v225; // rax
  __int64 v226; // r13
  __int64 *v227; // r12
  char v228; // r14
  __int64 m; // r13
  __int64 v230; // rdi
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 v235; // rdx
  unsigned __int64 v236; // rcx
  __int64 v237; // r8
  __int64 v238; // r9
  __int64 v239; // rax
  __int64 v240; // rax
  __int64 v241; // rax
  __int64 v242; // rdx
  __int64 v243; // r12
  unsigned __int8 v244; // al
  unsigned __int64 v245; // rax
  __int64 *v246; // rax
  __int64 v247; // rax
  _QWORD *v248; // rax
  _QWORD *v249; // rdx
  unsigned __int64 v250; // rax
  _QWORD *v251; // rcx
  __int64 v252; // rcx
  __int64 *v253; // rax
  char v254; // al
  unsigned __int64 *v255; // rax
  __int64 *v256; // rax
  unsigned __int64 v257; // rax
  char *k; // rax
  __int16 v259; // cx
  char *j; // rax
  unsigned __int64 v261; // rdi
  unsigned int v262; // eax
  _QWORD *v263; // rax
  unsigned __int64 *v264; // rdx
  __int64 *v265; // rax
  __int64 v266; // rcx
  unsigned __int64 *v267; // rax
  unsigned __int64 *v268; // rax
  unsigned __int64 *v269; // rax
  unsigned __int64 *v270; // rax
  __int64 v271; // rax
  __int64 *v272; // rax
  __int64 v273; // rax
  int v274; // eax
  __int64 v275; // r9
  unsigned __int64 v276; // r8
  int v277; // eax
  __int64 v278; // rax
  unsigned __int64 v279; // rdi
  unsigned __int64 v280; // rdi
  unsigned __int64 v281; // rdi
  unsigned __int64 v282; // rdx
  __int64 v283; // rax
  __int16 v284; // ax
  __int16 v285; // ax
  __int16 v286; // ax
  unsigned __int8 v287; // [rsp+0h] [rbp-1D8h]
  _QWORD *v288; // [rsp+0h] [rbp-1D8h]
  __int64 v289; // [rsp+8h] [rbp-1D0h]
  __int64 v290; // [rsp+8h] [rbp-1D0h]
  __int64 v291; // [rsp+8h] [rbp-1D0h]
  __int64 v292; // [rsp+8h] [rbp-1D0h]
  char v293; // [rsp+8h] [rbp-1D0h]
  __int64 v294; // [rsp+10h] [rbp-1C8h]
  unsigned __int64 v295; // [rsp+10h] [rbp-1C8h]
  unsigned __int64 v296; // [rsp+10h] [rbp-1C8h]
  int v298; // [rsp+1Ch] [rbp-1BCh]
  __int64 v300; // [rsp+28h] [rbp-1B0h]
  char v301; // [rsp+33h] [rbp-1A5h]
  _WORD *v303; // [rsp+38h] [rbp-1A0h] BYREF
  unsigned __int8 v304; // [rsp+47h] [rbp-191h] BYREF
  __int64 v305; // [rsp+48h] [rbp-190h] BYREF
  _DWORD v306[6]; // [rsp+50h] [rbp-188h] BYREF
  void *v307; // [rsp+68h] [rbp-170h]
  __int64 v308; // [rsp+78h] [rbp-160h] BYREF
  __m128 v309[8]; // [rsp+90h] [rbp-148h] BYREF
  __m128i v310[7]; // [rsp+110h] [rbp-C8h] BYREF
  char v311; // [rsp+188h] [rbp-50h]

  v10 = *(_QWORD *)(a1 + 232);
  v303 = a3;
  v287 = 0;
  if ( (*(_BYTE *)(v10 + 1) & 8) == 0 )
    v287 = *(_BYTE *)(a4 + 166) ^ 1;
  v11 = (__int64)v303;
  v304 = 0;
  v305 = 0;
  sub_1669850(a1, (__int64)v303);
  if ( !*(_DWORD *)(a4 + 16) )
    goto LABEL_4;
  v11 = *(_QWORD *)(a1 + 248);
  v301 = sub_179E3F0(a4, v11, (__int64)v303, v12, v13, v14);
  if ( !v301 )
  {
    v115 = *(_QWORD **)(a4 + 8);
    v26 = v303;
    v116 = *v115 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v116 + 8) & 6) != 0 )
    {
      v11 = *v115 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !(unsigned __int8)sub_1A427C0(a1, v11, 0) )
      {
        v244 = sub_B81B70((__int64)v303);
        if ( !v244 )
          goto LABEL_587;
        if ( v244 <= 3u )
          goto LABEL_5;
        if ( v244 > 6u )
LABEL_587:
          BUG();
        if ( sub_B72C70((__int64)v303) )
        {
LABEL_4:
          v301 = 0;
LABEL_5:
          v15 = v303;
          goto LABEL_143;
        }
      }
      v26 = v303;
    }
    v304 = 1;
    v305 = v116;
    goto LABEL_6;
  }
  v11 = a2;
  v102 = sub_1BDCB60(a1, a2, v303, a4, &v305, 0);
  if ( v102 )
  {
    if ( v102 <= 2 )
    {
      v304 = 1;
      v26 = v303;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v304 = 0;
  v15 = v303;
LABEL_143:
  v94 = *((_QWORD *)v15 + 2);
  v95 = (_QWORD *)(v94 & 0xFFFFFFFFFFFFFFF8LL);
  v96 = (v94 >> 2) & 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
  {
    if ( v96 )
      v95 = (_QWORD *)*v95;
    if ( (*(_BYTE *)(sub_B8EAA0((__int64)v95) + 8) & 0x7F) != 0 )
    {
      v11 = (__int64)v15;
      if ( !(unsigned __int8)sub_179DF90(a1, (__int64)v15) )
        goto LABEL_331;
      v11 = (__int64)v15;
      v99 = sub_17B2B00(a1, (__int64)v15, 0, a4, v21, v22);
    }
    else
    {
      v11 = (__int64)v15;
      v99 = sub_17B2B00(a1, (__int64)v15, 1, a4, v97, v98);
    }
    if ( !v99 )
    {
LABEL_331:
      v26 = v303;
      goto LABEL_6;
    }
  }
  else
  {
    if ( v96 )
      v95 = (_QWORD *)*v95;
    if ( (*(_BYTE *)(sub_B8EAA0((__int64)v95) + 8) & 0x7F) != 0 )
      goto LABEL_331;
    v11 = *((_QWORD *)v15 + 5);
    v113 = sub_17A3FB0(a1, v11, v20, v23, v21, v22);
    if ( !v113 )
      goto LABEL_331;
    v114 = *(void **)(a4 + 88);
    *(_DWORD *)a4 = 0;
    *(_DWORD *)(a4 + 16) = 0;
    if ( v114 )
      sub_1A39780(v114);
    a7 = 0;
    *(_BYTE *)(a4 + 166) = 0;
    *(_OWORD *)(a4 + 88) = 0;
    v310[0].m128i_i64[0] = v113 | (*(_BYTE *)(v113 + 29) >> 5) & 3;
    v11 = v310[0].m128i_i64[0];
    sub_1743080(a4 + 8, v310[0].m128i_i64[0]);
    *(_DWORD *)a4 = 2;
  }
  if ( !*(_DWORD *)(a4 + 16) )
    goto LABEL_331;
  v100 = *(_QWORD **)(a4 + 8);
  v304 = 1;
  v101 = sub_16C47B0(*v100 & 0xFFFFFFFFFFFFFFF8LL);
  v305 = v101;
  if ( (*(_BYTE *)(v101 + 29) & 1) != 0 && sub_179ACE0(v101, v11, v20, v23, v21, v22) )
  {
LABEL_449:
    v11 = (__int64)v303;
    v254 = sub_1BDCB50(a1, v303, v305, 0, 1);
    v287 = v254;
    if ( v254 )
    {
      v304 = 0;
      v26 = v303;
      v305 = 0;
      v301 = v254;
      goto LABEL_152;
    }
    goto LABEL_331;
  }
  v26 = v303;
  if ( (*((_BYTE *)v303 + 29) & 1) != 0 )
  {
    v287 = sub_179ACE0((__int64)v303, v11, v20, v23, v21, v22);
    if ( !v287 )
      goto LABEL_331;
    goto LABEL_449;
  }
LABEL_152:
  v287 = 0;
LABEL_6:
  v16 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
  v17 = v16[62];
  if ( (unsigned int)(v17 - 3) <= 2 )
  {
    v18 = *(__int64 (**)())(*(_QWORD *)v16 + 584LL);
    v19 = j__strlen("fmv");
    v23 = (unsigned __int64)sub_A55EE0;
    if ( v18 == sub_A55EE0 )
      goto LABEL_8;
    v11 = (__int64)"fmv";
    if ( !((unsigned __int8 (__fastcall *)(_DWORD *, char *, size_t))v18)(v16, "fmv", v19) )
      goto LABEL_137;
  }
  if ( (*((_BYTE *)v26 + 29) & 1) == 0 )
  {
    v49 = 0;
    goto LABEL_89;
  }
  v43 = sub_B8C3D0((__int64)v26, v11, v20, v23, v21, v22);
  v47 = *v43;
  v48 = *v43 + 8LL * *((unsigned int *)v43 + 2);
  if ( v47 < v48 )
  {
    v44 = (_WORD *)v47;
    while ( 1 )
    {
      v11 = *(_QWORD *)v44;
      if ( *(_WORD *)(*(_QWORD *)v44 + 36LL) == 376 )
        break;
      v44 += 4;
      if ( (_WORD *)v48 == v44 )
        goto LABEL_63;
    }
    if ( (_WORD *)v48 != v44 )
      goto LABEL_158;
LABEL_63:
    v49 = 0;
    goto LABEL_64;
  }
  if ( v47 == v48 )
    goto LABEL_63;
  v44 = *(_WORD **)v48;
  if ( *(_WORD *)(*(_QWORD *)v48 + 36LL) != 376 )
  {
    v109 = (_WORD **)(v48 + 8);
    do
    {
      v44 = v109;
      if ( (_WORD **)v47 == v109 )
        goto LABEL_63;
      v44 = *v109++;
    }
    while ( v44[18] != 376 );
  }
LABEL_158:
  v49 = *(_QWORD *)v47;
  if ( *(_WORD *)(*(_QWORD *)v47 + 36LL) != 376 )
  {
    v103 = (__int64 *)(v47 + 8);
    do
      v49 = *v103++;
    while ( *(_WORD *)(v49 + 36) != 376 );
  }
LABEL_64:
  if ( (*((_BYTE *)v26 + 29) & 1) == 0 )
  {
LABEL_89:
    i = 0;
    goto LABEL_90;
  }
  v50 = sub_B8C3D0((__int64)v26, v11, v47, (__int64)v44, v45, v46);
  v54 = *v50;
  v55 = *v50 + 8LL * *((unsigned int *)v50 + 2);
  if ( v54 < v55 )
  {
    v51 = (_WORD *)v54;
    while ( 1 )
    {
      v11 = *(_QWORD *)v51;
      if ( *(_WORD *)(*(_QWORD *)v51 + 36LL) == 378 )
        break;
      v51 += 4;
      if ( (_WORD *)v55 == v51 )
        goto LABEL_69;
    }
    if ( (_WORD *)v55 != v51 )
      goto LABEL_178;
LABEL_69:
    i = 0;
    goto LABEL_70;
  }
  if ( v54 == v55 )
    goto LABEL_69;
  v51 = *(_WORD **)v55;
  if ( *(_WORD *)(*(_QWORD *)v55 + 36LL) != 378 )
  {
    v108 = (_WORD **)(v55 + 8);
    do
    {
      v51 = v108;
      if ( (_WORD **)v54 == v108 )
        goto LABEL_69;
      v51 = *v108++;
    }
    while ( v51[18] != 378 );
  }
LABEL_178:
  for ( i = *(_QWORD *)v54; *(_WORD *)(*(_QWORD *)v54 + 36LL) != 378; i = *(_QWORD *)v54 )
    v54 += 8LL;
LABEL_70:
  if ( (*((_BYTE *)v26 + 29) & 1) == 0 )
  {
LABEL_90:
    v300 = 0;
    goto LABEL_91;
  }
  v57 = sub_B8C3D0((__int64)v26, v11, v54, (__int64)v51, v52, v53);
  v61 = (_WORD *)*v57;
  v62 = *v57 + 8LL * *((unsigned int *)v57 + 2);
  if ( (unsigned __int64)v61 < v62 )
  {
    v58 = v61;
    while ( 1 )
    {
      v11 = *(_QWORD *)v58;
      if ( *(_WORD *)(*(_QWORD *)v58 + 36LL) == 157 )
        break;
      v58 += 4;
      if ( (_WORD *)v62 == v58 )
        goto LABEL_75;
    }
    if ( (_WORD *)v62 != v58 )
      goto LABEL_173;
LABEL_75:
    v300 = 0;
    goto LABEL_76;
  }
  if ( v61 == (_WORD *)v62 )
    goto LABEL_75;
  v58 = *(_WORD **)v62;
  if ( *(_WORD *)(*(_QWORD *)v62 + 36LL) != 157 )
  {
    v107 = (_WORD **)(v62 + 8);
    do
    {
      v58 = v107;
      if ( v61 == (_WORD *)v107 )
        goto LABEL_75;
      v58 = *v107++;
    }
    while ( v58[18] != 157 );
  }
LABEL_173:
  v300 = *(_QWORD *)v61;
  if ( *(_WORD *)(*(_QWORD *)v61 + 36LL) != 157 )
  {
    v106 = (_WORD **)(v61 + 4);
    do
      v61 = *v106++;
    while ( v61[18] != 157 );
    v300 = (__int64)v61;
  }
LABEL_76:
  if ( (*((_BYTE *)v26 + 29) & 1) == 0 )
  {
LABEL_91:
    v68 = 0;
    v73 = 0;
    goto LABEL_92;
  }
  v63 = sub_B8C3D0((__int64)v26, v11, (__int64)v61, (__int64)v58, v59, v60);
  v66 = *v63;
  v67 = *v63 + 8LL * *((unsigned int *)v63 + 2);
  if ( v66 < v67 )
  {
    v64 = (_WORD *)v66;
    while ( 1 )
    {
      v11 = *(_QWORD *)v64;
      if ( *(_WORD *)(*(_QWORD *)v64 + 36LL) == 158 )
        break;
      v64 += 4;
      if ( (_WORD *)v67 == v64 )
        goto LABEL_81;
    }
    if ( (_WORD *)v67 != v64 )
      goto LABEL_168;
LABEL_81:
    v68 = 0;
    goto LABEL_82;
  }
  if ( v66 == v67 )
    goto LABEL_81;
  v64 = *(_WORD **)v67;
  if ( *(_WORD *)(*(_QWORD *)v67 + 36LL) != 158 )
  {
    v112 = (_WORD **)(v67 + 8);
    do
    {
      v64 = v112;
      if ( (_WORD **)v66 == v112 )
        goto LABEL_81;
      v64 = *v112++;
    }
    while ( v64[18] != 158 );
  }
LABEL_168:
  v68 = *(_QWORD *)v66;
  if ( *(_WORD *)(*(_QWORD *)v66 + 36LL) != 158 )
  {
    v105 = (__int64 *)(v66 + 8);
    do
      v68 = *v105++;
    while ( *(_WORD *)(v68 + 36) != 158 );
  }
LABEL_82:
  if ( (*((_BYTE *)v26 + 29) & 1) == 0 )
    goto LABEL_87;
  v289 = v68;
  v69 = (__int64 **)sub_B8C3D0((__int64)v26, v11, v66, (__int64)v64, v68, v65);
  v68 = v289;
  v70 = *v69;
  v71 = (unsigned __int64)&(*v69)[*((unsigned int *)v69 + 2)];
  if ( (unsigned __int64)v70 < v71 )
  {
    v72 = v70;
    while ( 1 )
    {
      v11 = *v72;
      if ( *(_WORD *)(*v72 + 36) == 377 )
        break;
      if ( (__int64 *)v71 == ++v72 )
        goto LABEL_87;
    }
    if ( (__int64 *)v71 != v72 )
      goto LABEL_163;
LABEL_87:
    v73 = 0;
    goto LABEL_92;
  }
  if ( v70 == (__int64 *)v71 )
    goto LABEL_87;
  if ( *(_WORD *)(*(_QWORD *)v71 + 36LL) != 377 )
  {
    v110 = (__int64 *)(v71 + 8);
    while ( v70 != v110 )
    {
      v111 = *v110++;
      if ( *(_WORD *)(v111 + 36) == 377 )
        goto LABEL_163;
    }
    goto LABEL_87;
  }
LABEL_163:
  v73 = *v70;
  if ( *(_WORD *)(*v70 + 36) != 377 )
  {
    v104 = v70 + 1;
    do
      v73 = *v104++;
    while ( *(_WORD *)(v73 + 36) != 377 );
  }
LABEL_92:
  v294 = v68;
  v290 = v73;
  v298 = sub_B75130((__int64)v26);
  v74 = sub_B81C90((__int64)v26);
  v22 = v290;
  v21 = v294;
  if ( v74 )
  {
    if ( v298 )
    {
      if ( v298 == 1 )
      {
        if ( *(_DWORD *)(v49 + 40) == 7 )
        {
          v176 = *(_QWORD *)(v49 + 48);
          if ( *(_DWORD *)v176 == 1634100580 && *(_WORD *)(v176 + 4) == 27765 && *(_BYTE *)(v176 + 6) == 116 )
            goto LABEL_97;
        }
      }
      else if ( v298 != 5 || !sub_17A1CC0(i) )
      {
LABEL_97:
        sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), *((_DWORD *)v26 + 6), 0x108Au, 0);
LABEL_98:
        sub_15F7200(v310);
LABEL_99:
        sub_B88650((__int64)v26, 1);
        return v304;
      }
    }
    goto LABEL_137;
  }
  if ( v49 )
  {
    v93 = v16[62];
    v20 = (unsigned int)(v93 - 3);
    if ( (unsigned int)v20 <= 2 || (unsigned int)(v93 - 27) <= 1 )
      goto LABEL_137;
  }
  v130 = v305;
  if ( v305 && sub_B8BF30(v305) )
  {
    v131 = (_QWORD *)(*(_QWORD *)(v130 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v130 + 16) & 4) != 0 )
      v131 = (_QWORD *)*v131;
    v132 = sub_B8EAA0((__int64)v131);
    v133 = *((_QWORD *)v26 + 2);
    v134 = v132;
    v135 = (v133 & 4) != 0 ? *(_QWORD *)(v133 & 0xFFFFFFFFFFFFFFF8LL) : v133 & 0xFFFFFFFFFFFFFFF8LL;
    v136 = sub_B8EAA0(v135);
    if ( v136 )
    {
      v137 = sub_B91570(v134, v11, v20, v23, v21, v22);
      if ( v137 == sub_B91570(v136, v11, v138, v139, v140, v141) )
      {
        v142 = (unsigned int *)sub_B8BF30(v305);
        v143 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v142 + 32LL))(v142);
        v22 = v290;
        v21 = v294;
        if ( *(char *)(v143 + 84) < 0 )
        {
          v273 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v142 + 32LL))(v142);
          v144 = v290;
          v145 = v294;
          if ( *(char *)(v273 + 84) < 0 && !v298 )
          {
            v274 = sub_B75130((__int64)v142);
            v275 = v290;
            v276 = v294;
            if ( v274 != 4 )
            {
              v277 = sub_B75130((__int64)v142);
              v275 = v290;
              v276 = v294;
              if ( v277 != 5 )
              {
                sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), *((_DWORD *)v26 + 6), 0x108Cu, 0);
                v309[0].m128_i8[0] = (unsigned int)sub_B75130((__int64)v142) != 1;
                sub_1588420((__int64)v310, (unsigned __int8 *)v309);
                goto LABEL_98;
              }
            }
            v296 = v276;
            v292 = v275;
            (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v142 + 32LL))(v142);
            v147 = v292;
            v148 = v296;
            goto LABEL_253;
          }
LABEL_249:
          v295 = v145;
          v291 = v144;
          v146 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v142 + 32LL))(v142);
          v147 = v291;
          v148 = v295;
          if ( *(char *)(v146 + 84) >= 0 )
          {
            if ( v298 != 4 )
            {
              if ( v298 != 5 && v298 != 1 )
                goto LABEL_253;
              v11 = (__int64)v142;
              v149 = sub_17F1DE0(a1, (__int64)v142, v26, &v304, &v305, a4);
LABEL_254:
              if ( v149 )
                return v304;
              goto LABEL_137;
            }
            if ( sub_B8C400((__int64)v142, 0) )
            {
              sub_B88650((__int64)v26, 1);
              v11 = a1 + 8;
              sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), *((_DWORD *)v26 + 6), 0x1084u, 0);
              v293 = v311;
              sub_15F7200(v310);
              v149 = v293;
              goto LABEL_254;
            }
            v278 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v142 + 32LL))(v142);
            *(_BYTE *)(v278 + 84) |= 0x80u;
            v148 = v295;
            v147 = v291;
          }
LABEL_253:
          v11 = (__int64)v142;
          v149 = sub_17F2A80((__int64 *)a1, v142, (__int64)v26, v300, v148, v147, &v304, &v305, a4);
          goto LABEL_254;
        }
        if ( v298 )
        {
          (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v142 + 32LL))(v142);
          v144 = v290;
          v145 = v294;
          goto LABEL_249;
        }
LABEL_137:
        v26 = v303;
        v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL);
        goto LABEL_8;
      }
    }
  }
  if ( !v298 )
    goto LABEL_137;
  v216 = sub_B75130((__int64)v26);
  v217 = sub_A6A7F0((__int64)v26);
  v222 = sub_17A75A0((__int64)v26, v11, v218, v219, v220, v221);
  if ( v217 )
  {
    if ( *(_DWORD *)(v217 + 40) != 7 )
      goto LABEL_137;
    v223 = *(_QWORD *)(v217 + 48);
    if ( *(_DWORD *)v223 != 1634100580 || *(_WORD *)(v223 + 4) != 27765 || *(_BYTE *)(v223 + 6) != 116 )
      goto LABEL_137;
    goto LABEL_395;
  }
  if ( v222 )
  {
LABEL_395:
    if ( (unsigned __int8)sub_17C1140(a1, (__int64)v26, v20, v23, v21, v22) )
      goto LABEL_99;
  }
  v11 = 0;
  if ( (unsigned __int8)sub_17BD4A0(a1, 0, (__int64)v26, 1, v216, v22) )
    goto LABEL_99;
  v224 = (*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v26 + 32LL))(v26);
  *(_BYTE *)(v224 + 84) |= 0x80u;
  v26 = v303;
  v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL);
LABEL_8:
  if ( (unsigned int)(v17 - 23) <= 1 )
  {
    v24 = *(_QWORD *)(a1 + 768);
    v25 = *((_DWORD *)v26 + 6);
    v11 = sub_C1D490((__int64)v26, v11, v20, v23);
    if ( (unsigned __int8)sub_1C0D9F0(v24, v11, v25) )
    {
      v11 = 1;
      sub_B88650((__int64)v303, 1);
    }
    v26 = v303;
  }
  if ( (*((_BYTE *)v26 + 29) & 1) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) == 0 )
      goto LABEL_14;
    goto LABEL_117;
  }
  v88 = sub_B8C3D0((__int64)v26, v11, v20, v23, v21, v22);
  v20 = *v88;
  v23 = *v88 + 8LL * *((unsigned int *)v88 + 2);
  if ( *v88 < v23 )
  {
    v128 = (unsigned __int64 *)*v88;
    while ( 1 )
    {
      v20 = *v128;
      if ( *(_WORD *)(*v128 + 36) == 338 )
        break;
      if ( (unsigned __int64 *)v23 == ++v128 )
        goto LABEL_126;
    }
    if ( (unsigned __int64 *)v23 == v128 )
      goto LABEL_126;
  }
  else
  {
    if ( v20 == v23 )
    {
LABEL_126:
      if ( (*((_BYTE *)v26 + 29) & 1) == 0 )
        goto LABEL_133;
      v90 = 0;
      goto LABEL_128;
    }
    if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 338 )
    {
      v89 = (unsigned __int64 *)(v23 + 8);
      do
      {
        v23 = (unsigned __int64)v89;
        if ( (unsigned __int64 *)v20 == v89 )
          goto LABEL_126;
        v23 = *v89++;
      }
      while ( *(_WORD *)(v23 + 36) != 338 );
    }
  }
  if ( (*((_BYTE *)v26 + 29) & 1) == 0 )
  {
    v309[0].m128_i8[0] = 0;
    goto LABEL_312;
  }
  v90 = 1;
LABEL_128:
  v91 = sub_B8C3D0((__int64)v26, v11, v20, v23, v21, v22);
  v20 = *v91;
  v23 = *v91 + 8LL * *((unsigned int *)v91 + 2);
  if ( *v91 >= v23 )
  {
    if ( v20 != v23 )
    {
      if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 181 )
        goto LABEL_374;
      v207 = (unsigned __int64 *)(v23 + 8);
      while ( 1 )
      {
        v23 = (unsigned __int64)v207;
        if ( (unsigned __int64 *)v20 == v207 )
          break;
        v23 = *v207++;
        if ( *(_WORD *)(v23 + 36) == 181 )
          goto LABEL_374;
      }
    }
  }
  else
  {
    v92 = (unsigned __int64 *)*v91;
    while ( 1 )
    {
      v20 = *v92;
      if ( *(_WORD *)(*v92 + 36) == 181 )
        break;
      if ( (unsigned __int64 *)v23 == ++v92 )
        goto LABEL_132;
    }
    if ( (unsigned __int64 *)v23 != v92 )
    {
LABEL_374:
      v309[0].m128_i8[0] = 1;
      if ( !v90 )
        goto LABEL_312;
      v11 = a1 + 8;
      sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), *((_DWORD *)v26 + 6), 0x1A32u, 0);
      sub_15F7200(v310);
      if ( (*((_BYTE *)v26 + 29) & 1) == 0 )
        goto LABEL_312;
      v210 = sub_B8C3D0((__int64)v26, v11, v20, v23, v208, v209);
      v211 = (char *)*v210;
      v212 = 8LL * *((unsigned int *)v210 + 2);
      v213 = (char *)(*v210 + v212);
      v214 = v212 >> 5;
      if ( v214 )
      {
        if ( *(_WORD *)(*(_QWORD *)v211 + 36LL) == 338 )
        {
          v179 = (char *)*v210;
          goto LABEL_467;
        }
        if ( *(_WORD *)(*((_QWORD *)v211 + 1) + 36LL) == 338 )
        {
          v179 = v211 + 8;
          goto LABEL_467;
        }
        if ( *(_WORD *)(*((_QWORD *)v211 + 2) + 36LL) == 338 )
        {
          v179 = v211 + 16;
          goto LABEL_467;
        }
        v215 = &v211[32 * v214];
        if ( *(_WORD *)(*((_QWORD *)v211 + 3) + 36LL) == 338 )
        {
          v179 = v211 + 24;
LABEL_467:
          if ( v213 != v179 )
          {
            for ( j = v179 + 8; v213 != j; j += 8 )
            {
              if ( *(_WORD *)(*(_QWORD *)j + 36LL) != 338 )
              {
                *(_QWORD *)v179 = *(_QWORD *)j;
                v179 += 8;
              }
            }
          }
          goto LABEL_310;
        }
        while ( 1 )
        {
          v179 = v211 + 32;
          if ( v215 == v211 + 32 )
            break;
          if ( *(_WORD *)(*((_QWORD *)v211 + 4) + 36LL) == 338 )
            goto LABEL_467;
          if ( *(_WORD *)(*((_QWORD *)v211 + 5) + 36LL) == 338 )
          {
            v179 = v211 + 40;
            goto LABEL_467;
          }
          if ( *(_WORD *)(*((_QWORD *)v211 + 6) + 36LL) == 338 )
          {
            v179 = v211 + 48;
            goto LABEL_467;
          }
          if ( *(_WORD *)(*((_QWORD *)v211 + 7) + 36LL) == 338 )
          {
            v179 = v211 + 56;
            goto LABEL_467;
          }
          v211 += 32;
        }
      }
      else
      {
        v179 = (char *)*v210;
      }
      v180 = (v213 - v179) >> 3;
      if ( v180 != 2 )
      {
        if ( v180 != 3 )
        {
          if ( v180 != 1 )
            goto LABEL_309;
          goto LABEL_537;
        }
        if ( *(_WORD *)(*(_QWORD *)v179 + 36LL) == 338 )
          goto LABEL_467;
        v179 += 8;
      }
      if ( *(_WORD *)(*(_QWORD *)v179 + 36LL) == 338 )
        goto LABEL_467;
      v179 += 8;
LABEL_537:
      if ( *(_WORD *)(*(_QWORD *)v179 + 36LL) == 338 )
        goto LABEL_467;
LABEL_309:
      v179 = v213;
LABEL_310:
      sub_17A9430(v210, v179, v213);
      v11 = *((unsigned int *)v210 + 2);
      if ( !(_DWORD)v11 )
        *((_BYTE *)v26 + 29) &= ~1u;
      goto LABEL_312;
    }
  }
LABEL_132:
  v309[0].m128_i8[0] = 0;
  if ( !v90 )
    goto LABEL_133;
LABEL_312:
  v181 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_C1D490((__int64)v26, v11, v20, v23) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                   & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v181 + 16) != 13 )
    goto LABEL_133;
  if ( ((*(_WORD *)(v181 + 18) >> 3) & 0x1FF) != 0x1B3 )
    goto LABEL_133;
  sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), *((_DWORD *)v26 + 6), 0x1C8Fu, 0);
  v11 = (__int64)v309;
  sub_15890D0((__int64)v310, (unsigned __int8 *)v309);
  sub_15F7200(v310);
  if ( (*((_BYTE *)v26 + 29) & 1) == 0 )
    goto LABEL_133;
  v182 = sub_B8C3D0((__int64)v26, (__int64)v309, v20, v23, v21, v22);
  v11 = *v182;
  v183 = v182;
  v184 = 8LL * *((unsigned int *)v182 + 2);
  v185 = (char *)(v11 + v184);
  v186 = v184 >> 5;
  if ( v186 )
  {
    v187 = *(_WORD *)(*(_QWORD *)v11 + 36LL);
    if ( v187 != 338 && v187 != 181 )
    {
      v188 = *(_WORD *)(*(_QWORD *)(v11 + 8) + 36LL);
      if ( v188 == 181 || (v189 = v11 + 32 * v186, v188 == 338) )
      {
        v11 += 8;
      }
      else
      {
        while ( 1 )
        {
          v190 = *(_WORD *)(*(_QWORD *)(v11 + 16) + 36LL);
          if ( v190 == 338 || v190 == 181 )
          {
            v11 += 16;
            goto LABEL_459;
          }
          v191 = *(_WORD *)(*(_QWORD *)(v11 + 24) + 36LL);
          if ( v191 == 181 || v191 == 338 )
          {
            v11 += 24;
            goto LABEL_459;
          }
          if ( v189 == v11 + 32 )
          {
            v11 = v189;
            goto LABEL_566;
          }
          v192 = *(_WORD *)(*(_QWORD *)(v11 + 32) + 36LL);
          if ( v192 == 338 || v192 == 181 )
          {
            v11 += 32;
            goto LABEL_459;
          }
          v193 = *(_WORD *)(*(_QWORD *)(v11 + 40) + 36LL);
          if ( v193 == 181 || v193 == 338 )
            break;
          v11 += 32;
        }
        v11 += 40;
      }
    }
    goto LABEL_459;
  }
LABEL_566:
  v283 = (__int64)&v185[-v11] >> 3;
  switch ( v283 )
  {
    case 2LL:
LABEL_576:
      v285 = *(_WORD *)(*(_QWORD *)v11 + 36LL);
      if ( v285 == 181 || v285 == 338 )
        goto LABEL_459;
      v11 += 8;
      goto LABEL_579;
    case 3LL:
      v284 = *(_WORD *)(*(_QWORD *)v11 + 36LL);
      if ( v284 == 181 || v284 == 338 )
        goto LABEL_459;
      v11 += 8;
      goto LABEL_576;
    case 1LL:
LABEL_579:
      v286 = *(_WORD *)(*(_QWORD *)v11 + 36LL);
      if ( v286 != 338 && v286 != 181 )
        break;
LABEL_459:
      if ( v185 != (char *)v11 )
      {
        for ( k = (char *)(v11 + 8); v185 != k; k += 8 )
        {
          v259 = *(_WORD *)(*(_QWORD *)k + 36LL);
          if ( v259 != 181 && v259 != 338 )
          {
            *(_QWORD *)v11 = *(_QWORD *)k;
            v11 += 8;
          }
        }
      }
      goto LABEL_465;
  }
  v11 = (__int64)v185;
LABEL_465:
  sub_17A9430(v183, (void *)v11, v185);
  v23 = *((unsigned int *)v183 + 2);
  if ( !(_DWORD)v23 )
    *((_BYTE *)v26 + 29) &= ~1u;
LABEL_133:
  v26 = v303;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) == 0 )
  {
LABEL_14:
    if ( (v26[14] & 0x7Fu) - 35 > 3 )
      goto LABEL_17;
    goto LABEL_15;
  }
LABEL_117:
  if ( (unsigned __int8)sub_B8E180((unsigned __int64)(v26 + 36)) )
  {
    v170 = sub_C1D490((__int64)v303, v11, v20, v23);
    if ( (unsigned __int8)sub_179FCB0(*(_QWORD *)(v170 & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      v171 = (__int64 *)(*((_QWORD *)v303 + 6) & 0xFFFFFFFFFFFFFFF0LL);
      v172 = *v171;
      if ( *(_BYTE *)(*v171 + 16) != 26 )
        v172 = sub_F63050(*v171, v11, v20, v23);
      v173 = sub_1D52240(a1, *(_QWORD *)(v172 + 24));
      v174 = *(_QWORD *)(a1 + 248);
      v175 = v173;
      sub_A5E110((__m128 *)v310, v172);
      v11 = v175;
      *((_QWORD *)v303 + 6) = sub_A73610(v174, v175, (__int64 *)(v172 + 48), *(unsigned __int16 *)(v172 + 22), v310, 0);
    }
  }
  v26 = v303;
  if ( (v303[14] & 0x7Fu) - 35 <= 3 )
  {
LABEL_15:
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) == 0 && (v26[42] & 3) != 0 )
    {
      if ( !sub_B979F0(v26) && (v26[14] & 0x7D) != 0x24 && (sub_1703690((__int64)v26, v11, v20, v23) & 1) == 0 )
      {
        if ( !v305
          || (v150 = sub_B8BF30(v305)) == 0
          || (v20 = (*(_BYTE *)(v150 + 28) & 0x7Fu) - 35, (unsigned int)v20 > 3)
          || !sub_B979F0((_QWORD *)v150) )
        {
          v151 = (__int64 *)(*((_QWORD *)v26 + 6) & 0xFFFFFFFFFFFFFFF0LL);
          v152 = *v151;
          if ( *(_BYTE *)(*v151 + 16) != 26 )
            v152 = sub_F63050(*v151, v11, v20, v23);
          sub_A5E110(v309, v152);
          v309[0].m128_u64[1] |= 1u;
          v11 = *(_QWORD *)(v152 + 24);
          *((_QWORD *)v26 + 6) = sub_A73610(
                                   *(_QWORD *)(a1 + 248),
                                   v11,
                                   (__int64 *)(v152 + 48),
                                   *(unsigned __int16 *)(v152 + 22),
                                   (const __m128i *)v309,
                                   0);
          if ( *(_DWORD *)(a1 + 11320) <= *(_DWORD *)(a1 + 12596) )
          {
            v153 = 0;
            v154 = (signed __int64 *)(*((_QWORD *)v26 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*((_QWORD *)v26 + 7) & 4) != 0 )
              v154 = (signed __int64 *)v154[4];
            v156 = (unsigned __int64)(v154 + 1);
            v157 = *v154;
            v155 = v157;
            if ( !(v157 & 7 | (v157 >> 3) & 1) )
            {
              if ( *(_BYTE *)(*(_QWORD *)(v157 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 40
                || (v157 = sub_F6D010(v157, v156), v156 = v282, v155 = v157, !(v157 & 7 | (v157 >> 3) & 1)) )
              {
                if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v155 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1
                  && v157 )
                {
                  v153 = sub_15F0EF0(a1, *(_DWORD *)(v156 + 8), 0, a7, a8);
                }
              }
            }
            sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), *((_DWORD *)v26 + 6), 0x1A4Au, 0);
            v158 = j__strlen(" const");
            sub_9EC740((__int64)v306, v153, " const", v158, 0);
            v11 = (__int64)v306;
            sub_1589170((__int64)v310, v306);
            if ( v307 != &v308 )
              operator delete(v307);
            sub_15F7200(v310);
          }
        }
      }
      v26 = v303;
    }
  }
LABEL_17:
  if ( v304 )
  {
    if ( (unsigned __int8)sub_17E8A60(a1, v26, &v305, a2, v287, a6) )
    {
LABEL_297:
      sub_B88650((__int64)v303, 1);
      return v304;
    }
    v76 = *(void **)(a4 + 88);
    *(_DWORD *)a4 = 0;
    *(_DWORD *)(a4 + 16) = 0;
    if ( v76 )
      sub_1A39780(v76);
    v77 = v305;
    a7.m128i_i64[0] = 0;
    *(_BYTE *)(a4 + 166) = 0;
    *(_OWORD *)(a4 + 88) = 0;
    v310[0].m128i_i64[0] = (*(_BYTE *)(v77 + 29) >> 5) & 3 | (unsigned __int64)v77;
    sub_1743080(a4 + 8, v310[0].m128i_i64[0]);
    v78 = v305;
    *(_DWORD *)a4 = 2;
    if ( (*(_BYTE *)(v78 + 28) & 0x7F) == 0x47 )
    {
      v79 = *(_QWORD *)(v78 + 48);
      v80 = sub_B77A30((__int64)v303);
      sub_BC5600(v80, v78);
      v11 = v79;
      sub_B7FD70((__int64)v303, v79, v81, v82, v83, v84);
      if ( sub_17A0250((__int64)v303) )
      {
        v23 = (unsigned __int64)v303;
        *((_BYTE *)v303 + 29) = *(_BYTE *)(v78 + 29) & 0x60 | *((_BYTE *)v303 + 29) & 0x9F;
        *(_BYTE *)(v80 + 29) = *(_BYTE *)(v78 + 29) & 0x60 | *(_BYTE *)(v80 + 29) & 0x9F;
      }
      if ( a5 )
      {
        if ( (*(_QWORD *)sub_BC3640((_QWORD *)v80) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v263 = (_QWORD *)sub_BC3640((_QWORD *)v80);
          *v263 |= 4uLL;
          if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v79 + 32LL))(v79) + 82) & 0x40) != 0 )
          {
            v11 = 0;
            sub_B7C8B0(v79, 0, 0);
            v27 = *(_QWORD *)(a1 + 232);
            v26 = v303;
            goto LABEL_20;
          }
        }
      }
    }
    else
    {
      v11 = (__int64)v303;
      if ( (unsigned __int8)sub_17A4B30(a1, (__int64)v303, v78) )
      {
        v243 = v305;
        v11 = v305;
        sub_B7FD70((__int64)v303, v305, v242, v23, v21, v22);
        if ( sub_17A0250((__int64)v303) )
        {
          v26 = v303;
          *((_BYTE *)v303 + 29) = *(_BYTE *)(v243 + 29) & 0x60 | *((_BYTE *)v303 + 29) & 0x9F;
          v27 = *(_QWORD *)(a1 + 232);
          goto LABEL_20;
        }
      }
    }
LABEL_108:
    v26 = v303;
    v28 = *(unsigned int *)(*(_QWORD *)(a1 + 232) + 64LL);
    if ( !(_DWORD)v28 )
      goto LABEL_21;
LABEL_109:
    v11 = (__int64)v26;
    sub_1AF4050(*(_QWORD *)(a1 + 760), v26);
    v26 = v303;
    if ( (*((_BYTE *)v303 + 29) & 1) != 0 )
      goto LABEL_110;
    goto LABEL_22;
  }
  v27 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v27 + 1) & 8) != 0 || !v301 )
    goto LABEL_20;
  if ( (*((_BYTE *)v26 + 29) & 1) != 0 )
  {
    v159 = sub_B8C3D0((__int64)v26, v11, v20, v23, v21, v22);
    v20 = *v159;
    v160 = *v159 + 8LL * *((unsigned int *)v159 + 2);
    if ( v20 >= v160 )
    {
      if ( v20 != v160 )
      {
        if ( *(_WORD *)(*(_QWORD *)v160 + 36LL) == 435 )
          goto LABEL_481;
        v265 = (__int64 *)(v160 + 8);
        while ( 1 )
        {
          v23 = (unsigned __int64)v265;
          if ( (__int64 *)v20 == v265 )
            break;
          v266 = *v265++;
          if ( *(_WORD *)(v266 + 36) == 435 )
            goto LABEL_481;
        }
      }
    }
    else
    {
      v23 = v20;
      while ( 1 )
      {
        v11 = *(_QWORD *)v23;
        if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 435 )
          break;
        v23 += 8LL;
        if ( v160 == v23 )
          goto LABEL_282;
      }
      if ( v160 != v23 )
      {
LABEL_481:
        v23 = *(_QWORD *)v20;
        v27 = *(_QWORD *)(a1 + 232);
        v26 = v303;
        if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 435 )
        {
          v264 = (unsigned __int64 *)(v20 + 8);
          do
            v23 = *v264++;
          while ( *(_WORD *)(v23 + 36) != 435 );
        }
        goto LABEL_20;
      }
    }
  }
LABEL_282:
  v161 = 8LL * *(unsigned int *)(a4 + 16);
  v288 = *(_QWORD **)(a4 + 8);
  v162 = v288;
  if ( !(v161 >> 5) )
  {
LABEL_360:
    v205 = &v288[(unsigned __int64)v161 / 8];
    v206 = v205 - v162;
    if ( v206 != 2 )
    {
      if ( v206 != 3 )
      {
        if ( v206 != 1 )
          goto LABEL_363;
        goto LABEL_558;
      }
      v279 = *v162 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v279 + 28) & 0x7Fu) - 34 <= 5
        && ((*(_BYTE *)(v279 + 29) & 1) == 0 || !sub_179ACE0(v279, v11, v20, v23, v21, v22)) )
      {
        goto LABEL_286;
      }
      ++v162;
    }
    v280 = *v162 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v280 + 28) & 0x7Fu) - 34 <= 5
      && ((*(_BYTE *)(v280 + 29) & 1) == 0 || !sub_179ACE0(v280, v11, v20, v23, v21, v22)) )
    {
      goto LABEL_286;
    }
    ++v162;
LABEL_558:
    v281 = *v162 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v281 + 28) & 0x7Fu) - 34 <= 5
      && ((*(_BYTE *)(v281 + 29) & 1) == 0 || !sub_179ACE0(v281, v11, v20, v23, v21, v22)) )
    {
      goto LABEL_286;
    }
LABEL_363:
    v162 = v205;
    goto LABEL_286;
  }
  v163 = *(_QWORD *)(a4 + 8) + 32 * (v161 >> 5);
  while ( 1 )
  {
    v164 = v162;
    v165 = *v162 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v165 + 28) & 0x7Fu) - 34 > 5 )
      goto LABEL_337;
    if ( (*(_BYTE *)(v165 + 29) & 1) == 0 )
      goto LABEL_286;
    v194 = sub_B8C3D0(v165, v11, v20, v23, v21, v22);
    v20 = *v194;
    v23 = *v194 + 8LL * *((unsigned int *)v194 + 2);
    if ( *v194 >= v23 )
      break;
    v195 = (unsigned __int64 *)*v194;
    while ( 1 )
    {
      v20 = *v195;
      if ( *(_WORD *)(*v195 + 36) == 435 )
        break;
      if ( (unsigned __int64 *)v23 == ++v195 )
        goto LABEL_286;
    }
    if ( (unsigned __int64 *)v23 == v195 )
      goto LABEL_286;
LABEL_337:
    v196 = v162[1] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v196 + 28) & 0x7Fu) - 34 <= 5 )
    {
      if ( (*(_BYTE *)(v196 + 29) & 1) == 0 )
        goto LABEL_339;
      v197 = sub_B8C3D0(v196, v11, v20, v23, v21, v22);
      v20 = *v197;
      v23 = *v197 + 8LL * *((unsigned int *)v197 + 2);
      if ( *v197 >= v23 )
      {
        if ( v20 == v23 )
          goto LABEL_339;
        if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 435 )
        {
          v268 = (unsigned __int64 *)(v23 + 8);
          while ( 1 )
          {
            v23 = (unsigned __int64)v268;
            if ( (unsigned __int64 *)v20 == v268 )
              break;
            v23 = *v268++;
            if ( *(_WORD *)(v23 + 36) == 435 )
              goto LABEL_345;
          }
LABEL_339:
          ++v162;
          goto LABEL_286;
        }
      }
      else
      {
        v198 = (unsigned __int64 *)*v197;
        while ( 1 )
        {
          v20 = *v198;
          if ( *(_WORD *)(*v198 + 36) == 435 )
            break;
          if ( (unsigned __int64 *)v23 == ++v198 )
            goto LABEL_339;
        }
        if ( (unsigned __int64 *)v23 == v198 )
          goto LABEL_339;
      }
    }
LABEL_345:
    v162 += 2;
    v199 = *v162 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v199 + 28) & 0x7Fu) - 34 <= 5 )
    {
      if ( (*(_BYTE *)(v199 + 29) & 1) == 0 )
        goto LABEL_286;
      v200 = sub_B8C3D0(v199, v11, v20, v23, v21, v22);
      v20 = *v200;
      v23 = *v200 + 8LL * *((unsigned int *)v200 + 2);
      if ( *v200 >= v23 )
      {
        if ( v20 == v23 )
          goto LABEL_286;
        if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 435 )
        {
          v269 = (unsigned __int64 *)(v23 + 8);
          do
          {
            v23 = (unsigned __int64)v269;
            if ( (unsigned __int64 *)v20 == v269 )
              goto LABEL_286;
            v23 = *v269++;
          }
          while ( *(_WORD *)(v23 + 36) != 435 );
        }
      }
      else
      {
        v201 = (unsigned __int64 *)*v200;
        while ( 1 )
        {
          v20 = *v201;
          if ( *(_WORD *)(*v201 + 36) == 435 )
            break;
          if ( (unsigned __int64 *)v23 == ++v201 )
            goto LABEL_286;
        }
        if ( (unsigned __int64 *)v23 == v201 )
          goto LABEL_286;
      }
    }
    v162 = v164 + 3;
    v202 = v164[3] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v202 + 28) & 0x7Fu) - 34 <= 5 )
    {
      if ( (*(_BYTE *)(v202 + 29) & 1) == 0 )
        goto LABEL_286;
      v203 = sub_B8C3D0(v202, v11, v20, v23, v21, v22);
      v20 = *v203;
      v23 = *v203 + 8LL * *((unsigned int *)v203 + 2);
      if ( *v203 >= v23 )
      {
        if ( v20 == v23 )
          goto LABEL_286;
        if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 435 )
        {
          v270 = (unsigned __int64 *)(v23 + 8);
          do
          {
            v23 = (unsigned __int64)v270;
            if ( (unsigned __int64 *)v20 == v270 )
              goto LABEL_286;
            v23 = *v270++;
          }
          while ( *(_WORD *)(v23 + 36) != 435 );
        }
      }
      else
      {
        v204 = (unsigned __int64 *)*v203;
        while ( 1 )
        {
          v20 = *v204;
          if ( *(_WORD *)(*v204 + 36) == 435 )
            break;
          if ( (unsigned __int64 *)v23 == ++v204 )
            goto LABEL_286;
        }
        if ( (unsigned __int64 *)v23 == v204 )
          goto LABEL_286;
      }
    }
    v162 = v164 + 4;
    if ( (_QWORD *)v163 == v164 + 4 )
      goto LABEL_360;
  }
  if ( v20 == v23 )
    goto LABEL_286;
  if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 435 )
    goto LABEL_337;
  v267 = (unsigned __int64 *)(v23 + 8);
  while ( 1 )
  {
    v23 = (unsigned __int64)v267;
    if ( (unsigned __int64 *)v20 == v267 )
      break;
    v23 = *v267++;
    if ( *(_WORD *)(v23 + 36) == 435 )
      goto LABEL_337;
  }
LABEL_286:
  v26 = v303;
  if ( v162 != (_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * *(unsigned int *)(a4 + 16)) )
  {
    sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), *((_DWORD *)v303 + 6), 0xC8Bu, 0);
    sub_15F7200(v310);
    sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), *(_DWORD *)((*v162 & 0xFFFFFFFFFFFFFFF8LL) + 24), 0x16A9u, 0);
    v309[0].m128_i8[0] = 0;
    sub_1588420((__int64)v310, (unsigned __int8 *)v309);
    sub_15F7200(v310);
    v11 = sub_B32D80(*(_QWORD *)(a1 + 248), 0, 0);
    sub_B8CC60((__int64)v303, v11, v166, v167, v168, v169);
    goto LABEL_108;
  }
  v27 = *(_QWORD *)(a1 + 232);
LABEL_20:
  v28 = *(unsigned int *)(v27 + 64);
  if ( (_DWORD)v28 )
    goto LABEL_109;
LABEL_21:
  if ( (*((_BYTE *)v26 + 29) & 1) == 0 )
    goto LABEL_22;
LABEL_110:
  v85 = sub_B8C3D0((__int64)v26, v11, v28, v23, v21, v22);
  v28 = *v85;
  v23 = *v85 + 8LL * *((unsigned int *)v85 + 2);
  if ( *v85 >= v23 )
  {
    if ( v28 == v23 )
      goto LABEL_22;
    if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 353 )
    {
      v86 = (__int64 *)(v23 + 8);
      do
      {
        v23 = (unsigned __int64)v86;
        if ( (__int64 *)v28 == v86 )
          goto LABEL_22;
        v87 = *v86++;
      }
      while ( *(_WORD *)(v87 + 36) != 353 );
    }
LABEL_236:
    v11 = (__int64)v303;
    sub_1C79330(*(_QWORD *)(a1 + 800), v303);
    goto LABEL_22;
  }
  v129 = (unsigned __int64 *)*v85;
  while ( 1 )
  {
    v28 = *v129;
    if ( *(_WORD *)(*v129 + 36) == 353 )
      break;
    if ( (unsigned __int64 *)v23 == ++v129 )
      goto LABEL_22;
  }
  if ( (unsigned __int64 *)v23 != v129 )
    goto LABEL_236;
LABEL_22:
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
    goto LABEL_139;
  v29 = v303;
  v30 = v303[14] & 0x7F;
  if ( v30 == 38 )
  {
    v11 = (__int64)v303;
    sub_184ADA0(a1, v303);
    v29 = v303;
    v30 = v303[14] & 0x7F;
    goto LABEL_25;
  }
  if ( v30 != 36 )
  {
    if ( v30 != 39 )
      goto LABEL_25;
    v177 = sub_B77A30((__int64)v303);
    if ( v177 )
    {
      v11 = v177;
      sub_1CE3EF0(a1, v177);
    }
    if ( (unsigned int)sub_B77D20((__int64)v303) == 2 )
    {
      v178 = sub_B73090((__int64)v303);
      sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), v178, 0xE25u, 0);
      v11 = (__int64)v309;
      v309[0].m128_i32[0] = 1;
      sub_1587D10((__int64)v310, (int *)v309);
      sub_15F7200(v310);
    }
    goto LABEL_303;
  }
  if ( (v303[15] & 0x180) != 0 )
  {
    v310[0].m128i_i64[0] = sub_B987D0(v303, v11);
    if ( (*(_BYTE *)(*(_QWORD *)(sub_C1BEF0((__int64)v310, v11, v117, v118) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    {
LABEL_303:
      v29 = v303;
LABEL_304:
      v30 = v29[28] & 0x7F;
LABEL_25:
      if ( (unsigned int)v30 - 35 <= 3 )
      {
        if ( !(unsigned __int8)sub_B77A80((__int64)v29)
          && !sub_B77A30((__int64)v29)
          && v29 == (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v29 + 32LL))(v29) )
        {
          v245 = sub_B72690((__int64)(v29 + 72));
          if ( v245 )
            v245 -= 64LL;
          v11 = v245;
          sub_17A45C0(a1, v245, (__int64)v29);
        }
        if ( sub_AED5B0((__int64)v29) )
        {
          v31 = *((_QWORD *)v303 + 7);
          if ( (v31 & 4) != 0 )
          {
            v261 = *(_QWORD *)((v31 & 0xFFFFFFFFFFFFFFF8LL) + 40);
            if ( v261 )
            {
              v262 = sub_EEB7E0(v261, v11, *(double *)a7.m128i_i64);
              v11 = a1 + 8;
              sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), v262, 0xDAAu, 0);
              sub_15F7200(v310);
            }
          }
        }
        if ( sub_B979F0(v29) )
        {
          v11 = (__int64)v29;
          sub_183E960(a1, v29);
        }
        v29 = v303;
        v30 = v303[14] & 0x7F;
      }
      if ( v30 == 37 )
      {
        v11 = (__int64)v29;
        sub_1853640(a1, v29);
        v29 = v303;
      }
      if ( !(unsigned int)sub_B77890((__int64)v29) || (v11 = (__int64)v303, !(unsigned __int8)sub_187A130(a1, v303)) )
      {
        if ( !sub_B778B0((__int64)v303) || (v11 = (__int64)v303, !(unsigned __int8)sub_1870930(a1, v303)) )
        {
          if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 544) + 8LL) + 70) & 0x7Fu) > 3 )
          {
            v11 = (__int64)v303;
            sub_1868580(a1, v303);
          }
          if ( !*(_DWORD *)(a4 + 16) && (unsigned __int8)sub_B82220((__int64)v303) )
          {
            v309[0].m128_u64[0] = sub_C1D490((__int64)v303, v11, v28, v23);
            if ( sub_F62670(*(_QWORD *)(v309[0].m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL), nullptr, v231, v232, v233, v234) )
            {
              v239 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v309[0].m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v239 + 16) != 13 || ((*(_WORD *)(v239 + 18) >> 3) & 0x1FF) != 0x1B3 )
              {
                sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), *((_DWORD *)v303 + 6), 0x1CAEu, 0);
                v271 = sub_1795A40((__int64)v310, (__int64 *)&v303);
                v11 = (__int64)v309;
                sub_1605D30(v271, (__int64 *)v309);
                sub_15F7200(v310);
                goto LABEL_41;
              }
            }
            v11 = *(_QWORD *)(a1 + 248);
            if ( !(unsigned __int8)sub_F65CA0((__int64 *)v309, v11, v235, v236, v237, v238) )
            {
              v240 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v309[0].m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL);
              v28 = *(unsigned __int8 *)(v240 + 16);
              if ( (_BYTE)v28 != 13 )
              {
                if ( (_BYTE)v28 == 34 )
                  goto LABEL_41;
                goto LABEL_412;
              }
              if ( ((*(_WORD *)(v240 + 18) >> 3) & 0x1FF) != 0x1B3 )
              {
LABEL_412:
                sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), *((_DWORD *)v303 + 6), 0x1CADu, 0);
                v241 = sub_1795A40((__int64)v310, (__int64 *)&v303);
                v11 = (__int64)v309;
                sub_1605D30(v241, (__int64 *)v309);
                sub_15F7200(v310);
              }
            }
          }
LABEL_41:
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) == 0 && !sub_B77AF0((__int64)v303) )
          {
            v225 = (__int64 *)(*((_QWORD *)v303 + 6) & 0xFFFFFFFFFFFFFFF0LL);
            v226 = *v225;
            if ( *(_BYTE *)(*v225 + 16) != 26 )
              v226 = sub_F63050(*v225, v11, v28, v23);
            v227 = (__int64 *)(v226 + 48);
            v228 = sub_179E170(*(_QWORD *)(v226 + 24), v11, v28, v23, v21);
            for ( m = v226 + 48 + 8LL * *(unsigned __int16 *)(v226 + 22);
                  (__int64 *)m != v227;
                  v228 |= sub_179E170(v230, v11, v28, v23, v21) )
            {
              v230 = *v227++;
            }
            if ( v228 )
            {
              sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), *((_DWORD *)v303 + 6), 0x1A54u, 0);
              v11 = (__int64)&v303;
              sub_1795A40((__int64)v310, (__int64 *)&v303);
              sub_15F7200(v310);
            }
          }
          v32 = v304;
          if ( v304 || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) == 0 )
            goto LABEL_139;
          v33 = v303;
          if ( (*((_BYTE *)v303 + 29) & 1) == 0 )
            goto LABEL_45;
          v255 = sub_B8C3D0((__int64)v303, v11, v28, v23, v21, v22);
          v23 = *v255;
          v28 = *v255 + 8LL * *((unsigned int *)v255 + 2);
          if ( *v255 >= v28 )
          {
            v33 = v303;
            if ( v23 == v28 )
              goto LABEL_45;
            if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 163 )
            {
              v272 = (__int64 *)(v28 + 8);
              while ( 1 )
              {
                v28 = (unsigned __int64)v272;
                if ( (__int64 *)v23 == v272 )
                  break;
                v11 = *v272++;
                if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) == 163 )
                  goto LABEL_524;
              }
LABEL_45:
              v34 = *((__int64 **)v33 + 15);
              v39 = &v34[(unsigned int)sub_B76070((__int64)v33, v11, v28, v23)];
              if ( v39 == v34 )
              {
LABEL_138:
                sub_1790DD0(*(_QWORD *)(a1 + 664), (__int64)v303, a4, (unsigned __int64)v36, v37, v38);
LABEL_139:
                if ( a6 )
                {
                  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL) - 3) <= 2 )
                    sub_1632CB0(*(_WORD **)(a1 + 632), v303, v28, v23, v21, v22);
                }
                return v304;
              }
              while ( 1 )
              {
                v40 = *v34;
                if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v34 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0
                  || (*(_BYTE *)(v40 + 29) & 1) == 0 )
                {
                  goto LABEL_47;
                }
                v41 = sub_B8C3D0(*v34, v11, v35, (__int64)v36, v37, v38);
                v35 = *v41;
                v36 = (__int64 *)(*v41 + 8LL * *((unsigned int *)v41 + 2));
                if ( *v41 < (unsigned __int64)v36 )
                {
                  v246 = (__int64 *)*v41;
                  while ( 1 )
                  {
                    v35 = *v246;
                    if ( *(_WORD *)(*v246 + 36) == 164 )
                      break;
                    if ( v36 == ++v246 )
                      goto LABEL_47;
                  }
                  if ( v36 == v246 )
                    goto LABEL_47;
                }
                else
                {
                  if ( (__int64 *)v35 == v36 )
                    goto LABEL_47;
                  if ( *(_WORD *)(*v36 + 36) != 164 )
                  {
                    v42 = (__int64 **)(v36 + 1);
                    do
                    {
                      v36 = (__int64 *)v42;
                      if ( (__int64 **)v35 == v42 )
                        goto LABEL_47;
                      v36 = *v42++;
                    }
                    while ( *((_WORD *)v36 + 18) != 164 );
                  }
                }
                if ( !v32
                  || (v247 = *(_QWORD *)(v40 + 48), (v247 & 1) == 0) && (byte_8[v247 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
                {
                  if ( (*(_BYTE *)(v40 + 29) & 1) == 0 )
                    goto LABEL_588;
                  v248 = sub_B8C3D0(v40, v11, v35, (__int64)v36, v37, v38);
                  v249 = (_QWORD *)*v248;
                  v250 = *v248 + 8LL * *((unsigned int *)v248 + 2);
                  if ( (unsigned __int64)v249 >= v250 )
                  {
                    if ( v249 == (_QWORD *)v250 )
                      goto LABEL_588;
                    while ( *(_WORD *)(*(_QWORD *)v250 + 36LL) != 164 )
                    {
                      v250 += 8LL;
                      if ( v249 == (_QWORD *)v250 )
                        goto LABEL_588;
                    }
                  }
                  else
                  {
                    v251 = v249;
                    while ( *(_WORD *)(*v251 + 36LL) != 164 )
                    {
                      if ( (_QWORD *)v250 == ++v251 )
                        goto LABEL_588;
                    }
                    if ( (_QWORD *)v250 == v251 )
LABEL_588:
                      BUG();
                  }
                  v252 = *v249;
                  if ( *(_WORD *)(*v249 + 36LL) != 164 )
                  {
                    v253 = v249 + 1;
                    do
                      v252 = *v253++;
                    while ( *(_WORD *)(v252 + 36) != 164 );
                  }
                  v11 = a1 + 8;
                  sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), *(_DWORD *)(v252 + 24), 0xDEDu, 0);
                  sub_15F7200(v310);
                }
LABEL_47:
                if ( v39 == ++v34 )
                  goto LABEL_138;
              }
            }
          }
          else
          {
            v256 = (__int64 *)*v255;
            while ( 1 )
            {
              v11 = *v256;
              v23 = (unsigned __int64)v256;
              if ( *(_WORD *)(*v256 + 36) == 163 )
                break;
              if ( (__int64 *)v28 == ++v256 )
              {
                v33 = v303;
                goto LABEL_45;
              }
            }
            v33 = v303;
          }
LABEL_524:
          v32 = v23 != v28;
          goto LABEL_45;
        }
      }
      goto LABEL_297;
    }
  }
  v119 = sub_B72690((__int64)(v303 + 36));
  if ( !v119 )
    goto LABEL_587;
  v124 = *(_QWORD *)(v119 - 16);
  v125 = *(_QWORD *)(a1 + 248);
  if ( v124 )
  {
    v126 = v124 & 0xFFFFFFFFFFFFFFF0LL;
    v127 = v126;
  }
  else
  {
    v257 = sub_A7AA70(v125, v119 - 64, v120, v121, v122, v123);
    v125 = *(_QWORD *)(a1 + 248);
    LOBYTE(v126) = v257;
    v127 = v257 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v11 = *(_QWORD *)(v127 + 8) & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)(v127 + 8) | (unsigned __int8)v126) & 7;
  v29 = v303;
  if ( *((_QWORD *)v303 + 5) == sub_B87700(v125 + 17536, v11) )
    goto LABEL_304;
  sub_168B9F0((__int64)v310, (__int64 *)(a1 + 8), *((_DWORD *)v303 + 6), 0xE63u, 0);
  sub_15F7200(v310);
  sub_B88650((__int64)v303, 1);
  return v304;
}
