void __fastcall sub_D88F90(__int64 *a1, __int64 a2)
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
  __int64 *v71; // rdi
  int v72; // r9d
  __int64 v73; // rcx
  __m128i *v74; // rdx
  unsigned __int64 v75; // rsi
  __m128i v76; // xmm0
  __int64 *v77; // rdx
  int i; // r14d
  __int64 v79; // rcx
  unsigned int v80; // esi
  _QWORD *v81; // r8
  __int64 v82; // r10
  int v83; // edi
  unsigned int v84; // ecx
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  int v90; // r9d
  __int64 v91; // rcx
  __m128i *v92; // rdx
  unsigned __int64 v93; // rsi
  __m128i si128; // xmm0
  __int64 *v95; // rdx
  int v96; // r11d
  __int64 v97; // rcx
  unsigned int v98; // r10d
  _QWORD *v99; // rsi
  __int64 v100; // r8
  int v101; // r14d
  int v102; // r8d
  __int64 *v103; // rdi
  unsigned int v104; // edx
  unsigned int v105; // r14d
  int v106; // eax
  int v107; // ecx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rsi
  __int64 v111; // r8
  __int64 v112; // rdi
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r15
  __int64 v118; // r9
  __int64 v119; // rax
  __int64 v120; // r8
  __int64 v121; // rsi
  unsigned int v122; // edx
  int v123; // ecx
  int v124; // eax
  __int64 v125; // rax
  int v126; // eax
  _QWORD *v127; // rdx
  int v128; // edx
  __int64 *v129; // rcx
  unsigned int v130; // eax
  __int64 *v131; // rsi
  __int64 v132; // r8
  __int64 v133; // rax
  __int64 v134; // r10
  __int64 v135; // rcx
  __int64 v136; // rcx
  __m128i *v137; // rdx
  unsigned __int64 v138; // rsi
  __m128i v139; // xmm0
  __int64 v140; // rcx
  __int64 v141; // rcx
  __int64 v142; // rcx
  __m128i *v143; // rdx
  unsigned __int64 v144; // rsi
  __m128i v145; // xmm0
  _QWORD *v146; // r11
  int v147; // ecx
  int v148; // esi
  int v149; // r11d
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rcx
  int v153; // esi
  int v154; // r9d
  __int64 v155; // r8
  __int64 *v156; // r8
  int v157; // r9d
  __int64 v158; // [rsp+0h] [rbp-B8h]
  __int64 v159; // [rsp+0h] [rbp-B8h]
  __int64 v160; // [rsp+0h] [rbp-B8h]
  int v161; // [rsp+0h] [rbp-B8h]
  _QWORD *v162; // [rsp+0h] [rbp-B8h]
  __int64 v163; // [rsp+0h] [rbp-B8h]
  int v164; // [rsp+8h] [rbp-B0h]
  int v165; // [rsp+8h] [rbp-B0h]
  int v166; // [rsp+10h] [rbp-A8h]
  unsigned int v167; // [rsp+1Ch] [rbp-9Ch]
  unsigned __int64 v168; // [rsp+20h] [rbp-98h] BYREF
  __int128 v169; // [rsp+28h] [rbp-90h]
  int v170; // [rsp+38h] [rbp-80h]
  __int64 v171; // [rsp+40h] [rbp-78h]
  __int64 v172; // [rsp+48h] [rbp-70h]
  __int64 v173; // [rsp+50h] [rbp-68h] BYREF
  __int128 v174; // [rsp+58h] [rbp-60h]
  int v175; // [rsp+68h] [rbp-50h]
  __int64 v176; // [rsp+70h] [rbp-48h]
  __int64 v177; // [rsp+78h] [rbp-40h]

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
      sub_D88EB0((__m128 *)&v173, v15, &v13[v10], a2, 1);
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
      v85 = (v5 >> 1) | v5 | (((v5 >> 1) | v5) >> 2);
      v86 = v85 >> 4;
      v87 = (((((v86 | v85) >> 8) | v86 | v85) >> 16) | ((v86 | v85) >> 8) | v86 | v85) + 1;
      if ( (unsigned int)v87 < 0x40 )
        LODWORD(v87) = 64;
      *(_DWORD *)(a2 + 16) = v87;
      v88 = sub_220C370(8LL * (unsigned int)v87, 8, 64, v86, v6, v7);
      *(_QWORD *)a2 = v88;
      if ( v13 )
      {
        v89 = *(unsigned int *)(a2 + 16);
        *(_QWORD *)(a2 + 8) = 0;
        v90 = v89;
        v91 = 8 * v89;
        if ( v88 != v88 + v91 )
        {
          v92 = (__m128i *)v88;
          v93 = ((unsigned __int64)(v91 - 8) >> 3) + 1;
          if ( v91 == 8 )
            goto LABEL_138;
          si128 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
          do
            *v92++ = si128;
          while ( (__m128i *)(v88 + 16 * (v93 >> 1)) != v92 );
          v92 = (__m128i *)(v88 + 8 * (v93 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v93 & 0xFFFFFFFFFFFFFFFELL) != v93 )
LABEL_138:
            v92->m128i_i64[0] = -4096;
        }
        v95 = v13;
        v96 = v90 - 1;
        do
        {
          v97 = *v95;
          if ( *v95 != -8192 && v97 != -4096 )
          {
            if ( !v90 )
            {
              *(_QWORD *)&dword_0 = *v95;
              BUG();
            }
            v98 = v96 & (((unsigned int)v97 >> 9) ^ ((unsigned int)v97 >> 4));
            v99 = (_QWORD *)(v88 + 8LL * v98);
            v100 = *v99;
            if ( v97 != *v99 && v100 != -4096 )
            {
              v165 = 1;
              v162 = nullptr;
              while ( 1 )
              {
                if ( !v162 )
                {
                  if ( v100 != -8192 )
                    v99 = nullptr;
                  v162 = v99;
                }
                v98 = v96 & (v165 + v98);
                v99 = (_QWORD *)(v88 + 8LL * v98);
                v100 = *v99;
                if ( v97 == *v99 )
                  break;
                if ( v100 == -4096 )
                {
                  if ( v162 )
                    v99 = v162;
                  break;
                }
                ++v165;
              }
            }
            ++*(_DWORD *)(a2 + 8);
            *v99 = v97;
          }
          ++v95;
        }
        while ( &v13[v10] != v95 );
        operator delete();
        v13 = *(__int64 **)a2;
        v10 = *(unsigned int *)(a2 + 16);
        v63 = *(_DWORD *)(a2 + 8) + 1;
      }
      else
      {
        v141 = *(unsigned int *)(a2 + 16);
        *(_QWORD *)(a2 + 8) = 0;
        v10 = v141;
        v142 = 8 * v141;
        v13 = (__int64 *)(v88 + v142);
        if ( v88 == v88 + v142 )
        {
          v63 = 1;
        }
        else
        {
          v143 = (__m128i *)v88;
          v144 = ((unsigned __int64)(v142 - 8) >> 3) + 1;
          if ( v142 == 8 )
            goto LABEL_225;
          v145 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
          do
            *v143++ = v145;
          while ( v143 != (__m128i *)(v88 + 16 * (v144 >> 1)) );
          v143 = (__m128i *)(v88 + 8 * (v144 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v144 & 0xFFFFFFFFFFFFFFFELL) != v144 )
LABEL_225:
            v143->m128i_i64[0] = -4096;
          v13 = (__int64 *)v88;
          v63 = 1;
        }
      }
      if ( (_DWORD)v10 )
      {
        v101 = (v10 - 1) & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
        v15 = &v13[v101];
        v64 = *v15;
        if ( v2 != *v15 )
        {
          v102 = 1;
          v103 = nullptr;
          if ( v64 != -4096 )
          {
            while ( 1 )
            {
              if ( !v103 && v64 == -8192 )
                v103 = v15;
              v101 = (v10 - 1) & (v102 + v101);
              v15 = &v13[v101];
              v64 = *v15;
              if ( v2 == *v15 )
                goto LABEL_103;
              if ( v64 == -4096 )
              {
                if ( !v103 )
                  goto LABEL_129;
                v64 = *v103;
                v15 = v103;
                goto LABEL_103;
              }
              ++v102;
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
  v69 = sub_220C370(8LL * (unsigned int)v68, 8, 64, v5, v6, v7);
  *(_QWORD *)a2 = v69;
  if ( v13 )
  {
    v70 = *(unsigned int *)(a2 + 16);
    *(_QWORD *)(a2 + 8) = 0;
    v71 = &v13[v10];
    v72 = v70;
    v73 = 8 * v70;
    if ( v69 != v69 + v73 )
    {
      v74 = (__m128i *)v69;
      v75 = ((unsigned __int64)(v73 - 8) >> 3) + 1;
      if ( v73 == 8 )
        goto LABEL_117;
      v76 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
      do
        *v74++ = v76;
      while ( (__m128i *)(v69 + 16 * (v75 >> 1)) != v74 );
      v74 = (__m128i *)(v69 + 8 * (v75 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v75 & 0xFFFFFFFFFFFFFFFELL) != v75 )
LABEL_117:
        v74->m128i_i64[0] = -4096;
    }
    v77 = v13;
    for ( i = v72 - 1; v71 != v77; ++v77 )
    {
      v79 = *v77;
      if ( *v77 != -4096 && v79 != -8192 )
      {
        if ( !v72 )
        {
          *(_QWORD *)&dword_0 = *v77;
          BUG();
        }
        v80 = i & (((unsigned int)v79 >> 9) ^ ((unsigned int)v79 >> 4));
        v81 = (_QWORD *)(v69 + 8LL * v80);
        v82 = *v81;
        if ( v79 != *v81 && v82 != -4096 )
        {
          v161 = 1;
          v146 = nullptr;
          while ( 1 )
          {
            if ( !v146 && v82 == -8192 )
              v146 = v81;
            v80 = i & (v161 + v80);
            v81 = (_QWORD *)(v69 + 8LL * v80);
            v82 = *v81;
            if ( v79 == *v81 )
              break;
            if ( v82 == -4096 )
            {
              if ( v146 )
                v81 = v146;
              break;
            }
            ++v161;
          }
        }
        ++*(_DWORD *)(a2 + 8);
        *v81 = v79;
      }
    }
    operator delete();
    v13 = *(__int64 **)a2;
    v10 = *(unsigned int *)(a2 + 16);
    v63 = *(_DWORD *)(a2 + 8) + 1;
  }
  else
  {
    v135 = *(unsigned int *)(a2 + 16);
    *(_QWORD *)(a2 + 8) = 0;
    v10 = v135;
    v136 = 8 * v135;
    v13 = (__int64 *)(v69 + v136);
    if ( v69 == v69 + v136 )
    {
      v63 = 1;
    }
    else
    {
      v137 = (__m128i *)v69;
      v138 = ((unsigned __int64)(v136 - 8) >> 3) + 1;
      if ( v136 == 8 )
        goto LABEL_210;
      v139 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
      do
        *v137++ = v139;
      while ( (__m128i *)(v69 + 16 * (v138 >> 1)) != v137 );
      v137 = (__m128i *)(v69 + 8 * (v138 & 0xFFFFFFFFFFFFFFFELL));
      if ( v138 != (v138 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_210:
        v137->m128i_i64[0] = -4096;
      v13 = (__int64 *)v69;
      v63 = 1;
    }
  }
  if ( !(_DWORD)v10 )
    goto LABEL_313;
  v83 = v10 - 1;
  v84 = (v10 - 1) & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
  v15 = &v13[v84];
  v64 = *v15;
  if ( v2 == *v15 )
    goto LABEL_103;
  if ( v64 != -4096 )
  {
    v156 = &v13[v83 & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4))];
    v157 = 1;
    v15 = nullptr;
    while ( 1 )
    {
      if ( v64 == -8192 && !v15 )
        v15 = v156;
      v84 = v83 & (v157 + v84);
      v156 = &v13[v84];
      v64 = *v156;
      if ( v2 == *v156 )
      {
        v15 = &v13[v84];
        goto LABEL_103;
      }
      if ( v64 == -4096 )
        break;
      ++v157;
    }
    if ( v15 )
      goto LABEL_102;
    v15 = &v13[v84];
  }
LABEL_129:
  *(_DWORD *)(a2 + 8) = v63;
LABEL_105:
  *v15 = v2;
  sub_D88EB0((__m128 *)&v173, v15, &v13[v10], a2, 1);
  v65 = *(unsigned int *)(a2 + 32);
  if ( v65 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 36) )
  {
    sub_22134E0(a2 + 24, a2 + 40, v65 + 1, 8);
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
        sub_DFF4E0(&v173, v18, v24, (unsigned int)v24);
        sub_D88F90(&v173, a2);
        sub_DFF560(&v173);
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
          v168 = v46;
          v169 = 0;
          v170 = 2;
          v171 = v66;
          goto LABEL_96;
        }
        v49 = *((unsigned int *)a1 + 10);
        if ( (_DWORD)v49 == -1 )
        {
          if ( v48 == 3 )
            BUG();
          sub_DFF4E0(&v168, a1[4], v49, *(unsigned int *)(*(_QWORD *)(a1[4] + 32) + 20LL));
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
          sub_DFF4E0(&v168, v50, v49, v54 + v51);
        }
        if ( v170 || !v171 )
          goto LABEL_96;
        v55 = *(_DWORD **)(v171 + 32);
        v56 = v55;
        v57 = v55[6] == (_DWORD)v172 || (_DWORD)v172 == 0;
        if ( !v57 )
          v56 = *(_DWORD **)(v171 + (unsigned int)v172 + 32);
        if ( v56[5] == -1 )
          goto LABEL_96;
        v58 = v168;
        if ( (_DWORD)v172 == -1 )
        {
          if ( v168 )
            v58 = 0xFFFFFFFFLL;
          sub_DFF4E0(&v173, v171, 16, v58);
          goto LABEL_93;
        }
        v59 = *(_QWORD *)(v171 + 32);
        if ( !v57 )
          v59 = *(_QWORD *)(v171 + (unsigned int)v172 + 32);
        if ( *(_DWORD *)(v59 + 20) == -1 )
        {
          if ( v168 == (unsigned int)v172 )
            goto LABEL_96;
        }
        else
        {
          if ( (unsigned int)v55[7] < v168 )
            goto LABEL_249;
          if ( v57 )
          {
            v147 = v55[5];
            if ( (unsigned int)v172 == v168 )
              goto LABEL_247;
          }
          else
          {
            v147 = *(_DWORD *)(*(_QWORD *)(v171 + (unsigned int)v172 + 32) + 20LL);
            if ( (unsigned int)v172 == v168 )
            {
LABEL_247:
              if ( (_DWORD)v168 - (_DWORD)v172 == v147 && v147 )
                goto LABEL_249;
              goto LABEL_96;
            }
          }
          if ( (_DWORD)v168 - (_DWORD)v172 - (*((_QWORD *)v56 + 5) == 0 ? 32 : 16) == v147 && v147 )
          {
LABEL_249:
            sub_DFF4E0(&v173, v171, (unsigned int)v172, 0xFFFFFFFFLL);
            goto LABEL_93;
          }
        }
        if ( !*((_QWORD *)v56 + 5) && *((_BYTE *)v56 + 60) )
          goto LABEL_96;
        sub_DFF4E0(&v173, v171, (unsigned int)v168, v168);
LABEL_93:
        ++v46;
        sub_DFF560(&v168);
        sub_D88F90(&v173, a2);
        sub_DFF560(&v173);
        v45 = *(_DWORD *)(v19 + 20);
        v47 = 0;
        if ( v45 != -1 )
          goto LABEL_69;
      }
      v60 = a1[5];
      v61 = a1[4];
      v168 = v46;
      v170 = 1;
      v172 = v60;
      v171 = v61;
      v169 = 0;
LABEL_96:
      sub_DFF4A0(&v173, &v168);
      goto LABEL_93;
    }
    if ( *(_DWORD *)(v19 + 48) != 13 )
      return;
    v104 = *(_DWORD *)(v19 + 20);
    v105 = 0;
    v106 = 0;
    if ( v104 == -1 )
      goto LABEL_162;
LABEL_161:
    v106 = v104 / *(_DWORD *)(v19 + 16);
    while ( 1 )
    {
LABEL_162:
      if ( v105 == v106 )
        return;
      v107 = *((_DWORD *)a1 + 6);
      v108 = v105;
      if ( v107 == 1 )
        break;
      if ( v107 == 2 )
      {
        v115 = a1[4];
        v173 = v105;
        v174 = 0;
        v175 = 2;
        v176 = v115;
        goto LABEL_178;
      }
      v109 = *((unsigned int *)a1 + 10);
      if ( (_DWORD)v109 == -1 )
      {
        if ( v107 == 3 )
          BUG();
        sub_DFF4E0(&v173, a1[4], v109, *(unsigned int *)(*(_QWORD *)(a1[4] + 32) + 20LL));
      }
      else
      {
        if ( v107 )
        {
          if ( v107 == 3 )
            BUG();
          v110 = a1[4];
          v111 = (unsigned int)v109;
          v112 = *(_QWORD *)(v110 + 32);
          v113 = *(unsigned int *)(v112 + 16) * (unsigned __int64)v105;
        }
        else
        {
          v151 = a1[4];
          v110 = v151;
          if ( v151 && (v112 = *(_QWORD *)(v151 + 32), *(_DWORD *)(v112 + 24) != (_DWORD)v109) && (_DWORD)v109 )
          {
            v152 = (unsigned int)v109;
            v113 = *(unsigned int *)(*(_QWORD *)(v151 + (unsigned int)v109 + 32) + 16LL) * (unsigned __int64)v105;
          }
          else
          {
            v112 = *(_QWORD *)(v151 + 32);
            v110 = a1[4];
            v113 = *(unsigned int *)(v112 + 16) * (unsigned __int64)v105;
            v152 = (unsigned int)v109;
          }
          v111 = v152;
          if ( *(_DWORD *)(v112 + 24) != (_DWORD)v109 && (_DWORD)v109 )
            v112 = *(_QWORD *)(v151 + v152 + 32);
        }
        v114 = v113 + 32;
        if ( *(_QWORD *)(v112 + 40) )
          v114 = v113 + 16;
        sub_DFF4E0(&v173, v110, v109, v111 + v114);
      }
      v108 = v173;
      v115 = v176;
      if ( v175 )
        goto LABEL_178;
      v116 = *(_QWORD *)(v176 + 32);
      if ( *(_DWORD *)(v116 + 24) != (_DWORD)v177 && (_DWORD)v177 )
        v116 = *(_QWORD *)(v176 + (unsigned int)v177 + 32);
      if ( !*(_BYTE *)(v116 + 60) )
        goto LABEL_178;
      v117 = v176 + v173 + 72;
      if ( (unsigned int)v177 != v173 )
        goto LABEL_178;
LABEL_179:
      sub_DFF560(&v173);
      if ( !*(_DWORD *)(v117 + 24) )
      {
        v118 = *(_QWORD *)(v117 + 32);
        if ( v118 )
        {
          if ( !*(_BYTE *)(v118 + 26) )
          {
            v119 = *(_QWORD *)(v118 + 32);
            if ( !*(_BYTE *)(v119 + 61) )
            {
              v120 = *(_QWORD *)v117;
              v121 = *(_QWORD *)(v118 + 32);
              if ( *(_QWORD *)v117 <= (unsigned __int64)*(unsigned int *)(v119 + 28) )
              {
                v122 = *(_DWORD *)(v117 + 40);
                if ( *(_DWORD *)(v119 + 24) != v122 && v122 )
                {
                  v121 = *(_QWORD *)(v118 + v122 + 32);
                  v123 = *(_DWORD *)(v121 + 20);
                  if ( v123 != -1 )
                  {
LABEL_187:
                    if ( *(_DWORD *)(v121 + 20) != -1 )
                    {
                      v124 = *(_QWORD *)v117;
                      if ( v122 != -1 )
                      {
                        if ( v120 == v122 )
                        {
                          v126 = 0;
                        }
                        else
                        {
                          v167 = *(_DWORD *)(v117 + 40);
                          v166 = *(_QWORD *)v117;
                          v164 = v123;
                          v158 = *(_QWORD *)(v117 + 32);
                          v125 = sub_CDA220(v117);
                          v118 = v158;
                          v123 = v164;
                          LODWORD(v120) = v166;
                          v122 = v167;
                          v126 = *(_QWORD *)(v125 + 40) == 0 ? 32 : 16;
                        }
                        v124 = v120 - v122 - v126;
                      }
                      if ( v123 && v123 == v124 )
                        goto LABEL_199;
                    }
                    v159 = v118;
                    v127 = (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16));
                    sub_D88F20((__m128 *)&v173, v127, v127, a2, 1);
                    v128 = *(_DWORD *)(a2 + 16);
                    v129 = *(__int64 **)a2;
                    if ( !v128 )
                      goto LABEL_263;
                    v130 = (v128 - 1) & (((unsigned int)v159 >> 9) ^ ((unsigned int)v159 >> 4));
                    v131 = &v129[v130];
                    v132 = *v131;
                    if ( v159 == *v131 )
                      goto LABEL_196;
                    v148 = 1;
                    if ( v132 == -4096 )
                    {
LABEL_263:
                      v163 = v173;
                      sub_D88F20((__m128 *)&v173, &v129[v128], &v129[v128], a2, 1);
                      v133 = v173;
                      v134 = v163;
                    }
                    else
                    {
                      while ( 1 )
                      {
                        v149 = v148 + 1;
                        v130 = (v128 - 1) & (v148 + v130);
                        v131 = &v129[v130];
                        v150 = *v131;
                        if ( v159 == *v131 )
                          break;
                        v148 = v149;
                        if ( v150 == -4096 )
                          goto LABEL_263;
                      }
LABEL_196:
                      v160 = v173;
                      sub_D88F20((__m128 *)&v173, v131, &v129[v128], a2, 1);
                      v133 = v173;
                      v134 = v160;
                    }
                    if ( v134 == v133 )
                      sub_D88F90(v117, a2);
                  }
                }
                else
                {
                  v123 = *(_DWORD *)(v119 + 20);
                  if ( v123 != -1 )
                    goto LABEL_187;
                }
              }
            }
          }
        }
      }
LABEL_199:
      v104 = *(_DWORD *)(v19 + 20);
      ++v105;
      v106 = 0;
      if ( v104 != -1 )
        goto LABEL_161;
    }
    v140 = a1[5];
    v115 = a1[4];
    v173 = v105;
    v174 = 0;
    v175 = 1;
    v177 = v140;
    v176 = v115;
LABEL_178:
    v117 = v115 + v108 + 40;
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
                sub_D88F20(
                  (__m128 *)&v173,
                  (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
                  (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
                  a2,
                  1);
                v38 = *(_DWORD *)(a2 + 16);
                v39 = v173;
                v40 = *(__int64 **)a2;
                if ( v38 )
                {
                  v41 = (v38 - 1) & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
                  v42 = &v40[v41];
                  v43 = *v42;
                  if ( v30 == *v42 )
                  {
LABEL_58:
                    sub_D88F20((__m128 *)&v173, v42, &v40[v38], a2, 1);
                    v44 = v173;
                    goto LABEL_59;
                  }
                  v153 = 1;
                  if ( v43 != -4096 )
                  {
                    do
                    {
                      v154 = v153 + 1;
                      v41 = (v38 - 1) & (v153 + v41);
                      v42 = &v40[v41];
                      v155 = *v42;
                      if ( v30 == *v42 )
                        goto LABEL_58;
                      v153 = v154;
                    }
                    while ( v155 != -4096 );
                  }
                }
                sub_D88F20((__m128 *)&v173, &v40[v38], &v40[v38], a2, 1);
                v44 = v173;
LABEL_59:
                if ( v39 == v44 )
                  sub_D88F90(v29, a2);
              }
            }
          }
        }
      }
    }
  }
}

