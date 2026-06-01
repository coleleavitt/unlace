void __fastcall sub_FD0980(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v8; // r13
  __int64 *v9; // rbp
  unsigned int v10; // r12d
  int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 *v15; // r9
  const void *v16; // r13
  signed __int64 v17; // rbp
  __int64 v18; // r12
  _BYTE *v19; // rdi
  unsigned __int32 v20; // eax
  __int64 *v21; // r12
  __int64 v22; // rbp
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  int v25; // edi
  __int64 *v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // r10d
  __int64 v33; // rcx
  __int64 *v34; // r8
  __m128i *v35; // rdx
  unsigned __int64 v36; // rdi
  __int64 *v37; // rdx
  int j; // r15d
  __int64 v39; // rcx
  unsigned int v40; // edi
  _QWORD *v41; // r9
  __int64 v42; // r11
  int v43; // eax
  int v44; // edi
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 *v50; // rdi
  int v51; // r9d
  __int64 v52; // rcx
  __m128i *v53; // rdx
  unsigned __int64 v54; // rsi
  __int64 *v55; // rdx
  int v56; // r11d
  __int64 v57; // rcx
  unsigned int v58; // esi
  _QWORD *v59; // r8
  __int64 v60; // r10
  int v61; // r13d
  __int64 v62; // rdi
  int v63; // ecx
  __int64 *v64; // r10
  __int64 v65; // rsi
  __int64 v66; // rsi
  __m128i *v67; // rcx
  unsigned __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rsi
  __m128i *v71; // rcx
  unsigned __int64 v72; // rdi
  _QWORD *v73; // r13
  int v74; // r8d
  int v75; // eax
  __int64 v76; // rdx
  int v77; // r9d
  __int64 *v78; // r11
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  int v83; // r11d
  __int64 v84; // rcx
  __int64 *v85; // r8
  __m128i *v86; // rdx
  unsigned __int64 v87; // rdi
  __m128i v88; // xmm0
  __int64 *v89; // rdx
  int i; // r15d
  __int64 v91; // rcx
  unsigned int v92; // edi
  _QWORD *v93; // r9
  __int64 v94; // r10
  int v95; // ecx
  int v96; // r8d
  __int64 *v97; // rdi
  __int64 v98; // rcx
  __int64 v99; // rcx
  __m128i *v100; // rdx
  unsigned __int64 v101; // rsi
  __m128i v102; // xmm0
  unsigned __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 *v107; // rdi
  int v108; // r10d
  __int64 v109; // rcx
  __m128i *v110; // rdx
  unsigned __int64 v111; // rsi
  __m128i si128; // xmm0
  __int64 *v113; // rdx
  int v114; // r15d
  __int64 v115; // rcx
  unsigned int v116; // esi
  _QWORD *v117; // r8
  __int64 v118; // r9
  int v119; // r12d
  int v120; // edi
  __int64 *v121; // rcx
  __int64 v122; // rsi
  __int64 v123; // rsi
  __m128i *v124; // rdx
  unsigned __int64 v125; // rcx
  __m128i v126; // xmm0
  int v127; // r13d
  _QWORD *v128; // r12
  int v129; // r13d
  _QWORD *v130; // r11
  int v131; // [rsp+8h] [rbp-F0h]
  int v132; // [rsp+8h] [rbp-F0h]
  int v133; // [rsp+8h] [rbp-F0h]
  _QWORD *v134; // [rsp+8h] [rbp-F0h]
  int v135; // [rsp+10h] [rbp-E8h]
  __m128 v136; // [rsp+20h] [rbp-D8h] BYREF
  __m128 ptr; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v138[184]; // [rsp+40h] [rbp-B8h] BYREF

  v6 = a1 + 392;
  v8 = *(unsigned int *)(a1 + 408);
  v9 = *(__int64 **)(a1 + 392);
  if ( (_DWORD)v8 )
  {
    a4 = (unsigned int)(v8 - 1);
    v10 = ((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4);
    v11 = a4 & v10;
    v12 = &v9[(unsigned int)a4 & v10];
    v13 = *v12;
    if ( a1 == *v12 )
      goto LABEL_3;
    a6 = 1;
    a5 = 0;
    if ( v13 == -4096 )
      goto LABEL_98;
    while ( 1 )
    {
      if ( a5 || v13 != -8192 )
        v12 = (__int64 *)a5;
      a5 = (unsigned int)(a6 + 1);
      v11 = a4 & (a6 + v11);
      v13 = v9[v11];
      if ( a1 == v13 )
      {
        v12 = &v9[v11];
        goto LABEL_3;
      }
      if ( v13 == -4096 )
        break;
      a6 = (unsigned int)a5;
      a5 = (unsigned __int64)v12;
      v12 = &v9[v11];
    }
    if ( !v12 )
      v12 = &v9[v11];
LABEL_98:
    v75 = *(_DWORD *)(a1 + 400) + 1;
    if ( 4 * v75 < (unsigned int)(3 * v8) )
    {
      if ( (int)v8 - *(_DWORD *)(a1 + 404) - v75 > (unsigned int)v8 >> 3 )
      {
        v76 = *v12;
        goto LABEL_101;
      }
      v103 = (a4 >> 1) | a4;
      v104 = (((((((v103 | (v103 >> 2)) >> 4) | v103 | (v103 >> 2)) >> 8)
              | ((v103 | (v103 >> 2)) >> 4)
              | v103
              | (v103 >> 2)) >> 16)
            | ((((v103 | (v103 >> 2)) >> 4) | v103 | (v103 >> 2)) >> 8)
            | ((v103 | (v103 >> 2)) >> 4)
            | v103
            | (v103 >> 2))
           + 1;
      if ( (unsigned int)v104 < 0x40 )
        LODWORD(v104) = 64;
      *(_DWORD *)(a1 + 408) = v104;
      v105 = sub_220C370(8LL * (unsigned int)v104, 8, 64, v103, a5, a6);
      *(_QWORD *)(a1 + 392) = v105;
      if ( v9 )
      {
        v106 = *(unsigned int *)(a1 + 408);
        *(_QWORD *)(a1 + 400) = 0;
        v107 = &v9[v8];
        v108 = v106;
        v109 = 8 * v106;
        if ( v105 != v105 + v109 )
        {
          v110 = (__m128i *)v105;
          v111 = ((unsigned __int64)(v109 - 8) >> 3) + 1;
          if ( v109 == 8 )
            goto LABEL_150;
          si128 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
          do
            *v110++ = si128;
          while ( v110 != (__m128i *)(v105 + 16 * (v111 >> 1)) );
          v110 = (__m128i *)(v105 + 8 * (v111 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v111 & 0xFFFFFFFFFFFFFFFELL) != v111 )
LABEL_150:
            v110->m128i_i64[0] = -4096;
        }
        v113 = v9;
        v114 = v108 - 1;
        do
        {
          v115 = *v113;
          if ( *v113 != -8192 && v115 != -4096 )
          {
            if ( !v108 )
            {
              *(_QWORD *)&dword_0 = *v113;
              BUG();
            }
            v116 = v114 & (((unsigned int)v115 >> 9) ^ ((unsigned int)v115 >> 4));
            v117 = (_QWORD *)(v105 + 8LL * v116);
            v118 = *v117;
            if ( v115 != *v117 )
            {
              v129 = 1;
              v130 = nullptr;
              if ( v118 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v130 && v118 == -8192 )
                    v130 = v117;
                  v116 = v114 & (v129 + v116);
                  v117 = (_QWORD *)(v105 + 8LL * v116);
                  v118 = *v117;
                  if ( v115 == *v117 )
                    break;
                  if ( v118 == -4096 )
                  {
                    if ( v130 )
                      v117 = v130;
                    break;
                  }
                  ++v129;
                }
              }
            }
            ++*(_DWORD *)(a1 + 400);
            *v117 = v115;
          }
          ++v113;
        }
        while ( v107 != v113 );
        operator delete();
        v9 = *(__int64 **)(a1 + 392);
        v8 = *(unsigned int *)(a1 + 408);
        v75 = *(_DWORD *)(a1 + 400) + 1;
      }
      else
      {
        v122 = *(unsigned int *)(a1 + 408);
        *(_QWORD *)(a1 + 400) = 0;
        v8 = v122;
        v123 = 8 * v122;
        v9 = (__int64 *)(v105 + v123);
        if ( v105 == v105 + v123 )
        {
          v75 = 1;
        }
        else
        {
          v124 = (__m128i *)v105;
          v125 = ((unsigned __int64)(v123 - 8) >> 3) + 1;
          if ( v123 == 8 )
            goto LABEL_176;
          v126 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
          do
            *v124++ = v126;
          while ( v124 != (__m128i *)(v105 + 16 * (v125 >> 1)) );
          v124 = (__m128i *)(v105 + 8 * (v125 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v125 & 0xFFFFFFFFFFFFFFFELL) != v125 )
LABEL_176:
            v124->m128i_i64[0] = -4096;
          v9 = (__int64 *)v105;
          v75 = 1;
        }
      }
      if ( (_DWORD)v8 )
      {
        v119 = (v8 - 1) & v10;
        v12 = &v9[v119];
        v76 = *v12;
        if ( a1 == *v12 )
          goto LABEL_101;
        v120 = 1;
        v121 = nullptr;
        if ( v76 != -4096 )
        {
          while ( 1 )
          {
            if ( !v121 && v76 == -8192 )
              v121 = v12;
            v119 = (v8 - 1) & (v120 + v119);
            v12 = &v9[v119];
            v76 = *v12;
            if ( a1 == *v12 )
              goto LABEL_101;
            if ( v76 == -4096 )
            {
              if ( !v121 )
                break;
              v76 = *v121;
              v12 = v121;
              goto LABEL_101;
            }
            ++v120;
          }
        }
LABEL_129:
        *(_DWORD *)(a1 + 400) = v75;
        goto LABEL_103;
      }
LABEL_243:
      ++*(_DWORD *)(a1 + 400);
      BUG();
    }
  }
  v79 = (((((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v8 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 8)
      | (((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v8 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
      | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
      | (unsigned int)(2 * v8 - 1)
      | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1);
  v80 = ((v79 >> 16) | v79) + 1;
  if ( (unsigned int)v80 < 0x40 )
    LODWORD(v80) = 64;
  *(_DWORD *)(a1 + 408) = v80;
  v81 = sub_220C370(8LL * (unsigned int)v80, 8, 64, a4, a5, a6);
  *(_QWORD *)(a1 + 392) = v81;
  if ( v9 )
  {
    v82 = *(unsigned int *)(a1 + 408);
    *(_QWORD *)(a1 + 400) = 0;
    v83 = v82;
    v84 = 8 * v82;
    v85 = &v9[(unsigned int)v8];
    if ( v81 != v81 + v84 )
    {
      v86 = (__m128i *)v81;
      v87 = ((unsigned __int64)(v84 - 8) >> 3) + 1;
      if ( v84 == 8 )
        goto LABEL_117;
      v88 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
      do
        *v86++ = v88;
      while ( v86 != (__m128i *)(v81 + 16 * (v87 >> 1)) );
      v86 = (__m128i *)(v81 + 8 * (v87 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v87 & 0xFFFFFFFFFFFFFFFELL) != v87 )
LABEL_117:
        v86->m128i_i64[0] = -4096;
    }
    v89 = v9;
    for ( i = v83 - 1; v85 != v89; ++v89 )
    {
      v91 = *v89;
      if ( *v89 != -8192 && v91 != -4096 )
      {
        if ( !v83 )
        {
          *(_QWORD *)&dword_0 = *v89;
          BUG();
        }
        v92 = i & (((unsigned int)v91 >> 9) ^ ((unsigned int)v91 >> 4));
        v93 = (_QWORD *)(v81 + 8LL * v92);
        v94 = *v93;
        if ( v91 != *v93 )
        {
          v127 = 1;
          v128 = nullptr;
          if ( v94 != -4096 )
          {
            while ( 1 )
            {
              if ( !v128 && v94 == -8192 )
                v128 = v93;
              v92 = i & (v127 + v92);
              v93 = (_QWORD *)(v81 + 8LL * v92);
              v94 = *v93;
              if ( v91 == *v93 )
                break;
              if ( v94 == -4096 )
              {
                if ( v128 )
                  v93 = v128;
                break;
              }
              ++v127;
            }
          }
        }
        ++*(_DWORD *)(a1 + 400);
        *v93 = v91;
      }
    }
    operator delete();
    v9 = *(__int64 **)(a1 + 392);
    v8 = *(unsigned int *)(a1 + 408);
    v75 = *(_DWORD *)(a1 + 400) + 1;
  }
  else
  {
    v98 = *(unsigned int *)(a1 + 408);
    *(_QWORD *)(a1 + 400) = 0;
    v8 = v98;
    v99 = 8 * v98;
    v9 = (__int64 *)(v81 + v99);
    if ( v81 == v81 + v99 )
    {
      v75 = 1;
    }
    else
    {
      v100 = (__m128i *)v81;
      v101 = ((unsigned __int64)(v99 - 8) >> 3) + 1;
      if ( v99 == 8 )
        goto LABEL_135;
      v102 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
      do
        *v100++ = v102;
      while ( v100 != (__m128i *)(v81 + 16 * (v101 >> 1)) );
      v100 = (__m128i *)(v81 + 8 * (v101 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v101 & 0xFFFFFFFFFFFFFFFELL) != v101 )
LABEL_135:
        v100->m128i_i64[0] = -4096;
      v9 = (__int64 *)v81;
      v75 = 1;
    }
  }
  if ( !(_DWORD)v8 )
    goto LABEL_243;
  v95 = (v8 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
  v12 = &v9[v95];
  v76 = *v12;
  if ( a1 == *v12 )
    goto LABEL_101;
  v96 = 1;
  v97 = nullptr;
  if ( v76 == -4096 )
    goto LABEL_129;
  while ( 1 )
  {
    if ( v76 == -8192 && !v97 )
      v97 = v12;
    v95 = (v8 - 1) & (v96 + v95);
    v12 = &v9[v95];
    v76 = *v12;
    if ( a1 == *v12 )
      break;
    if ( v76 == -4096 )
    {
      if ( !v97 )
        goto LABEL_129;
      v76 = *v97;
      v12 = v97;
      break;
    }
    ++v96;
  }
LABEL_101:
  *(_DWORD *)(a1 + 400) = v75;
  if ( v76 != -4096 )
    --*(_DWORD *)(a1 + 404);
LABEL_103:
  *v12 = a1;
LABEL_3:
  sub_FD0910(&ptr, v12, &v9[v8], v6, 1);
  v16 = *(const void **)(a1 + 944);
  v17 = 8LL * *(unsigned int *)(a1 + 952);
  ptr.m128_u64[0] = (unsigned __int64)v138;
  ptr.m128_u64[1] = 0x1000000000LL;
  v18 = v17 >> 3;
  if ( (unsigned __int64)v17 > 0x80 )
  {
    sub_22134E0(&ptr, v138, v18, 8);
    v19 = (_BYTE *)(ptr.m128_u64[0] + 8LL * ptr.m128_u32[2]);
  }
  else
  {
    v19 = v138;
    if ( !v17 )
      goto LABEL_5;
  }
  memcpy(v19, v16, v17);
  LODWORD(v17) = ptr.m128_i32[2];
  v19 = (_BYTE *)ptr.m128_u64[0];
LABEL_5:
  v20 = v18 + v17;
  ptr.m128_i32[2] = v18 + v17;
  if ( (_DWORD)v18 + (_DWORD)v17 )
  {
    while ( 1 )
    {
      v21 = *(__int64 **)(a1 + 392);
      v22 = *(_QWORD *)&v19[8 * v20 - 8];
      v23 = *(unsigned int *)(a1 + 408);
      ptr.m128_i32[2] = v20 - 1;
      if ( !(_DWORD)v23 )
        break;
      while ( 1 )
      {
        v24 = (unsigned int)(v23 - 1);
        v25 = v24 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
        v26 = &v21[v25];
        v27 = *v26;
        if ( *v26 != v22 )
          break;
LABEL_8:
        sub_FD0910(&v136, v26, &v21[v23], v6, 1);
        v19 = (_BYTE *)ptr.m128_u64[0];
        if ( !ptr.m128_i32[2] )
          goto LABEL_32;
        v21 = *(__int64 **)(a1 + 392);
        v22 = *(_QWORD *)(ptr.m128_u64[0] + 8LL * ptr.m128_u32[2] - 8);
        v23 = *(unsigned int *)(a1 + 408);
        --ptr.m128_i32[2];
        if ( !(_DWORD)v23 )
          goto LABEL_10;
      }
      if ( v27 != -4096 )
      {
        v74 = 1;
        v15 = nullptr;
        while ( 1 )
        {
          if ( !v15 && v27 == -8192 )
            v15 = v26;
          v25 = v24 & (v74 + v25);
          v26 = &v21[v25];
          v27 = *v26;
          if ( *v26 == v22 )
            goto LABEL_8;
          if ( v27 == -4096 )
            break;
          ++v74;
        }
        if ( v15 )
          v26 = v15;
      }
      v43 = *(_DWORD *)(a1 + 400) + 1;
      v14 = (unsigned int)(4 * v43);
      if ( (unsigned int)v14 >= 3 * (int)v23 )
        goto LABEL_11;
      v46 = (unsigned int)(v23 - (v43 + *(_DWORD *)(a1 + 404)));
      if ( (unsigned int)v46 > (unsigned int)v23 >> 3 )
        goto LABEL_40;
      v132 = v23;
      v47 = ((((((((v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 4) | (v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 8)
             | (((v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 4)
             | (v24 >> 1)
             | v24
             | (((v24 >> 1) | v24) >> 2)) >> 16)
           | (((((v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 4) | (v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 8)
           | (((v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 4)
           | (v24 >> 1)
           | v24
           | (((v24 >> 1) | v24) >> 2))
          + 1;
      if ( v47 < 0x40 )
        v47 = 64;
      *(_DWORD *)(a1 + 408) = v47;
      v48 = sub_220C370(8LL * v47, 8, v23, 64, v46, v15);
      *(_QWORD *)(a1 + 392) = v48;
      if ( v21 )
      {
        v49 = *(unsigned int *)(a1 + 408);
        *(_QWORD *)(a1 + 400) = 0;
        v50 = &v21[v132];
        v51 = v49;
        v52 = 8 * v49;
        if ( v48 != v48 + v52 )
        {
          v53 = (__m128i *)v48;
          v54 = ((unsigned __int64)(v52 - 8) >> 3) + 1;
          if ( v52 == 8 )
            goto LABEL_48;
          do
          {
            ++v53;
            v53[-1] = _mm_load_si128((const __m128i *)&xmmword_2384C40);
          }
          while ( (__m128i *)(v48 + 16 * (v54 >> 1)) != v53 );
          v53 = (__m128i *)(v48 + 8 * (v54 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v54 & 0xFFFFFFFFFFFFFFFELL) != v54 )
LABEL_48:
            v53->m128i_i64[0] = -4096;
        }
        v55 = v21;
        v56 = v51 - 1;
        do
        {
          v57 = *v55;
          if ( *v55 != -8192 && v57 != -4096 )
          {
            if ( !v51 )
            {
              *(_QWORD *)&dword_0 = *v55;
              BUG();
            }
            v58 = v56 & (((unsigned int)v57 >> 9) ^ ((unsigned int)v57 >> 4));
            v59 = (_QWORD *)(v48 + 8LL * v58);
            v60 = *v59;
            if ( *v59 != v57 && v60 != -4096 )
            {
              v135 = 1;
              v134 = nullptr;
              while ( 1 )
              {
                if ( v60 == -8192 )
                {
                  if ( v134 )
                    v59 = v134;
                  v134 = v59;
                }
                v58 = v56 & (v135 + v58);
                v59 = (_QWORD *)(v48 + 8LL * v58);
                v60 = *v59;
                if ( v57 == *v59 )
                  break;
                if ( v60 == -4096 )
                {
                  if ( v134 )
                    v59 = v134;
                  break;
                }
                ++v135;
              }
            }
            ++*(_DWORD *)(a1 + 400);
            *v59 = v57;
          }
          ++v55;
        }
        while ( v50 != v55 );
        operator delete();
        v21 = *(__int64 **)(a1 + 392);
        v23 = *(unsigned int *)(a1 + 408);
        v43 = *(_DWORD *)(a1 + 400) + 1;
      }
      else
      {
        v69 = *(unsigned int *)(a1 + 408);
        *(_QWORD *)(a1 + 400) = 0;
        v23 = v69;
        v70 = 8 * v69;
        v21 = (__int64 *)(v48 + v70);
        if ( v48 == v48 + v70 )
        {
          v43 = 1;
        }
        else
        {
          v71 = (__m128i *)v48;
          v72 = ((unsigned __int64)(v70 - 8) >> 3) + 1;
          if ( v70 == 8 )
            goto LABEL_71;
          do
          {
            ++v71;
            v71[-1] = _mm_load_si128((const __m128i *)&xmmword_2384C40);
          }
          while ( (__m128i *)(v48 + 16 * (v72 >> 1)) != v71 );
          v71 = (__m128i *)(v48 + 8 * (v72 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v72 & 0xFFFFFFFFFFFFFFFELL) != v72 )
LABEL_71:
            v71->m128i_i64[0] = -4096;
          v21 = (__int64 *)v48;
          v43 = 1;
        }
      }
      if ( !(_DWORD)v23 )
      {
LABEL_244:
        ++*(_DWORD *)(a1 + 400);
        BUG();
      }
      v61 = (v23 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
      v26 = &v21[v61];
      v45 = v22;
      v62 = *v26;
      if ( *v26 == v22 )
        goto LABEL_29;
      v63 = 1;
      v64 = nullptr;
      if ( v62 != -4096 )
      {
        while ( 1 )
        {
          if ( v64 || v62 != -8192 )
            v26 = v64;
          v61 = (v23 - 1) & (v63 + v61);
          v62 = v21[v61];
          if ( v62 == v22 )
          {
            v45 = v22;
            v26 = &v21[v61];
            goto LABEL_29;
          }
          if ( v62 == -4096 )
            break;
          ++v63;
          v64 = v26;
          v26 = &v21[v61];
        }
        if ( v26 )
        {
LABEL_40:
          v45 = *v26;
LABEL_29:
          *(_DWORD *)(a1 + 400) = v43;
          if ( v45 != -4096 )
            --*(_DWORD *)(a1 + 404);
          goto LABEL_31;
        }
        v26 = &v21[v61];
      }
LABEL_60:
      *(_DWORD *)(a1 + 400) = v43;
LABEL_31:
      *v26 = v22;
      sub_FD0910(&v136, v26, &v21[v23], v6, 1);
      sub_FCB570(v22, (__int64)&ptr);
      v20 = ptr.m128_u32[2];
      v19 = (_BYTE *)ptr.m128_u64[0];
      if ( !ptr.m128_i32[2] )
        goto LABEL_32;
    }
LABEL_10:
    v23 = 0;
LABEL_11:
    v131 = v23;
    v28 = (((((((unsigned int)(2 * v23 - 1) | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v23 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v23 - 1) | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v23 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v23 - 1) | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v23 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v23 - 1) | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v23 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1);
    v29 = ((v28 >> 16) | v28) + 1;
    if ( (unsigned int)v29 < 0x40 )
      LODWORD(v29) = 64;
    *(_DWORD *)(a1 + 408) = v29;
    v30 = sub_220C370(8LL * (unsigned int)v29, 8, v23, 64, v14, v15);
    *(_QWORD *)(a1 + 392) = v30;
    if ( v21 )
    {
      v31 = *(unsigned int *)(a1 + 408);
      *(_QWORD *)(a1 + 400) = 0;
      v32 = v31;
      v33 = 8 * v31;
      v34 = &v21[v131];
      if ( v30 != v30 + v33 )
      {
        v35 = (__m128i *)v30;
        v36 = ((unsigned __int64)(v33 - 8) >> 3) + 1;
        if ( v33 == 8 )
          goto LABEL_18;
        do
        {
          ++v35;
          v35[-1] = _mm_load_si128((const __m128i *)&xmmword_2384C40);
        }
        while ( v35 != (__m128i *)(v30 + 16 * (v36 >> 1)) );
        v35 = (__m128i *)(v30 + 8 * (v36 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v36 & 0xFFFFFFFFFFFFFFFELL) != v36 )
LABEL_18:
          v35->m128i_i64[0] = -4096;
      }
      v37 = v21;
      for ( j = v32 - 1; v34 != v37; ++v37 )
      {
        v39 = *v37;
        if ( *v37 != -4096 && v39 != -8192 )
        {
          if ( !v32 )
          {
            *(_QWORD *)&dword_0 = *v37;
            BUG();
          }
          v40 = j & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
          v41 = (_QWORD *)(v30 + 8LL * v40);
          v42 = *v41;
          if ( v39 != *v41 && v42 != -4096 )
          {
            v133 = 1;
            v73 = nullptr;
            while ( 1 )
            {
              if ( !v73 && v42 == -8192 )
                v73 = v41;
              v40 = j & (v133 + v40);
              v41 = (_QWORD *)(v30 + 8LL * v40);
              v42 = *v41;
              if ( v39 == *v41 )
                break;
              if ( v42 == -4096 )
              {
                if ( v73 )
                  v41 = v73;
                break;
              }
              ++v133;
            }
          }
          ++*(_DWORD *)(a1 + 400);
          *v41 = v39;
        }
      }
      operator delete();
      v21 = *(__int64 **)(a1 + 392);
      v23 = *(unsigned int *)(a1 + 408);
      v43 = *(_DWORD *)(a1 + 400) + 1;
    }
    else
    {
      v65 = *(unsigned int *)(a1 + 408);
      *(_QWORD *)(a1 + 400) = 0;
      v23 = v65;
      v66 = 8 * v65;
      v21 = (__int64 *)(v30 + v66);
      if ( v30 == v30 + v66 )
      {
        v43 = 1;
      }
      else
      {
        v67 = (__m128i *)v30;
        v68 = ((unsigned __int64)(v66 - 8) >> 3) + 1;
        if ( v66 == 8 )
          goto LABEL_65;
        do
        {
          ++v67;
          v67[-1] = _mm_load_si128((const __m128i *)&xmmword_2384C40);
        }
        while ( (__m128i *)(v30 + 16 * (v68 >> 1)) != v67 );
        v67 = (__m128i *)(v30 + 8 * (v68 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v68 & 0xFFFFFFFFFFFFFFFELL) != v68 )
LABEL_65:
          v67->m128i_i64[0] = -4096;
        v21 = (__int64 *)v30;
        v43 = 1;
      }
    }
    if ( !(_DWORD)v23 )
      goto LABEL_244;
    v44 = (v23 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
    v26 = &v21[v44];
    v45 = *v26;
    if ( *v26 == v22 )
      goto LABEL_29;
    v77 = 1;
    v78 = nullptr;
    if ( v45 != -4096 )
    {
      while ( 1 )
      {
        if ( v45 != -8192 || v78 )
          v26 = v78;
        v44 = (v23 - 1) & (v77 + v44);
        v45 = v21[v44];
        if ( v45 == v22 )
        {
          v45 = v22;
          v26 = &v21[v44];
          goto LABEL_29;
        }
        if ( v45 == -4096 )
          break;
        ++v77;
        v78 = v26;
        v26 = &v21[v44];
      }
      if ( v26 )
        goto LABEL_40;
      v26 = &v21[v44];
    }
    goto LABEL_60;
  }
LABEL_32:
  if ( v19 != v138 )
    free(v19);
}

