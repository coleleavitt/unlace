__int64 __fastcall sub_FF5710(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v38; // rsi
  int v39; // edi
  __int64 v40; // rcx
  __int64 *v41; // r8
  __m128i *v42; // r9
  unsigned __int64 v43; // rdx
  __int64 *v44; // rcx
  __int64 *v45; // r11
  int mm; // ebp
  __int64 v47; // rcx
  int v48; // r14d
  __int64 *v49; // r9
  unsigned int nn; // edx
  __int64 *v51; // r10
  __int64 v52; // r15
  __int64 *v53; // rsi
  int v54; // edi
  int kk; // edx
  __int64 *v56; // rax
  __int64 v57; // r8
  int v58; // edx
  bool v59; // zf
  __int64 v60; // r14
  __int64 *v61; // r13
  __int64 *v62; // rsi
  int v63; // r10d
  _QWORD *v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __m128i *v67; // rsi
  unsigned __int64 v68; // rdx
  int v69; // edx
  unsigned int v70; // edx
  __int64 v71; // r8
  __int64 v72; // rax
  __m128i *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rsi
  int v76; // edi
  __int64 v77; // rcx
  __m128i *v78; // r9
  unsigned __int64 v79; // rdx
  __int64 *v80; // rcx
  __int64 *v81; // r11
  int v82; // ebp
  __int64 v83; // rcx
  int v84; // r14d
  __int64 *v85; // r9
  unsigned int jj; // edx
  __int64 *v87; // r10
  __int64 v88; // r15
  int v89; // edi
  int ii; // edx
  __int64 v91; // r8
  int v92; // edx
  unsigned int v93; // edx
  __int64 v94; // rcx
  __int64 v95; // rcx
  unsigned __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdi
  __int64 *v99; // rax
  int v100; // edi
  int v101; // edx
  __int64 v102; // rcx
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  __m128i *v105; // rax
  __int64 v106; // r8
  __int64 v107; // rsi
  int v108; // r10d
  __int64 v109; // r8
  __m128i *v110; // rcx
  unsigned __int64 v111; // rdi
  __m128i v112; // xmm0
  __int64 *v113; // rdx
  __int64 *v114; // r9
  int v115; // r15d
  __int64 v116; // rcx
  int v117; // r11d
  __int64 *v118; // rdi
  unsigned int j; // edx
  __int64 *v120; // r8
  __int64 v121; // r14
  int v122; // ecx
  int k; // edx
  _QWORD *v124; // rsi
  __int64 v125; // rcx
  __int64 v126; // rcx
  __m128i *v127; // rsi
  unsigned __int64 v128; // rdx
  __m128i si128; // xmm0
  unsigned int v130; // edx
  int v131; // edx
  unsigned __int64 v132; // rax
  __int64 v133; // rax
  __m128i *v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rsi
  int v137; // r14d
  __int64 v138; // rdx
  __int64 *v139; // r15
  __m128i *v140; // rdi
  unsigned __int64 v141; // rcx
  __m128i v142; // xmm0
  __int64 *v143; // rdx
  __int64 *v144; // r11
  __int64 v145; // rdx
  unsigned int v146; // ecx
  __int64 *v147; // rdi
  __int64 v148; // r8
  int v149; // ecx
  int n; // edx
  __int64 v151; // rsi
  int v152; // edx
  __int64 *v153; // r9
  int v154; // r10d
  __int64 v155; // rcx
  __int64 v156; // rcx
  __m128i *v157; // rsi
  unsigned __int64 v158; // rdx
  __m128i v159; // xmm0
  __int64 v160; // [rsp+8h] [rbp-60h]
  __int64 v161; // [rsp+8h] [rbp-60h]
  __int64 *v162; // [rsp+10h] [rbp-58h]
  unsigned int v163; // [rsp+10h] [rbp-58h]
  int m; // [rsp+10h] [rbp-58h]
  __m128 v165[4]; // [rsp+20h] [rbp-48h] BYREF

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
    v17 = 46966720;
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
    if ( !v17 && !sub_9B4AA0((__int64)a2, "ptrauth") )
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
    v60 = *(unsigned int *)(a1 + 1560);
    v61 = *(__int64 **)(a1 + 1544);
    v161 = a1 + 1544;
    if ( (_DWORD)v60 )
    {
      a5 = (unsigned int)(v60 - 1);
      v163 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
      v62 = &v61[(unsigned int)a5 & v163];
      v63 = a5 & v163;
      v64 = (_QWORD *)*v62;
      if ( a2 == (_QWORD *)*v62 )
      {
LABEL_97:
        sub_FF4650(v165, v62, &v61[v60], v161, 1);
        return 0;
      }
      v99 = nullptr;
      v100 = 1;
      if ( v64 == (_QWORD *)-4096LL )
        goto LABEL_184;
      while ( 1 )
      {
        if ( v64 == (_QWORD *)-8192LL && !v99 )
          v99 = v62;
        a6 = (unsigned int)(v100 + 1);
        v63 = a5 & (v100 + v63);
        v62 = &v61[v63];
        v64 = (_QWORD *)*v62;
        if ( a2 == (_QWORD *)*v62 )
          goto LABEL_97;
        if ( v64 == (_QWORD *)-4096LL )
          break;
        ++v100;
      }
      if ( !v99 )
LABEL_184:
        v99 = v62;
      v101 = v20 + 1;
      v11 = (unsigned int)(3 * v60);
      if ( 4 * v101 < (unsigned int)v11 )
      {
        v102 = (unsigned int)(v60 - *(_DWORD *)(a1 + 1556) - v101);
        if ( (unsigned int)v102 > (unsigned int)v60 >> 3 )
        {
LABEL_187:
          v59 = *v99 == -4096;
          *(_DWORD *)(a1 + 1552) = v101;
          if ( !v59 )
            --*(_DWORD *)(a1 + 1556);
          *v99 = (__int64)a2;
          sub_FF4650(v165, v99, &v61[v60], v161, 1);
          v103 = *(unsigned int *)(a1 + 1576);
          if ( v103 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1580) )
          {
            sub_2237220(a1 + 1568, a1 + 1584, v103 + 1, 8);
            v103 = *(unsigned int *)(a1 + 1576);
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 1568) + 8 * v103) = a2;
          ++*(_DWORD *)(a1 + 1576);
          return 0;
        }
        v104 = ((((((((((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
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
        if ( (unsigned int)v104 < 0x40 )
          LODWORD(v104) = 64;
        *(_DWORD *)(a1 + 1560) = v104;
        v105 = (__m128i *)sub_22300B0(8LL * (unsigned int)v104, 8, 64, v102, a5, a6);
        *(_QWORD *)(a1 + 1544) = v105;
        if ( !v61 )
        {
          v125 = *(unsigned int *)(a1 + 1560);
          *(_QWORD *)(a1 + 1552) = 0;
          v126 = 8 * v125;
          if ( v105 != (__m128i *)&v105->m128i_i8[v126] )
          {
            v127 = v105;
            v128 = ((unsigned __int64)(v126 - 8) >> 3) + 1;
            if ( v126 == 8 )
              goto LABEL_224;
            si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
            do
              *v127++ = si128;
            while ( &v105[v128 >> 1] != v127 );
            v105 = (__m128i *)((char *)v105 + 8 * (v128 & 0xFFFFFFFFFFFFFFFELL));
            if ( (v128 & 0xFFFFFFFFFFFFFFFELL) != v128 )
LABEL_224:
              v105->m128i_i64[0] = -4096;
          }
          goto LABEL_210;
        }
        v106 = *(unsigned int *)(a1 + 1560);
        *(_QWORD *)(a1 + 1552) = 0;
        v107 = (unsigned int)v60;
        v108 = v106;
        v109 = 8 * v106;
        if ( v105 != (__m128i *)&v105->m128i_i8[v109] )
        {
          v110 = v105;
          v111 = ((unsigned __int64)(v109 - 8) >> 3) + 1;
          if ( v109 == 8 )
          {
            v113 = (__int64 *)v105;
LABEL_200:
            *v113 = -4096;
            goto LABEL_201;
          }
          v112 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v110++ = v112;
          while ( &v105[v111 >> 1] != v110 );
          v113 = &v105->m128i_i64[v111 & 0xFFFFFFFFFFFFFFFELL];
          if ( (v111 & 0xFFFFFFFFFFFFFFFELL) != v111 )
            goto LABEL_200;
        }
LABEL_201:
        v114 = v61;
        v115 = v108 - 1;
        do
        {
          v116 = *v114;
          if ( *v114 != -4096 && v116 != -8192 )
          {
            if ( !v108 )
            {
              *(_QWORD *)&dword_0 = *v114;
              BUG();
            }
            v117 = 1;
            v118 = nullptr;
            for ( j = v115 & (((unsigned int)v116 >> 9) ^ ((unsigned int)v116 >> 4)); ; j = v115 & v130 )
            {
              v120 = &v105->m128i_i64[j];
              v121 = *v120;
              if ( v116 == *v120 )
                break;
              if ( v121 == -4096 )
              {
                if ( v118 )
                  v120 = v118;
                break;
              }
              if ( v121 != -8192 || v118 )
                v120 = v118;
              v130 = v117 + j;
              v118 = v120;
              ++v117;
            }
            ++*(_DWORD *)(a1 + 1552);
            *v120 = v116;
          }
          ++v114;
        }
        while ( &v61[v107] != v114 );
        operator delete(v61, v107 * 8, 8);
LABEL_210:
        v60 = *(unsigned int *)(a1 + 1560);
        if ( (_DWORD)v60 )
        {
          v122 = 1;
          v61 = *(__int64 **)(a1 + 1544);
          for ( k = (v60 - 1) & v163; ; k = (v60 - 1) & v131 )
          {
            v99 = &v61[k];
            v124 = (_QWORD *)*v99;
            if ( a2 == (_QWORD *)*v99 )
              break;
            if ( v124 == (_QWORD *)-4096LL )
              goto LABEL_229;
            if ( v9 || v124 != (_QWORD *)-8192LL )
              v99 = v9;
            v131 = v122 + k;
            v9 = v99;
            ++v122;
          }
LABEL_213:
          v101 = *(_DWORD *)(a1 + 1552) + 1;
          goto LABEL_187;
        }
        goto LABEL_290;
      }
    }
    v132 = (((((((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v60 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v60 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 8)
         | (((((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v60 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v60 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1);
    v133 = ((v132 >> 16) | v132) + 1;
    if ( (unsigned int)v133 < 0x40 )
      LODWORD(v133) = 64;
    *(_DWORD *)(a1 + 1560) = v133;
    v134 = (__m128i *)sub_22300B0(8LL * (unsigned int)v133, 8, 64, v11, a5, a6);
    *(_QWORD *)(a1 + 1544) = v134;
    if ( !v61 )
    {
      v155 = *(unsigned int *)(a1 + 1560);
      *(_QWORD *)(a1 + 1552) = 0;
      v156 = 8 * v155;
      if ( v134 != (__m128i *)&v134->m128i_i8[v156] )
      {
        v157 = v134;
        v158 = ((unsigned __int64)(v156 - 8) >> 3) + 1;
        if ( v156 == 8 )
          goto LABEL_286;
        v159 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        do
          *v157++ = v159;
        while ( v157 != &v134[v158 >> 1] );
        v134 = (__m128i *)((char *)v134 + 8 * (v158 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v158 & 0xFFFFFFFFFFFFFFFELL) != v158 )
LABEL_286:
          v134->m128i_i64[0] = -4096;
      }
      goto LABEL_261;
    }
    v135 = *(unsigned int *)(a1 + 1560);
    *(_QWORD *)(a1 + 1552) = 0;
    v136 = (unsigned int)v60;
    v137 = v135;
    v138 = 8 * v135;
    v139 = &v61[v136];
    if ( v134 != (__m128i *)&v134->m128i_i8[v138] )
    {
      v140 = v134;
      v141 = ((unsigned __int64)(v138 - 8) >> 3) + 1;
      if ( v138 == 8 )
      {
        v143 = (__int64 *)v134;
      }
      else
      {
        v142 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        do
          *v140++ = v142;
        while ( &v134[v141 >> 1] != v140 );
        v143 = &v134->m128i_i64[v141 & 0xFFFFFFFFFFFFFFFELL];
        if ( (v141 & 0xFFFFFFFFFFFFFFFELL) == v141 )
          goto LABEL_253;
      }
      *v143 = -4096;
    }
LABEL_253:
    v144 = v61;
    for ( m = v137 - 1; v139 != v144; ++v144 )
    {
      v145 = *v144;
      if ( *v144 != -8192 && v145 != -4096 )
      {
        if ( !v137 )
        {
          *(_QWORD *)&dword_0 = *v144;
          BUG();
        }
        v146 = m & (((unsigned int)v145 >> 9) ^ ((unsigned int)v145 >> 4));
        v147 = &v134->m128i_i64[v146];
        v148 = *v147;
        if ( *v147 != v145 )
        {
          v153 = nullptr;
          v154 = 1;
          if ( v148 != -4096 )
          {
            while ( 1 )
            {
              if ( v148 == -8192 && !v153 )
                v153 = v147;
              v146 = m & (v154 + v146);
              v147 = &v134->m128i_i64[v146];
              v148 = *v147;
              if ( v145 == *v147 )
                break;
              if ( v148 == -4096 )
              {
                if ( v153 )
                  v147 = v153;
                break;
              }
              ++v154;
            }
          }
        }
        ++*(_DWORD *)(a1 + 1552);
        *v147 = v145;
      }
    }
    operator delete(v61, v136 * 8, 8);
LABEL_261:
    v60 = *(unsigned int *)(a1 + 1560);
    if ( (_DWORD)v60 )
    {
      v149 = 1;
      v61 = *(__int64 **)(a1 + 1544);
      for ( n = (v60 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)); ; n = (v60 - 1) & v152 )
      {
        v99 = &v61[n];
        v151 = *v99;
        if ( a2 == (_QWORD *)*v99 )
          break;
        if ( v151 == -4096 )
        {
LABEL_229:
          if ( v9 )
            v99 = v9;
          v101 = *(_DWORD *)(a1 + 1552) + 1;
          goto LABEL_187;
        }
        if ( v151 != -8192 || v9 )
          v99 = v9;
        v152 = v149 + n;
        v9 = v99;
        ++v149;
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
              sub_2237220(a1 + 1568, a1 + 1584, v21 + 1, 8);
              v23 = (_QWORD *)(*(_QWORD *)(a1 + 1568) + 8LL * *(unsigned int *)(a1 + 1576));
            }
            *v23 = a2;
            v26 = (unsigned int)(*(_DWORD *)(a1 + 1576) + 1);
            *(_DWORD *)(a1 + 1576) = v26;
            if ( (unsigned int)v26 <= 2 )
              return 0;
            v27 = *(__int64 **)(a1 + 1568);
            v162 = &v27[v26];
            v160 = a1 + 1544;
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
              sub_FF4650(v165, v30, &v33[v32], v160, 1);
LABEL_66:
              if ( v162 == ++v27 )
                return 0;
            }
            v56 = nullptr;
            a6 = 1;
            if ( v31 == -4096 )
              goto LABEL_131;
            while ( 1 )
            {
              if ( !v56 && v31 == -8192 )
                v56 = v30;
              v29 = v28 & (a6 + v29);
              v30 = &v33[v29];
              v31 = *v30;
              if ( v24 == *v30 )
                goto LABEL_65;
              if ( v31 == -4096 )
                break;
              a6 = (unsigned int)(a6 + 1);
            }
            if ( !v56 )
LABEL_131:
              v56 = v30;
            v58 = *(_DWORD *)(a1 + 1552) + 1;
            a5 = (unsigned int)(4 * v58);
            if ( (unsigned int)a5 < 3 * (int)v32 )
            {
              v71 = (unsigned int)v32 >> 3;
              if ( (int)v32 - *(_DWORD *)(a1 + 1556) - v58 > (unsigned int)v71 )
                goto LABEL_89;
              v72 = (((((((((v28 | (v28 >> 1)) >> 2) | v28 | (v28 >> 1)) >> 4)
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
              if ( (unsigned int)v72 < 0x40 )
                LODWORD(v72) = 64;
              *(_DWORD *)(a1 + 1560) = v72;
              v73 = (__m128i *)sub_22300B0(8LL * (unsigned int)v72, 8, 64, v24, v71, a6);
              *(_QWORD *)(a1 + 1544) = v73;
              if ( !v33 )
              {
                v94 = *(unsigned int *)(a1 + 1560);
                *(_QWORD *)(a1 + 1552) = 0;
                v95 = 8 * v94;
                if ( v73 != (__m128i *)&v73->m128i_i8[v95] )
                {
                  v96 = ((unsigned __int64)(v95 - 8) >> 3) + 1;
                  if ( v95 == 8 )
                    goto LABEL_172;
                  v97 = 0;
                  do
                  {
                    v98 = v97++;
                    v73[v98] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                  }
                  while ( v97 != v96 >> 1 );
                  v73 = (__m128i *)((char *)v73 + 8 * (v96 & 0xFFFFFFFFFFFFFFFELL));
                  if ( (v96 & 0xFFFFFFFFFFFFFFFELL) != v96 )
LABEL_172:
                    v73->m128i_i64[0] = -4096;
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
                v53 = nullptr;
                v89 = 1;
                v33 = *(__int64 **)(a1 + 1544);
                for ( ii = (v32 - 1) & (((unsigned int)*v27 >> 9) ^ ((unsigned int)*v27 >> 4)); ; ii = (v32 - 1) & v92 )
                {
                  v56 = &v33[ii];
                  v91 = *v56;
                  if ( v24 == *v56 )
                    break;
                  if ( v91 == -4096 )
                  {
LABEL_108:
                    if ( v53 )
                      v56 = v53;
                    v58 = *(_DWORD *)(a1 + 1552) + 1;
                    goto LABEL_89;
                  }
                  if ( v53 || v91 != -8192 )
                    v56 = v53;
                  v92 = v89 + ii;
                  v53 = v56;
                  ++v89;
                }
                goto LABEL_88;
              }
              v74 = *(unsigned int *)(a1 + 1560);
              *(_QWORD *)(a1 + 1552) = 0;
              v75 = (unsigned int)v32;
              v76 = v74;
              v77 = 8 * v74;
              if ( v73 != (__m128i *)&v73->m128i_i8[v77] )
              {
                v78 = v73;
                v79 = ((unsigned __int64)(v77 - 8) >> 3) + 1;
                if ( v77 == 8 )
                {
                  v80 = (__int64 *)v73;
LABEL_141:
                  *v80 = -4096;
                  goto LABEL_142;
                }
                do
                {
                  ++v78;
                  v78[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                }
                while ( v78 != &v73[v79 >> 1] );
                v80 = &v73->m128i_i64[v79 & 0xFFFFFFFFFFFFFFFELL];
                if ( (v79 & 0xFFFFFFFFFFFFFFFELL) != v79 )
                  goto LABEL_141;
              }
LABEL_142:
              v81 = v33;
              v82 = v76 - 1;
              do
              {
                v83 = *v81;
                if ( *v81 != -8192 && v83 != -4096 )
                {
                  if ( !v76 )
                  {
                    *(_QWORD *)&dword_0 = *v81;
                    BUG();
                  }
                  v84 = 1;
                  v85 = nullptr;
                  for ( jj = v82 & (((unsigned int)v83 >> 9) ^ ((unsigned int)v83 >> 4)); ; jj = v82 & v93 )
                  {
                    v87 = &v73->m128i_i64[jj];
                    v88 = *v87;
                    if ( v83 == *v87 )
                      break;
                    if ( v88 == -4096 )
                    {
                      if ( v85 )
                        v87 = v85;
                      break;
                    }
                    if ( v88 != -8192 || v85 )
                      v87 = v85;
                    v93 = v84 + jj;
                    v85 = v87;
                    ++v84;
                  }
                  ++*(_DWORD *)(a1 + 1552);
                  *v87 = v83;
                }
                ++v81;
              }
              while ( &v33[v75] != v81 );
              operator delete(v33, v75 * 8, 8);
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
            v36 = (__m128i *)sub_22300B0(8LL * (unsigned int)v35, 8, 64, v24, a5, a6);
            *(_QWORD *)(a1 + 1544) = v36;
            if ( !v33 )
            {
              v65 = *(unsigned int *)(a1 + 1560);
              *(_QWORD *)(a1 + 1552) = 0;
              v66 = 8 * v65;
              if ( v36 != (__m128i *)&v36->m128i_i8[v66] )
              {
                v67 = v36;
                v68 = ((unsigned __int64)(v66 - 8) >> 3) + 1;
                if ( v66 == 8 )
                  goto LABEL_120;
                do
                {
                  ++v67;
                  v67[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                }
                while ( &v36[v68 >> 1] != v67 );
                v36 = (__m128i *)((char *)v36 + 8 * (v68 & 0xFFFFFFFFFFFFFFFELL));
                if ( (v68 & 0xFFFFFFFFFFFFFFFELL) != v68 )
LABEL_120:
                  v36->m128i_i64[0] = -4096;
              }
LABEL_85:
              v32 = *(unsigned int *)(a1 + 1560);
              if ( !(_DWORD)v32 )
                goto LABEL_287;
              v24 = *v27;
              v53 = nullptr;
              v54 = 1;
              v33 = *(__int64 **)(a1 + 1544);
              for ( kk = (v32 - 1) & (((unsigned int)*v27 >> 9) ^ ((unsigned int)*v27 >> 4)); ; kk = (v32 - 1) & v69 )
              {
                v56 = &v33[kk];
                v57 = *v56;
                if ( v24 == *v56 )
                  break;
                if ( v57 == -4096 )
                  goto LABEL_108;
                if ( v57 != -8192 || v53 )
                  v56 = v53;
                v69 = v54 + kk;
                v53 = v56;
                ++v54;
              }
LABEL_88:
              v58 = *(_DWORD *)(a1 + 1552) + 1;
LABEL_89:
              v59 = *v56 == -4096;
              *(_DWORD *)(a1 + 1552) = v58;
              if ( !v59 )
                --*(_DWORD *)(a1 + 1556);
              *v56 = v24;
              sub_FF4650(v165, v56, &v33[v32], v160, 1);
              goto LABEL_66;
            }
            v37 = *(unsigned int *)(a1 + 1560);
            *(_QWORD *)(a1 + 1552) = 0;
            v38 = (unsigned int)v32;
            v39 = v37;
            v40 = 8 * v37;
            v41 = &v33[v38];
            if ( v36 != (__m128i *)&v36->m128i_i8[v40] )
            {
              v42 = v36;
              v43 = ((unsigned __int64)(v40 - 8) >> 3) + 1;
              if ( v40 == 8 )
              {
                v44 = (__int64 *)v36;
              }
              else
              {
                do
                {
                  ++v42;
                  v42[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                }
                while ( v42 != &v36[v43 >> 1] );
                v44 = &v36->m128i_i64[v43 & 0xFFFFFFFFFFFFFFFELL];
                if ( (v43 & 0xFFFFFFFFFFFFFFFELL) == v43 )
                  goto LABEL_76;
              }
              *v44 = -4096;
            }
LABEL_76:
            v45 = v33;
            for ( mm = v39 - 1; v41 != v45; ++v45 )
            {
              v47 = *v45;
              if ( *v45 != -8192 && v47 != -4096 )
              {
                if ( !v39 )
                {
                  *(_QWORD *)&dword_0 = *v45;
                  BUG();
                }
                v48 = 1;
                v49 = nullptr;
                for ( nn = mm & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4)); ; nn = mm & v70 )
                {
                  v51 = &v36->m128i_i64[nn];
                  v52 = *v51;
                  if ( v47 == *v51 )
                    break;
                  if ( v52 == -4096 )
                  {
                    if ( v49 )
                      v51 = v49;
                    break;
                  }
                  if ( v49 || v52 != -8192 )
                    v51 = v49;
                  v70 = v48 + nn;
                  v49 = v51;
                  ++v48;
                }
                ++*(_DWORD *)(a1 + 1552);
                *v51 = v47;
              }
            }
            operator delete(v33, v38 * 8, 8);
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
