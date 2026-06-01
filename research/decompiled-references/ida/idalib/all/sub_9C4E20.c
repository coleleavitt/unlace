void __fastcall sub_9C4E20(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  int v8; // r13d
  unsigned int v9; // ebx
  __int64 v10; // r8
  _QWORD *v11; // rdi
  __int64 v12; // rsi
  __m128i *v13; // rbx
  unsigned int v14; // ecx
  __int64 v15; // rdx
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // r10d
  char *v19; // rsi
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 *v22; // r13
  int v23; // ebp
  unsigned __int64 v24; // rdi
  unsigned int v25; // eax
  unsigned __int64 *v26; // rdx
  _QWORD *v27; // r9
  _DWORD *v28; // rdx
  int v29; // edx
  __int64 v30; // rax
  char *v31; // rsi
  unsigned int v32; // edx
  _QWORD *v33; // rdi
  __int64 v34; // r10
  __int64 v35; // rsi
  __int64 v36; // r12
  unsigned int v37; // ecx
  __int64 v38; // rax
  _QWORD *v39; // rcx
  __int64 v40; // r14
  __int64 v41; // r13
  _QWORD *v42; // rax
  int v43; // edx
  __int64 v44; // rcx
  __int64 *v45; // rax
  __m128i *v46; // rdi
  const __m128i *v47; // rcx
  const __m128i *v48; // rax
  unsigned __int64 v49; // rsi
  __m128i *v50; // rcx
  unsigned __int64 v51; // rsi
  __m128i v52; // xmm1
  __m128i v53; // xmm2
  __m128i v54; // xmm0
  unsigned __int64 v55; // rax
  __int64 *v56; // rcx
  __int64 *v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rcx
  unsigned int v60; // r12d
  _QWORD *v61; // rdi
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r12
  _QWORD *v66; // rdx
  __int64 *v67; // r9
  int v68; // r10d
  _QWORD *v69; // rcx
  __int64 *v70; // rdx
  int i; // ebx
  __int64 v72; // rcx
  unsigned int v73; // edi
  __int64 v74; // rsi
  __int64 v75; // r8
  int v76; // ecx
  int v77; // esi
  _QWORD *v78; // r11
  int v79; // r10d
  __int64 v80; // r8
  int v81; // edi
  unsigned __int64 *v82; // r12
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r12
  _QWORD *v89; // rdx
  int v90; // r10d
  _QWORD *v91; // rcx
  __int64 *v92; // rdx
  int v93; // ebx
  __int64 v94; // rcx
  unsigned int v95; // edi
  __int64 v96; // rsi
  __int64 v97; // r8
  int v98; // ecx
  int v99; // esi
  int v100; // r8d
  unsigned int v101; // r10d
  int v102; // r11d
  unsigned __int64 *v103; // r12
  int v104; // r12d
  unsigned int v105; // r11d
  unsigned __int64 *v106; // rbx
  unsigned __int64 v107; // rdx
  unsigned int v108; // esi
  __int64 v109; // r10
  char *v110; // rdx
  __int64 v111; // rbp
  unsigned int v112; // ecx
  __int64 v113; // rdx
  _QWORD *v114; // rcx
  __int64 v115; // r14
  __int64 v116; // r13
  _QWORD *v117; // r8
  __int64 *v118; // rdx
  __int64 v119; // rbx
  __int64 v120; // rax
  void *v121; // rdi
  __m128i v122; // xmm0
  unsigned int v123; // eax
  __int64 *v124; // rsi
  __int64 v125; // r8
  __int64 v126; // rcx
  _QWORD *v127; // rcx
  _QWORD *v128; // rdx
  __int64 v129; // rcx
  _QWORD *v130; // rcx
  _QWORD *v131; // rdx
  void *v132; // rax
  __int64 v133; // r11
  unsigned __int64 *v134; // r11
  __int64 v135; // r11
  int v136; // esi
  __int64 v137; // rdx
  __int64 *v138; // rax
  __m128i *v139; // rdi
  const __m128i *v140; // rdx
  const __m128i *v141; // rax
  unsigned __int64 v142; // rcx
  __m128i *v143; // rdx
  unsigned __int64 v144; // rcx
  __m128i v145; // xmm1
  __m128i v146; // xmm3
  __m128i v147; // xmm0
  unsigned __int64 v148; // rax
  __int64 *v149; // rdx
  __int64 *v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int32 v153; // ebp
  __int64 *v154; // rcx
  __int64 v155; // r8
  __m128i v156; // [rsp+8h] [rbp-280h] BYREF
  __int64 v157; // [rsp+18h] [rbp-270h]
  __int64 *v158; // [rsp+20h] [rbp-268h] BYREF
  __int64 *v159; // [rsp+28h] [rbp-260h]
  __int64 v160; // [rsp+38h] [rbp-250h] BYREF
  void *s; // [rsp+40h] [rbp-248h] BYREF
  __int64 v162; // [rsp+48h] [rbp-240h]
  _BYTE v163[48]; // [rsp+50h] [rbp-238h] BYREF
  int v164; // [rsp+80h] [rbp-208h]
  _QWORD *v165; // [rsp+90h] [rbp-1F8h] BYREF
  void *v166; // [rsp+98h] [rbp-1F0h]
  unsigned __int64 v167; // [rsp+A0h] [rbp-1E8h]
  _QWORD ptr[25]; // [rsp+A8h] [rbp-1E0h] BYREF
  __m128 v169; // [rsp+170h] [rbp-118h] BYREF
  __int64 v170; // [rsp+180h] [rbp-108h]
  __int64 v171; // [rsp+188h] [rbp-100h] BYREF

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = &off_2B40578;
  v157 = a1 + 8;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  v7 = *((unsigned int *)a2 + 6);
  if ( !*((_DWORD *)a2 + 6) )
  {
    HIDWORD(v162) = 6;
    v8 = 0;
    v9 = 0;
    v156.m128i_i64[1] = (__int64)&s;
    s = v163;
LABEL_3:
    LODWORD(v162) = v9;
    v10 = v156.m128i_i64[1] + 16;
    v11 = (_QWORD *)v156.m128i_i64[1];
    goto LABEL_4;
  }
  v119 = 8 * v7;
  v120 = operator new(8 * v7);
  v121 = *(void **)(a1 + 8);
  if ( v121 )
  {
    v156.m128i_i64[0] = v120;
    operator delete(v121);
    v120 = v156.m128i_i64[0];
  }
  v156.m128i_i64[0] = v120;
  v122 = _mm_loadl_epi64(&v156);
  *(_QWORD *)(a1 + 24) = v119 + v120;
  v156.m128i_i64[1] = (__int64)&s;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v122, v122);
  v8 = *((_DWORD *)a2 + 6);
  s = v163;
  v162 = 0x600000000LL;
  v9 = (unsigned int)(v8 + 63) >> 6;
  if ( v9 <= 6 )
  {
    if ( v9 )
    {
      v123 = 0;
      do
      {
        a4 = v123;
        v123 += 8;
        *(_QWORD *)&v163[a4] = 0;
      }
      while ( v123 < 8 * v9 );
    }
    goto LABEL_3;
  }
  sub_2237220(v156.m128i_i64[1], v163, v9, 8);
  v132 = memset(s, 0, 8LL * v9);
  LODWORD(v162) = (unsigned int)(v8 + 63) >> 6;
  v11 = (_QWORD *)v156.m128i_i64[1];
  v10 = (__int64)v132;
LABEL_4:
  v12 = *a2;
  v13 = (__m128i *)ptr;
  v164 = v8;
  v156.m128i_i64[0] = (__int64)&v165;
  v165 = v11;
  v166 = ptr;
  v167 = 0x800000000LL;
  if ( v12
    && (v14 = *(_DWORD *)(v12 + 48),
        v15 = 1LL << v14,
        v16 = (unsigned __int64 *)(v10 + 8LL * (v14 >> 6)),
        a4 = *v16,
        (*v16 & v15) == 0) )
  {
    v107 = a4 | v15;
    a6 = *(_QWORD *)(v12 + 80);
    a4 = *(_QWORD *)(v12 + 88);
    *v16 = v107;
    v17 = 1;
    ptr[0] = a6;
    ptr[1] = a4;
    LODWORD(v167) = 1;
    ptr[2] = v12;
    v108 = 1;
    while ( 1 )
    {
      v10 = 24 * v17;
      v109 = 24 * v17 - 24;
      v110 = &v13->m128i_i8[v109];
      if ( a4 == a6 )
        break;
      a6 = 1;
      while ( 1 )
      {
        *((_QWORD *)v110 + 1) = a4 - 16;
        v111 = *(_QWORD *)(a4 - 16);
        if ( v111 )
        {
          v112 = *(_DWORD *)(v111 + 48);
          v113 = 1LL << v112;
          v114 = (_QWORD *)(*v11 + 8LL * (v112 >> 6));
          if ( (*v114 & v113) == 0 )
            break;
        }
        v13 = (__m128i *)v166;
        v110 = (char *)v166 + v109;
        a4 = *(_QWORD *)((char *)v166 + v109 + 8);
        if ( a4 == *(_QWORD *)((char *)v166 + v109) )
          goto LABEL_7;
      }
      v115 = *(_QWORD *)(v111 + 80);
      v116 = *(_QWORD *)(v111 + 88);
      *v114 |= v113;
      if ( v17 >= HIDWORD(v167) )
      {
        v13 = (__m128i *)sub_2237400(v156.m128i_i64[0] + 8, v156.m128i_i64[0] + 24, 0, 24, &v169);
        v136 = v167;
        v137 = 3LL * (unsigned int)v167;
        v138 = &v13->m128i_i64[v137];
        *v138 = v115;
        v138[1] = v116;
        v139 = (__m128i *)v166;
        v138[2] = v111;
        v140 = (__m128i *)((char *)v139 + v137 * 8);
        if ( v139 != v140 )
        {
          v141 = v139;
          v142 = 0xAAAAAAAAAAAAAABLL * (((unsigned __int64)v140->m128i_u64 - 24 - (unsigned __int64)v139) >> 3);
          if ( (v139 >= &v13[3] || v13 >= &v139[3]) && (v142 & 0x1FFFFFFFFFFFFFFELL) != 0 )
          {
            v143 = v13;
            v144 = (v142 & 0x1FFFFFFFFFFFFFFFLL) + 1;
            do
            {
              v145 = _mm_loadu_si128(v141 + 1);
              v146 = _mm_loadu_si128(v141);
              v143 += 3;
              v141 += 3;
              v147 = _mm_loadu_si128(v141 - 1);
              v143[-3] = v146;
              v143[-2] = v145;
              v143[-1] = v147;
            }
            while ( &v13[3 * (v144 >> 1)] != v143 );
            v148 = 3 * (v144 & 0xFFFFFFFFFFFFFFFELL);
            v149 = &v139->m128i_i64[v148];
            v150 = &v13->m128i_i64[v148];
            if ( (v144 & 0xFFFFFFFFFFFFFFFELL) != v144 )
            {
              *v150 = *v149;
              v151 = v149[1];
              v152 = v149[2];
              v150[1] = v151;
              v150[2] = v152;
            }
          }
          else
          {
            v154 = (__int64 *)v13;
            do
            {
              v155 = v141->m128i_i64[0];
              v141 = (const __m128i *)((char *)v141 + 24);
              v154 += 3;
              *(v154 - 3) = v155;
              *(v154 - 2) = v141[-1].m128i_i64[0];
              *(v154 - 1) = v141[-1].m128i_i64[1];
            }
            while ( v140 != v141 );
          }
        }
        v153 = v169.m128_i32[0];
        if ( v139 != (__m128i *)(v156.m128i_i64[0] + 24) )
        {
          free(v139);
          v136 = v167;
        }
        v108 = v136 + 1;
        v166 = v13;
        v11 = v165;
        v167 = __PAIR64__(v153, v108);
      }
      else
      {
        v117 = (char *)v166 + v10;
        ++v108;
        *v117 = v115;
        v117[1] = v116;
        v13 = (__m128i *)v166;
        v117[2] = v111;
        LODWORD(v167) = v108;
      }
      v17 = v108;
      v118 = (__int64 *)&v13[-1] + 3 * v108 - 1;
      a4 = v118[1];
      a6 = *v118;
    }
  }
  else
  {
    v17 = 0;
  }
LABEL_7:
  v158 = &v171;
  v170 = 0x800000000LL;
  v169 = _mm_loadh_ps((const double *)&v158);
  while ( 1 )
  {
    v18 = 64;
    if ( !v17 )
      break;
    v19 = *(char **)(a1 + 16);
    v20 = *(unsigned int *)(a1 + 48);
    v21 = (__int64)&v13[-1] + 24 * v17 - 8;
    v22 = *(__int64 **)(a1 + 32);
    v23 = ((__int64)&v19[-*(_QWORD *)(a1 + 8)] >> 3) + 1;
    if ( !(_DWORD)v20 )
      goto LABEL_45;
    a4 = *(_QWORD *)(v21 + 16);
    v24 = (unsigned int)(v20 - 1);
    v25 = v24 & (((unsigned int)a4 >> 9) ^ ((unsigned int)a4 >> 4));
    v26 = (unsigned __int64 *)&v22[2 * v25];
    v27 = (_QWORD *)*v26;
    if ( a4 == *v26 )
    {
LABEL_11:
      v28 = v26 + 1;
      goto LABEL_12;
    }
    if ( v27 != (_QWORD *)-4096LL )
    {
      LODWORD(v158) = *(_DWORD *)(a1 + 48);
      v10 = 1;
      v134 = nullptr;
      while ( 1 )
      {
        if ( v27 == (_QWORD *)-8192LL && !v134 )
          v134 = v26;
        v25 = v24 & (v10 + v25);
        v26 = (unsigned __int64 *)&v22[2 * v25];
        v27 = (_QWORD *)*v26;
        if ( a4 == *v26 )
          goto LABEL_11;
        if ( v27 == (_QWORD *)-4096LL )
          break;
        v10 = (unsigned int)(v10 + 1);
      }
      v20 = (unsigned int)v158;
      if ( v134 )
        v26 = v134;
    }
    a6 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
    if ( 4 * (int)a6 < (unsigned int)(3 * v20) )
    {
      if ( (int)v20 - *(_DWORD *)(a1 + 44) - (int)a6 > (unsigned int)v20 >> 3 )
        goto LABEL_41;
      v83 = (((((v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 4) | (v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 8)
          | (((v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 4)
          | (v24 >> 1)
          | v24
          | (((v24 >> 1) | v24) >> 2);
      v84 = v83 >> 16;
      v85 = ((v83 >> 16) | v83) + 1;
      if ( (unsigned int)v85 >= 0x40 )
        v18 = v85;
      *(_DWORD *)(a1 + 48) = v18;
      v86 = sub_22300B0(16LL * v18, 8, v84, a4, v10, a6);
      *(_QWORD *)(a1 + 32) = v86;
      if ( v22 )
      {
        v87 = *(unsigned int *)(a1 + 48);
        v88 = 2 * v20;
        *(_QWORD *)(a1 + 40) = 0;
        v89 = (_QWORD *)v86;
        v90 = v87;
        v91 = (_QWORD *)(v86 + 16 * v87);
        if ( (_QWORD *)v86 != v91 )
        {
          do
          {
            *v89 = -4096;
            v89 += 2;
          }
          while ( v91 != v89 );
        }
        v92 = v22;
        v93 = v90 - 1;
        do
        {
          v94 = *v92;
          if ( *v92 != -8192 && v94 != -4096 )
          {
            if ( !v90 )
            {
              *(_QWORD *)&dword_0 = *v92;
              BUG();
            }
            v95 = v93 & (((unsigned int)v94 >> 9) ^ ((unsigned int)v94 >> 4));
            v96 = v86 + 16LL * v95;
            v97 = *(_QWORD *)v96;
            if ( *(_QWORD *)v96 != v94 && v97 != -4096 )
            {
              LODWORD(v158) = 1;
              v135 = 0;
              v159 = v92;
              while ( 1 )
              {
                if ( !v135 && v97 == -8192 )
                  v135 = v96;
                v95 = v93 & ((_DWORD)v158 + v95);
                v96 = v86 + 16LL * v95;
                v97 = *(_QWORD *)v96;
                if ( v94 == *(_QWORD *)v96 )
                {
                  v92 = v159;
                  goto LABEL_72;
                }
                if ( v97 == -4096 )
                  break;
                LODWORD(v158) = (_DWORD)v158 + 1;
              }
              v92 = v159;
              if ( v135 )
                v96 = v135;
            }
LABEL_72:
            *(_QWORD *)v96 = v94;
            v98 = *((_DWORD *)v92 + 2);
            ++*(_DWORD *)(a1 + 40);
            *(_DWORD *)(v96 + 8) = v98;
          }
          v92 += 2;
        }
        while ( &v22[v88] != v92 );
        operator delete(v22, v88 * 8, 8);
        v86 = *(_QWORD *)(a1 + 32);
        v99 = *(_DWORD *)(a1 + 48);
        LODWORD(a6) = *(_DWORD *)(a1 + 40) + 1;
      }
      else
      {
        v129 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v99 = v129;
        v130 = (_QWORD *)(v86 + 16 * v129);
        if ( (_QWORD *)v86 != v130 )
        {
          v131 = (_QWORD *)v86;
          do
          {
            *v131 = -4096;
            v131 += 2;
          }
          while ( v130 != v131 );
        }
        LODWORD(a6) = 1;
      }
      if ( !v99 )
        goto LABEL_175;
      a4 = *(_QWORD *)(v21 + 16);
      v100 = v99 - 1;
      v19 = *(char **)(a1 + 16);
      v101 = v100 & (((unsigned int)a4 >> 9) ^ ((unsigned int)a4 >> 4));
      v26 = (unsigned __int64 *)(v86 + 16LL * v101);
      v61 = (_QWORD *)*v26;
      if ( *v26 == a4 )
        goto LABEL_42;
      v78 = *(_QWORD **)(v21 + 16);
      if ( v61 != (_QWORD *)-4096LL )
      {
        v102 = 1;
        v103 = nullptr;
        while ( 1 )
        {
          if ( v61 != (_QWORD *)-8192LL || v103 )
            v26 = v103;
          v104 = v102 + 1;
          v105 = v100 & (v101 + v102);
          v101 = v105;
          v106 = (unsigned __int64 *)(v86 + 16LL * v105);
          v61 = (_QWORD *)*v106;
          if ( a4 == *v106 )
          {
            v26 = (unsigned __int64 *)(v86 + 16LL * v105);
            goto LABEL_42;
          }
          if ( v61 == (_QWORD *)-4096LL )
            break;
          v102 = v104;
          v103 = v26;
          v26 = v106;
        }
        if ( v26 )
        {
LABEL_41:
          v61 = (_QWORD *)*v26;
          goto LABEL_42;
        }
        v78 = *(_QWORD **)(v21 + 16);
LABEL_172:
        v26 = v106;
      }
    }
    else
    {
LABEL_45:
      v62 = ((((((((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v20 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v20 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 8)
           | (((((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v20 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v20 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 16;
      if ( ((unsigned int)v62
          | (((((((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v20 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v20 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v20 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
          | (2 * (_DWORD)v20 - 1)
          | ((unsigned int)(2 * v20 - 1) >> 1))
         + 1 >= 0x40 )
        v18 = (v62
             | (((((((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v20 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 4)
               | (((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v20 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 8)
             | (((((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v20 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
             | (2 * v20 - 1)
             | ((unsigned int)(2 * v20 - 1) >> 1))
            + 1;
      *(_DWORD *)(a1 + 48) = v18;
      v63 = sub_22300B0(16LL * v18, 8, v62, a4, v10, a6);
      *(_QWORD *)(a1 + 32) = v63;
      if ( v22 )
      {
        v64 = *(unsigned int *)(a1 + 48);
        v65 = 2 * v20;
        *(_QWORD *)(a1 + 40) = 0;
        v66 = (_QWORD *)v63;
        v67 = &v22[v65];
        v68 = v64;
        v69 = (_QWORD *)(v63 + 16 * v64);
        if ( (_QWORD *)v63 != v69 )
        {
          do
          {
            *v66 = -4096;
            v66 += 2;
          }
          while ( v69 != v66 );
        }
        v70 = v22;
        for ( i = v68 - 1; v67 != v70; v70 += 2 )
        {
          v72 = *v70;
          if ( *v70 != -8192 && v72 != -4096 )
          {
            if ( !v68 )
            {
              *(_QWORD *)&dword_0 = *v70;
              BUG();
            }
            v73 = i & (((unsigned int)v72 >> 9) ^ ((unsigned int)v72 >> 4));
            v74 = v63 + 16LL * v73;
            v75 = *(_QWORD *)v74;
            if ( *(_QWORD *)v74 != v72 && v75 != -4096 )
            {
              LODWORD(v158) = 1;
              v133 = 0;
              v159 = v70;
              while ( 1 )
              {
                if ( !v133 && v75 == -8192 )
                  v133 = v74;
                v73 = i & ((_DWORD)v158 + v73);
                v74 = v63 + 16LL * v73;
                v75 = *(_QWORD *)v74;
                if ( v72 == *(_QWORD *)v74 )
                {
                  v70 = v159;
                  goto LABEL_55;
                }
                if ( v75 == -4096 )
                  break;
                LODWORD(v158) = (_DWORD)v158 + 1;
              }
              v70 = v159;
              if ( v133 )
                v74 = v133;
            }
LABEL_55:
            *(_QWORD *)v74 = v72;
            v76 = *((_DWORD *)v70 + 2);
            ++*(_DWORD *)(a1 + 40);
            *(_DWORD *)(v74 + 8) = v76;
          }
        }
        operator delete(v22, v65 * 8, 8);
        v63 = *(_QWORD *)(a1 + 32);
        v77 = *(_DWORD *)(a1 + 48);
        LODWORD(a6) = *(_DWORD *)(a1 + 40) + 1;
      }
      else
      {
        v126 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v77 = v126;
        v127 = (_QWORD *)(v63 + 16 * v126);
        if ( (_QWORD *)v63 != v127 )
        {
          v128 = (_QWORD *)v63;
          do
          {
            *v128 = -4096;
            v128 += 2;
          }
          while ( v127 != v128 );
        }
        LODWORD(a6) = 1;
      }
      if ( !v77 )
      {
LABEL_175:
        ++*(_DWORD *)(a1 + 40);
        BUG();
      }
      v78 = *(_QWORD **)(v21 + 16);
      v79 = v77 - 1;
      v19 = *(char **)(a1 + 16);
      LODWORD(v80) = v79 & (((unsigned int)v78 >> 9) ^ ((unsigned int)v78 >> 4));
      v26 = (unsigned __int64 *)(v63 + 16LL * (unsigned int)v80);
      a4 = *v26;
      v61 = (_QWORD *)*v26;
      if ( v78 == (_QWORD *)*v26 )
        goto LABEL_42;
      v81 = 1;
      v82 = nullptr;
      if ( a4 != -4096 )
      {
        while ( 1 )
        {
          if ( a4 != -8192 || v82 )
            v26 = v82;
          v80 = v79 & (unsigned int)(v80 + v81);
          v106 = (unsigned __int64 *)(v63 + 16 * v80);
          a4 = *v106;
          if ( v78 == (_QWORD *)*v106 )
          {
            v61 = (_QWORD *)*v106;
            v26 = (unsigned __int64 *)(v63 + 16 * v80);
            goto LABEL_42;
          }
          if ( a4 == -4096 )
            break;
          ++v81;
          v82 = v26;
          v26 = (unsigned __int64 *)(v63 + 16 * v80);
        }
        if ( v26 )
        {
          v61 = (_QWORD *)*v26;
          a4 = *(_QWORD *)(v21 + 16);
LABEL_42:
          *(_DWORD *)(a1 + 40) = a6;
          if ( v61 != (_QWORD *)-4096LL )
            --*(_DWORD *)(a1 + 44);
          goto LABEL_44;
        }
        goto LABEL_172;
      }
    }
    *(_DWORD *)(a1 + 40) = a6;
    a4 = (unsigned __int64)v78;
LABEL_44:
    *v26 = a4;
    v28 = v26 + 1;
    v13 = (__m128i *)v166;
    *v28 = 0;
LABEL_12:
    *v28 = v23;
    v29 = v167;
    v30 = (__int64)&v13[-1] + 24 * (unsigned int)v167 - 8;
    if ( *(char **)(a1 + 24) == v19 )
    {
      sub_9981B0(v157, v19, (__int64 *)(v30 + 16));
      v13 = (__m128i *)v166;
      v32 = v167 - 1;
      LODWORD(v167) = v32;
      if ( !v32 )
        break;
    }
    else
    {
      v31 = v19 + 8;
      *((_QWORD *)v31 - 1) = *(_QWORD *)(v30 + 16);
      v32 = v29 - 1;
      v13 = (__m128i *)v166;
      *(_QWORD *)(a1 + 16) = v31;
      LODWORD(v167) = v32;
      if ( !v32 )
        break;
    }
    v33 = v165;
    while ( 1 )
    {
      a6 = v32;
      v10 = 24LL * v32;
      v34 = v10 - 24;
      a4 = (unsigned __int64)&v13[-1] + v10 - 8;
      v35 = *(_QWORD *)(a4 + 8);
      if ( *(_QWORD *)a4 == v35 )
        break;
      while ( 1 )
      {
        *(_QWORD *)(a4 + 8) = v35 - 16;
        v36 = *(_QWORD *)(v35 - 16);
        if ( v36 )
        {
          v37 = *(_DWORD *)(v36 + 48);
          v38 = 1LL << v37;
          v39 = (_QWORD *)(*v33 + 8LL * (v37 >> 6));
          if ( (*v39 & v38) == 0 )
            break;
        }
        v13 = (__m128i *)v166;
        a4 = (unsigned __int64)v166 + v34;
        v35 = *(_QWORD *)((char *)v166 + v34 + 8);
        if ( v35 == *(_QWORD *)((char *)v166 + v34) )
          goto LABEL_27;
      }
      v40 = *(_QWORD *)(v36 + 80);
      v41 = *(_QWORD *)(v36 + 88);
      *v39 |= v38;
      if ( v32 >= (unsigned __int64)HIDWORD(v167) )
      {
        v13 = (__m128i *)sub_2237400(v156.m128i_i64[0] + 8, v156.m128i_i64[0] + 24, 0, 24, &v160);
        v43 = v167;
        v44 = 3LL * (unsigned int)v167;
        v45 = &v13->m128i_i64[v44];
        *v45 = v40;
        v45[1] = v41;
        v46 = (__m128i *)v166;
        v45[2] = v36;
        v47 = (__m128i *)((char *)v46 + v44 * 8);
        if ( v46 != v47 )
        {
          v48 = v46;
          v49 = 0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)v47 - (char *)v46 - 24) >> 3);
          if ( (v13 >= &v46[3] || v46 >= &v13[3]) && (v49 & 0x1FFFFFFFFFFFFFFELL) != 0 )
          {
            v50 = v13;
            v51 = (v49 & 0x1FFFFFFFFFFFFFFFLL) + 1;
            do
            {
              v52 = _mm_loadu_si128(v48 + 1);
              v53 = _mm_loadu_si128(v48);
              v50 += 3;
              v48 += 3;
              v54 = _mm_loadu_si128(v48 - 1);
              v50[-3] = v53;
              v50[-2] = v52;
              v50[-1] = v54;
            }
            while ( v50 != &v13[3 * (v51 >> 1)] );
            v55 = 3 * (v51 & 0xFFFFFFFFFFFFFFFELL);
            v56 = &v46->m128i_i64[v55];
            v57 = &v13->m128i_i64[v55];
            if ( (v51 & 0xFFFFFFFFFFFFFFFELL) != v51 )
            {
              *v57 = *v56;
              v58 = v56[1];
              v59 = v56[2];
              v57[1] = v58;
              v57[2] = v59;
            }
          }
          else
          {
            v124 = (__int64 *)v13;
            do
            {
              v125 = v48->m128i_i64[0];
              v48 = (const __m128i *)((char *)v48 + 24);
              v124 += 3;
              *(v124 - 3) = v125;
              *(v124 - 2) = v48[-1].m128i_i64[0];
              *(v124 - 1) = v48[-1].m128i_i64[1];
            }
            while ( v47 != v48 );
          }
        }
        v60 = v160;
        if ( v46 != (__m128i *)(v156.m128i_i64[0] + 24) )
        {
          free(v46);
          v43 = v167;
        }
        v32 = v43 + 1;
        v166 = v13;
        v33 = v165;
        v167 = __PAIR64__(v60, v32);
      }
      else
      {
        ++v32;
        v42 = (char *)v166 + v10;
        *v42 = v40;
        v42[1] = v41;
        v13 = (__m128i *)v166;
        v42[2] = v36;
        LODWORD(v167) = v32;
      }
    }
LABEL_27:
    v17 = v32;
  }
  if ( v13 != (__m128i *)(v156.m128i_i64[0] + 24) )
    free(v13);
  if ( s != (void *)(v156.m128i_i64[1] + 16) )
    free(s);
}
