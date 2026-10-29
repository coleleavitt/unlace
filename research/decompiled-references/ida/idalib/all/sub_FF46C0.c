void __fastcall sub_FF46C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5, __int64 a6)
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
  __int64 v32; // rsi
  int v33; // r10d
  __int64 v34; // rcx
  __int64 *v35; // r8
  __m128i *v36; // rdx
  unsigned __int64 v37; // rdi
  __int64 *v38; // rdx
  int j; // r15d
  __int64 v40; // rcx
  unsigned int v41; // edi
  _QWORD *v42; // r9
  __int64 v43; // r11
  int v44; // eax
  int v45; // edi
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r15
  int v52; // r9d
  __int64 v53; // rcx
  __m128i *v54; // rdx
  unsigned __int64 v55; // rsi
  __int64 *v56; // rdx
  int v57; // r11d
  __int64 v58; // rcx
  unsigned int v59; // esi
  _QWORD *v60; // r8
  __int64 v61; // r10
  int v62; // r13d
  __int64 v63; // rdi
  int v64; // ecx
  __int64 *v65; // r10
  __int64 v66; // rsi
  __int64 v67; // rsi
  __m128i *v68; // rcx
  unsigned __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rsi
  __m128i *v72; // rcx
  unsigned __int64 v73; // rdi
  _QWORD *v74; // r13
  int v75; // r8d
  int v76; // eax
  __int64 v77; // rdx
  int v78; // r9d
  __int64 *v79; // r11
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rsi
  int v85; // r11d
  __int64 v86; // rcx
  __int64 *v87; // r8
  __m128i *v88; // rdx
  unsigned __int64 v89; // rdi
  __m128i v90; // xmm0
  __int64 *v91; // rdx
  int i; // r15d
  __int64 v93; // rcx
  unsigned int v94; // edi
  _QWORD *v95; // r9
  __int64 v96; // r10
  int v97; // ecx
  int v98; // r8d
  __int64 *v99; // rdi
  __int64 v100; // rcx
  __int64 v101; // rcx
  __m128i *v102; // rdx
  unsigned __int64 v103; // rsi
  __m128i v104; // xmm0
  unsigned __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 *v109; // rdi
  int v110; // r10d
  __int64 v111; // rcx
  __m128i *v112; // rdx
  unsigned __int64 v113; // rsi
  __m128i si128; // xmm0
  __int64 *v115; // rdx
  int v116; // r15d
  __int64 v117; // rcx
  unsigned int v118; // esi
  _QWORD *v119; // r8
  __int64 v120; // r9
  int v121; // r12d
  int v122; // edi
  __int64 *v123; // rcx
  __int64 v124; // rsi
  __int64 v125; // rsi
  __m128i *v126; // rdx
  unsigned __int64 v127; // rcx
  __m128i v128; // xmm0
  int v129; // r13d
  _QWORD *v130; // r12
  int v131; // r13d
  _QWORD *v132; // r11
  __int64 v133; // [rsp+0h] [rbp-F8h]
  unsigned int v134; // [rsp+8h] [rbp-F0h]
  unsigned int v135; // [rsp+8h] [rbp-F0h]
  int v136; // [rsp+8h] [rbp-F0h]
  _QWORD *v137; // [rsp+8h] [rbp-F0h]
  int v138; // [rsp+10h] [rbp-E8h]
  __m128 v139; // [rsp+20h] [rbp-D8h] BYREF
  __m128 ptr; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v141[184]; // [rsp+40h] [rbp-B8h] BYREF

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
    v76 = *(_DWORD *)(a1 + 400) + 1;
    if ( 4 * v76 < (unsigned int)(3 * v8) )
    {
      if ( (int)v8 - *(_DWORD *)(a1 + 404) - v76 > (unsigned int)v8 >> 3 )
      {
        v77 = *v12;
        goto LABEL_101;
      }
      v105 = (a4 >> 1) | a4;
      v106 = (((((((v105 | (v105 >> 2)) >> 4) | v105 | (v105 >> 2)) >> 8)
              | ((v105 | (v105 >> 2)) >> 4)
              | v105
              | (v105 >> 2)) >> 16)
            | ((((v105 | (v105 >> 2)) >> 4) | v105 | (v105 >> 2)) >> 8)
            | ((v105 | (v105 >> 2)) >> 4)
            | v105
            | (v105 >> 2))
           + 1;
      if ( (unsigned int)v106 < 0x40 )
        LODWORD(v106) = 64;
      *(_DWORD *)(a1 + 408) = v106;
      v107 = sub_22300B0(8LL * (unsigned int)v106, 8, 64, v105, a5, a6);
      *(_QWORD *)(a1 + 392) = v107;
      if ( v9 )
      {
        v108 = *(unsigned int *)(a1 + 408);
        *(_QWORD *)(a1 + 400) = 0;
        v133 = 8 * v8;
        v109 = &v9[v8];
        v110 = v108;
        v111 = 8 * v108;
        if ( v107 != v107 + v111 )
        {
          v112 = (__m128i *)v107;
          v113 = ((unsigned __int64)(v111 - 8) >> 3) + 1;
          if ( v111 == 8 )
            goto LABEL_150;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v112++ = si128;
          while ( v112 != (__m128i *)(v107 + 16 * (v113 >> 1)) );
          v112 = (__m128i *)(v107 + 8 * (v113 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v113 & 0xFFFFFFFFFFFFFFFELL) != v113 )
LABEL_150:
            v112->m128i_i64[0] = -4096;
        }
        v115 = v9;
        v116 = v110 - 1;
        do
        {
          v117 = *v115;
          if ( *v115 != -8192 && v117 != -4096 )
          {
            if ( !v110 )
            {
              *(_QWORD *)&dword_0 = *v115;
              BUG();
            }
            v118 = v116 & (((unsigned int)v117 >> 9) ^ ((unsigned int)v117 >> 4));
            v119 = (_QWORD *)(v107 + 8LL * v118);
            v120 = *v119;
            if ( v117 != *v119 )
            {
              v131 = 1;
              v132 = nullptr;
              if ( v120 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v132 && v120 == -8192 )
                    v132 = v119;
                  v118 = v116 & (v131 + v118);
                  v119 = (_QWORD *)(v107 + 8LL * v118);
                  v120 = *v119;
                  if ( v117 == *v119 )
                    break;
                  if ( v120 == -4096 )
                  {
                    if ( v132 )
                      v119 = v132;
                    break;
                  }
                  ++v131;
                }
              }
            }
            ++*(_DWORD *)(a1 + 400);
            *v119 = v117;
          }
          ++v115;
        }
        while ( v109 != v115 );
        operator delete(v9, v133, 8);
        v9 = *(__int64 **)(a1 + 392);
        v8 = *(unsigned int *)(a1 + 408);
        v76 = *(_DWORD *)(a1 + 400) + 1;
      }
      else
      {
        v124 = *(unsigned int *)(a1 + 408);
        *(_QWORD *)(a1 + 400) = 0;
        v8 = v124;
        v125 = 8 * v124;
        v9 = (__int64 *)(v107 + v125);
        if ( v107 == v107 + v125 )
        {
          v76 = 1;
        }
        else
        {
          v126 = (__m128i *)v107;
          v127 = ((unsigned __int64)(v125 - 8) >> 3) + 1;
          if ( v125 == 8 )
            goto LABEL_176;
          v128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v126++ = v128;
          while ( v126 != (__m128i *)(v107 + 16 * (v127 >> 1)) );
          v126 = (__m128i *)(v107 + 8 * (v127 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v127 & 0xFFFFFFFFFFFFFFFELL) != v127 )
LABEL_176:
            v126->m128i_i64[0] = -4096;
          v9 = (__int64 *)v107;
          v76 = 1;
        }
      }
      if ( (_DWORD)v8 )
      {
        v121 = (v8 - 1) & v10;
        v12 = &v9[v121];
        v77 = *v12;
        if ( a1 == *v12 )
          goto LABEL_101;
        v122 = 1;
        v123 = nullptr;
        if ( v77 != -4096 )
        {
          while ( 1 )
          {
            if ( !v123 && v77 == -8192 )
              v123 = v12;
            v121 = (v8 - 1) & (v122 + v121);
            v12 = &v9[v121];
            v77 = *v12;
            if ( a1 == *v12 )
              goto LABEL_101;
            if ( v77 == -4096 )
            {
              if ( !v123 )
                break;
              v77 = *v123;
              v12 = v123;
              goto LABEL_101;
            }
            ++v122;
          }
        }
LABEL_129:
        *(_DWORD *)(a1 + 400) = v76;
        goto LABEL_103;
      }
LABEL_243:
      ++*(_DWORD *)(a1 + 400);
      BUG();
    }
  }
  v80 = (((((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
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
  v81 = ((v80 >> 16) | v80) + 1;
  if ( (unsigned int)v81 < 0x40 )
    LODWORD(v81) = 64;
  *(_DWORD *)(a1 + 408) = v81;
  v82 = sub_22300B0(8LL * (unsigned int)v81, 8, 64, a4, a5, a6);
  *(_QWORD *)(a1 + 392) = v82;
  if ( v9 )
  {
    v83 = *(unsigned int *)(a1 + 408);
    *(_QWORD *)(a1 + 400) = 0;
    v84 = (unsigned int)v8;
    v85 = v83;
    v86 = 8 * v83;
    v87 = &v9[v84];
    if ( v82 != v82 + v86 )
    {
      v88 = (__m128i *)v82;
      v89 = ((unsigned __int64)(v86 - 8) >> 3) + 1;
      if ( v86 == 8 )
        goto LABEL_117;
      v90 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v88++ = v90;
      while ( v88 != (__m128i *)(v82 + 16 * (v89 >> 1)) );
      v88 = (__m128i *)(v82 + 8 * (v89 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v89 & 0xFFFFFFFFFFFFFFFELL) != v89 )
LABEL_117:
        v88->m128i_i64[0] = -4096;
    }
    v91 = v9;
    for ( i = v85 - 1; v87 != v91; ++v91 )
    {
      v93 = *v91;
      if ( *v91 != -8192 && v93 != -4096 )
      {
        if ( !v85 )
        {
          *(_QWORD *)&dword_0 = *v91;
          BUG();
        }
        v94 = i & (((unsigned int)v93 >> 9) ^ ((unsigned int)v93 >> 4));
        v95 = (_QWORD *)(v82 + 8LL * v94);
        v96 = *v95;
        if ( v93 != *v95 )
        {
          v129 = 1;
          v130 = nullptr;
          if ( v96 != -4096 )
          {
            while ( 1 )
            {
              if ( !v130 && v96 == -8192 )
                v130 = v95;
              v94 = i & (v129 + v94);
              v95 = (_QWORD *)(v82 + 8LL * v94);
              v96 = *v95;
              if ( v93 == *v95 )
                break;
              if ( v96 == -4096 )
              {
                if ( v130 )
                  v95 = v130;
                break;
              }
              ++v129;
            }
          }
        }
        ++*(_DWORD *)(a1 + 400);
        *v95 = v93;
      }
    }
    operator delete(v9, v84 * 8, 8);
    v9 = *(__int64 **)(a1 + 392);
    v8 = *(unsigned int *)(a1 + 408);
    v76 = *(_DWORD *)(a1 + 400) + 1;
  }
  else
  {
    v100 = *(unsigned int *)(a1 + 408);
    *(_QWORD *)(a1 + 400) = 0;
    v8 = v100;
    v101 = 8 * v100;
    v9 = (__int64 *)(v82 + v101);
    if ( v82 == v82 + v101 )
    {
      v76 = 1;
    }
    else
    {
      v102 = (__m128i *)v82;
      v103 = ((unsigned __int64)(v101 - 8) >> 3) + 1;
      if ( v101 == 8 )
        goto LABEL_135;
      v104 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v102++ = v104;
      while ( v102 != (__m128i *)(v82 + 16 * (v103 >> 1)) );
      v102 = (__m128i *)(v82 + 8 * (v103 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v103 & 0xFFFFFFFFFFFFFFFELL) != v103 )
LABEL_135:
        v102->m128i_i64[0] = -4096;
      v9 = (__int64 *)v82;
      v76 = 1;
    }
  }
  if ( !(_DWORD)v8 )
    goto LABEL_243;
  v97 = (v8 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
  v12 = &v9[v97];
  v77 = *v12;
  if ( a1 == *v12 )
    goto LABEL_101;
  v98 = 1;
  v99 = nullptr;
  if ( v77 == -4096 )
    goto LABEL_129;
  while ( 1 )
  {
    if ( v77 == -8192 && !v99 )
      v99 = v12;
    v97 = (v8 - 1) & (v98 + v97);
    v12 = &v9[v97];
    v77 = *v12;
    if ( a1 == *v12 )
      break;
    if ( v77 == -4096 )
    {
      if ( !v99 )
        goto LABEL_129;
      v77 = *v99;
      v12 = v99;
      break;
    }
    ++v98;
  }
LABEL_101:
  *(_DWORD *)(a1 + 400) = v76;
  if ( v77 != -4096 )
    --*(_DWORD *)(a1 + 404);
LABEL_103:
  *v12 = a1;
LABEL_3:
  sub_FF4650(&ptr, v12, &v9[v8], v6, 1);
  v16 = *(const void **)(a1 + 944);
  v17 = 8LL * *(unsigned int *)(a1 + 952);
  ptr.m128_u64[0] = (unsigned __int64)v141;
  ptr.m128_u64[1] = 0x1000000000LL;
  v18 = v17 >> 3;
  if ( (unsigned __int64)v17 > 0x80 )
  {
    sub_2237220(&ptr, v141, v18, 8);
    v19 = (_BYTE *)(ptr.m128_u64[0] + 8LL * ptr.m128_u32[2]);
  }
  else
  {
    v19 = v141;
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
        sub_FF4650(&v139, v26, &v21[v23], v6, 1);
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
        v75 = 1;
        v15 = nullptr;
        while ( 1 )
        {
          if ( !v15 && v27 == -8192 )
            v15 = v26;
          v25 = v24 & (v75 + v25);
          v26 = &v21[v25];
          v27 = *v26;
          if ( *v26 == v22 )
            goto LABEL_8;
          if ( v27 == -4096 )
            break;
          ++v75;
        }
        if ( v15 )
          v26 = v15;
      }
      v44 = *(_DWORD *)(a1 + 400) + 1;
      v14 = (unsigned int)(4 * v44);
      if ( (unsigned int)v14 >= 3 * (int)v23 )
        goto LABEL_11;
      v47 = (unsigned int)(v23 - (v44 + *(_DWORD *)(a1 + 404)));
      if ( (unsigned int)v47 > (unsigned int)v23 >> 3 )
        goto LABEL_40;
      v135 = v23;
      v48 = ((((((((v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 4) | (v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 8)
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
      if ( v48 < 0x40 )
        v48 = 64;
      *(_DWORD *)(a1 + 408) = v48;
      v49 = sub_22300B0(8LL * v48, 8, v23, 64, v47, v15);
      *(_QWORD *)(a1 + 392) = v49;
      if ( v21 )
      {
        v50 = *(unsigned int *)(a1 + 408);
        v51 = v135;
        *(_QWORD *)(a1 + 400) = 0;
        v52 = v50;
        v53 = 8 * v50;
        if ( v49 != v49 + v53 )
        {
          v54 = (__m128i *)v49;
          v55 = ((unsigned __int64)(v53 - 8) >> 3) + 1;
          if ( v53 == 8 )
            goto LABEL_48;
          do
          {
            ++v54;
            v54[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          }
          while ( (__m128i *)(v49 + 16 * (v55 >> 1)) != v54 );
          v54 = (__m128i *)(v49 + 8 * (v55 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v55 & 0xFFFFFFFFFFFFFFFELL) != v55 )
LABEL_48:
            v54->m128i_i64[0] = -4096;
        }
        v56 = v21;
        v57 = v52 - 1;
        do
        {
          v58 = *v56;
          if ( *v56 != -8192 && v58 != -4096 )
          {
            if ( !v52 )
            {
              *(_QWORD *)&dword_0 = *v56;
              BUG();
            }
            v59 = v57 & (((unsigned int)v58 >> 9) ^ ((unsigned int)v58 >> 4));
            v60 = (_QWORD *)(v49 + 8LL * v59);
            v61 = *v60;
            if ( *v60 != v58 && v61 != -4096 )
            {
              v138 = 1;
              v137 = nullptr;
              while ( 1 )
              {
                if ( v61 == -8192 )
                {
                  if ( v137 )
                    v60 = v137;
                  v137 = v60;
                }
                v59 = v57 & (v138 + v59);
                v60 = (_QWORD *)(v49 + 8LL * v59);
                v61 = *v60;
                if ( v58 == *v60 )
                  break;
                if ( v61 == -4096 )
                {
                  if ( v137 )
                    v60 = v137;
                  break;
                }
                ++v138;
              }
            }
            ++*(_DWORD *)(a1 + 400);
            *v60 = v58;
          }
          ++v56;
        }
        while ( &v21[v51] != v56 );
        operator delete(v21, v51 * 8, 8);
        v21 = *(__int64 **)(a1 + 392);
        v23 = *(unsigned int *)(a1 + 408);
        v44 = *(_DWORD *)(a1 + 400) + 1;
      }
      else
      {
        v70 = *(unsigned int *)(a1 + 408);
        *(_QWORD *)(a1 + 400) = 0;
        v23 = v70;
        v71 = 8 * v70;
        v21 = (__int64 *)(v49 + v71);
        if ( v49 == v49 + v71 )
        {
          v44 = 1;
        }
        else
        {
          v72 = (__m128i *)v49;
          v73 = ((unsigned __int64)(v71 - 8) >> 3) + 1;
          if ( v71 == 8 )
            goto LABEL_71;
          do
          {
            ++v72;
            v72[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          }
          while ( (__m128i *)(v49 + 16 * (v73 >> 1)) != v72 );
          v72 = (__m128i *)(v49 + 8 * (v73 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v73 & 0xFFFFFFFFFFFFFFFELL) != v73 )
LABEL_71:
            v72->m128i_i64[0] = -4096;
          v21 = (__int64 *)v49;
          v44 = 1;
        }
      }
      if ( !(_DWORD)v23 )
      {
LABEL_244:
        ++*(_DWORD *)(a1 + 400);
        BUG();
      }
      v62 = (v23 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
      v26 = &v21[v62];
      v46 = v22;
      v63 = *v26;
      if ( *v26 == v22 )
        goto LABEL_29;
      v64 = 1;
      v65 = nullptr;
      if ( v63 != -4096 )
      {
        while ( 1 )
        {
          if ( v65 || v63 != -8192 )
            v26 = v65;
          v62 = (v23 - 1) & (v64 + v62);
          v63 = v21[v62];
          if ( v63 == v22 )
          {
            v46 = v22;
            v26 = &v21[v62];
            goto LABEL_29;
          }
          if ( v63 == -4096 )
            break;
          ++v64;
          v65 = v26;
          v26 = &v21[v62];
        }
        if ( v26 )
        {
LABEL_40:
          v46 = *v26;
LABEL_29:
          *(_DWORD *)(a1 + 400) = v44;
          if ( v46 != -4096 )
            --*(_DWORD *)(a1 + 404);
          goto LABEL_31;
        }
        v26 = &v21[v62];
      }
LABEL_60:
      *(_DWORD *)(a1 + 400) = v44;
LABEL_31:
      *v26 = v22;
      sub_FF4650(&v139, v26, &v21[v23], v6, 1);
      sub_FEF2B0(v22, (__int64)&ptr);
      v20 = ptr.m128_u32[2];
      v19 = (_BYTE *)ptr.m128_u64[0];
      if ( !ptr.m128_i32[2] )
        goto LABEL_32;
    }
LABEL_10:
    v23 = 0;
LABEL_11:
    v134 = v23;
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
    v30 = sub_22300B0(8LL * (unsigned int)v29, 8, v23, 64, v14, v15);
    *(_QWORD *)(a1 + 392) = v30;
    if ( v21 )
    {
      v31 = *(unsigned int *)(a1 + 408);
      *(_QWORD *)(a1 + 400) = 0;
      v32 = v134;
      v33 = v31;
      v34 = 8 * v31;
      v35 = &v21[v32];
      if ( v30 != v30 + v34 )
      {
        v36 = (__m128i *)v30;
        v37 = ((unsigned __int64)(v34 - 8) >> 3) + 1;
        if ( v34 == 8 )
          goto LABEL_18;
        do
        {
          ++v36;
          v36[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        }
        while ( v36 != (__m128i *)(v30 + 16 * (v37 >> 1)) );
        v36 = (__m128i *)(v30 + 8 * (v37 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v37 & 0xFFFFFFFFFFFFFFFELL) != v37 )
LABEL_18:
          v36->m128i_i64[0] = -4096;
      }
      v38 = v21;
      for ( j = v33 - 1; v35 != v38; ++v38 )
      {
        v40 = *v38;
        if ( *v38 != -4096 && v40 != -8192 )
        {
          if ( !v33 )
          {
            *(_QWORD *)&dword_0 = *v38;
            BUG();
          }
          v41 = j & (((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4));
          v42 = (_QWORD *)(v30 + 8LL * v41);
          v43 = *v42;
          if ( v40 != *v42 && v43 != -4096 )
          {
            v136 = 1;
            v74 = nullptr;
            while ( 1 )
            {
              if ( !v74 && v43 == -8192 )
                v74 = v42;
              v41 = j & (v136 + v41);
              v42 = (_QWORD *)(v30 + 8LL * v41);
              v43 = *v42;
              if ( v40 == *v42 )
                break;
              if ( v43 == -4096 )
              {
                if ( v74 )
                  v42 = v74;
                break;
              }
              ++v136;
            }
          }
          ++*(_DWORD *)(a1 + 400);
          *v42 = v40;
        }
      }
      operator delete(v21, v32 * 8, 8);
      v21 = *(__int64 **)(a1 + 392);
      v23 = *(unsigned int *)(a1 + 408);
      v44 = *(_DWORD *)(a1 + 400) + 1;
    }
    else
    {
      v66 = *(unsigned int *)(a1 + 408);
      *(_QWORD *)(a1 + 400) = 0;
      v23 = v66;
      v67 = 8 * v66;
      v21 = (__int64 *)(v30 + v67);
      if ( v30 == v30 + v67 )
      {
        v44 = 1;
      }
      else
      {
        v68 = (__m128i *)v30;
        v69 = ((unsigned __int64)(v67 - 8) >> 3) + 1;
        if ( v67 == 8 )
          goto LABEL_65;
        do
        {
          ++v68;
          v68[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        }
        while ( (__m128i *)(v30 + 16 * (v69 >> 1)) != v68 );
        v68 = (__m128i *)(v30 + 8 * (v69 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v69 & 0xFFFFFFFFFFFFFFFELL) != v69 )
LABEL_65:
          v68->m128i_i64[0] = -4096;
        v21 = (__int64 *)v30;
        v44 = 1;
      }
    }
    if ( !(_DWORD)v23 )
      goto LABEL_244;
    v45 = (v23 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
    v26 = &v21[v45];
    v46 = *v26;
    if ( *v26 == v22 )
      goto LABEL_29;
    v78 = 1;
    v79 = nullptr;
    if ( v46 != -4096 )
    {
      while ( 1 )
      {
        if ( v46 != -8192 || v79 )
          v26 = v79;
        v45 = (v23 - 1) & (v78 + v45);
        v46 = v21[v45];
        if ( v46 == v22 )
        {
          v46 = v22;
          v26 = &v21[v45];
          goto LABEL_29;
        }
        if ( v46 == -4096 )
          break;
        ++v78;
        v79 = v26;
        v26 = &v21[v45];
      }
      if ( v26 )
        goto LABEL_40;
      v26 = &v21[v45];
    }
    goto LABEL_60;
  }
LABEL_32:
  if ( v19 != v141 )
    free(v19);
}
