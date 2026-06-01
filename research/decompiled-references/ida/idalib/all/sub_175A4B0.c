__int64 __fastcall sub_175A4B0(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r14
  __int64 v3; // r12
  unsigned __int64 v4; // r15
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  _BYTE *v8; // rbp
  _DWORD *v9; // rdx
  _DWORD *i; // rbp
  _DWORD *v11; // rcx
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r13
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rbx
  unsigned __int64 v18; // rax
  _DWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rax
  _BYTE *v22; // r13
  _BYTE *v23; // r10
  __int64 v24; // rbx
  _BYTE *v25; // r12
  __int64 v26; // r14
  int v27; // eax
  unsigned int v28; // ebp
  void *v29; // rax
  _BYTE *v30; // rdx
  const void *v31; // rsi
  int v32; // eax
  _BYTE *v33; // rbx
  _BYTE *v34; // r13
  _BYTE *v35; // rdi
  int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rdi
  char v40; // al
  __int64 v41; // rdi
  unsigned int v42; // ecx
  unsigned int v43; // ebx
  void *v44; // rbp
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 *v50; // r9
  __int64 *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // r15
  bool v57; // al
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rsi
  unsigned __int64 v62; // rbx
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  char v65; // dl
  __int64 v66; // rbp
  int v67; // eax
  __int64 v68; // rsi
  unsigned int v69; // ebp
  unsigned int v70; // r12d
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rdi
  unsigned __int64 v75; // rdi
  int v76; // eax
  unsigned __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 *v80; // r9
  unsigned __int64 v81; // r15
  _BYTE *v82; // r12
  __int64 *v83; // rdx
  __int64 v84; // rax
  __int64 *v85; // r10
  __int64 v86; // rbp
  __int64 v87; // rdx
  __int64 *v88; // r13
  __int64 v89; // rax
  int v90; // eax
  _DWORD *v91; // rbp
  unsigned __int64 v92; // r8
  __int64 v93; // rbx
  __int64 v94; // rax
  unsigned __int64 v95; // rdx
  __int64 *v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rbx
  __int64 v99; // rax
  _QWORD *v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rbx
  _QWORD *v106; // r12
  _QWORD *v107; // rbp
  _QWORD *v108; // rdi
  _BYTE *v110; // rbx
  _BYTE *v111; // rbp
  _BYTE *v112; // rdi
  size_t v113; // rbx
  void **v114; // rbp
  void *v115; // rcx
  void *v116; // rax
  unsigned __int64 v117; // r15
  __int64 v118; // rdx
  __int64 v119; // rbx
  __int64 v120; // rax
  __int64 v121; // r13
  __int64 v122; // rbx
  __int64 v123; // rax
  char v124; // bl
  int v125; // r15d
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 *v130; // r9
  int v131; // r8d
  int v132; // r9d
  __int64 v133; // rax
  unsigned __int64 v134; // rax
  __int64 v135; // r13
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rbx
  int v139; // ebp
  int v140; // r15d
  int v141; // eax
  __int64 v142; // rax
  __int64 v143; // rbx
  __int64 v144; // rax
  unsigned __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  size_t v150; // rdx
  __int64 v151; // rsi
  __int64 v152; // rbx
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  unsigned __int64 v157; // rbx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rdx
  __int64 v161; // rax
  __int64 v162; // rcx
  __int64 v163; // rax
  unsigned int v164; // eax
  unsigned int v165; // r12d
  unsigned int v166; // ebp
  __int64 *v167; // r13
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 *j; // rbx
  __int64 v171; // r15
  _DWORD *v172; // rax
  __int64 v173; // rbp
  __int64 v174; // [rsp+8h] [rbp-AC0h]
  __int64 v175; // [rsp+8h] [rbp-AC0h]
  int v176; // [rsp+8h] [rbp-AC0h]
  __int64 v177; // [rsp+8h] [rbp-AC0h]
  __int64 v179; // [rsp+18h] [rbp-AB0h]
  unsigned __int64 v180; // [rsp+20h] [rbp-AA8h]
  char v181; // [rsp+20h] [rbp-AA8h]
  __int64 v182; // [rsp+30h] [rbp-A98h]
  __int64 v183; // [rsp+30h] [rbp-A98h]
  __int64 v184; // [rsp+38h] [rbp-A90h]
  __int64 *v185; // [rsp+40h] [rbp-A88h]
  __int64 *v186; // [rsp+48h] [rbp-A80h]
  bool v187; // [rsp+56h] [rbp-A72h]
  char v188; // [rsp+57h] [rbp-A71h]
  _QWORD *v189; // [rsp+60h] [rbp-A68h]
  __int64 v190; // [rsp+68h] [rbp-A60h]
  int v191; // [rsp+70h] [rbp-A58h]
  int v192; // [rsp+74h] [rbp-A54h]
  __int64 v193; // [rsp+78h] [rbp-A50h]
  __int64 v194; // [rsp+80h] [rbp-A48h]
  __int64 v195; // [rsp+88h] [rbp-A40h]
  __int64 v196; // [rsp+90h] [rbp-A38h]
  __int64 v197; // [rsp+A0h] [rbp-A28h] BYREF
  char v198; // [rsp+A8h] [rbp-A20h]
  __m128i v199; // [rsp+B0h] [rbp-A18h] BYREF
  _QWORD *v200; // [rsp+C0h] [rbp-A08h] BYREF
  __int64 v201; // [rsp+D8h] [rbp-9F0h]
  void *v202; // [rsp+F0h] [rbp-9D8h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-9D0h]
  _DWORD v204[9]; // [rsp+108h] [rbp-9C0h] BYREF
  char v205; // [rsp+12Ch] [rbp-99Ch]
  __int128 v206; // [rsp+130h] [rbp-998h] BYREF
  __int128 v207; // [rsp+140h] [rbp-988h]
  __int64 v208; // [rsp+150h] [rbp-978h]
  __int64 v209; // [rsp+158h] [rbp-970h]
  __int64 v210; // [rsp+160h] [rbp-968h]
  __int64 v211; // [rsp+168h] [rbp-960h]
  _BYTE *v212; // [rsp+170h] [rbp-958h] BYREF
  __int64 v213; // [rsp+178h] [rbp-950h]
  _BYTE v214[352]; // [rsp+180h] [rbp-948h] BYREF
  void *ptr; // [rsp+2E0h] [rbp-7E8h] BYREF
  __int64 v216; // [rsp+2E8h] [rbp-7E0h]
  __int64 v217; // [rsp+2F0h] [rbp-7D8h] BYREF
  __int64 v218; // [rsp+2F8h] [rbp-7D0h]
  char v219; // [rsp+899h] [rbp-22Fh]
  __int64 v220; // [rsp+910h] [rbp-1B8h]
  __int64 v221; // [rsp+918h] [rbp-1B0h]

  v2 = a1;
  v3 = a2;
  v212 = v214;
  v213 = 0x400000000LL;
  v4 = sub_C952A0(a2);
  v5 = v4 - sub_C95230(a2);
  v6 = 0;
  v7 = v5 >> 4;
  if ( !v7 )
    goto LABEL_8;
  if ( v7 < (unsigned int)v213 )
  {
    v110 = &v212[88 * (unsigned int)v213];
    v111 = &v212[88 * v7];
    while ( v111 != v110 )
    {
      while ( 1 )
      {
        v110 -= 88;
        v112 = *((_BYTE **)v110 + 1);
        if ( v112 == v110 + 24 )
          break;
        free(v112);
        if ( v111 == v110 )
          goto LABEL_113;
      }
    }
LABEL_113:
    LODWORD(v213) = v7;
    goto LABEL_8;
  }
  if ( v7 <= HIDWORD(v213) )
  {
    v8 = v212;
    goto LABEL_5;
  }
  v21 = sub_2237400(&v212, v214, v7, 88, &ptr);
  v22 = v212;
  v8 = (_BYTE *)v21;
  v23 = &v212[88 * (unsigned int)v213];
  if ( v212 == v23 )
    goto LABEL_30;
  v24 = v21;
  v25 = &v212[88 * (unsigned int)v213];
  v26 = v21;
  do
  {
    while ( 1 )
    {
      v27 = *(_DWORD *)v22;
      *(_DWORD *)(v24 + 16) = 0;
      *(_DWORD *)(v24 + 20) = 4;
      *(_DWORD *)v24 = v27;
      v28 = *((_DWORD *)v22 + 4);
      v29 = (void *)(v24 + 24);
      *(_QWORD *)(v24 + 8) = v24 + 24;
      if ( v28 )
      {
        if ( (_BYTE *)(v24 + 8) != v22 + 8 )
          break;
      }
LABEL_20:
      v22 += 88;
      v24 += 88;
      if ( v25 == v22 )
        goto LABEL_25;
    }
    v30 = *((_BYTE **)v22 + 1);
    v31 = v22 + 24;
    if ( v30 == v22 + 24 )
    {
      v150 = 16LL * v28;
      if ( v28 <= 4uLL
        || (sub_2237220(v24 + 8, v24 + 24, v28, 16),
            v29 = *(void **)(v24 + 8),
            v31 = *((const void **)v22 + 1),
            (v150 = 16LL * *((unsigned int *)v22 + 4)) != 0) )
      {
        memcpy(v29, v31, v150);
      }
      *(_DWORD *)(v24 + 16) = v28;
      *((_DWORD *)v22 + 4) = 0;
      goto LABEL_20;
    }
    *(_DWORD *)(v24 + 16) = v28;
    v32 = *((_DWORD *)v22 + 5);
    v22 += 88;
    v24 += 88;
    *(_QWORD *)(v24 - 80) = v30;
    *(_DWORD *)(v24 - 68) = v32;
    *((_QWORD *)v22 - 10) = v31;
    *((_DWORD *)v22 - 17) = 0;
    *((_DWORD *)v22 - 18) = 0;
  }
  while ( v25 != v22 );
LABEL_25:
  v33 = v212;
  v8 = (_BYTE *)v26;
  v2 = a1;
  v3 = a2;
  v23 = &v212[88 * (unsigned int)v213];
  if ( v212 != v23 )
  {
    v34 = &v212[88 * (unsigned int)v213];
    do
    {
      while ( 1 )
      {
        v34 -= 88;
        v35 = *((_BYTE **)v34 + 1);
        if ( v35 == v34 + 24 )
          break;
        free(v35);
        if ( v34 == v33 )
          goto LABEL_29;
      }
    }
    while ( v34 != v33 );
LABEL_29:
    v23 = v212;
  }
LABEL_30:
  v36 = (int)ptr;
  if ( v23 != v214 )
    free(v23);
  v212 = v8;
  v6 = (unsigned int)v213;
  HIDWORD(v213) = v36;
LABEL_5:
  v9 = &v8[88 * v6];
  for ( i = &v8[88 * v7]; i != v9; *((_QWORD *)v9 - 10) = v11 )
  {
    memset(v9, 0, 0x58u);
    v11 = v9 + 6;
    v9[5] = 4;
    v9 += 22;
  }
  LODWORD(v213) = v7;
LABEL_8:
  v200 = (_QWORD *)sub_C95050(v3);
  v12 = v200;
  v13 = sub_C950C0(v3);
  if ( (_QWORD *)v13 != v200 )
  {
    do
    {
      if ( sub_C94FB0(v3, v12) )
      {
        v17 = v200;
        v18 = sub_C95050(v3);
        v19 = &v212[88 * ((__int64)((__int64)v17 - v18) >> 4)];
        v20 = *v200;
        *(_QWORD *)&v206 = v2;
        *((_QWORD *)&v207 + 1) = v19;
        *((_QWORD *)&v206 + 1) = &v202;
        v202 = (void *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
        *(_QWORD *)&v207 = &v200;
        if ( sub_B799A0(v20 & 0xFFFFFFFFFFFFFFF8LL) )
        {
          v14 = *((_QWORD *)v202 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*((_QWORD *)v202 + 7) & 4) != 0 )
            v14 = *(_QWORD *)(v14 + 32);
          v15 = *(_QWORD *)v14;
          ptr = &v217;
          v216 = 0x200000000LL;
          v174 = v15;
          v16 = sub_B73640((__int64)v202);
          sub_1E4CA90(v16);
          LODWORD(v174) = *(_DWORD *)(v174 + 20);
          sub_B73640((__int64)v202);
          sub_175CD40(&v206, *(unsigned int *)(v14 + 8), (unsigned int)v174);
          *v19 = *(_DWORD *)(v14 + 8);
          if ( ptr != &v217 )
            free(ptr);
        }
        else
        {
          sub_175CD40(&v206, 0, 0);
        }
      }
      v12 = v200 + 2;
      v200 = v12;
    }
    while ( v12 != (_QWORD *)v13 );
  }
  v37 = sub_15F1F10(*v2);
  v38 = *v2;
  v198 = 1;
  v179 = v37;
  v39 = *(_QWORD *)(v38 + 544);
  v197 = v38;
  v40 = *(_BYTE *)(v39 + 8) & 0x7F;
  if ( v40 == 2 )
  {
    do
    {
      while ( 1 )
      {
        v41 = *(_QWORD *)(sub_B8C1B0(v39) + 16);
        if ( (v41 & 4) != 0 )
          break;
        v39 = v41 & 0xFFFFFFFFFFFFFFF8LL;
        v40 = *(_BYTE *)(v39 + 8) & 0x7F;
        if ( v40 != 2 )
          goto LABEL_36;
      }
      v39 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
      v40 = *(_BYTE *)(v39 + 8) & 0x7F;
    }
    while ( v40 == 2 );
LABEL_36:
    v38 = *v2;
  }
  v42 = *(_DWORD *)(*(_QWORD *)(v38 + 4616) + 640LL * *(unsigned int *)(v38 + 4624) - 640);
  if ( v42 - 3 > 2 && v42 > 1 && !*(_BYTE *)(v38 + 2440)
    || v40
    && v40 != 24
    && ((v74 = *(_QWORD *)(sub_B8C1B0(v39) + 16), (v74 & 4) == 0)
      ? (v75 = v74 & 0xFFFFFFFFFFFFFFF8LL)
      : (v75 = *(_QWORD *)(v74 & 0xFFFFFFFFFFFFFFF8LL)),
        (unsigned __int8)sub_B8E180(v75)) )
  {
    v43 = 0;
  }
  else
  {
    v43 = 2;
  }
  v44 = (void *)sub_C95330(v3);
  v45 = sub_1A2CF40(*v2, *(_QWORD *)(v3 + 16), 0, v43, (*(_BYTE *)(v3 + 2) >> 3) & 3);
  ptr = v44;
  v189 = (_QWORD *)v45;
  v46 = v45;
  v196 = (__int64)(v2 + 1);
  v51 = sub_1742A40((__int64)(v2 + 1), (__int64 *)&ptr, v47, v48, v49, v50);
  v52 = *v2;
  *v51 = v46;
  v53 = *(_QWORD *)(v3 + 16);
  v54 = sub_1A2D760(v52, v53, v46);
  v55 = *v2;
  v190 = v54;
  v56 = v54;
  v57 = sub_C953E0(v3, v53);
  sub_1A2D040(
    v55,
    v179,
    v56,
    *(_QWORD *)(v3 + 16),
    (*(_BYTE *)(v3 + 2) >> 3) & 3,
    *(_DWORD *)(v3 + 24),
    (*(_QWORD *)v3 >> 21) & 1,
    v57);
  v58 = *v2;
  v59 = v56 + 72;
  if ( !v56 )
    v59 = 0;
  v60 = *(_QWORD *)(v58 + 9944);
  v194 = *v2;
  v195 = *(_QWORD *)(*v2 + 544);
  v61 = *(_QWORD *)(v58 + 512);
  *(_QWORD *)(v58 + 512) = 0;
  v201 = v60;
  *(_QWORD *)(v58 + 544) = v59;
  v193 = v61;
  LODWORD(v61) = *(_DWORD *)(v58 + 80);
  *(_DWORD *)(v58 + 80) = *(_DWORD *)(v58 + 40);
  v192 = v61;
  LODWORD(v61) = *(_DWORD *)(v58 + 2632);
  *(_DWORD *)(v58 + 2632) = *(_DWORD *)(v58 + 3688);
  v191 = v61;
  v62 = sub_C95050(v3);
  v180 = sub_C950C0(v3);
  if ( v62 == v180 || (v63 = *(_QWORD *)v62, (*(_QWORD *)v62 & 1) != 0) )
  {
    v187 = 0;
    goto LABEL_91;
  }
  v188 = 0;
  v182 = v3;
  while ( 2 )
  {
    if ( (v63 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      if ( (v63 & 4) != 0 )
      {
        v64 = sub_15F1540(*v2, 0);
        if ( v64 )
        {
          v65 = *(_BYTE *)(v64 + 8);
          v64 -= 64LL;
          if ( (v65 & 0x7Fu) - 59 >= 3 )
            v64 = 0;
        }
        sub_19A2CD0(&ptr, *v2, v64, 0, 1);
        v66 = *v2;
        v67 = sub_C94E40((__int64 *)v62);
        sub_19B4460(v66, *(unsigned int *)(v62 + 8), (*(_DWORD *)v62 & 1) == 0, 1, 0, v67 == 1);
        sub_19A2DA0(&ptr);
      }
      goto LABEL_51;
    }
    v187 = sub_C94FB0(v182, (_QWORD *)v62);
    if ( !v187 )
    {
      v68 = *(_QWORD *)v62;
      v69 = 0;
      if ( (*(_QWORD *)v62 & 1) == 0 )
      {
        v69 = 1;
        v76 = sub_C94E40((__int64 *)v62);
        v68 = *(_QWORD *)v62;
        if ( v76 != 2 )
          v69 = 2;
      }
      v70 = *(_DWORD *)(v62 + 12);
      v71 = sub_17473B0((__int64)v2, v68 & 0xFFFFFFFFFFFFFFF8LL);
      v72 = v71;
      if ( v71 && *(char *)(v71 + 28) >= 0 )
      {
        if ( (*(_BYTE *)(v71 + 28) & 0x7Fu) - 40 <= 6 && !*(_DWORD *)(v62 + 12) )
          *(_BYTE *)(v179 + 1465) |= sub_B799A0(v71);
        v73 = *(unsigned int *)(v62 + 8);
        v62 += 16LL;
        sub_1905D90(*v2, v72, v73, v69, v70);
        if ( v180 == v62 )
        {
LABEL_62:
          v3 = v182;
          v187 = v188;
          goto LABEL_91;
        }
        goto LABEL_52;
      }
      v188 = 1;
LABEL_51:
      v62 += 16LL;
      if ( v180 == v62 )
        goto LABEL_62;
LABEL_52:
      v63 = *(_QWORD *)v62;
      if ( (*(_QWORD *)v62 & 1) != 0 )
        goto LABEL_62;
      continue;
    }
    break;
  }
  v77 = sub_C95050(v182);
  v81 = *(_QWORD *)v62 & 0xFFFFFFFFFFFFFFF8LL;
  v82 = &v212[88 * ((__int64)(v62 - v77) >> 4)];
  v83 = &v217;
  v216 = 0x400000000LL;
  v84 = *((unsigned int *)v82 + 4);
  ptr = &v217;
  v85 = *((__int64 **)v82 + 1);
  v186 = &v85[2 * v84];
  if ( v85 == v186 )
  {
    v96 = &v217;
  }
  else
  {
    v86 = *v85;
    v87 = v85[1];
    if ( *v85 == 1 || (v87 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v3 = v182;
      goto LABEL_91;
    }
    v88 = v85 + 2;
    v185 = (__int64 *)v62;
    while ( 1 )
    {
      v91 = (_DWORD *)(v86 & 0xFFFFFFFFFFFFFFFELL);
      v92 = *(_QWORD *)(v81 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v81 + 40) & 7) != 0 )
        LODWORD(v92) = 0;
      v93 = sub_1A2D600(
              *v2,
              *(_DWORD *)(v81 + 24),
              v87,
              *(_DWORD *)v82,
              v92,
              (*(_BYTE *)(v81 + 96) >> 5) & 3,
              (__int64)v91,
              *(_QWORD *)(*v2 + 544));
      if ( !v93 )
      {
LABEL_88:
        v3 = v182;
        v96 = (__int64 *)ptr;
        goto LABEL_89;
      }
      v94 = (unsigned int)v216;
      v95 = (unsigned int)v216 + 1LL;
      if ( v95 > HIDWORD(v216) )
      {
        sub_2237220(&ptr, &v217, v95, 8);
        v94 = (unsigned int)v216;
      }
      *((_QWORD *)ptr + v94) = v93;
      v89 = *v2;
      LODWORD(v216) = v216 + 1;
      v175 = v89;
      v90 = sub_C94E40(v185);
      sub_1A31240(v175, v179, v93, v90 == 3);
      if ( !*(_DWORD *)v82 )
        *(_BYTE *)(v179 + 1465) |= (*v91 & 0x4000) != 0;
      if ( v186 == v88 )
        break;
      v86 = *v88;
      v87 = v88[1];
      if ( *v88 != 1 )
      {
        v88 += 2;
        if ( (v87 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          continue;
      }
      goto LABEL_88;
    }
    v62 = (unsigned __int64)v185;
    v96 = (__int64 *)ptr;
  }
  if ( !v188 )
  {
    *(_QWORD *)&v206 = v81;
    v173 = *v96;
    *sub_1742A40(v196, (__int64 *)&v206, (__int64)v83, v78, v79, v80) = v173;
    if ( ptr != &v217 )
      free(ptr);
    goto LABEL_51;
  }
  v3 = v182;
LABEL_89:
  if ( v96 != &v217 )
    free(v96);
LABEL_91:
  sub_1A2D100(*v2, v179);
  v97 = sub_C95360(v3);
  v98 = v97;
  *(_QWORD *)(v179 + 1656) = v97;
  if ( v97 )
  {
    sub_1A2D830(*v2, v190, v189, v97);
    *(_BYTE *)(v179 + 1465) |= sub_BBD670(v98);
  }
  v204[8] = 0;
  v205 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v202 = v204;
  v99 = *(_QWORD *)(sub_C95340(v3) + 56);
  v100 = (_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v99 & 4) != 0 )
    v100 = (_QWORD *)v100[4];
  v101 = sub_17687F0(v2, &v202, *v100, v100 + 1);
  if ( (v101 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v105 = 1;
    if ( v202 != v204 && v202 )
      operator delete[](v202);
    if ( v195 )
    {
      *(_QWORD *)(v194 + 544) = v195;
      *(_QWORD *)(v194 + 512) = v193;
      *(_QWORD *)(v194 + 9944) = v201;
      *(_DWORD *)(v194 + 80) = v192;
      *(_DWORD *)(v194 + 2632) = v191;
    }
    goto LABEL_101;
  }
  *(_BYTE *)(v179 + 1465) |= *(_BYTE *)(*(_QWORD *)(v101 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
  v113 = si128.m128i_i64[0] - si128.m128i_i64[1];
  v114 = (void **)sub_A81BC0(*(_QWORD **)(*v2 + 248), v101, si128.m128i_i32[0] - si128.m128i_i32[2], v102, v103, v104);
  v115 = memcpy(v114 + 1, (char *)v202 + si128.m128i_i64[1], v113);
  v116 = *v114;
  v216 = (__int64)v115;
  ptr = v116;
  v117 = sub_BF48A0((__int64 *)&ptr);
  v119 = v118;
  v120 = *(_QWORD *)(sub_C95340(v3) + 56);
  if ( (v120 & 4) != 0 )
    v199 = _mm_loadu_si128((const __m128i *)((v120 & 0xFFFFFFFFFFFFFFF8LL) + 40));
  else
    v199 = _mm_loadu_si128(&xmmword_23DED40);
  v121 = *v2;
  if ( !v199.m128i_i32[2] )
    v199.m128i_i32[2] = *(_DWORD *)(v121 + 12632);
  v122 = v119 + 16;
  v176 = (*(_QWORD *)v3 >> 22) & 1;
  v123 = 0;
  if ( *(_BYTE *)(v117 + 16) != 25 )
    v123 = *(unsigned __int16 *)(v117 + 22);
  v183 = v122;
  v184 = v123;
  v181 = *(_BYTE *)(sub_C95340(v3) + 81) >> 5;
  v124 = *(_BYTE *)(sub_C95340(v3) + 84);
  v125 = *(_DWORD *)(sub_C95340(v3) + 64);
  v126 = sub_C95340(v3);
  sub_1A2D870(
    v121,
    v190,
    *(_DWORD *)(v126 + 24),
    v125,
    (unsigned int)&v199,
    (_DWORD)v114,
    v124 & 3,
    v181,
    v183,
    v184,
    v176);
  sub_C95340(v3);
  ptr = (void *)sub_C95340(v3);
  *sub_1742A40(v196, (__int64 *)&ptr, v127, v128, v129, v130) = v190;
  v133 = v189[2];
  if ( (v133 & 4) != 0 )
    v134 = *(_QWORD *)(v133 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v134 = v133 & 0xFFFFFFFFFFFFFFF8LL;
  v135 = *v2;
  v136 = *(_QWORD *)(*v2 + 9944);
  v137 = *(_QWORD *)(*v2 + 512);
  *(_QWORD *)(v135 + 512) = 0;
  v138 = *(_QWORD *)(v135 + 544);
  v218 = v136;
  v139 = *(_DWORD *)(v135 + 80);
  *(_QWORD *)(v135 + 544) = v134;
  v140 = *(_DWORD *)(v135 + 2632);
  v177 = v137;
  *(_DWORD *)(v135 + 80) = *(_DWORD *)(v135 + 40);
  v141 = *(_DWORD *)(v135 + 3688);
  *(_QWORD *)(v135 + 9944) = 0;
  *(_DWORD *)(v135 + 2632) = v141;
  v206 = 0;
  v207 = 0;
  sub_1A2FD60(*v2, (_DWORD)v189, v190, v137, v131, v132, 0, 0, 0, 0);
  if ( v138 )
  {
    *(_QWORD *)(v135 + 544) = v138;
    *(_QWORD *)(v135 + 512) = v177;
    v142 = v218;
    *(_DWORD *)(v135 + 80) = v139;
    *(_QWORD *)(v135 + 9944) = v142;
    *(_DWORD *)(v135 + 2632) = v140;
  }
  v143 = *v2;
  v144 = sub_C95340(v3);
  sub_18C7FE0(v143, 6, v144);
  v207 = 0;
  v208 = 0;
  LODWORD(v209) = 0;
  v210 = 0;
  v211 = 0;
  LODWORD(v206) = 5;
  WORD2(v206) = 0;
  v145 = sub_C94E80(v3);
  DWORD2(v206) = sub_EEB7E0(v145, 6, 0.0);
  sub_1DBA9B0(
    *v2,
    6,
    v146,
    v147,
    v148,
    v149,
    v206,
    *((_QWORD *)&v206 + 1),
    v207,
    *((_QWORD *)&v207 + 1),
    v208,
    v209,
    v210,
    v211);
  if ( v187 )
  {
    sub_1DBAAE0(*v2, 6);
    v198 = 0;
    goto LABEL_127;
  }
  v151 = sub_C94E80(v3);
  v152 = sub_177B9C0(v2, v151, 0);
  sub_1DBAAE0(*v2, v151);
  v198 = 0;
  if ( v152 == 1 )
  {
LABEL_127:
    if ( v195 )
    {
      *(_QWORD *)(v194 + 544) = v195;
      *(_QWORD *)(v194 + 512) = v193;
      *(_QWORD *)(v194 + 9944) = v201;
      *(_DWORD *)(v194 + 80) = v192;
      *(_DWORD *)(v194 + 2632) = v191;
    }
    v105 = 1;
    sub_1A2F720(*v2, *(unsigned int *)(v3 + 16), 0, 1);
    goto LABEL_130;
  }
  v157 = v152 & 0xFFFFFFFFFFFFFFFELL;
  sub_17595E0((__int64)&ptr, v179, v153, v154, v155, v156);
  sub_17EEDE0(*v2, v190, v157, 1);
  if ( v195 )
  {
    *(_QWORD *)(v194 + 544) = v195;
    *(_QWORD *)(v194 + 512) = v193;
    *(_QWORD *)(v194 + 9944) = v201;
    *(_DWORD *)(v194 + 80) = v192;
    *(_DWORD *)(v194 + 2632) = v191;
  }
  v160 = 0;
  v161 = *(_QWORD *)(v220 + 128);
  if ( v161 && (*(_BYTE *)(v161 + 10) & 0x20) != 0 )
    v160 = *(_BYTE *)(v161 + 104) & 3;
  v162 = v189[16];
  *(_BYTE *)(v162 + 104) = v160 | *(_BYTE *)(v162 + 104) & 0xFC;
  v163 = *v2;
  v189[6] = 0;
  sub_A7AA70(*(_QWORD *)(v163 + 248), (__int64)v189, v160, v162, v158, v159);
  v164 = sub_EEC140(v157);
  v165 = *(_DWORD *)(v3 + 16);
  v166 = v164;
  v167 = *(__int64 **)(v221 + 120);
  for ( j = &v167[(unsigned int)sub_B76070(v221, (__int64)v189, v168, v169)]; j != v167; ++v167 )
  {
    v171 = *v167;
    v172 = (_DWORD *)sub_B73640(*v167);
    if ( !v172 )
    {
      if ( (*(_BYTE *)(v171 + 97) & 6) != 4 )
        continue;
      v172 = (_DWORD *)sub_B74810(v171);
    }
    v219 |= (*v172 & 0x4000) != 0;
  }
  v105 = sub_1A33A60(*v2, v165, v166, &ptr);
  sub_15F04D0((__int64)&ptr);
LABEL_130:
  if ( v202 != v204 && v202 )
    operator delete[](v202);
LABEL_101:
  sub_146B590((__int64)&v197);
  v106 = v212;
  v107 = &v212[88 * (unsigned int)v213];
  if ( v212 != (_BYTE *)v107 )
  {
    do
    {
      while ( 1 )
      {
        v107 -= 11;
        v108 = (_QWORD *)v107[1];
        if ( v108 == v107 + 3 )
          break;
        free(v108);
        if ( v106 == v107 )
          goto LABEL_104;
      }
    }
    while ( v106 != v107 );
LABEL_104:
    v107 = v212;
  }
  if ( v107 != (_QWORD *)v214 )
    free(v107);
  return v105;
}
