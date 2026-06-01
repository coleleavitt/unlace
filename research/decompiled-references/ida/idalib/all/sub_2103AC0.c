__int64 __fastcall sub_2103AC0(__int64 a1)
{
  char **v2; // r12
  void **v3; // r13
  void **v4; // rbp
  char *v5; // r13
  char *v6; // rbp
  char *v7; // rdi
  __int64 v8; // rax
  __m128i v9; // xmm1
  void (__fastcall *v10)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __int64 v13; // r12
  unsigned __int64 v14; // r8
  void **v15; // r13
  void **v16; // r15
  void ***v17; // rdx
  void **v18; // rbp
  void **v19; // r14
  void **v20; // rax
  __int64 v21; // rsi
  void *v22; // rdi
  void **v23; // rdi
  void **v24; // rdi
  void *v25; // rdi
  void **v26; // rbp
  unsigned __int64 v27; // r13
  void *v28; // rdi
  __int64 v29; // r13
  __int64 v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // rdi
  void *v33; // rdi
  __int64 v34; // rbp
  __int64 v35; // r13
  void *v36; // rdi
  void *v37; // rdi
  char *v38; // rdi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rsi
  _BYTE *v45; // rax
  int v46; // eax
  __m128i *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  int v51; // r10d
  int v52; // eax
  __int64 v53; // rbp
  __int64 v54; // r13
  __int64 v55; // rax
  _QWORD *v56; // r12
  _QWORD *v57; // rdi
  int v58; // eax
  __int64 v59; // rbp
  __int64 v60; // r13
  __int64 v61; // rax
  _QWORD *v62; // r12
  _QWORD *v63; // rdi
  __int64 v64; // rbp
  void *v65; // rdi
  __int64 v66; // r12
  void **v67; // rdi
  __int64 v68; // rbp
  void *v69; // rdi
  __int64 v70; // r12
  __int64 v71; // rbp
  void *v72; // rdi
  __int64 v73; // r12
  __int64 v74; // rbp
  void *v75; // rdi
  __int64 v76; // r12
  int v77; // r8d
  int v78; // eax
  __int64 v79; // rbp
  __int64 v80; // r13
  __int64 v81; // rax
  _QWORD *v82; // r12
  _QWORD *v83; // rdi
  int v84; // eax
  __int64 v85; // rbp
  __int64 v86; // r13
  __int64 v87; // rax
  _QWORD *v88; // r12
  _QWORD *v89; // rdi
  int v90; // eax
  __int64 v91; // rbp
  _QWORD **v92; // r14
  _QWORD *v93; // r15
  void **v94; // r12
  void **v95; // r13
  _QWORD *v96; // r13
  _QWORD *v97; // r12
  __int64 v98; // rsi
  __int64 v99; // rdx
  void *v100; // rdi
  int v101; // eax
  unsigned int v102; // edx
  __int64 v103; // rsi
  __int64 v104; // rdi
  __int64 v105; // rsi
  __int64 k; // rsi
  int v107; // eax
  _QWORD *v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rsi
  _QWORD *n; // rsi
  unsigned int v113; // edx
  __int64 v114; // rsi
  __m128i *v115; // rdx
  unsigned __int64 v116; // rax
  __m128i v117; // xmm0
  unsigned int v118; // edx
  __int64 v119; // rsi
  _DWORD *i; // rsi
  __int64 v121; // rax
  int v122; // eax
  __int64 v123; // rbp
  __int64 v124; // r13
  _QWORD *v125; // rax
  unsigned int v126; // edx
  __int64 v127; // rsi
  unsigned int v128; // eax
  __int64 v129; // rdx
  __m128i si128; // xmm0
  __m128i *v131; // rax
  unsigned __int64 v132; // rcx
  __m128i *v133; // rax
  unsigned int v134; // eax
  __int64 v135; // rax
  _DWORD *v136; // rax
  unsigned int v137; // eax
  int v138; // eax
  _QWORD *v139; // rax
  unsigned int v140; // eax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rbp
  int v144; // r12d
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  _DWORD *v149; // rax
  __int64 v150; // rdx
  _DWORD *m; // rdx
  __int64 v152; // rbp
  int v153; // r12d
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rcx
  __int64 v159; // rcx
  __m128i *v160; // rdx
  unsigned __int64 v161; // rsi
  __m128i v162; // xmm0
  __int64 v163; // rbp
  int v164; // r12d
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  _DWORD *v169; // rax
  __int64 v170; // rdx
  _DWORD *j; // rdx
  __int64 v172; // rbp
  int v173; // r12d
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  _QWORD *v178; // rax
  __int64 v179; // rdx
  _QWORD *ii; // rdx
  unsigned int v181; // edx
  unsigned __int64 v182; // rax
  unsigned int v183; // edx
  unsigned __int64 v184; // rax
  unsigned int v185; // edx
  unsigned __int64 v186; // rax
  unsigned int v187; // edx
  unsigned __int64 v188; // rax
  unsigned __int64 v189; // [rsp+0h] [rbp-80h]
  __int64 v190; // [rsp+0h] [rbp-80h]
  void ***v191; // [rsp+8h] [rbp-78h]
  __int64 v192; // [rsp+10h] [rbp-70h]
  void **v193; // [rsp+18h] [rbp-68h]
  __int64 v194; // [rsp+18h] [rbp-68h]
  __int64 v195; // [rsp+20h] [rbp-60h]
  __m128i v196; // [rsp+28h] [rbp-58h] BYREF
  void (__fastcall *v197)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-48h]
  __int64 v198; // [rsp+40h] [rbp-40h]

  v2 = *(char ***)(a1 + 88);
  *(_OWORD *)(a1 + 80) = 0;
  if ( v2 )
  {
    v3 = (void **)v2[4];
    v4 = (void **)v2[3];
    if ( v3 != v4 )
    {
      do
      {
        while ( *v4 != v4 + 2 )
        {
          operator delete(*v4);
          v4 += 4;
          if ( v3 == v4 )
          {
            v4 = (void **)v2[3];
            goto LABEL_6;
          }
        }
        v4 += 4;
      }
      while ( v3 != v4 );
      v4 = (void **)v2[3];
    }
LABEL_6:
    if ( v4 )
      operator delete(v4);
    v5 = v2[1];
    v6 = *v2;
    if ( v5 != *v2 )
    {
      do
      {
        v7 = v6;
        v6 += 24;
        sub_2239BD0(v7);
      }
      while ( v5 != v6 );
      v6 = *v2;
    }
    if ( v6 )
      operator delete(v6);
    operator delete(v2, 0x40u);
  }
  v8 = *(_QWORD *)(a1 + 96);
  if ( v8 != *(_QWORD *)(a1 + 104) )
    *(_QWORD *)(a1 + 104) = v8;
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 120));
  v196.m128i_i64[0] = (__int64)sub_2100130;
  v10 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 136);
  *(_QWORD *)(a1 + 136) = sub_21000F0;
  v11 = *(_QWORD *)(a1 + 144);
  v12 = _mm_load_si128(&v196);
  v197 = v10;
  v198 = v11;
  v196 = v9;
  *(__m128i *)(a1 + 120) = v12;
  *(_QWORD *)(a1 + 144) = sub_21000D0;
  if ( v10 )
    v10(&v196, &v196, 3);
  sub_2102A10((__m128 *)(a1 + 384));
  sub_21027C0((__m128 *)(a1 + 480));
  sub_2102570((__m128 *)(a1 + 576));
  sub_2102090((__m128 *)(a1 + 768));
  sub_21022E0((__m128 *)(a1 + 672));
  sub_2101BF0((__m128 *)(a1 + 960));
  sub_2101AB0((__m128 *)(a1 + 1056));
  sub_2101980((__m128 *)(a1 + 1152));
  sub_2101E40((__m128 *)(a1 + 864));
  sub_2101820((__m128 *)(a1 + 1248));
  v13 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = 0;
  if ( v13 )
  {
    v14 = *(_QWORD *)(v13 + 384);
    v15 = *(void ***)(v13 + 360);
    v16 = *(void ***)(v13 + 368);
    v17 = (void ***)(*(_QWORD *)(v13 + 352) + 8LL);
    v18 = *(void ***)(v13 + 328);
    v195 = *(_QWORD *)(v13 + 352);
    v19 = *(void ***)(v13 + 344);
    if ( v14 > (unsigned __int64)v17 )
    {
LABEL_20:
      while ( 2 )
      {
        v20 = *v17;
        v21 = (__int64)(*v17 + 64);
        do
        {
          while ( 1 )
          {
            v22 = *v20;
            v193 = v20 + 2;
            if ( *v20 == v20 + 2 )
              break;
            v191 = v17;
            v189 = v14;
            free(v22);
            v20 = v193;
            v14 = v189;
            v17 = v191;
            if ( v193 == (void **)v21 )
            {
              v17 = v191 + 1;
              if ( v189 > (unsigned __int64)(v191 + 1) )
                goto LABEL_20;
              goto LABEL_24;
            }
          }
          v20 = (void **)*v20;
        }
        while ( v22 != (void *)v21 );
        if ( v14 > (unsigned __int64)++v17 )
          continue;
        break;
      }
    }
LABEL_24:
    if ( v14 == v195 )
    {
      while ( v15 != v18 )
      {
        while ( 1 )
        {
          v67 = (void **)*v18;
          v18 += 2;
          if ( v67 == v18 )
            break;
          free(v67);
          if ( v15 == v18 )
            goto LABEL_31;
        }
        v18 = v67;
      }
    }
    else
    {
      if ( v18 != v19 )
      {
        do
        {
          while ( 1 )
          {
            v23 = (void **)*v18;
            v18 += 2;
            if ( v23 == v18 )
              break;
            free(v23);
            if ( v19 == v18 )
              goto LABEL_28;
          }
          v18 = v23;
        }
        while ( v19 != v23 );
      }
LABEL_28:
      if ( v15 != v16 )
      {
        do
        {
          while ( 1 )
          {
            v24 = (void **)*v16;
            v16 += 2;
            if ( v24 == v16 )
              break;
            free(v24);
            if ( v15 == v16 )
              goto LABEL_31;
          }
          v16 = v24;
        }
        while ( v15 != v24 );
        v25 = *(void **)(v13 + 312);
        if ( !v25 )
          goto LABEL_36;
        goto LABEL_32;
      }
    }
LABEL_31:
    v25 = *(void **)(v13 + 312);
    if ( !v25 )
    {
LABEL_36:
      v29 = *(_QWORD *)(v13 + 288);
      v30 = *(_QWORD *)(v13 + 280);
      if ( v29 != v30 )
      {
        do
        {
          v31 = *(unsigned int *)(v30 + 40);
          v32 = *(_QWORD *)(v30 + 24);
          v30 += 48;
          operator delete(v32, 16 * v31, 4);
        }
        while ( v29 != v30 );
        v30 = *(_QWORD *)(v13 + 280);
      }
      if ( v30 )
        operator delete((void *)v30);
      v33 = *(void **)(v13 + 256);
      if ( v33 )
        operator delete(v33);
      v34 = *(_QWORD *)(v13 + 224);
      if ( v34 )
      {
        do
        {
          sub_2102F20(v13 + 208, *(_QWORD **)(v34 + 24));
          v35 = *(_QWORD *)(v34 + 16);
          operator delete((void *)v34);
          v34 = v35;
        }
        while ( v35 );
      }
      v36 = *(void **)(v13 + 64);
      if ( v36 != (void *)(v13 + 80) )
        free(v36);
      v37 = *(void **)(v13 + 40);
      if ( (void *)(v13 + 64) != v37 )
        free(v37);
      v38 = *(char **)(v13 + 8);
      if ( *(_DWORD *)(v13 + 20) )
      {
        v122 = *(_DWORD *)(v13 + 16);
        if ( v122 )
        {
          v123 = 0;
          v124 = 8LL * (unsigned int)(v122 - 1) + 8;
          do
          {
            v125 = *(_QWORD **)&v38[v123];
            if ( v125 != (_QWORD *)-8LL && v125 )
            {
              operator delete(*(_QWORD *)&v38[v123], *v125 + 17LL, 8);
              v38 = *(char **)(v13 + 8);
            }
            v123 += 8;
          }
          while ( v124 != v123 );
        }
      }
      free(v38);
      operator delete((void *)v13, 0x188u);
      goto LABEL_51;
    }
LABEL_32:
    v26 = *(void ***)(v13 + 352);
    v27 = *(_QWORD *)(v13 + 384) + 8LL;
    if ( v27 > (unsigned __int64)v26 )
    {
      do
      {
        v28 = *v26++;
        operator delete(v28);
      }
      while ( v27 > (unsigned __int64)v26 );
      v25 = *(void **)(v13 + 312);
    }
    operator delete(v25);
    goto LABEL_36;
  }
LABEL_51:
  sub_21015A0((__m128 *)(a1 + 2240));
  if ( *(_DWORD *)(a1 + 1412) )
  {
    v39 = *(_DWORD *)(a1 + 1408);
    if ( v39 )
      memset(*(void **)(a1 + 1400), 0, 8LL * (unsigned int)(v39 - 1) + 8);
    *(_QWORD *)(a1 + 1412) = 0;
  }
  if ( *(_DWORD *)(a1 + 1356) )
  {
    v40 = *(_DWORD *)(a1 + 1352);
    if ( v40 )
      memset(*(void **)(a1 + 1344), 0, 8LL * (unsigned int)(v40 - 1) + 8);
    *(_QWORD *)(a1 + 1356) = 0;
  }
  sub_A24B10((__m128 *)(a1 + 192));
  sub_A24B10((__m128 *)(a1 + 288));
  v41 = *(_DWORD *)(a1 + 1440);
  if ( !v41 )
  {
    if ( !*(_DWORD *)(a1 + 1444) )
      goto LABEL_63;
    v42 = *(_DWORD **)(a1 + 1432);
    v43 = *(unsigned int *)(a1 + 1448);
    v44 = 4 * v43;
    if ( (unsigned int)v43 > 0x40 )
    {
      operator delete(v42, v44 * 4, 8);
      *(_QWORD *)(a1 + 1432) = 0;
      *(_QWORD *)(a1 + 1440) = 0;
      *(_DWORD *)(a1 + 1448) = 0;
      goto LABEL_63;
    }
    goto LABEL_199;
  }
  v118 = 4 * v41;
  v119 = *(unsigned int *)(a1 + 1448);
  v42 = *(_DWORD **)(a1 + 1432);
  if ( (unsigned int)(4 * v41) < 0x40 )
    v118 = 64;
  if ( (unsigned int)v119 <= v118 )
  {
    v44 = 4 * v119;
LABEL_199:
    for ( i = &v42[v44]; i != v42; v42 += 4 )
      *v42 = -1;
    *(_QWORD *)(a1 + 1440) = 0;
    goto LABEL_63;
  }
  v134 = v41 - 1;
  if ( v134 )
  {
    _BitScanReverse(&v134, v134);
    v135 = (unsigned int)(1 << (33 - (v134 ^ 0x1F)));
    if ( (int)v135 < 64 )
      v135 = 64;
    if ( (_DWORD)v135 == (_DWORD)v119 )
    {
      *(_QWORD *)(a1 + 1440) = 0;
      v136 = &v42[4 * v135];
      do
      {
        *v42 = -1;
        v42 += 4;
      }
      while ( v136 != v42 );
      goto LABEL_63;
    }
    v181 = 4 * (int)v135 / 3u;
    v182 = (((((v181 + 1) | ((unsigned __int64)(v181 + 1) >> 1)) >> 2)
           | (v181 + 1)
           | ((unsigned __int64)(v181 + 1) >> 1)
           | (((((v181 + 1) | ((unsigned __int64)(v181 + 1) >> 1)) >> 2)
             | (v181 + 1)
             | ((unsigned __int64)(v181 + 1) >> 1)) >> 4)) >> 8)
         | (((v181 + 1) | ((unsigned __int64)(v181 + 1) >> 1)) >> 2)
         | (v181 + 1)
         | ((unsigned __int64)(v181 + 1) >> 1)
         | (((((v181 + 1) | ((unsigned __int64)(v181 + 1) >> 1)) >> 2) | (v181 + 1)
                                                                       | ((unsigned __int64)(v181 + 1) >> 1)) >> 4);
    v164 = (v182 | (v182 >> 16)) + 1;
    v163 = 16 * ((v182 | (v182 >> 16)) + 1);
  }
  else
  {
    v163 = 2048;
    v164 = 128;
  }
  operator delete(v42, 16 * v119, 8);
  *(_DWORD *)(a1 + 1448) = v164;
  v169 = (_DWORD *)sub_22300B0(v163, 8, v165, v166, v167, v168);
  v170 = *(unsigned int *)(a1 + 1448);
  *(_QWORD *)(a1 + 1440) = 0;
  *(_QWORD *)(a1 + 1432) = v169;
  for ( j = &v169[4 * v170]; j != v169; v169 += 4 )
    *v169 = -1;
LABEL_63:
  v45 = *(_BYTE **)(a1 + 1680);
  *(_QWORD *)(a1 + 1520) = 0;
  *(_QWORD *)(a1 + 1688) = 0;
  *v45 = 0;
  sub_21036C0(a1 + 1712, *(_QWORD *)(a1 + 1728));
  *(_QWORD *)(a1 + 1728) = 0;
  *(_QWORD *)(a1 + 1736) = a1 + 1720;
  *(_QWORD *)(a1 + 1744) = a1 + 1720;
  v46 = *(_DWORD *)(a1 + 1792);
  *(_QWORD *)(a1 + 1752) = 0;
  if ( !v46 )
  {
    if ( !*(_DWORD *)(a1 + 1796) )
      goto LABEL_67;
    v47 = *(__m128i **)(a1 + 1784);
    v48 = *(unsigned int *)(a1 + 1800);
    v49 = 8 * v48;
    if ( (unsigned int)v48 > 0x40 )
    {
      operator delete(v47, v49, 8);
      *(_QWORD *)(a1 + 1784) = 0;
      *(_QWORD *)(a1 + 1792) = 0;
      *(_DWORD *)(a1 + 1800) = 0;
      goto LABEL_67;
    }
    goto LABEL_188;
  }
  v113 = 4 * v46;
  v114 = *(unsigned int *)(a1 + 1800);
  v47 = *(__m128i **)(a1 + 1784);
  if ( (unsigned int)(4 * v46) < 0x40 )
    v113 = 64;
  if ( (unsigned int)v114 > v113 )
  {
    v128 = v46 - 1;
    if ( v128 )
    {
      _BitScanReverse(&v128, v128);
      v129 = (unsigned int)(1 << (33 - (v128 ^ 0x1F)));
      if ( (int)v129 < 64 )
        v129 = 64;
      if ( (_DWORD)v129 == (_DWORD)v114 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        v131 = *(__m128i **)(a1 + 1784);
        *(_QWORD *)(a1 + 1792) = 0;
        v132 = ((unsigned __int64)(8 * v129 - 8) >> 3) + 1;
        do
          *v131++ = si128;
        while ( &v47[v132 >> 1] != v131 );
        v133 = (__m128i *)((char *)v47 + 8 * (v132 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v132 & 0xFFFFFFFFFFFFFFFELL) == v132 )
          goto LABEL_67;
        goto LABEL_228;
      }
      v187 = 4 * (int)v129 / 3u;
      v188 = (((((v187 + 1) | ((unsigned __int64)(v187 + 1) >> 1)) >> 2)
             | (v187 + 1)
             | ((unsigned __int64)(v187 + 1) >> 1)
             | (((((v187 + 1) | ((unsigned __int64)(v187 + 1) >> 1)) >> 2)
               | (v187 + 1)
               | ((unsigned __int64)(v187 + 1) >> 1)) >> 4)) >> 8)
           | (((v187 + 1) | ((unsigned __int64)(v187 + 1) >> 1)) >> 2)
           | (v187 + 1)
           | ((unsigned __int64)(v187 + 1) >> 1)
           | (((((v187 + 1) | ((unsigned __int64)(v187 + 1) >> 1)) >> 2)
             | (v187 + 1)
             | ((unsigned __int64)(v187 + 1) >> 1)) >> 4);
      v153 = (v188 | (v188 >> 16)) + 1;
      v152 = 8 * ((v188 | (v188 >> 16)) + 1);
    }
    else
    {
      v152 = 1024;
      v153 = 128;
    }
    operator delete(v47, 8 * v114, 8);
    *(_DWORD *)(a1 + 1800) = v153;
    v133 = (__m128i *)sub_22300B0(v152, 8, v154, v155, v156, v157);
    v158 = *(unsigned int *)(a1 + 1800);
    *(_QWORD *)(a1 + 1792) = 0;
    *(_QWORD *)(a1 + 1784) = v133;
    v159 = 8 * v158;
    if ( v133 == (__m128i *)&v133->m128i_i8[v159] )
      goto LABEL_67;
    v160 = v133;
    v161 = ((unsigned __int64)(v159 - 8) >> 3) + 1;
    if ( v159 != 8 )
    {
      v162 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v160++ = v162;
      while ( &v133[v161 >> 1] != v160 );
      v133 = (__m128i *)((char *)v133 + 8 * (v161 & 0xFFFFFFFFFFFFFFFELL));
      if ( v161 == (v161 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_67;
    }
LABEL_228:
    v133->m128i_i64[0] = -4096;
    goto LABEL_67;
  }
  v49 = 8 * v114;
LABEL_188:
  if ( v47 != (__m128i *)&v47->m128i_i8[v49] )
  {
    v115 = v47;
    v116 = ((unsigned __int64)(v49 - 8) >> 3) + 1;
    if ( v49 == 8 )
      goto LABEL_193;
    v117 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
    do
      *v115++ = v117;
    while ( &v47[v116 >> 1] != v115 );
    v47 = (__m128i *)((char *)v47 + 8 * (v116 & 0xFFFFFFFFFFFFFFFELL));
    if ( (v116 & 0xFFFFFFFFFFFFFFFELL) != v116 )
LABEL_193:
      v47->m128i_i64[0] = -4096;
  }
  *(_QWORD *)(a1 + 1792) = 0;
LABEL_67:
  *(_DWORD *)(a1 + 1816) = 0;
  v50 = *(_QWORD *)(a1 + 1824);
  if ( v50 != *(_QWORD *)(a1 + 1832) )
    *(_QWORD *)(a1 + 1832) = v50;
  v51 = *(_DWORD *)(a1 + 1964);
  *(_QWORD *)(a1 + 1848) = 0;
  *(_QWORD *)(a1 + 1856) = 0;
  *(_DWORD *)(a1 + 1888) = 0;
  *(_QWORD *)(a1 + 1760) = 0;
  *(_QWORD *)(a1 + 1768) = &stru_10000;
  if ( v51 )
  {
    v52 = *(_DWORD *)(a1 + 1960);
    if ( v52 )
    {
      v53 = 0;
      v54 = 8LL * (unsigned int)(v52 - 1) + 8;
      do
      {
        v55 = *(_QWORD *)(a1 + 1952);
        while ( 1 )
        {
          v56 = (_QWORD *)(v55 + v53);
          v57 = *(_QWORD **)(v55 + v53);
          if ( v57 != (_QWORD *)-8LL )
          {
            if ( v57 )
              break;
          }
          v53 += 8;
          *v56 = 0;
          if ( v54 == v53 )
            goto LABEL_76;
        }
        v53 += 8;
        operator delete(v57, *v57 + 17LL, 8);
        *v56 = 0;
      }
      while ( v53 != v54 );
    }
LABEL_76:
    *(_QWORD *)(a1 + 1964) = 0;
  }
  if ( *(_DWORD *)(a1 + 2036) )
  {
    v58 = *(_DWORD *)(a1 + 2032);
    if ( v58 )
    {
      v59 = 0;
      v60 = 8LL * (unsigned int)(v58 - 1) + 8;
      do
      {
        v61 = *(_QWORD *)(a1 + 2024);
        while ( 1 )
        {
          v62 = (_QWORD *)(v61 + v59);
          v63 = *(_QWORD **)(v61 + v59);
          if ( v63 )
          {
            if ( v63 != (_QWORD *)-8LL )
              break;
          }
          v59 += 8;
          *v62 = 0;
          if ( v60 == v59 )
            goto LABEL_84;
        }
        v59 += 8;
        operator delete(v63, *v63 + 17LL, 8);
        *v62 = 0;
      }
      while ( v59 != v60 );
    }
LABEL_84:
    *(_QWORD *)(a1 + 2036) = 0;
  }
  v64 = *(_QWORD *)(a1 + 2064);
  if ( v64 )
  {
    while ( 1 )
    {
      sub_2103970(a1 + 2048, *(_QWORD **)(v64 + 24));
      v65 = *(void **)(v64 + 32);
      v66 = *(_QWORD *)(v64 + 16);
      if ( v65 == (void *)(v64 + 48) )
      {
        operator delete((void *)v64);
        if ( !v66 )
          break;
      }
      else
      {
        operator delete(v65);
        operator delete((void *)v64);
        if ( !v66 )
          break;
      }
      v64 = v66;
    }
  }
  v68 = *(_QWORD *)(a1 + 1992);
  *(_QWORD *)(a1 + 2064) = 0;
  *(_QWORD *)(a1 + 2072) = a1 + 2056;
  *(_QWORD *)(a1 + 2080) = a1 + 2056;
  *(_QWORD *)(a1 + 2088) = 0;
  if ( v68 )
  {
    while ( 1 )
    {
      sub_2103900(a1 + 1976, *(_QWORD **)(v68 + 24));
      v69 = *(void **)(v68 + 32);
      v70 = *(_QWORD *)(v68 + 16);
      if ( v69 == (void *)(v68 + 48) )
      {
        operator delete((void *)v68);
        if ( !v70 )
          break;
      }
      else
      {
        operator delete(v69);
        operator delete((void *)v68);
        if ( !v70 )
          break;
      }
      v68 = v70;
    }
  }
  v71 = *(_QWORD *)(a1 + 2112);
  *(_QWORD *)(a1 + 1992) = 0;
  *(_QWORD *)(a1 + 2000) = a1 + 1984;
  *(_QWORD *)(a1 + 2008) = a1 + 1984;
  *(_QWORD *)(a1 + 2016) = 0;
  if ( v71 )
  {
    while ( 1 )
    {
      sub_21039E0(a1 + 2096, *(_QWORD **)(v71 + 24));
      v72 = *(void **)(v71 + 32);
      v73 = *(_QWORD *)(v71 + 16);
      if ( v72 == (void *)(v71 + 48) )
      {
        operator delete((void *)v71);
        if ( !v73 )
          break;
      }
      else
      {
        operator delete(v72);
        operator delete((void *)v71);
        if ( !v73 )
          break;
      }
      v71 = v73;
    }
  }
  v74 = *(_QWORD *)(a1 + 2160);
  *(_QWORD *)(a1 + 2112) = 0;
  *(_QWORD *)(a1 + 2120) = a1 + 2104;
  *(_QWORD *)(a1 + 2128) = a1 + 2104;
  *(_QWORD *)(a1 + 2136) = 0;
  if ( v74 )
  {
    while ( 1 )
    {
      sub_2103A50(a1 + 2144, *(_QWORD **)(v74 + 24));
      v75 = *(void **)(v74 + 32);
      v76 = *(_QWORD *)(v74 + 16);
      if ( v75 == (void *)(v74 + 48) )
      {
        operator delete((void *)v74);
        if ( !v76 )
          break;
      }
      else
      {
        operator delete(v75);
        operator delete((void *)v74);
        if ( !v76 )
          break;
      }
      v74 = v76;
    }
  }
  v77 = *(_DWORD *)(a1 + 2204);
  *(_QWORD *)(a1 + 2160) = 0;
  *(_QWORD *)(a1 + 2168) = a1 + 2152;
  *(_QWORD *)(a1 + 2176) = a1 + 2152;
  *(_QWORD *)(a1 + 2184) = 0;
  if ( v77 )
  {
    v78 = *(_DWORD *)(a1 + 2200);
    if ( v78 )
    {
      v79 = 0;
      v80 = 8LL * (unsigned int)(v78 - 1) + 8;
      do
      {
        v81 = *(_QWORD *)(a1 + 2192);
        while ( 1 )
        {
          v82 = (_QWORD *)(v81 + v79);
          v83 = *(_QWORD **)(v81 + v79);
          if ( v83 )
          {
            if ( v83 != (_QWORD *)-8LL )
              break;
          }
          v79 += 8;
          *v82 = 0;
          if ( v80 == v79 )
            goto LABEL_126;
        }
        v79 += 8;
        operator delete(v83, *v83 + 17LL, 8);
        *v82 = 0;
      }
      while ( v80 != v79 );
    }
LABEL_126:
    *(_QWORD *)(a1 + 2204) = 0;
  }
  if ( *(_DWORD *)(a1 + 2228) )
  {
    v84 = *(_DWORD *)(a1 + 2224);
    if ( v84 )
    {
      v85 = 0;
      v86 = 8LL * (unsigned int)(v84 - 1) + 8;
      do
      {
        v87 = *(_QWORD *)(a1 + 2216);
        while ( 1 )
        {
          v88 = (_QWORD *)(v87 + v85);
          v89 = *(_QWORD **)(v87 + v85);
          if ( v89 )
          {
            if ( v89 != (_QWORD *)-8LL )
              break;
          }
          v85 += 8;
          *v88 = 0;
          if ( v86 == v85 )
            goto LABEL_134;
        }
        v85 += 8;
        operator delete(v89, *v89 + 17LL, 8);
        *v88 = 0;
      }
      while ( v86 != v85 );
    }
LABEL_134:
    *(_QWORD *)(a1 + 2228) = 0;
  }
  if ( *(_DWORD *)(a1 + 2372) )
  {
    v90 = *(_DWORD *)(a1 + 2368);
    if ( v90 )
    {
      v91 = 0;
      v194 = 8LL * (unsigned int)(v90 - 1) + 8;
      do
      {
        v92 = (_QWORD **)(v91 + *(_QWORD *)(a1 + 2360));
        v93 = *v92;
        if ( *v92 != (_QWORD *)-8LL && v93 )
        {
          v94 = (void **)v93[9];
          v95 = (void **)v93[8];
          v190 = *v93 + 97LL;
          if ( v94 != v95 )
          {
            do
            {
              while ( *v95 != v95 + 2 )
              {
                operator delete(*v95);
                v95 += 4;
                if ( v94 == v95 )
                  goto LABEL_143;
              }
              v95 += 4;
            }
            while ( v94 != v95 );
LABEL_143:
            v95 = (void **)v93[8];
          }
          if ( v95 )
            operator delete(v95);
          v96 = (_QWORD *)v93[6];
          v97 = (_QWORD *)v93[5];
          if ( v96 != v97 )
          {
            do
            {
              while ( 1 )
              {
                v98 = v97[3];
                v99 = v97[2];
                if ( v98 != v99 )
                {
                  do
                  {
                    if ( *(_DWORD *)(v99 + 32) > 0x40u )
                    {
                      v100 = *(void **)(v99 + 24);
                      if ( v100 )
                      {
                        v192 = v99;
                        operator delete[](v100);
                        v99 = v192;
                      }
                    }
                    v99 += 40;
                  }
                  while ( v98 != v99 );
                  v99 = v97[2];
                }
                if ( !v99 )
                  break;
                v97 += 6;
                operator delete((void *)v99);
                if ( v97 == v96 )
                  goto LABEL_155;
              }
              v97 += 6;
            }
            while ( v96 != v97 );
LABEL_155:
            v97 = (_QWORD *)v93[5];
          }
          if ( v97 )
            operator delete(v97);
          operator delete(v93, v190, 8);
        }
        *v92 = nullptr;
        v91 += 8;
      }
      while ( v194 != v91 );
    }
    *(_QWORD *)(a1 + 2372) = 0;
  }
  v101 = *(_DWORD *)(a1 + 2392);
  if ( !v101 )
  {
    if ( !*(_DWORD *)(a1 + 2396) )
      goto LABEL_169;
    v104 = *(_QWORD *)(a1 + 2384);
    v121 = *(unsigned int *)(a1 + 2400);
    v105 = 32 * v121;
    if ( (unsigned int)v121 > 0x40 )
    {
      operator delete(v104, v105, 8);
      *(_QWORD *)(a1 + 2384) = 0;
      *(_QWORD *)(a1 + 2392) = 0;
      *(_DWORD *)(a1 + 2400) = 0;
      goto LABEL_169;
    }
    goto LABEL_166;
  }
  v102 = 4 * v101;
  v103 = *(unsigned int *)(a1 + 2400);
  v104 = *(_QWORD *)(a1 + 2384);
  if ( (unsigned int)(4 * v101) < 0x40 )
    v102 = 64;
  if ( (unsigned int)v103 <= v102 )
  {
    v105 = 32 * v103;
LABEL_166:
    for ( k = v104 + v105; k != v104; *(_DWORD *)(v104 - 32) = -1 )
    {
      *(_QWORD *)(v104 + 8) = -1;
      v104 += 32;
      *(_QWORD *)(v104 - 16) = 0;
      *(_DWORD *)(v104 - 28) = -1;
    }
    *(_QWORD *)(a1 + 2392) = 0;
    goto LABEL_169;
  }
  v140 = v101 - 1;
  if ( v140 )
  {
    _BitScanReverse(&v140, v140);
    v141 = (unsigned int)(1 << (33 - (v140 ^ 0x1F)));
    if ( (int)v141 < 64 )
      v141 = 64;
    if ( (_DWORD)v141 == (_DWORD)v103 )
    {
      *(_QWORD *)(a1 + 2392) = 0;
      v142 = v104 + 32 * v141;
      do
      {
        *(_DWORD *)v104 = -1;
        v104 += 32;
        *(_DWORD *)(v104 - 28) = -1;
        *(_QWORD *)(v104 - 24) = -1;
        *(_QWORD *)(v104 - 16) = 0;
      }
      while ( v142 != v104 );
      goto LABEL_169;
    }
    v185 = 4 * (int)v141 / 3u;
    v186 = (((((v185 + 1) | ((unsigned __int64)(v185 + 1) >> 1)) >> 2)
           | (v185 + 1)
           | ((unsigned __int64)(v185 + 1) >> 1)
           | (((((v185 + 1) | ((unsigned __int64)(v185 + 1) >> 1)) >> 2)
             | (v185 + 1)
             | ((unsigned __int64)(v185 + 1) >> 1)) >> 4)) >> 8)
         | (((v185 + 1) | ((unsigned __int64)(v185 + 1) >> 1)) >> 2)
         | (v185 + 1)
         | ((unsigned __int64)(v185 + 1) >> 1)
         | (((((v185 + 1) | ((unsigned __int64)(v185 + 1) >> 1)) >> 2) | (v185 + 1)
                                                                       | ((unsigned __int64)(v185 + 1) >> 1)) >> 4);
    v144 = (v186 | (v186 >> 16)) + 1;
    v143 = 32 * ((v186 | (v186 >> 16)) + 1);
  }
  else
  {
    v143 = 4096;
    v144 = 128;
  }
  operator delete(v104, 32 * v103, 8);
  *(_DWORD *)(a1 + 2400) = v144;
  v149 = (_DWORD *)sub_22300B0(v143, 8, v145, v146, v147, v148);
  v150 = *(unsigned int *)(a1 + 2400);
  *(_QWORD *)(a1 + 2392) = 0;
  *(_QWORD *)(a1 + 2384) = v149;
  for ( m = &v149[8 * v150]; m != v149; *((_QWORD *)v149 - 2) = 0 )
  {
    *v149 = -1;
    v149 += 8;
    *(v149 - 7) = -1;
    *((_QWORD *)v149 - 3) = -1;
  }
LABEL_169:
  v107 = *(_DWORD *)(a1 + 2416);
  if ( !v107 )
  {
    if ( !*(_DWORD *)(a1 + 2420) )
      goto LABEL_175;
    v108 = *(_QWORD **)(a1 + 2408);
    v109 = *(unsigned int *)(a1 + 2424);
    v110 = 2 * v109;
    if ( (unsigned int)v109 > 0x40 )
    {
      operator delete(v108, v110 * 8, 8);
      *(_QWORD *)(a1 + 2408) = 0;
      *(_QWORD *)(a1 + 2416) = 0;
      *(_DWORD *)(a1 + 2424) = 0;
      goto LABEL_175;
    }
    goto LABEL_172;
  }
  v126 = 4 * v107;
  v127 = *(unsigned int *)(a1 + 2424);
  v108 = *(_QWORD **)(a1 + 2408);
  if ( (unsigned int)(4 * v107) < 0x40 )
    v126 = 64;
  if ( (unsigned int)v127 <= v126 )
  {
    v110 = 2 * v127;
LABEL_172:
    for ( n = &v108[v110]; n != v108; *(v108 - 1) = 0 )
    {
      *v108 = -1;
      v108 += 2;
    }
    *(_QWORD *)(a1 + 2416) = 0;
    goto LABEL_175;
  }
  v137 = v107 - 1;
  if ( v137 )
  {
    _BitScanReverse(&v137, v137);
    v138 = 1 << (33 - (v137 ^ 0x1F));
    if ( v138 < 64 )
      v138 = 64;
    if ( (_DWORD)v127 == v138 )
    {
      *(_QWORD *)(a1 + 2416) = 0;
      v139 = &v108[2 * v127];
      do
      {
        *v108 = -1;
        v108 += 2;
        *(v108 - 1) = 0;
      }
      while ( v139 != v108 );
      goto LABEL_175;
    }
    v183 = 4 * v138 / 3u;
    v184 = (((((v183 + 1) | ((unsigned __int64)(v183 + 1) >> 1)) >> 2)
           | (v183 + 1)
           | ((unsigned __int64)(v183 + 1) >> 1)
           | (((((v183 + 1) | ((unsigned __int64)(v183 + 1) >> 1)) >> 2)
             | (v183 + 1)
             | ((unsigned __int64)(v183 + 1) >> 1)) >> 4)) >> 8)
         | (((v183 + 1) | ((unsigned __int64)(v183 + 1) >> 1)) >> 2)
         | (v183 + 1)
         | ((unsigned __int64)(v183 + 1) >> 1)
         | (((((v183 + 1) | ((unsigned __int64)(v183 + 1) >> 1)) >> 2) | (v183 + 1)
                                                                       | ((unsigned __int64)(v183 + 1) >> 1)) >> 4);
    v173 = (v184 | (v184 >> 16)) + 1;
    v172 = 16 * ((v184 | (v184 >> 16)) + 1);
  }
  else
  {
    v172 = 2048;
    v173 = 128;
  }
  operator delete(v108, 16 * v127, 8);
  *(_DWORD *)(a1 + 2424) = v173;
  v178 = (_QWORD *)sub_22300B0(v172, 8, v174, v175, v176, v177);
  v179 = *(unsigned int *)(a1 + 2424);
  *(_QWORD *)(a1 + 2416) = 0;
  *(_QWORD *)(a1 + 2408) = v178;
  for ( ii = &v178[2 * v179]; ii != v178; *(v178 - 1) = 0 )
  {
    *v178 = -1;
    v178 += 2;
  }
LABEL_175:
  *(_BYTE *)(a1 + 2352) = 0;
  *(_WORD *)(a1 + 1776) = 0;
  *(_DWORD *)(a1 + 1780) = 0;
  return 0;
}
