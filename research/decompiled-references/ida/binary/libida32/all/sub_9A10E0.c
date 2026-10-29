void __fastcall sub_9A10E0(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
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
  _QWORD *v65; // rdx
  __int64 *v66; // r9
  int v67; // r10d
  _QWORD *v68; // rcx
  __int64 *v69; // rdx
  int i; // ebx
  __int64 v71; // rcx
  unsigned int v72; // edi
  __int64 v73; // rsi
  __int64 v74; // r8
  int v75; // ecx
  int v76; // esi
  _QWORD *v77; // r11
  int v78; // r10d
  __int64 v79; // r8
  int v80; // edi
  unsigned __int64 *v81; // r12
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  _QWORD *v87; // rdx
  int v88; // r10d
  _QWORD *v89; // rcx
  __int64 *v90; // rdx
  int v91; // ebx
  __int64 v92; // rcx
  unsigned int v93; // edi
  __int64 v94; // rsi
  __int64 v95; // r8
  int v96; // ecx
  int v97; // esi
  int v98; // r8d
  unsigned int v99; // r10d
  int v100; // r11d
  unsigned __int64 *v101; // r12
  int v102; // r12d
  unsigned int v103; // r11d
  unsigned __int64 *v104; // rbx
  unsigned __int64 v105; // rdx
  unsigned int v106; // esi
  __int64 v107; // r10
  char *v108; // rdx
  __int64 v109; // rbp
  unsigned int v110; // ecx
  __int64 v111; // rdx
  _QWORD *v112; // rcx
  __int64 v113; // r14
  __int64 v114; // r13
  _QWORD *v115; // r8
  __int64 *v116; // rdx
  __int64 v117; // rbx
  __int64 v118; // rax
  void *v119; // rdi
  __m128i v120; // xmm0
  unsigned int v121; // eax
  __int64 *v122; // rsi
  __int64 v123; // r8
  __int64 v124; // rcx
  _QWORD *v125; // rcx
  _QWORD *v126; // rdx
  __int64 v127; // rcx
  _QWORD *v128; // rcx
  _QWORD *v129; // rdx
  void *v130; // rax
  __int64 v131; // r11
  unsigned __int64 *v132; // r11
  __int64 v133; // r11
  int v134; // esi
  __int64 v135; // rdx
  __int64 *v136; // rax
  __m128i *v137; // rdi
  const __m128i *v138; // rdx
  const __m128i *v139; // rax
  unsigned __int64 v140; // rcx
  __m128i *v141; // rdx
  unsigned __int64 v142; // rcx
  __m128i v143; // xmm1
  __m128i v144; // xmm3
  __m128i v145; // xmm0
  unsigned __int64 v146; // rax
  __int64 *v147; // rdx
  __int64 *v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rdx
  __int32 v151; // ebp
  __int64 *v152; // rcx
  __int64 v153; // r8
  __m128i v154; // [rsp+8h] [rbp-280h] BYREF
  __int64 v155; // [rsp+18h] [rbp-270h]
  __int64 *v156; // [rsp+20h] [rbp-268h] BYREF
  __int64 *v157; // [rsp+28h] [rbp-260h]
  __int64 v158; // [rsp+38h] [rbp-250h] BYREF
  void *s; // [rsp+40h] [rbp-248h] BYREF
  __int64 v160; // [rsp+48h] [rbp-240h]
  _BYTE v161[48]; // [rsp+50h] [rbp-238h] BYREF
  int v162; // [rsp+80h] [rbp-208h]
  _QWORD *v163; // [rsp+90h] [rbp-1F8h] BYREF
  void *v164; // [rsp+98h] [rbp-1F0h]
  unsigned __int64 v165; // [rsp+A0h] [rbp-1E8h]
  _QWORD ptr[25]; // [rsp+A8h] [rbp-1E0h] BYREF
  __m128 v167; // [rsp+170h] [rbp-118h] BYREF
  __int64 v168; // [rsp+180h] [rbp-108h]
  __int64 v169; // [rsp+188h] [rbp-100h] BYREF

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = &off_2B165D8;
  v155 = a1 + 8;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  v7 = *((unsigned int *)a2 + 6);
  if ( !*((_DWORD *)a2 + 6) )
  {
    HIDWORD(v160) = 6;
    v8 = 0;
    v9 = 0;
    v154.m128i_i64[1] = (__int64)&s;
    s = v161;
LABEL_3:
    LODWORD(v160) = v9;
    v10 = v154.m128i_i64[1] + 16;
    v11 = (_QWORD *)v154.m128i_i64[1];
    goto LABEL_4;
  }
  v117 = 8 * v7;
  v118 = operator new(8 * v7);
  v119 = *(void **)(a1 + 8);
  if ( v119 )
  {
    v154.m128i_i64[0] = v118;
    operator delete(v119);
    v118 = v154.m128i_i64[0];
  }
  v154.m128i_i64[0] = v118;
  v120 = _mm_loadl_epi64(&v154);
  *(_QWORD *)(a1 + 24) = v117 + v118;
  v154.m128i_i64[1] = (__int64)&s;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v120, v120);
  v8 = *((_DWORD *)a2 + 6);
  s = v161;
  v160 = 0x600000000LL;
  v9 = (unsigned int)(v8 + 63) >> 6;
  if ( v9 <= 6 )
  {
    if ( v9 )
    {
      v121 = 0;
      do
      {
        a4 = v121;
        v121 += 8;
        *(_QWORD *)&v161[a4] = 0;
      }
      while ( v121 < 8 * v9 );
    }
    goto LABEL_3;
  }
  sub_22134E0(v154.m128i_i64[1], v161, v9, 8);
  v130 = memset(s, 0, 8LL * v9);
  LODWORD(v160) = (unsigned int)(v8 + 63) >> 6;
  v11 = (_QWORD *)v154.m128i_i64[1];
  v10 = (__int64)v130;
LABEL_4:
  v12 = *a2;
  v13 = (__m128i *)ptr;
  v162 = v8;
  v154.m128i_i64[0] = (__int64)&v163;
  v163 = v11;
  v164 = ptr;
  v165 = 0x800000000LL;
  if ( v12
    && (v14 = *(_DWORD *)(v12 + 48),
        v15 = 1LL << v14,
        v16 = (unsigned __int64 *)(v10 + 8LL * (v14 >> 6)),
        a4 = *v16,
        (*v16 & v15) == 0) )
  {
    v105 = a4 | v15;
    a6 = *(_QWORD *)(v12 + 80);
    a4 = *(_QWORD *)(v12 + 88);
    *v16 = v105;
    v17 = 1;
    ptr[0] = a6;
    ptr[1] = a4;
    LODWORD(v165) = 1;
    ptr[2] = v12;
    v106 = 1;
    while ( 1 )
    {
      v10 = 24 * v17;
      v107 = 24 * v17 - 24;
      v108 = &v13->m128i_i8[v107];
      if ( a4 == a6 )
        break;
      a6 = 1;
      while ( 1 )
      {
        *((_QWORD *)v108 + 1) = a4 - 16;
        v109 = *(_QWORD *)(a4 - 16);
        if ( v109 )
        {
          v110 = *(_DWORD *)(v109 + 48);
          v111 = 1LL << v110;
          v112 = (_QWORD *)(*v11 + 8LL * (v110 >> 6));
          if ( (*v112 & v111) == 0 )
            break;
        }
        v13 = (__m128i *)v164;
        v108 = (char *)v164 + v107;
        a4 = *(_QWORD *)((char *)v164 + v107 + 8);
        if ( a4 == *(_QWORD *)((char *)v164 + v107) )
          goto LABEL_7;
      }
      v113 = *(_QWORD *)(v109 + 80);
      v114 = *(_QWORD *)(v109 + 88);
      *v112 |= v111;
      if ( v17 >= HIDWORD(v165) )
      {
        v13 = (__m128i *)sub_22136C0(v154.m128i_i64[0] + 8, v154.m128i_i64[0] + 24, 0, 24, &v167);
        v134 = v165;
        v135 = 3LL * (unsigned int)v165;
        v136 = &v13->m128i_i64[v135];
        *v136 = v113;
        v136[1] = v114;
        v137 = (__m128i *)v164;
        v136[2] = v109;
        v138 = (__m128i *)((char *)v137 + v135 * 8);
        if ( v137 != v138 )
        {
          v139 = v137;
          v140 = 0xAAAAAAAAAAAAAABLL * (((unsigned __int64)v138->m128i_u64 - 24 - (unsigned __int64)v137) >> 3);
          if ( (v137 >= &v13[3] || v13 >= &v137[3]) && (v140 & 0x1FFFFFFFFFFFFFFELL) != 0 )
          {
            v141 = v13;
            v142 = (v140 & 0x1FFFFFFFFFFFFFFFLL) + 1;
            do
            {
              v143 = _mm_loadu_si128(v139 + 1);
              v144 = _mm_loadu_si128(v139);
              v141 += 3;
              v139 += 3;
              v145 = _mm_loadu_si128(v139 - 1);
              v141[-3] = v144;
              v141[-2] = v143;
              v141[-1] = v145;
            }
            while ( &v13[3 * (v142 >> 1)] != v141 );
            v146 = 3 * (v142 & 0xFFFFFFFFFFFFFFFELL);
            v147 = &v137->m128i_i64[v146];
            v148 = &v13->m128i_i64[v146];
            if ( (v142 & 0xFFFFFFFFFFFFFFFELL) != v142 )
            {
              *v148 = *v147;
              v149 = v147[1];
              v150 = v147[2];
              v148[1] = v149;
              v148[2] = v150;
            }
          }
          else
          {
            v152 = (__int64 *)v13;
            do
            {
              v153 = v139->m128i_i64[0];
              v139 = (const __m128i *)((char *)v139 + 24);
              v152 += 3;
              *(v152 - 3) = v153;
              *(v152 - 2) = v139[-1].m128i_i64[0];
              *(v152 - 1) = v139[-1].m128i_i64[1];
            }
            while ( v138 != v139 );
          }
        }
        v151 = v167.m128_i32[0];
        if ( v137 != (__m128i *)(v154.m128i_i64[0] + 24) )
        {
          free(v137);
          v134 = v165;
        }
        v106 = v134 + 1;
        v164 = v13;
        v11 = v163;
        v165 = __PAIR64__(v151, v106);
      }
      else
      {
        v115 = (char *)v164 + v10;
        ++v106;
        *v115 = v113;
        v115[1] = v114;
        v13 = (__m128i *)v164;
        v115[2] = v109;
        LODWORD(v165) = v106;
      }
      v17 = v106;
      v116 = (__int64 *)&v13[-1] + 3 * v106 - 1;
      a4 = v116[1];
      a6 = *v116;
    }
  }
  else
  {
    v17 = 0;
  }
LABEL_7:
  v156 = &v169;
  v168 = 0x800000000LL;
  v167 = _mm_loadh_ps((const double *)&v156);
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
      LODWORD(v156) = *(_DWORD *)(a1 + 48);
      v10 = 1;
      v132 = nullptr;
      while ( 1 )
      {
        if ( v27 == (_QWORD *)-8192LL && !v132 )
          v132 = v26;
        v25 = v24 & (v10 + v25);
        v26 = (unsigned __int64 *)&v22[2 * v25];
        v27 = (_QWORD *)*v26;
        if ( a4 == *v26 )
          goto LABEL_11;
        if ( v27 == (_QWORD *)-4096LL )
          break;
        v10 = (unsigned int)(v10 + 1);
      }
      v20 = (unsigned int)v156;
      if ( v132 )
        v26 = v132;
    }
    a6 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
    if ( 4 * (int)a6 < (unsigned int)(3 * v20) )
    {
      if ( (int)v20 - *(_DWORD *)(a1 + 44) - (int)a6 > (unsigned int)v20 >> 3 )
        goto LABEL_41;
      v82 = (((((v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 4) | (v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 8)
          | (((v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 4)
          | (v24 >> 1)
          | v24
          | (((v24 >> 1) | v24) >> 2);
      v83 = v82 >> 16;
      v84 = ((v82 >> 16) | v82) + 1;
      if ( (unsigned int)v84 >= 0x40 )
        v18 = v84;
      *(_DWORD *)(a1 + 48) = v18;
      v85 = sub_220C370(16LL * v18, 8, v83, a4, v10, a6);
      *(_QWORD *)(a1 + 32) = v85;
      if ( v22 )
      {
        v86 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v87 = (_QWORD *)v85;
        v88 = v86;
        v89 = (_QWORD *)(v85 + 16 * v86);
        if ( (_QWORD *)v85 != v89 )
        {
          do
          {
            *v87 = -4096;
            v87 += 2;
          }
          while ( v89 != v87 );
        }
        v90 = v22;
        v91 = v88 - 1;
        do
        {
          v92 = *v90;
          if ( *v90 != -8192 && v92 != -4096 )
          {
            if ( !v88 )
            {
              *(_QWORD *)&dword_0 = *v90;
              BUG();
            }
            v93 = v91 & (((unsigned int)v92 >> 9) ^ ((unsigned int)v92 >> 4));
            v94 = v85 + 16LL * v93;
            v95 = *(_QWORD *)v94;
            if ( *(_QWORD *)v94 != v92 && v95 != -4096 )
            {
              LODWORD(v156) = 1;
              v133 = 0;
              v157 = v90;
              while ( 1 )
              {
                if ( !v133 && v95 == -8192 )
                  v133 = v94;
                v93 = v91 & ((_DWORD)v156 + v93);
                v94 = v85 + 16LL * v93;
                v95 = *(_QWORD *)v94;
                if ( v92 == *(_QWORD *)v94 )
                {
                  v90 = v157;
                  goto LABEL_72;
                }
                if ( v95 == -4096 )
                  break;
                LODWORD(v156) = (_DWORD)v156 + 1;
              }
              v90 = v157;
              if ( v133 )
                v94 = v133;
            }
LABEL_72:
            *(_QWORD *)v94 = v92;
            v96 = *((_DWORD *)v90 + 2);
            ++*(_DWORD *)(a1 + 40);
            *(_DWORD *)(v94 + 8) = v96;
          }
          v90 += 2;
        }
        while ( &v22[2 * v20] != v90 );
        operator delete();
        v85 = *(_QWORD *)(a1 + 32);
        v97 = *(_DWORD *)(a1 + 48);
        LODWORD(a6) = *(_DWORD *)(a1 + 40) + 1;
      }
      else
      {
        v127 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v97 = v127;
        v128 = (_QWORD *)(v85 + 16 * v127);
        if ( (_QWORD *)v85 != v128 )
        {
          v129 = (_QWORD *)v85;
          do
          {
            *v129 = -4096;
            v129 += 2;
          }
          while ( v128 != v129 );
        }
        LODWORD(a6) = 1;
      }
      if ( !v97 )
        goto LABEL_175;
      a4 = *(_QWORD *)(v21 + 16);
      v98 = v97 - 1;
      v19 = *(char **)(a1 + 16);
      v99 = v98 & (((unsigned int)a4 >> 9) ^ ((unsigned int)a4 >> 4));
      v26 = (unsigned __int64 *)(v85 + 16LL * v99);
      v61 = (_QWORD *)*v26;
      if ( *v26 == a4 )
        goto LABEL_42;
      v77 = *(_QWORD **)(v21 + 16);
      if ( v61 != (_QWORD *)-4096LL )
      {
        v100 = 1;
        v101 = nullptr;
        while ( 1 )
        {
          if ( v61 != (_QWORD *)-8192LL || v101 )
            v26 = v101;
          v102 = v100 + 1;
          v103 = v98 & (v99 + v100);
          v99 = v103;
          v104 = (unsigned __int64 *)(v85 + 16LL * v103);
          v61 = (_QWORD *)*v104;
          if ( a4 == *v104 )
          {
            v26 = (unsigned __int64 *)(v85 + 16LL * v103);
            goto LABEL_42;
          }
          if ( v61 == (_QWORD *)-4096LL )
            break;
          v100 = v102;
          v101 = v26;
          v26 = v104;
        }
        if ( v26 )
        {
LABEL_41:
          v61 = (_QWORD *)*v26;
          goto LABEL_42;
        }
        v77 = *(_QWORD **)(v21 + 16);
LABEL_172:
        v26 = v104;
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
      v63 = sub_220C370(16LL * v18, 8, v62, a4, v10, a6);
      *(_QWORD *)(a1 + 32) = v63;
      if ( v22 )
      {
        v64 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v65 = (_QWORD *)v63;
        v66 = &v22[2 * v20];
        v67 = v64;
        v68 = (_QWORD *)(v63 + 16 * v64);
        if ( (_QWORD *)v63 != v68 )
        {
          do
          {
            *v65 = -4096;
            v65 += 2;
          }
          while ( v68 != v65 );
        }
        v69 = v22;
        for ( i = v67 - 1; v66 != v69; v69 += 2 )
        {
          v71 = *v69;
          if ( *v69 != -8192 && v71 != -4096 )
          {
            if ( !v67 )
            {
              *(_QWORD *)&dword_0 = *v69;
              BUG();
            }
            v72 = i & (((unsigned int)v71 >> 9) ^ ((unsigned int)v71 >> 4));
            v73 = v63 + 16LL * v72;
            v74 = *(_QWORD *)v73;
            if ( *(_QWORD *)v73 != v71 && v74 != -4096 )
            {
              LODWORD(v156) = 1;
              v131 = 0;
              v157 = v69;
              while ( 1 )
              {
                if ( !v131 && v74 == -8192 )
                  v131 = v73;
                v72 = i & ((_DWORD)v156 + v72);
                v73 = v63 + 16LL * v72;
                v74 = *(_QWORD *)v73;
                if ( v71 == *(_QWORD *)v73 )
                {
                  v69 = v157;
                  goto LABEL_55;
                }
                if ( v74 == -4096 )
                  break;
                LODWORD(v156) = (_DWORD)v156 + 1;
              }
              v69 = v157;
              if ( v131 )
                v73 = v131;
            }
LABEL_55:
            *(_QWORD *)v73 = v71;
            v75 = *((_DWORD *)v69 + 2);
            ++*(_DWORD *)(a1 + 40);
            *(_DWORD *)(v73 + 8) = v75;
          }
        }
        operator delete();
        v63 = *(_QWORD *)(a1 + 32);
        v76 = *(_DWORD *)(a1 + 48);
        LODWORD(a6) = *(_DWORD *)(a1 + 40) + 1;
      }
      else
      {
        v124 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v76 = v124;
        v125 = (_QWORD *)(v63 + 16 * v124);
        if ( (_QWORD *)v63 != v125 )
        {
          v126 = (_QWORD *)v63;
          do
          {
            *v126 = -4096;
            v126 += 2;
          }
          while ( v125 != v126 );
        }
        LODWORD(a6) = 1;
      }
      if ( !v76 )
      {
LABEL_175:
        ++*(_DWORD *)(a1 + 40);
        BUG();
      }
      v77 = *(_QWORD **)(v21 + 16);
      v78 = v76 - 1;
      v19 = *(char **)(a1 + 16);
      LODWORD(v79) = v78 & (((unsigned int)v77 >> 9) ^ ((unsigned int)v77 >> 4));
      v26 = (unsigned __int64 *)(v63 + 16LL * (unsigned int)v79);
      a4 = *v26;
      v61 = (_QWORD *)*v26;
      if ( v77 == (_QWORD *)*v26 )
        goto LABEL_42;
      v80 = 1;
      v81 = nullptr;
      if ( a4 != -4096 )
      {
        while ( 1 )
        {
          if ( a4 != -8192 || v81 )
            v26 = v81;
          v79 = v78 & (unsigned int)(v79 + v80);
          v104 = (unsigned __int64 *)(v63 + 16 * v79);
          a4 = *v104;
          if ( v77 == (_QWORD *)*v104 )
          {
            v61 = (_QWORD *)*v104;
            v26 = (unsigned __int64 *)(v63 + 16 * v79);
            goto LABEL_42;
          }
          if ( a4 == -4096 )
            break;
          ++v80;
          v81 = v26;
          v26 = (unsigned __int64 *)(v63 + 16 * v79);
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
    a4 = (unsigned __int64)v77;
LABEL_44:
    *v26 = a4;
    v28 = v26 + 1;
    v13 = (__m128i *)v164;
    *v28 = 0;
LABEL_12:
    *v28 = v23;
    v29 = v165;
    v30 = (__int64)&v13[-1] + 24 * (unsigned int)v165 - 8;
    if ( *(char **)(a1 + 24) == v19 )
    {
      sub_974470(v155, v19, (__int64 *)(v30 + 16));
      v13 = (__m128i *)v164;
      v32 = v165 - 1;
      LODWORD(v165) = v32;
      if ( !v32 )
        break;
    }
    else
    {
      v31 = v19 + 8;
      *((_QWORD *)v31 - 1) = *(_QWORD *)(v30 + 16);
      v32 = v29 - 1;
      v13 = (__m128i *)v164;
      *(_QWORD *)(a1 + 16) = v31;
      LODWORD(v165) = v32;
      if ( !v32 )
        break;
    }
    v33 = v163;
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
        v13 = (__m128i *)v164;
        a4 = (unsigned __int64)v164 + v34;
        v35 = *(_QWORD *)((char *)v164 + v34 + 8);
        if ( v35 == *(_QWORD *)((char *)v164 + v34) )
          goto LABEL_27;
      }
      v40 = *(_QWORD *)(v36 + 80);
      v41 = *(_QWORD *)(v36 + 88);
      *v39 |= v38;
      if ( v32 >= (unsigned __int64)HIDWORD(v165) )
      {
        v13 = (__m128i *)sub_22136C0(v154.m128i_i64[0] + 8, v154.m128i_i64[0] + 24, 0, 24, &v158);
        v43 = v165;
        v44 = 3LL * (unsigned int)v165;
        v45 = &v13->m128i_i64[v44];
        *v45 = v40;
        v45[1] = v41;
        v46 = (__m128i *)v164;
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
            v122 = (__int64 *)v13;
            do
            {
              v123 = v48->m128i_i64[0];
              v48 = (const __m128i *)((char *)v48 + 24);
              v122 += 3;
              *(v122 - 3) = v123;
              *(v122 - 2) = v48[-1].m128i_i64[0];
              *(v122 - 1) = v48[-1].m128i_i64[1];
            }
            while ( v47 != v48 );
          }
        }
        v60 = v158;
        if ( v46 != (__m128i *)(v154.m128i_i64[0] + 24) )
        {
          free(v46);
          v43 = v165;
        }
        v32 = v43 + 1;
        v164 = v13;
        v33 = v163;
        v165 = __PAIR64__(v60, v32);
      }
      else
      {
        ++v32;
        v42 = (char *)v164 + v10;
        *v42 = v40;
        v42[1] = v41;
        v13 = (__m128i *)v164;
        v42[2] = v36;
        LODWORD(v165) = v32;
      }
    }
LABEL_27:
    v17 = v32;
  }
  if ( v13 != (__m128i *)(v154.m128i_i64[0] + 24) )
    free(v13);
  if ( s != (void *)(v154.m128i_i64[1] + 16) )
    free(s);
}

