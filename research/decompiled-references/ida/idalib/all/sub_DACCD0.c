void __fastcall sub_DACCD0(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  int v9; // eax
  __int64 v10; // r15
  __int64 *v13; // r13
  int v14; // edx
  __int64 *v15; // rsi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // ecx
  int v34; // esi
  __int64 v35; // rdi
  int v36; // eax
  int v37; // eax
  int v38; // edx
  __int64 v39; // r14
  __int64 *v40; // rcx
  unsigned int v41; // eax
  __int64 *v42; // rsi
  __int64 v43; // r8
  __int64 v44; // rax
  unsigned int v45; // edx
  unsigned int v46; // r14d
  int v47; // eax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // rax
  _DWORD *v55; // r8
  _DWORD *v56; // rax
  bool v57; // cl
  __int64 v58; // rdi
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 *v62; // rdi
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r15
  __int64 *v72; // rdi
  int v73; // r9d
  __int64 v74; // rcx
  __m128i *v75; // rdx
  unsigned __int64 v76; // rsi
  __m128i v77; // xmm0
  __int64 *v78; // rdx
  int i; // r14d
  __int64 v80; // rcx
  unsigned int v81; // esi
  _QWORD *v82; // r8
  __int64 v83; // r10
  int v84; // edi
  unsigned int v85; // ecx
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r15
  int v92; // r9d
  __int64 v93; // rcx
  __m128i *v94; // rdx
  unsigned __int64 v95; // rsi
  __m128i si128; // xmm0
  __int64 *v97; // rdx
  int v98; // r11d
  __int64 v99; // rcx
  unsigned int v100; // r10d
  _QWORD *v101; // rsi
  __int64 v102; // r8
  int v103; // r14d
  int v104; // r8d
  __int64 *v105; // rdi
  unsigned int v106; // edx
  unsigned int v107; // r14d
  int v108; // eax
  int v109; // ecx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rsi
  __int64 v113; // r8
  __int64 v114; // rdi
  unsigned __int64 v115; // rax
  unsigned __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r15
  __int64 v120; // r9
  __int64 v121; // rax
  __int64 v122; // r8
  __int64 v123; // rsi
  unsigned int v124; // edx
  int v125; // ecx
  int v126; // eax
  __int64 v127; // rax
  int v128; // eax
  _QWORD *v129; // rdx
  int v130; // edx
  __int64 *v131; // rcx
  unsigned int v132; // eax
  __int64 *v133; // rsi
  __int64 v134; // r8
  __int64 v135; // rax
  __int64 v136; // r10
  __int64 v137; // rcx
  __int64 v138; // rcx
  __m128i *v139; // rdx
  unsigned __int64 v140; // rsi
  __m128i v141; // xmm0
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rcx
  __m128i *v145; // rdx
  unsigned __int64 v146; // rsi
  __m128i v147; // xmm0
  _QWORD *v148; // r11
  int v149; // ecx
  int v150; // esi
  int v151; // r11d
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rcx
  int v155; // esi
  int v156; // r9d
  __int64 v157; // r8
  __int64 *v158; // r8
  int v159; // r9d
  __int64 v160; // [rsp+0h] [rbp-B8h]
  __int64 v161; // [rsp+0h] [rbp-B8h]
  __int64 v162; // [rsp+0h] [rbp-B8h]
  int v163; // [rsp+0h] [rbp-B8h]
  _QWORD *v164; // [rsp+0h] [rbp-B8h]
  __int64 v165; // [rsp+0h] [rbp-B8h]
  int v166; // [rsp+8h] [rbp-B0h]
  int v167; // [rsp+8h] [rbp-B0h]
  int v168; // [rsp+10h] [rbp-A8h]
  unsigned int v169; // [rsp+1Ch] [rbp-9Ch]
  unsigned __int64 v170; // [rsp+20h] [rbp-98h] BYREF
  __int128 v171; // [rsp+28h] [rbp-90h]
  int v172; // [rsp+38h] [rbp-80h]
  __int64 v173; // [rsp+40h] [rbp-78h]
  __int64 v174; // [rsp+48h] [rbp-70h]
  __int64 v175; // [rsp+50h] [rbp-68h] BYREF
  __int128 v176; // [rsp+58h] [rbp-60h]
  int v177; // [rsp+68h] [rbp-50h]
  __int64 v178; // [rsp+70h] [rbp-48h]
  __int64 v179; // [rsp+78h] [rbp-40h]

  if ( *((_DWORD *)a1 + 6) )
    return;
  v2 = a1[4];
  if ( !v2 )
    return;
  if ( *(_BYTE *)(v2 + 26) )
    return;
  v3 = *(_QWORD *)(v2 + 32);
  if ( *(_BYTE *)(v3 + 61) )
    return;
  v4 = *a1;
  if ( *a1 > (unsigned __int64)*(unsigned int *)(v3 + 28) )
    return;
  v5 = *((unsigned int *)a1 + 10);
  if ( *(_DWORD *)(v3 + 24) != (_DWORD)v5 && (_DWORD)v5 )
  {
    v7 = *(_QWORD *)(v2 + (unsigned int)v5 + 32);
    v6 = *(unsigned int *)(v7 + 20);
    v3 = v7;
    if ( (_DWORD)v6 == -1 )
      return;
  }
  else
  {
    v6 = *(unsigned int *)(v3 + 20);
    v7 = *(_QWORD *)(v2 + 32);
    if ( (_DWORD)v6 == -1 )
      return;
  }
  if ( *(_DWORD *)(v3 + 20) != -1 )
  {
    v8 = *a1;
    if ( (_DWORD)v5 != -1 )
    {
      v9 = 0;
      if ( v4 != (unsigned int)v5 )
        v9 = *(_QWORD *)(v7 + 40) == 0 ? 32 : 16;
      v8 = v4 - v5 - v9;
    }
    if ( v8 == (_DWORD)v6 && (_DWORD)v6 )
      return;
  }
  v10 = *(unsigned int *)(a2 + 16);
  v13 = *(__int64 **)a2;
  if ( (_DWORD)v10 )
  {
    v5 = (unsigned int)(v10 - 1);
    v14 = v5 & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
    v15 = &v13[v14];
    v16 = *v15;
    if ( v2 == *v15 )
    {
LABEL_18:
      sub_DACBF0((__m128 *)&v175, v15, &v13[v10], a2, 1);
      goto LABEL_19;
    }
    v6 = 1;
    v62 = nullptr;
    if ( v16 != -4096 )
    {
      while ( 1 )
      {
        if ( !v62 && v16 == -8192 )
          v62 = v15;
        v7 = (unsigned int)(v6 + 1);
        v14 = v5 & (v6 + v14);
        v15 = &v13[v14];
        v16 = *v15;
        if ( v2 == *v15 )
          goto LABEL_18;
        if ( v16 == -4096 )
          break;
        v6 = (unsigned int)v7;
      }
      if ( v62 )
        v15 = v62;
    }
    v63 = *(_DWORD *)(a2 + 8) + 1;
    if ( 4 * v63 < (unsigned int)(3 * v10) )
    {
      if ( (int)v10 - *(_DWORD *)(a2 + 12) - v63 > (unsigned int)v10 >> 3 )
      {
LABEL_102:
        v64 = *v15;
        goto LABEL_103;
      }
      v86 = (v5 >> 1) | v5 | (((v5 >> 1) | v5) >> 2);
      v87 = v86 >> 4;
      v88 = (((((v87 | v86) >> 8) | v87 | v86) >> 16) | ((v87 | v86) >> 8) | v87 | v86) + 1;
      if ( (unsigned int)v88 < 0x40 )
        LODWORD(v88) = 64;
      *(_DWORD *)(a2 + 16) = v88;
      v89 = sub_22300B0(8LL * (unsigned int)v88, 8, 64, v87, v6, v7);
      *(_QWORD *)a2 = v89;
      if ( v13 )
      {
        v90 = *(unsigned int *)(a2 + 16);
        v91 = v10;
        *(_QWORD *)(a2 + 8) = 0;
        v92 = v90;
        v93 = 8 * v90;
        if ( v89 != v89 + v93 )
        {
          v94 = (__m128i *)v89;
          v95 = ((unsigned __int64)(v93 - 8) >> 3) + 1;
          if ( v93 == 8 )
            goto LABEL_138;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v94++ = si128;
          while ( (__m128i *)(v89 + 16 * (v95 >> 1)) != v94 );
          v94 = (__m128i *)(v89 + 8 * (v95 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v95 & 0xFFFFFFFFFFFFFFFELL) != v95 )
LABEL_138:
            v94->m128i_i64[0] = -4096;
        }
        v97 = v13;
        v98 = v92 - 1;
        do
        {
          v99 = *v97;
          if ( *v97 != -8192 && v99 != -4096 )
          {
            if ( !v92 )
            {
              *(_QWORD *)&dword_0 = *v97;
              BUG();
            }
            v100 = v98 & (((unsigned int)v99 >> 9) ^ ((unsigned int)v99 >> 4));
            v101 = (_QWORD *)(v89 + 8LL * v100);
            v102 = *v101;
            if ( v99 != *v101 && v102 != -4096 )
            {
              v167 = 1;
              v164 = nullptr;
              while ( 1 )
              {
                if ( !v164 )
                {
                  if ( v102 != -8192 )
                    v101 = nullptr;
                  v164 = v101;
                }
                v100 = v98 & (v167 + v100);
                v101 = (_QWORD *)(v89 + 8LL * v100);
                v102 = *v101;
                if ( v99 == *v101 )
                  break;
                if ( v102 == -4096 )
                {
                  if ( v164 )
                    v101 = v164;
                  break;
                }
                ++v167;
              }
            }
            ++*(_DWORD *)(a2 + 8);
            *v101 = v99;
          }
          ++v97;
        }
        while ( &v13[v91] != v97 );
        operator delete(v13, v91 * 8, 8);
        v13 = *(__int64 **)a2;
        v10 = *(unsigned int *)(a2 + 16);
        v63 = *(_DWORD *)(a2 + 8) + 1;
      }
      else
      {
        v143 = *(unsigned int *)(a2 + 16);
        *(_QWORD *)(a2 + 8) = 0;
        v10 = v143;
        v144 = 8 * v143;
        v13 = (__int64 *)(v89 + v144);
        if ( v89 == v89 + v144 )
        {
          v63 = 1;
        }
        else
        {
          v145 = (__m128i *)v89;
          v146 = ((unsigned __int64)(v144 - 8) >> 3) + 1;
          if ( v144 == 8 )
            goto LABEL_225;
          v147 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v145++ = v147;
          while ( v145 != (__m128i *)(v89 + 16 * (v146 >> 1)) );
          v145 = (__m128i *)(v89 + 8 * (v146 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v146 & 0xFFFFFFFFFFFFFFFELL) != v146 )
LABEL_225:
            v145->m128i_i64[0] = -4096;
          v13 = (__int64 *)v89;
          v63 = 1;
        }
      }
      if ( (_DWORD)v10 )
      {
        v103 = (v10 - 1) & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
        v15 = &v13[v103];
        v64 = *v15;
        if ( v2 != *v15 )
        {
          v104 = 1;
          v105 = nullptr;
          if ( v64 != -4096 )
          {
            while ( 1 )
            {
              if ( !v105 && v64 == -8192 )
                v105 = v15;
              v103 = (v10 - 1) & (v104 + v103);
              v15 = &v13[v103];
              v64 = *v15;
              if ( v2 == *v15 )
                goto LABEL_103;
              if ( v64 == -4096 )
              {
                if ( !v105 )
                  goto LABEL_129;
                v64 = *v105;
                v15 = v105;
                goto LABEL_103;
              }
              ++v104;
            }
          }
          goto LABEL_129;
        }
LABEL_103:
        *(_DWORD *)(a2 + 8) = v63;
        if ( v64 != -4096 )
          --*(_DWORD *)(a2 + 12);
        goto LABEL_105;
      }
LABEL_313:
      ++*(_DWORD *)(a2 + 8);
      BUG();
    }
  }
  v67 = (((((((unsigned int)(2 * v10 - 1) | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v10 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v10 - 1) | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v10 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 8)
      | (((((unsigned int)(2 * v10 - 1) | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v10 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 4)
      | (((unsigned int)(2 * v10 - 1) | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 2)
      | (unsigned int)(2 * v10 - 1)
      | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1);
  v68 = ((v67 >> 16) | v67) + 1;
  if ( (unsigned int)v68 < 0x40 )
    LODWORD(v68) = 64;
  *(_DWORD *)(a2 + 16) = v68;
  v69 = sub_22300B0(8LL * (unsigned int)v68, 8, 64, v5, v6, v7);
  *(_QWORD *)a2 = v69;
  if ( v13 )
  {
    v70 = *(unsigned int *)(a2 + 16);
    v71 = v10;
    *(_QWORD *)(a2 + 8) = 0;
    v72 = &v13[v71];
    v73 = v70;
    v74 = 8 * v70;
    if ( v69 != v69 + v74 )
    {
      v75 = (__m128i *)v69;
      v76 = ((unsigned __int64)(v74 - 8) >> 3) + 1;
      if ( v74 == 8 )
        goto LABEL_117;
      v77 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v75++ = v77;
      while ( (__m128i *)(v69 + 16 * (v76 >> 1)) != v75 );
      v75 = (__m128i *)(v69 + 8 * (v76 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v76 & 0xFFFFFFFFFFFFFFFELL) != v76 )
LABEL_117:
        v75->m128i_i64[0] = -4096;
    }
    v78 = v13;
    for ( i = v73 - 1; v72 != v78; ++v78 )
    {
      v80 = *v78;
      if ( *v78 != -4096 && v80 != -8192 )
      {
        if ( !v73 )
        {
          *(_QWORD *)&dword_0 = *v78;
          BUG();
        }
        v81 = i & (((unsigned int)v80 >> 9) ^ ((unsigned int)v80 >> 4));
        v82 = (_QWORD *)(v69 + 8LL * v81);
        v83 = *v82;
        if ( v80 != *v82 && v83 != -4096 )
        {
          v163 = 1;
          v148 = nullptr;
          while ( 1 )
          {
            if ( !v148 && v83 == -8192 )
              v148 = v82;
            v81 = i & (v163 + v81);
            v82 = (_QWORD *)(v69 + 8LL * v81);
            v83 = *v82;
            if ( v80 == *v82 )
              break;
            if ( v83 == -4096 )
            {
              if ( v148 )
                v82 = v148;
              break;
            }
            ++v163;
          }
        }
        ++*(_DWORD *)(a2 + 8);
        *v82 = v80;
      }
    }
    operator delete(v13, v71 * 8, 8);
    v13 = *(__int64 **)a2;
    v10 = *(unsigned int *)(a2 + 16);
    v63 = *(_DWORD *)(a2 + 8) + 1;
  }
  else
  {
    v137 = *(unsigned int *)(a2 + 16);
    *(_QWORD *)(a2 + 8) = 0;
    v10 = v137;
    v138 = 8 * v137;
    v13 = (__int64 *)(v69 + v138);
    if ( v69 == v69 + v138 )
    {
      v63 = 1;
    }
    else
    {
      v139 = (__m128i *)v69;
      v140 = ((unsigned __int64)(v138 - 8) >> 3) + 1;
      if ( v138 == 8 )
        goto LABEL_210;
      v141 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v139++ = v141;
      while ( (__m128i *)(v69 + 16 * (v140 >> 1)) != v139 );
      v139 = (__m128i *)(v69 + 8 * (v140 & 0xFFFFFFFFFFFFFFFELL));
      if ( v140 != (v140 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_210:
        v139->m128i_i64[0] = -4096;
      v13 = (__int64 *)v69;
      v63 = 1;
    }
  }
  if ( !(_DWORD)v10 )
    goto LABEL_313;
  v84 = v10 - 1;
  v85 = (v10 - 1) & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
  v15 = &v13[v85];
  v64 = *v15;
  if ( v2 == *v15 )
    goto LABEL_103;
  if ( v64 != -4096 )
  {
    v158 = &v13[v84 & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4))];
    v159 = 1;
    v15 = nullptr;
    while ( 1 )
    {
      if ( v64 == -8192 && !v15 )
        v15 = v158;
      v85 = v84 & (v159 + v85);
      v158 = &v13[v85];
      v64 = *v158;
      if ( v2 == *v158 )
      {
        v15 = &v13[v85];
        goto LABEL_103;
      }
      if ( v64 == -4096 )
        break;
      ++v159;
    }
    if ( v15 )
      goto LABEL_102;
    v15 = &v13[v85];
  }
LABEL_129:
  *(_DWORD *)(a2 + 8) = v63;
LABEL_105:
  *v15 = v2;
  sub_DACBF0((__m128 *)&v175, v15, &v13[v10], a2, 1);
  v65 = *(unsigned int *)(a2 + 32);
  if ( v65 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 36) )
  {
    sub_2237220(a2 + 24, a2 + 40, v65 + 1, 8);
    v65 = *(unsigned int *)(a2 + 32);
  }
  *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v65) = v2;
  ++*(_DWORD *)(a2 + 32);
LABEL_19:
  v17 = *((_DWORD *)a1 + 6);
  if ( v17 == 1 )
  {
    v19 = a1[4];
    v18 = v19;
  }
  else if ( v17 )
  {
    if ( v17 == 2 || v17 == 3 )
      return;
    v18 = a1[4];
    v19 = *(_QWORD *)(v18 + 32);
  }
  else
  {
    v18 = a1[4];
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 32);
      v20 = *((unsigned int *)a1 + 10);
      if ( *(_DWORD *)(v19 + 24) == (_DWORD)v20 || !(_DWORD)v20 )
        goto LABEL_26;
      v19 = *(_QWORD *)(v18 + v20 + 32);
    }
    else
    {
      v19 = 64;
    }
  }
  if ( !v19 )
    return;
LABEL_26:
  v21 = *(_QWORD *)(v19 + 32);
  if ( v21 )
  {
    v22 = *(_QWORD *)(v21 + 280);
    v23 = v22 + 24LL * *(unsigned int *)(v21 + 288);
    if ( v23 != v22 )
    {
      while ( 1 )
      {
        v24 = (unsigned int)(*(_DWORD *)a1 + *(_DWORD *)(v22 + 8));
        v22 += 24;
        sub_E23220(&v175, v18, v24, (unsigned int)v24);
        sub_DACCD0(&v175, a2);
        sub_E232A0(&v175);
        if ( v22 == v23 )
          break;
        v18 = a1[4];
      }
    }
    return;
  }
  if ( *(_BYTE *)(v19 + 60) )
  {
    if ( *(_QWORD *)(v19 + 40) )
    {
      v45 = *(_DWORD *)(v19 + 20);
      v46 = 0;
      v47 = 0;
      if ( v45 == -1 )
        goto LABEL_70;
LABEL_69:
      v47 = v45 / *(_DWORD *)(v19 + 16);
      while ( 1 )
      {
LABEL_70:
        if ( v46 == v47 )
          return;
        v48 = *((_DWORD *)a1 + 6);
        if ( v48 == 1 )
          break;
        if ( v48 == 2 )
        {
          v66 = a1[4];
          v170 = v46;
          v171 = 0;
          v172 = 2;
          v173 = v66;
          goto LABEL_96;
        }
        v49 = *((unsigned int *)a1 + 10);
        if ( (_DWORD)v49 == -1 )
        {
          if ( v48 == 3 )
            BUG();
          sub_E23220(&v170, a1[4], v49, *(unsigned int *)(*(_QWORD *)(a1[4] + 32) + 20LL));
        }
        else
        {
          if ( v48 )
          {
            if ( v48 == 3 )
              BUG();
            v50 = a1[4];
            v51 = (unsigned int)v49;
            v52 = *(_QWORD *)(v50 + 32);
            v53 = *(unsigned int *)(v52 + 16) * (unsigned __int64)v46;
          }
          else
          {
            v50 = a1[4];
            v52 = *(_QWORD *)(v50 + 32);
            if ( *(_DWORD *)(v52 + 24) == (_DWORD)v49 || !(_DWORD)v49 )
            {
              v51 = (unsigned int)v49;
              v53 = *(unsigned int *)(v52 + 16) * (unsigned __int64)v46;
            }
            else
            {
              v51 = (unsigned int)v49;
              v53 = *(unsigned int *)(*(_QWORD *)(v50 + (unsigned int)v49 + 32) + 16LL) * (unsigned __int64)v46;
            }
            if ( *(_DWORD *)(v52 + 24) != (_DWORD)v49 && (_DWORD)v49 )
              v52 = *(_QWORD *)(v50 + v51 + 32);
          }
          v54 = v53 + 32;
          if ( *(_QWORD *)(v52 + 40) )
            v54 = v53 + 16;
          sub_E23220(&v170, v50, v49, v54 + v51);
        }
        if ( v172 || !v173 )
          goto LABEL_96;
        v55 = *(_DWORD **)(v173 + 32);
        v56 = v55;
        v57 = v55[6] == (_DWORD)v174 || (_DWORD)v174 == 0;
        if ( !v57 )
          v56 = *(_DWORD **)(v173 + (unsigned int)v174 + 32);
        if ( v56[5] == -1 )
          goto LABEL_96;
        v58 = v170;
        if ( (_DWORD)v174 == -1 )
        {
          if ( v170 )
            v58 = 0xFFFFFFFFLL;
          sub_E23220(&v175, v173, 16, v58);
          goto LABEL_93;
        }
        v59 = *(_QWORD *)(v173 + 32);
        if ( !v57 )
          v59 = *(_QWORD *)(v173 + (unsigned int)v174 + 32);
        if ( *(_DWORD *)(v59 + 20) == -1 )
        {
          if ( v170 == (unsigned int)v174 )
            goto LABEL_96;
        }
        else
        {
          if ( (unsigned int)v55[7] < v170 )
            goto LABEL_249;
          if ( v57 )
          {
            v149 = v55[5];
            if ( (unsigned int)v174 == v170 )
              goto LABEL_247;
          }
          else
          {
            v149 = *(_DWORD *)(*(_QWORD *)(v173 + (unsigned int)v174 + 32) + 20LL);
            if ( (unsigned int)v174 == v170 )
            {
LABEL_247:
              if ( (_DWORD)v170 - (_DWORD)v174 == v149 && v149 )
                goto LABEL_249;
              goto LABEL_96;
            }
          }
          if ( (_DWORD)v170 - (_DWORD)v174 - (*((_QWORD *)v56 + 5) == 0 ? 32 : 16) == v149 && v149 )
          {
LABEL_249:
            sub_E23220(&v175, v173, (unsigned int)v174, 0xFFFFFFFFLL);
            goto LABEL_93;
          }
        }
        if ( !*((_QWORD *)v56 + 5) && *((_BYTE *)v56 + 60) )
          goto LABEL_96;
        sub_E23220(&v175, v173, (unsigned int)v170, v170);
LABEL_93:
        ++v46;
        sub_E232A0(&v170);
        sub_DACCD0(&v175, a2);
        sub_E232A0(&v175);
        v45 = *(_DWORD *)(v19 + 20);
        v47 = 0;
        if ( v45 != -1 )
          goto LABEL_69;
      }
      v60 = a1[5];
      v61 = a1[4];
      v170 = v46;
      v172 = 1;
      v174 = v60;
      v173 = v61;
      v171 = 0;
LABEL_96:
      sub_E231E0(&v175, &v170);
      goto LABEL_93;
    }
    if ( *(_DWORD *)(v19 + 48) != 13 )
      return;
    v106 = *(_DWORD *)(v19 + 20);
    v107 = 0;
    v108 = 0;
    if ( v106 == -1 )
      goto LABEL_162;
LABEL_161:
    v108 = v106 / *(_DWORD *)(v19 + 16);
    while ( 1 )
    {
LABEL_162:
      if ( v107 == v108 )
        return;
      v109 = *((_DWORD *)a1 + 6);
      v110 = v107;
      if ( v109 == 1 )
        break;
      if ( v109 == 2 )
      {
        v117 = a1[4];
        v175 = v107;
        v176 = 0;
        v177 = 2;
        v178 = v117;
        goto LABEL_178;
      }
      v111 = *((unsigned int *)a1 + 10);
      if ( (_DWORD)v111 == -1 )
      {
        if ( v109 == 3 )
          BUG();
        sub_E23220(&v175, a1[4], v111, *(unsigned int *)(*(_QWORD *)(a1[4] + 32) + 20LL));
      }
      else
      {
        if ( v109 )
        {
          if ( v109 == 3 )
            BUG();
          v112 = a1[4];
          v113 = (unsigned int)v111;
          v114 = *(_QWORD *)(v112 + 32);
          v115 = *(unsigned int *)(v114 + 16) * (unsigned __int64)v107;
        }
        else
        {
          v153 = a1[4];
          v112 = v153;
          if ( v153 && (v114 = *(_QWORD *)(v153 + 32), *(_DWORD *)(v114 + 24) != (_DWORD)v111) && (_DWORD)v111 )
          {
            v154 = (unsigned int)v111;
            v115 = *(unsigned int *)(*(_QWORD *)(v153 + (unsigned int)v111 + 32) + 16LL) * (unsigned __int64)v107;
          }
          else
          {
            v114 = *(_QWORD *)(v153 + 32);
            v112 = a1[4];
            v115 = *(unsigned int *)(v114 + 16) * (unsigned __int64)v107;
            v154 = (unsigned int)v111;
          }
          v113 = v154;
          if ( *(_DWORD *)(v114 + 24) != (_DWORD)v111 && (_DWORD)v111 )
            v114 = *(_QWORD *)(v153 + v154 + 32);
        }
        v116 = v115 + 32;
        if ( *(_QWORD *)(v114 + 40) )
          v116 = v115 + 16;
        sub_E23220(&v175, v112, v111, v113 + v116);
      }
      v110 = v175;
      v117 = v178;
      if ( v177 )
        goto LABEL_178;
      v118 = *(_QWORD *)(v178 + 32);
      if ( *(_DWORD *)(v118 + 24) != (_DWORD)v179 && (_DWORD)v179 )
        v118 = *(_QWORD *)(v178 + (unsigned int)v179 + 32);
      if ( !*(_BYTE *)(v118 + 60) )
        goto LABEL_178;
      v119 = v178 + v175 + 72;
      if ( (unsigned int)v179 != v175 )
        goto LABEL_178;
LABEL_179:
      sub_E232A0(&v175);
      if ( !*(_DWORD *)(v119 + 24) )
      {
        v120 = *(_QWORD *)(v119 + 32);
        if ( v120 )
        {
          if ( !*(_BYTE *)(v120 + 26) )
          {
            v121 = *(_QWORD *)(v120 + 32);
            if ( !*(_BYTE *)(v121 + 61) )
            {
              v122 = *(_QWORD *)v119;
              v123 = *(_QWORD *)(v120 + 32);
              if ( *(_QWORD *)v119 <= (unsigned __int64)*(unsigned int *)(v121 + 28) )
              {
                v124 = *(_DWORD *)(v119 + 40);
                if ( *(_DWORD *)(v121 + 24) != v124 && v124 )
                {
                  v123 = *(_QWORD *)(v120 + v124 + 32);
                  v125 = *(_DWORD *)(v123 + 20);
                  if ( v125 != -1 )
                  {
LABEL_187:
                    if ( *(_DWORD *)(v123 + 20) != -1 )
                    {
                      v126 = *(_QWORD *)v119;
                      if ( v124 != -1 )
                      {
                        if ( v122 == v124 )
                        {
                          v128 = 0;
                        }
                        else
                        {
                          v169 = *(_DWORD *)(v119 + 40);
                          v168 = *(_QWORD *)v119;
                          v166 = v125;
                          v160 = *(_QWORD *)(v119 + 32);
                          v127 = sub_CFDF60(v119);
                          v120 = v160;
                          v125 = v166;
                          LODWORD(v122) = v168;
                          v124 = v169;
                          v128 = *(_QWORD *)(v127 + 40) == 0 ? 32 : 16;
                        }
                        v126 = v122 - v124 - v128;
                      }
                      if ( v125 && v125 == v126 )
                        goto LABEL_199;
                    }
                    v161 = v120;
                    v129 = (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16));
                    sub_DACC60((__m128 *)&v175, v129, v129, a2, 1);
                    v130 = *(_DWORD *)(a2 + 16);
                    v131 = *(__int64 **)a2;
                    if ( !v130 )
                      goto LABEL_263;
                    v132 = (v130 - 1) & (((unsigned int)v161 >> 9) ^ ((unsigned int)v161 >> 4));
                    v133 = &v131[v132];
                    v134 = *v133;
                    if ( v161 == *v133 )
                      goto LABEL_196;
                    v150 = 1;
                    if ( v134 == -4096 )
                    {
LABEL_263:
                      v165 = v175;
                      sub_DACC60((__m128 *)&v175, &v131[v130], &v131[v130], a2, 1);
                      v135 = v175;
                      v136 = v165;
                    }
                    else
                    {
                      while ( 1 )
                      {
                        v151 = v150 + 1;
                        v132 = (v130 - 1) & (v150 + v132);
                        v133 = &v131[v132];
                        v152 = *v133;
                        if ( v161 == *v133 )
                          break;
                        v150 = v151;
                        if ( v152 == -4096 )
                          goto LABEL_263;
                      }
LABEL_196:
                      v162 = v175;
                      sub_DACC60((__m128 *)&v175, v133, &v131[v130], a2, 1);
                      v135 = v175;
                      v136 = v162;
                    }
                    if ( v136 == v135 )
                      sub_DACCD0(v119, a2);
                  }
                }
                else
                {
                  v125 = *(_DWORD *)(v121 + 20);
                  if ( v125 != -1 )
                    goto LABEL_187;
                }
              }
            }
          }
        }
      }
LABEL_199:
      v106 = *(_DWORD *)(v19 + 20);
      ++v107;
      v108 = 0;
      if ( v106 != -1 )
        goto LABEL_161;
    }
    v142 = a1[5];
    v117 = a1[4];
    v175 = v107;
    v176 = 0;
    v177 = 1;
    v179 = v142;
    v178 = v117;
LABEL_178:
    v119 = v117 + v110 + 40;
    goto LABEL_179;
  }
  if ( *(_BYTE *)(v19 + 52) && *(_DWORD *)(v19 + 48) == 13 )
  {
    v25 = *a1;
    if ( v17 )
      goto LABEL_39;
    v26 = *(_QWORD *)(v18 + 32);
    v27 = *((unsigned int *)a1 + 10);
    if ( *(_DWORD *)(v26 + 24) != (_DWORD)v27 && (_DWORD)v27 )
      v26 = *(_QWORD *)(v18 + v27 + 32);
    if ( !*(_BYTE *)(v26 + 60) || (v28 = *((unsigned int *)a1 + 10), v29 = v18 + v25 + 72, v28 != v25) )
LABEL_39:
      v29 = v18 + v25 + 40;
    if ( !*(_DWORD *)(v29 + 24) )
    {
      v30 = *(_QWORD *)(v29 + 32);
      if ( v30 )
      {
        if ( !*(_BYTE *)(v30 + 26) )
        {
          v31 = *(_QWORD *)(v30 + 32);
          if ( !*(_BYTE *)(v31 + 61) )
          {
            v32 = *(_QWORD *)v29;
            if ( *(_QWORD *)v29 <= (unsigned __int64)*(unsigned int *)(v31 + 28) )
            {
              v33 = *(_DWORD *)(v29 + 40);
              if ( *(_DWORD *)(v31 + 24) != v33 && v33 )
              {
                v35 = *(_QWORD *)(v30 + v33 + 32);
                v34 = *(_DWORD *)(v35 + 20);
                v31 = v35;
                if ( v34 == -1 )
                  return;
              }
              else
              {
                v34 = *(_DWORD *)(v31 + 20);
                if ( v34 == -1 )
                  return;
                v35 = *(_QWORD *)(v30 + 32);
              }
              if ( *(_DWORD *)(v31 + 20) == -1 )
                goto LABEL_56;
              v36 = *(_QWORD *)v29;
              if ( v33 != -1 )
              {
                if ( v32 == v33 )
                  v37 = 0;
                else
                  v37 = *(_QWORD *)(v35 + 40) == 0 ? 32 : 16;
                v36 = v32 - v33 - v37;
              }
              if ( !v34 || v36 != v34 )
              {
LABEL_56:
                sub_DACC60(
                  (__m128 *)&v175,
                  (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
                  (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
                  a2,
                  1);
                v38 = *(_DWORD *)(a2 + 16);
                v39 = v175;
                v40 = *(__int64 **)a2;
                if ( v38 )
                {
                  v41 = (v38 - 1) & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
                  v42 = &v40[v41];
                  v43 = *v42;
                  if ( v30 == *v42 )
                  {
LABEL_58:
                    sub_DACC60((__m128 *)&v175, v42, &v40[v38], a2, 1);
                    v44 = v175;
                    goto LABEL_59;
                  }
                  v155 = 1;
                  if ( v43 != -4096 )
                  {
                    do
                    {
                      v156 = v155 + 1;
                      v41 = (v38 - 1) & (v155 + v41);
                      v42 = &v40[v41];
                      v157 = *v42;
                      if ( v30 == *v42 )
                        goto LABEL_58;
                      v155 = v156;
                    }
                    while ( v157 != -4096 );
                  }
                }
                sub_DACC60((__m128 *)&v175, &v40[v38], &v40[v38], a2, 1);
                v44 = v175;
LABEL_59:
                if ( v39 == v44 )
                  sub_DACCD0(v29, a2);
              }
            }
          }
        }
      }
    }
  }
}
