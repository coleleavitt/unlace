__int64 __fastcall sub_FD19D0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 i; // rdx
  __int64 *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // rdi
  __int64 v19; // rsi
  int v20; // edx
  __int64 v21; // rsi
  _QWORD *v22; // rax
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 *v27; // r12
  unsigned __int64 v28; // rdi
  int v29; // edx
  __int64 *v30; // rsi
  __int64 v31; // r8
  __int64 v32; // rbp
  __int64 *v33; // r13
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __m128i *v36; // rax
  __int64 v37; // rcx
  int v38; // edi
  __int64 v39; // rcx
  __int64 *v40; // r8
  __m128i *v41; // r9
  unsigned __int64 v42; // rdx
  __int64 *v43; // rcx
  __int64 *v44; // r11
  int mm; // ebp
  __int64 v46; // rcx
  int v47; // r14d
  __int64 *v48; // r9
  unsigned int nn; // edx
  __int64 *v50; // r10
  __int64 v51; // r15
  __int64 *v52; // rsi
  int v53; // edi
  int kk; // edx
  __int64 *v55; // rax
  __int64 v56; // r8
  int v57; // edx
  bool v58; // zf
  __int64 v59; // r14
  __int64 *v60; // r13
  __int64 *v61; // rsi
  int v62; // r10d
  _QWORD *v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __m128i *v66; // rsi
  unsigned __int64 v67; // rdx
  int v68; // edx
  unsigned int v69; // edx
  __int64 v70; // r8
  __int64 v71; // rax
  __m128i *v72; // rax
  __int64 v73; // rcx
  int v74; // edi
  __int64 v75; // rcx
  __int64 *v76; // r8
  __m128i *v77; // r9
  unsigned __int64 v78; // rdx
  __int64 *v79; // rcx
  __int64 *v80; // r11
  int v81; // ebp
  __int64 v82; // rcx
  int v83; // r14d
  __int64 *v84; // r9
  unsigned int jj; // edx
  __int64 *v86; // r10
  __int64 v87; // r15
  int v88; // edi
  int ii; // edx
  __int64 v90; // r8
  int v91; // edx
  unsigned int v92; // edx
  __int64 v93; // rcx
  __int64 v94; // rcx
  unsigned __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rdi
  __int64 *v98; // rax
  int v99; // edi
  int v100; // edx
  __int64 v101; // rcx
  __int64 v102; // rax
  unsigned __int64 v103; // rax
  __m128i *v104; // rax
  __int64 v105; // r8
  int v106; // r10d
  __int64 v107; // r8
  __m128i *v108; // rcx
  unsigned __int64 v109; // rdi
  __m128i v110; // xmm0
  __int64 *v111; // rdx
  __int64 *v112; // r9
  int v113; // r15d
  __int64 v114; // rcx
  int v115; // r11d
  __int64 *v116; // rdi
  unsigned int j; // edx
  __int64 *v118; // r8
  __int64 v119; // r14
  int v120; // ecx
  int k; // edx
  _QWORD *v122; // rsi
  __int64 v123; // rcx
  __int64 v124; // rcx
  __m128i *v125; // rsi
  unsigned __int64 v126; // rdx
  __m128i si128; // xmm0
  unsigned int v128; // edx
  int v129; // edx
  unsigned __int64 v130; // rax
  __int64 v131; // rax
  __m128i *v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rsi
  int v135; // r14d
  __int64 v136; // rdx
  __int64 *v137; // r15
  __m128i *v138; // rdi
  unsigned __int64 v139; // rcx
  __m128i v140; // xmm0
  __int64 *v141; // rdx
  __int64 *v142; // r11
  __int64 v143; // rdx
  unsigned int v144; // ecx
  __int64 *v145; // rdi
  __int64 v146; // r8
  int v147; // ecx
  int n; // edx
  __int64 v149; // rsi
  int v150; // edx
  __int64 *v151; // r9
  int v152; // r10d
  __int64 v153; // rcx
  __int64 v154; // rcx
  __m128i *v155; // rsi
  unsigned __int64 v156; // rdx
  __m128i v157; // xmm0
  __int64 v158; // [rsp+8h] [rbp-60h]
  __int64 v159; // [rsp+8h] [rbp-60h]
  __int64 *v160; // [rsp+10h] [rbp-58h]
  unsigned int v161; // [rsp+10h] [rbp-58h]
  int m; // [rsp+10h] [rbp-58h]
  __int64 *v163; // [rsp+18h] [rbp-50h]
  __m128 v164[4]; // [rsp+20h] [rbp-48h] BYREF

  for ( i = a1; ; i = *(_QWORD *)(i + 40) )
  {
    v9 = *(__int64 **)(i + 40);
    if ( !v9 )
      break;
  }
  if ( !a2 )
  {
    v11 = *(_QWORD *)(i + 1304);
    v12 = v11 + 8LL * *(unsigned int *)(i + 1312);
    if ( v12 != v11 )
    {
      do
      {
LABEL_10:
        v13 = *(_QWORD **)v11;
        if ( a2 )
        {
          if ( v13 == a2 )
            return 1;
          v14 = a2;
          while ( 1 )
          {
            v14 = (_QWORD *)v14[5];
            if ( !v14 )
              break;
            if ( v13 == v14 )
              return 1;
          }
        }
        v11 += 8;
      }
      while ( v12 != v11 );
      if ( a2 )
        goto LABEL_17;
    }
    v17 = 46794944;
    goto LABEL_21;
  }
  v10 = a2;
  if ( (_QWORD *)i == a2 )
    return 1;
  while ( 1 )
  {
    v10 = (_QWORD *)v10[5];
    if ( !v10 )
      break;
    if ( (_QWORD *)i == v10 )
      return 1;
  }
  v11 = *(_QWORD *)(i + 1304);
  v12 = v11 + 8LL * *(unsigned int *)(i + 1312);
  if ( v11 != v12 )
    goto LABEL_10;
LABEL_17:
  v11 = a2[1];
  v15 = *a2;
  if ( v11 == 11
    && *(_QWORD *)v15 == 0x67696C615F78616DLL
    && *(_WORD *)(v15 + 8) == 24430
    && *(_BYTE *)(v15 + 10) == 116 )
  {
    v16 = (__int64 *)a2[5];
    if ( v16 )
    {
      v19 = *v16;
      if ( v16[1] == 15
        && *(_QWORD *)v19 == 0x6E69746C6975425FLL
        && *(_DWORD *)(v19 + 8) == 1685353311
        && *(_WORD *)(v19 + 12) == 25956
        && *(_BYTE *)(v19 + 14) == 102
        && !v16[5] )
      {
        return 1;
      }
    }
  }
  else
  {
    v16 = (__int64 *)a2[5];
  }
  v17 = (__int64)v16;
  if ( v11 != 22
    || (v11 = *(_QWORD *)v15 ^ 0x6E69746C6975425FLL, v11 | *(_QWORD *)(v15 + 8) ^ 0x5F6665646474735FLL)
    || *(_DWORD *)(v15 + 16) != 1953393015
    || *(_WORD *)(v15 + 20) != 29791 )
  {
LABEL_21:
    if ( !v17 && !sub_990D60((__int64)a2, "ptrauth") )
      return 1;
    goto LABEL_22;
  }
  if ( !v16 )
    return 1;
LABEL_22:
  if ( (*(_BYTE *)(a1 + 905) & 0x20) == 0 )
    return 0;
  v20 = *(_DWORD *)(a1 + 1552);
  if ( v20 )
  {
    v59 = *(unsigned int *)(a1 + 1560);
    v60 = *(__int64 **)(a1 + 1544);
    v159 = a1 + 1544;
    if ( (_DWORD)v59 )
    {
      a5 = (unsigned int)(v59 - 1);
      v161 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
      v61 = &v60[(unsigned int)a5 & v161];
      v62 = a5 & v161;
      v63 = (_QWORD *)*v61;
      if ( a2 == (_QWORD *)*v61 )
      {
LABEL_97:
        sub_FD0910(v164, v61, &v60[v59], v159, 1);
        return 0;
      }
      v98 = nullptr;
      v99 = 1;
      if ( v63 == (_QWORD *)-4096LL )
        goto LABEL_184;
      while ( 1 )
      {
        if ( v63 == (_QWORD *)-8192LL && !v98 )
          v98 = v61;
        a6 = (unsigned int)(v99 + 1);
        v62 = a5 & (v99 + v62);
        v61 = &v60[v62];
        v63 = (_QWORD *)*v61;
        if ( a2 == (_QWORD *)*v61 )
          goto LABEL_97;
        if ( v63 == (_QWORD *)-4096LL )
          break;
        ++v99;
      }
      if ( !v98 )
LABEL_184:
        v98 = v61;
      v100 = v20 + 1;
      v11 = (unsigned int)(3 * v59);
      if ( 4 * v100 < (unsigned int)v11 )
      {
        v101 = (unsigned int)(v59 - *(_DWORD *)(a1 + 1556) - v100);
        if ( (unsigned int)v101 > (unsigned int)v59 >> 3 )
        {
LABEL_187:
          v58 = *v98 == -4096;
          *(_DWORD *)(a1 + 1552) = v100;
          if ( !v58 )
            --*(_DWORD *)(a1 + 1556);
          *v98 = (__int64)a2;
          sub_FD0910(v164, v98, &v60[v59], v159, 1);
          v102 = *(unsigned int *)(a1 + 1576);
          if ( v102 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1580) )
          {
            sub_22134E0(a1 + 1568, a1 + 1584, v102 + 1, 8);
            v102 = *(unsigned int *)(a1 + 1576);
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 1568) + 8 * v102) = a2;
          ++*(_DWORD *)(a1 + 1576);
          return 0;
        }
        v103 = ((((((((((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
                    | (unsigned int)a5
                    | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 4)
                  | (((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
                  | (unsigned int)a5
                  | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 8)
                | (((((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
                  | (unsigned int)a5
                  | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 4)
                | (((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
                | (unsigned int)a5
                | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 16)
              | (((((((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
                  | (unsigned int)a5
                  | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 4)
                | (((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
                | (unsigned int)a5
                | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 8)
              | (((((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
                | (unsigned int)a5
                | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 4)
              | (((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
              | (unsigned int)a5
              | ((unsigned __int64)(unsigned int)a5 >> 1))
             + 1;
        if ( (unsigned int)v103 < 0x40 )
          LODWORD(v103) = 64;
        *(_DWORD *)(a1 + 1560) = v103;
        v104 = (__m128i *)sub_220C370(8LL * (unsigned int)v103, 8, 64, v101, a5, a6);
        *(_QWORD *)(a1 + 1544) = v104;
        if ( !v60 )
        {
          v123 = *(unsigned int *)(a1 + 1560);
          *(_QWORD *)(a1 + 1552) = 0;
          v124 = 8 * v123;
          if ( v104 != (__m128i *)&v104->m128i_i8[v124] )
          {
            v125 = v104;
            v126 = ((unsigned __int64)(v124 - 8) >> 3) + 1;
            if ( v124 == 8 )
              goto LABEL_224;
            si128 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
            do
              *v125++ = si128;
            while ( &v104[v126 >> 1] != v125 );
            v104 = (__m128i *)((char *)v104 + 8 * (v126 & 0xFFFFFFFFFFFFFFFELL));
            if ( (v126 & 0xFFFFFFFFFFFFFFFELL) != v126 )
LABEL_224:
              v104->m128i_i64[0] = -4096;
          }
          goto LABEL_210;
        }
        v105 = *(unsigned int *)(a1 + 1560);
        *(_QWORD *)(a1 + 1552) = 0;
        v106 = v105;
        v107 = 8 * v105;
        v163 = &v60[(unsigned int)v59];
        if ( v104 != (__m128i *)&v104->m128i_i8[v107] )
        {
          v108 = v104;
          v109 = ((unsigned __int64)(v107 - 8) >> 3) + 1;
          if ( v107 == 8 )
          {
            v111 = (__int64 *)v104;
LABEL_200:
            *v111 = -4096;
            goto LABEL_201;
          }
          v110 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
          do
            *v108++ = v110;
          while ( &v104[v109 >> 1] != v108 );
          v111 = &v104->m128i_i64[v109 & 0xFFFFFFFFFFFFFFFELL];
          if ( (v109 & 0xFFFFFFFFFFFFFFFELL) != v109 )
            goto LABEL_200;
        }
LABEL_201:
        v112 = v60;
        v113 = v106 - 1;
        do
        {
          v114 = *v112;
          if ( *v112 != -4096 && v114 != -8192 )
          {
            if ( !v106 )
            {
              *(_QWORD *)&dword_0 = *v112;
              BUG();
            }
            v115 = 1;
            v116 = nullptr;
            for ( j = v113 & (((unsigned int)v114 >> 9) ^ ((unsigned int)v114 >> 4)); ; j = v113 & v128 )
            {
              v118 = &v104->m128i_i64[j];
              v119 = *v118;
              if ( v114 == *v118 )
                break;
              if ( v119 == -4096 )
              {
                if ( v116 )
                  v118 = v116;
                break;
              }
              if ( v119 != -8192 || v116 )
                v118 = v116;
              v128 = v115 + j;
              v116 = v118;
              ++v115;
            }
            ++*(_DWORD *)(a1 + 1552);
            *v118 = v114;
          }
          ++v112;
        }
        while ( v163 != v112 );
        operator delete();
LABEL_210:
        v59 = *(unsigned int *)(a1 + 1560);
        if ( (_DWORD)v59 )
        {
          v120 = 1;
          v60 = *(__int64 **)(a1 + 1544);
          for ( k = (v59 - 1) & v161; ; k = (v59 - 1) & v129 )
          {
            v98 = &v60[k];
            v122 = (_QWORD *)*v98;
            if ( a2 == (_QWORD *)*v98 )
              break;
            if ( v122 == (_QWORD *)-4096LL )
              goto LABEL_229;
            if ( v9 || v122 != (_QWORD *)-8192LL )
              v98 = v9;
            v129 = v120 + k;
            v9 = v98;
            ++v120;
          }
LABEL_213:
          v100 = *(_DWORD *)(a1 + 1552) + 1;
          goto LABEL_187;
        }
        goto LABEL_290;
      }
    }
    v130 = (((((((unsigned int)(2 * v59 - 1) | ((unsigned __int64)(unsigned int)(2 * v59 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v59 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v59 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v59 - 1) | ((unsigned __int64)(unsigned int)(2 * v59 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v59 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v59 - 1) >> 1)) >> 8)
         | (((((unsigned int)(2 * v59 - 1) | ((unsigned __int64)(unsigned int)(2 * v59 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v59 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v59 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v59 - 1) | ((unsigned __int64)(unsigned int)(2 * v59 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v59 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v59 - 1) >> 1);
    v131 = ((v130 >> 16) | v130) + 1;
    if ( (unsigned int)v131 < 0x40 )
      LODWORD(v131) = 64;
    *(_DWORD *)(a1 + 1560) = v131;
    v132 = (__m128i *)sub_220C370(8LL * (unsigned int)v131, 8, 64, v11, a5, a6);
    *(_QWORD *)(a1 + 1544) = v132;
    if ( !v60 )
    {
      v153 = *(unsigned int *)(a1 + 1560);
      *(_QWORD *)(a1 + 1552) = 0;
      v154 = 8 * v153;
      if ( v132 != (__m128i *)&v132->m128i_i8[v154] )
      {
        v155 = v132;
        v156 = ((unsigned __int64)(v154 - 8) >> 3) + 1;
        if ( v154 == 8 )
          goto LABEL_286;
        v157 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
        do
          *v155++ = v157;
        while ( v155 != &v132[v156 >> 1] );
        v132 = (__m128i *)((char *)v132 + 8 * (v156 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v156 & 0xFFFFFFFFFFFFFFFELL) != v156 )
LABEL_286:
          v132->m128i_i64[0] = -4096;
      }
      goto LABEL_261;
    }
    v133 = *(unsigned int *)(a1 + 1560);
    *(_QWORD *)(a1 + 1552) = 0;
    v134 = (unsigned int)v59;
    v135 = v133;
    v136 = 8 * v133;
    v137 = &v60[v134];
    if ( v132 != (__m128i *)&v132->m128i_i8[v136] )
    {
      v138 = v132;
      v139 = ((unsigned __int64)(v136 - 8) >> 3) + 1;
      if ( v136 == 8 )
      {
        v141 = (__int64 *)v132;
      }
      else
      {
        v140 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
        do
          *v138++ = v140;
        while ( &v132[v139 >> 1] != v138 );
        v141 = &v132->m128i_i64[v139 & 0xFFFFFFFFFFFFFFFELL];
        if ( (v139 & 0xFFFFFFFFFFFFFFFELL) == v139 )
          goto LABEL_253;
      }
      *v141 = -4096;
    }
LABEL_253:
    v142 = v60;
    for ( m = v135 - 1; v137 != v142; ++v142 )
    {
      v143 = *v142;
      if ( *v142 != -8192 && v143 != -4096 )
      {
        if ( !v135 )
        {
          *(_QWORD *)&dword_0 = *v142;
          BUG();
        }
        v144 = m & (((unsigned int)v143 >> 9) ^ ((unsigned int)v143 >> 4));
        v145 = &v132->m128i_i64[v144];
        v146 = *v145;
        if ( *v145 != v143 )
        {
          v151 = nullptr;
          v152 = 1;
          if ( v146 != -4096 )
          {
            while ( 1 )
            {
              if ( v146 == -8192 && !v151 )
                v151 = v145;
              v144 = m & (v152 + v144);
              v145 = &v132->m128i_i64[v144];
              v146 = *v145;
              if ( v143 == *v145 )
                break;
              if ( v146 == -4096 )
              {
                if ( v151 )
                  v145 = v151;
                break;
              }
              ++v152;
            }
          }
        }
        ++*(_DWORD *)(a1 + 1552);
        *v145 = v143;
      }
    }
    operator delete();
LABEL_261:
    v59 = *(unsigned int *)(a1 + 1560);
    if ( (_DWORD)v59 )
    {
      v147 = 1;
      v60 = *(__int64 **)(a1 + 1544);
      for ( n = (v59 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)); ; n = (v59 - 1) & v150 )
      {
        v98 = &v60[n];
        v149 = *v98;
        if ( a2 == (_QWORD *)*v98 )
          break;
        if ( v149 == -4096 )
        {
LABEL_229:
          if ( v9 )
            v98 = v9;
          v100 = *(_DWORD *)(a1 + 1552) + 1;
          goto LABEL_187;
        }
        if ( v149 != -8192 || v9 )
          v98 = v9;
        v150 = v147 + n;
        v9 = v98;
        ++v147;
      }
      goto LABEL_213;
    }
LABEL_290:
    ++*(_DWORD *)(a1 + 1552);
    BUG();
  }
  v21 = *(unsigned int *)(a1 + 1576);
  v22 = *(_QWORD **)(a1 + 1568);
  v23 = &v22[v21];
  v24 = (8 * v21) >> 5;
  if ( !v24 )
    goto LABEL_57;
  if ( a2 == (_QWORD *)*v22 )
    goto LABEL_93;
  if ( a2 == (_QWORD *)v22[1] )
  {
    ++v22;
  }
  else
  {
    if ( a2 != (_QWORD *)v22[2] )
    {
      v24 = (__int64)&v22[4 * v24];
      if ( a2 == (_QWORD *)v22[3] )
      {
        v22 += 3;
        goto LABEL_93;
      }
      while ( v22 + 4 != (_QWORD *)v24 )
      {
        if ( a2 == (_QWORD *)v22[4] )
        {
          v22 += 4;
          goto LABEL_93;
        }
        if ( a2 == (_QWORD *)v22[5] )
        {
          v22 += 5;
          goto LABEL_93;
        }
        if ( a2 == (_QWORD *)v22[6] )
        {
          v22 += 6;
          goto LABEL_93;
        }
        if ( a2 == (_QWORD *)v22[7] )
        {
          v22 += 7;
          goto LABEL_93;
        }
        v22 += 4;
      }
      v22 = (_QWORD *)v24;
LABEL_57:
      v25 = v23 - v22;
      if ( v25 != 2 )
      {
        if ( v25 != 3 )
        {
          if ( v25 != 1 )
          {
LABEL_60:
            if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1580) )
            {
              sub_22134E0(a1 + 1568, a1 + 1584, v21 + 1, 8);
              v23 = (_QWORD *)(*(_QWORD *)(a1 + 1568) + 8LL * *(unsigned int *)(a1 + 1576));
            }
            *v23 = a2;
            v26 = (unsigned int)(*(_DWORD *)(a1 + 1576) + 1);
            *(_DWORD *)(a1 + 1576) = v26;
            if ( (unsigned int)v26 <= 2 )
              return 0;
            v27 = *(__int64 **)(a1 + 1568);
            v160 = &v27[v26];
            v158 = a1 + 1544;
            while ( 1 )
            {
              v32 = *(unsigned int *)(a1 + 1560);
              v33 = *(__int64 **)(a1 + 1544);
              if ( !(_DWORD)v32 )
                goto LABEL_68;
              v24 = *v27;
              v28 = (unsigned int)(v32 - 1);
              v29 = v28 & (((unsigned int)*v27 >> 9) ^ ((unsigned int)*v27 >> 4));
              v30 = &v33[v29];
              v31 = *v30;
              if ( *v30 != *v27 )
                break;
LABEL_65:
              sub_FD0910(v164, v30, &v33[v32], v158, 1);
LABEL_66:
              if ( v160 == ++v27 )
                return 0;
            }
            v55 = nullptr;
            a6 = 1;
            if ( v31 == -4096 )
              goto LABEL_131;
            while ( 1 )
            {
              if ( !v55 && v31 == -8192 )
                v55 = v30;
              v29 = v28 & (a6 + v29);
              v30 = &v33[v29];
              v31 = *v30;
              if ( v24 == *v30 )
                goto LABEL_65;
              if ( v31 == -4096 )
                break;
              a6 = (unsigned int)(a6 + 1);
            }
            if ( !v55 )
LABEL_131:
              v55 = v30;
            v57 = *(_DWORD *)(a1 + 1552) + 1;
            a5 = (unsigned int)(4 * v57);
            if ( (unsigned int)a5 < 3 * (int)v32 )
            {
              v70 = (unsigned int)v32 >> 3;
              if ( (int)v32 - *(_DWORD *)(a1 + 1556) - v57 > (unsigned int)v70 )
                goto LABEL_89;
              v71 = (((((((((v28 | (v28 >> 1)) >> 2) | v28 | (v28 >> 1)) >> 4)
                       | ((v28 | (v28 >> 1)) >> 2)
                       | v28
                       | (v28 >> 1)) >> 8)
                     | ((((v28 | (v28 >> 1)) >> 2) | v28 | (v28 >> 1)) >> 4)
                     | ((v28 | (v28 >> 1)) >> 2)
                     | v28
                     | (v28 >> 1)) >> 16)
                   | ((((((v28 | (v28 >> 1)) >> 2) | v28 | (v28 >> 1)) >> 4)
                     | ((v28 | (v28 >> 1)) >> 2)
                     | v28
                     | (v28 >> 1)) >> 8)
                   | ((((v28 | (v28 >> 1)) >> 2) | v28 | (v28 >> 1)) >> 4)
                   | ((v28 | (v28 >> 1)) >> 2)
                   | v28
                   | (v28 >> 1))
                  + 1;
              if ( (unsigned int)v71 < 0x40 )
                LODWORD(v71) = 64;
              *(_DWORD *)(a1 + 1560) = v71;
              v72 = (__m128i *)sub_220C370(8LL * (unsigned int)v71, 8, 64, v24, v70, a6);
              *(_QWORD *)(a1 + 1544) = v72;
              if ( !v33 )
              {
                v93 = *(unsigned int *)(a1 + 1560);
                *(_QWORD *)(a1 + 1552) = 0;
                v94 = 8 * v93;
                if ( v72 != (__m128i *)&v72->m128i_i8[v94] )
                {
                  v95 = ((unsigned __int64)(v94 - 8) >> 3) + 1;
                  if ( v94 == 8 )
                    goto LABEL_172;
                  v96 = 0;
                  do
                  {
                    v97 = v96++;
                    v72[v97] = _mm_load_si128((const __m128i *)&xmmword_2384C40);
                  }
                  while ( v96 != v95 >> 1 );
                  v72 = (__m128i *)((char *)v72 + 8 * (v95 & 0xFFFFFFFFFFFFFFFELL));
                  if ( (v95 & 0xFFFFFFFFFFFFFFFELL) != v95 )
LABEL_172:
                    v72->m128i_i64[0] = -4096;
                }
LABEL_151:
                v32 = *(unsigned int *)(a1 + 1560);
                if ( !(_DWORD)v32 )
                {
LABEL_287:
                  ++*(_DWORD *)(a1 + 1552);
                  BUG();
                }
                v24 = *v27;
                v52 = nullptr;
                v88 = 1;
                v33 = *(__int64 **)(a1 + 1544);
                for ( ii = (v32 - 1) & (((unsigned int)*v27 >> 9) ^ ((unsigned int)*v27 >> 4)); ; ii = (v32 - 1) & v91 )
                {
                  v55 = &v33[ii];
                  v90 = *v55;
                  if ( v24 == *v55 )
                    break;
                  if ( v90 == -4096 )
                  {
LABEL_108:
                    if ( v52 )
                      v55 = v52;
                    v57 = *(_DWORD *)(a1 + 1552) + 1;
                    goto LABEL_89;
                  }
                  if ( v52 || v90 != -8192 )
                    v55 = v52;
                  v91 = v88 + ii;
                  v52 = v55;
                  ++v88;
                }
                goto LABEL_88;
              }
              v73 = *(unsigned int *)(a1 + 1560);
              *(_QWORD *)(a1 + 1552) = 0;
              v74 = v73;
              v75 = 8 * v73;
              v76 = &v33[(unsigned int)v32];
              if ( v72 != (__m128i *)&v72->m128i_i8[v75] )
              {
                v77 = v72;
                v78 = ((unsigned __int64)(v75 - 8) >> 3) + 1;
                if ( v75 == 8 )
                {
                  v79 = (__int64 *)v72;
LABEL_141:
                  *v79 = -4096;
                  goto LABEL_142;
                }
                do
                {
                  ++v77;
                  v77[-1] = _mm_load_si128((const __m128i *)&xmmword_2384C40);
                }
                while ( v77 != &v72[v78 >> 1] );
                v79 = &v72->m128i_i64[v78 & 0xFFFFFFFFFFFFFFFELL];
                if ( (v78 & 0xFFFFFFFFFFFFFFFELL) != v78 )
                  goto LABEL_141;
              }
LABEL_142:
              v80 = v33;
              v81 = v74 - 1;
              do
              {
                v82 = *v80;
                if ( *v80 != -8192 && v82 != -4096 )
                {
                  if ( !v74 )
                  {
                    *(_QWORD *)&dword_0 = *v80;
                    BUG();
                  }
                  v83 = 1;
                  v84 = nullptr;
                  for ( jj = v81 & (((unsigned int)v82 >> 9) ^ ((unsigned int)v82 >> 4)); ; jj = v81 & v92 )
                  {
                    v86 = &v72->m128i_i64[jj];
                    v87 = *v86;
                    if ( v82 == *v86 )
                      break;
                    if ( v87 == -4096 )
                    {
                      if ( v84 )
                        v86 = v84;
                      break;
                    }
                    if ( v87 != -8192 || v84 )
                      v86 = v84;
                    v92 = v83 + jj;
                    v84 = v86;
                    ++v83;
                  }
                  ++*(_DWORD *)(a1 + 1552);
                  *v86 = v82;
                }
                ++v80;
              }
              while ( v76 != v80 );
              operator delete();
              goto LABEL_151;
            }
LABEL_68:
            v34 = (((((((unsigned int)(2 * v32 - 1) | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v32 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v32 - 1) | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v32 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 8)
                | (((((unsigned int)(2 * v32 - 1) | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v32 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v32 - 1) | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v32 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1);
            v35 = ((v34 >> 16) | v34) + 1;
            if ( (unsigned int)v35 < 0x40 )
              LODWORD(v35) = 64;
            *(_DWORD *)(a1 + 1560) = v35;
            v36 = (__m128i *)sub_220C370(8LL * (unsigned int)v35, 8, 64, v24, a5, a6);
            *(_QWORD *)(a1 + 1544) = v36;
            if ( !v33 )
            {
              v64 = *(unsigned int *)(a1 + 1560);
              *(_QWORD *)(a1 + 1552) = 0;
              v65 = 8 * v64;
              if ( v36 != (__m128i *)&v36->m128i_i8[v65] )
              {
                v66 = v36;
                v67 = ((unsigned __int64)(v65 - 8) >> 3) + 1;
                if ( v65 == 8 )
                  goto LABEL_120;
                do
                {
                  ++v66;
                  v66[-1] = _mm_load_si128((const __m128i *)&xmmword_2384C40);
                }
                while ( &v36[v67 >> 1] != v66 );
                v36 = (__m128i *)((char *)v36 + 8 * (v67 & 0xFFFFFFFFFFFFFFFELL));
                if ( (v67 & 0xFFFFFFFFFFFFFFFELL) != v67 )
LABEL_120:
                  v36->m128i_i64[0] = -4096;
              }
LABEL_85:
              v32 = *(unsigned int *)(a1 + 1560);
              if ( !(_DWORD)v32 )
                goto LABEL_287;
              v24 = *v27;
              v52 = nullptr;
              v53 = 1;
              v33 = *(__int64 **)(a1 + 1544);
              for ( kk = (v32 - 1) & (((unsigned int)*v27 >> 9) ^ ((unsigned int)*v27 >> 4)); ; kk = (v32 - 1) & v68 )
              {
                v55 = &v33[kk];
                v56 = *v55;
                if ( v24 == *v55 )
                  break;
                if ( v56 == -4096 )
                  goto LABEL_108;
                if ( v56 != -8192 || v52 )
                  v55 = v52;
                v68 = v53 + kk;
                v52 = v55;
                ++v53;
              }
LABEL_88:
              v57 = *(_DWORD *)(a1 + 1552) + 1;
LABEL_89:
              v58 = *v55 == -4096;
              *(_DWORD *)(a1 + 1552) = v57;
              if ( !v58 )
                --*(_DWORD *)(a1 + 1556);
              *v55 = v24;
              sub_FD0910(v164, v55, &v33[v32], v158, 1);
              goto LABEL_66;
            }
            v37 = *(unsigned int *)(a1 + 1560);
            *(_QWORD *)(a1 + 1552) = 0;
            v38 = v37;
            v39 = 8 * v37;
            v40 = &v33[(unsigned int)v32];
            if ( v36 != (__m128i *)&v36->m128i_i8[v39] )
            {
              v41 = v36;
              v42 = ((unsigned __int64)(v39 - 8) >> 3) + 1;
              if ( v39 == 8 )
              {
                v43 = (__int64 *)v36;
              }
              else
              {
                do
                {
                  ++v41;
                  v41[-1] = _mm_load_si128((const __m128i *)&xmmword_2384C40);
                }
                while ( v41 != &v36[v42 >> 1] );
                v43 = &v36->m128i_i64[v42 & 0xFFFFFFFFFFFFFFFELL];
                if ( (v42 & 0xFFFFFFFFFFFFFFFELL) == v42 )
                  goto LABEL_76;
              }
              *v43 = -4096;
            }
LABEL_76:
            v44 = v33;
            for ( mm = v38 - 1; v40 != v44; ++v44 )
            {
              v46 = *v44;
              if ( *v44 != -8192 && v46 != -4096 )
              {
                if ( !v38 )
                {
                  *(_QWORD *)&dword_0 = *v44;
                  BUG();
                }
                v47 = 1;
                v48 = nullptr;
                for ( nn = mm & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4)); ; nn = mm & v69 )
                {
                  v50 = &v36->m128i_i64[nn];
                  v51 = *v50;
                  if ( v46 == *v50 )
                    break;
                  if ( v51 == -4096 )
                  {
                    if ( v48 )
                      v50 = v48;
                    break;
                  }
                  if ( v48 || v51 != -8192 )
                    v50 = v48;
                  v69 = v47 + nn;
                  v48 = v50;
                  ++v47;
                }
                ++*(_DWORD *)(a1 + 1552);
                *v50 = v46;
              }
            }
            operator delete();
            goto LABEL_85;
          }
          goto LABEL_102;
        }
        if ( a2 == (_QWORD *)*v22 )
          goto LABEL_93;
        ++v22;
      }
      if ( a2 == (_QWORD *)*v22 )
        goto LABEL_93;
      ++v22;
LABEL_102:
      if ( a2 != (_QWORD *)*v22 )
        goto LABEL_60;
      goto LABEL_93;
    }
    v22 += 2;
  }
LABEL_93:
  if ( v23 == v22 )
    goto LABEL_60;
  return 0;
}

