__int64 __fastcall sub_6AC290(_QWORD *a1, __int64 a2, char *a3, unsigned __int8 a4, double a5, double a6)
{
  int v7; // eax
  void *v8; // rsi
  unsigned __int64 v9; // rbx
  void *v10; // rdi
  unsigned __int64 v11; // r12
  size_t v12; // rbp
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  size_t v18; // rbp
  char *v19; // rsi
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  void *v22; // rax
  __m128i si128; // xmm0
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __m128i v27; // xmm0
  char *v28; // rsi
  __m128i v29; // xmm0
  char *v30; // rbp
  __int64 v31; // rax
  __m128i v32; // xmm0
  void *v33; // rax
  __m128i v34; // xmm0
  void *v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rdx
  int *v38; // r13
  __int64 v39; // rdx
  char *v40; // rbx
  char *v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rax
  size_t v44; // rax
  char *v45; // r15
  size_t v46; // r8
  size_t v47; // rax
  size_t v48; // rbp
  void *v49; // rdi
  size_t v50; // rdx
  void *v51; // rax
  __int64 v52; // r15
  __int64 v53; // rax
  char *v54; // rbp
  void *v55; // rax
  __m128i v56; // xmm0
  void *v57; // rax
  __m128i v58; // xmm0
  void *v59; // rax
  __m128i v60; // xmm0
  void *v61; // rax
  const char *v62; // rsi
  __int64 idati; // rax
  unsigned int v64; // ebx
  char *v65; // rdi
  void *v66; // r14
  void *v67; // r13
  char *v68; // rbp
  void *v69; // rdi
  void *v70; // rdi
  char *v71; // rdi
  __int64 v72; // r14
  __int64 v73; // r13
  char *v74; // rbp
  void *v75; // rdi
  void *v76; // rdi
  _QWORD *v77; // rbp
  void *v78; // rdi
  char *v79; // rdx
  void *v80; // r12
  void *v81; // rbp
  char *v82; // rax
  void *v83; // rdi
  char *v84; // rdi
  __int64 v85; // r13
  __int64 v86; // r12
  char *v87; // rbp
  void *v88; // rdi
  void *v89; // rdi
  _QWORD *v90; // rbp
  void *v91; // rdi
  char *v92; // rdx
  __int64 v93; // r12
  __int64 v94; // rbp
  char *v95; // rax
  void *v96; // rdi
  void *v99; // [rsp+8h] [rbp-310h]
  size_t v100; // [rsp+8h] [rbp-310h]
  size_t i; // [rsp+20h] [rbp-2F8h]
  size_t v103; // [rsp+30h] [rbp-2E8h]
  void *v105; // [rsp+50h] [rbp-2C8h] BYREF
  __int128 v106; // [rsp+58h] [rbp-2C0h]
  void *ptr; // [rsp+70h] [rbp-2A8h] BYREF
  __m128i v108; // [rsp+78h] [rbp-2A0h]
  __int128 v109; // [rsp+90h] [rbp-288h] BYREF
  void *v110; // [rsp+A0h] [rbp-278h]
  __int128 v111; // [rsp+A8h] [rbp-270h]
  void *src; // [rsp+B8h] [rbp-260h]
  size_t n[2]; // [rsp+C0h] [rbp-258h]
  __int128 v114; // [rsp+D0h] [rbp-248h] BYREF
  __m128i v115; // [rsp+E8h] [rbp-230h] BYREF
  void *v116; // [rsp+F8h] [rbp-220h]
  void *v117; // [rsp+100h] [rbp-218h]
  char v118; // [rsp+108h] [rbp-210h]
  char *v119; // [rsp+110h] [rbp-208h] BYREF
  void *v120[2]; // [rsp+118h] [rbp-200h]
  __m128i v121; // [rsp+128h] [rbp-1F0h] BYREF
  void *v122; // [rsp+138h] [rbp-1E0h]
  __m128i v123; // [rsp+140h] [rbp-1D8h] BYREF
  __int64 v124; // [rsp+150h] [rbp-1C8h] BYREF
  __m128i v125; // [rsp+158h] [rbp-1C0h] BYREF
  __m128i v126; // [rsp+168h] [rbp-1B0h] BYREF
  void *v127; // [rsp+178h] [rbp-1A0h]
  void *v128; // [rsp+180h] [rbp-198h]
  char v129; // [rsp+188h] [rbp-190h]
  int v130; // [rsp+18Ch] [rbp-18Ch]
  void *v131; // [rsp+190h] [rbp-188h] BYREF
  __int128 v132; // [rsp+198h] [rbp-180h]
  int v133; // [rsp+1A8h] [rbp-170h]
  __int16 v134; // [rsp+1ACh] [rbp-16Ch]
  char v135; // [rsp+1AEh] [rbp-16Ah]
  void *v136; // [rsp+1B0h] [rbp-168h] BYREF
  __int128 v137; // [rsp+1B8h] [rbp-160h]
  void *v138; // [rsp+1C8h] [rbp-150h]
  __int64 v139; // [rsp+1D0h] [rbp-148h]
  void *v140; // [rsp+1D8h] [rbp-140h]
  __int64 v141; // [rsp+1E0h] [rbp-138h]
  int v142; // [rsp+1E8h] [rbp-130h]
  __int64 v143; // [rsp+1F0h] [rbp-128h]
  void *v144[2]; // [rsp+1F8h] [rbp-120h] BYREF
  __int128 v145; // [rsp+208h] [rbp-110h]
  void *v146; // [rsp+218h] [rbp-100h] BYREF
  __int128 v147; // [rsp+220h] [rbp-F8h]
  _BYTE v148[24]; // [rsp+230h] [rbp-E8h] BYREF
  void *v149[2]; // [rsp+248h] [rbp-D0h] BYREF
  void *v150[3]; // [rsp+258h] [rbp-C0h] BYREF
  __int64 v151; // [rsp+270h] [rbp-A8h] BYREF
  void *v152[2]; // [rsp+278h] [rbp-A0h] BYREF
  __m128i v153; // [rsp+288h] [rbp-90h] BYREF
  void *v154[2]; // [rsp+298h] [rbp-80h] BYREF
  __int128 v155; // [rsp+2A8h] [rbp-70h]
  void *v156; // [rsp+2B8h] [rbp-60h]
  __int128 v157; // [rsp+2C0h] [rbp-58h]
  unsigned __int64 v158; // [rsp+2D8h] [rbp-40h]

  v158 = __readfsqword(0x28u);
  v131 = nullptr;
  v134 = 0;
  v138 = v144;
  v133 = -1;
  v135 = 0;
  v136 = nullptr;
  v139 = 1;
  v140 = nullptr;
  v141 = 0;
  v142 = 1065353216;
  v132 = 0;
  v137 = 0;
  v143 = 0;
  v7 = *(_DWORD *)(a2 + 20);
  v8 = a1;
  v146 = nullptr;
  *(_OWORD *)v144 = 0;
  v145 = 0;
  v147 = 0;
  sub_699000((__int64)&v131, a1, (v7 & 2) == 0 ? 13 : 29, a3, 0);
  v9 = *(unsigned int *)(a2 + 4);
  if ( *((_QWORD *)&v137 + 1) < v9 )
  {
    v8 = v136;
    v136 = (void *)qvector_reserve(&v136, v136, *(unsigned int *)(a2 + 4), 32);
  }
  if ( (v134 & 0x3F) == 0x2D )
  {
    if ( *((_QWORD *)&v145 + 1) < v9 )
    {
      v8 = v144[1];
      v144[1] = (void *)qvector_reserve(&v144[1], v144[1], v9, 8);
    }
  }
  else if ( *((_QWORD *)&v147 + 1) < v9 )
  {
    v8 = v146;
    v146 = (void *)qvector_reserve(&v146, v146, v9, 128);
  }
  v10 = a3;
  v11 = 0;
  v105 = nullptr;
  v106 = 0;
  for ( i = strlen(a3) + 1; v11 < *(unsigned int *)(a2 + 4); ++v11 )
  {
    v37 = *(_QWORD *)(a2 + 8);
    ptr = nullptr;
    v108 = 0;
    v38 = (int *)(v37 + 20 * v11);
    if ( sub_517EC0(*(__int64 **)(*a1 + 1680LL), &ptr, *v38) <= 0 )
    {
      if ( (unsigned __int64)v106 <= 1 )
        sub_3573A0((char **)&v105);
      sub_6ABA30(a1, *v38, nullptr, (__int64)&v105, v11);
    }
    v39 = v137;
    v62 = (const char *)v136;
    if ( *((_QWORD *)&v137 + 1) < (unsigned __int64)(v137 + 1) )
    {
      v136 = (void *)qvector_reserve(&v136, v136, v137 + 1, 32);
      v39 = v137;
      v62 = (const char *)v136;
    }
    v40 = (char *)&v62[32 * v39];
    *(_OWORD *)(v40 + 8) = 0;
    *(_QWORD *)v40 = 0;
    *((_DWORD *)v40 + 6) = -1;
    *(_QWORD *)&v137 = v137 + 1;
    v41 = *(char **)v40;
    *(_QWORD *)v40 = ptr;
    v42 = _mm_loadu_si128((const __m128i *)(v40 + 8));
    *(__m128i *)(v40 + 8) = v108;
    ptr = v41;
    v108 = v42;
    *((_DWORD *)v40 + 6) = *v38;
    v110 = nullptr;
    src = nullptr;
    v115.m128i_i64[1] = 1;
    LODWORD(v116) = -1;
    v117 = nullptr;
    v118 = 0;
    v109 = 0;
    v111 = 0;
    *(_OWORD *)n = 0;
    v114 = 0;
    v43 = *((_QWORD *)v40 + 1);
    if ( !v43 )
      goto LABEL_8;
    v44 = v43 - 1;
    v45 = *(char **)v40;
    memset(v148, 0, sizeof(v148));
    v46 = i;
    if ( i > v44 )
      v46 = v44;
    v47 = v44 - v46;
    v48 = v47;
    if ( v47 )
    {
      v49 = nullptr;
      v50 = v47 + 1;
      if ( v47 != -1 )
      {
        v103 = v46;
        v100 = v47 + 1;
        *(_QWORD *)v148 = qvector_reserve(v148, 0, v50, 1);
        v46 = v103;
        v49 = *(void **)v148;
        v50 = v100;
      }
      *(_QWORD *)&v148[8] = v50;
      v62 = &v45[v46];
      memmove(v49, &v45[v46], v48);
      *(_BYTE *)(*(_QWORD *)v148 + v48) = 0;
      v51 = *(void **)v148;
      v12 = *(_QWORD *)&v148[8];
      memset(v148, 0, sizeof(v148));
      v52 = *(_QWORD *)&v148[16];
      if ( v110 )
      {
        v99 = v51;
        *(_QWORD *)&v111 = 0;
        qfree(v110);
        *(_QWORD *)&v111 = v12;
        *((_QWORD *)&v111 + 1) = v52;
        v110 = v99;
        if ( *(_QWORD *)v148 )
        {
          *(_QWORD *)&v148[8] = 0;
          qfree(*(void **)v148);
          v12 = v111;
        }
      }
      else
      {
        v110 = v51;
        *(_QWORD *)&v111 = v12;
        *((_QWORD *)&v111 + 1) = *(_QWORD *)&v148[16];
      }
    }
    else
    {
LABEL_8:
      v110 = nullptr;
      v12 = 0;
      v111 = 0u;
    }
    v13 = 0;
    if ( (*(_BYTE *)(a2 + 20) & 2) == 0 )
      v13 = 8LL * (unsigned int)v38[1];
    *(_QWORD *)&v109 = v13;
    v14 = v38[4];
    v15 = (unsigned int)v38[2];
    if ( (v14 & 2) == 0 )
      v15 = (unsigned int)(v15 - v38[1]);
    v16 = 8 * v15;
    v17 = v14 & 0x20;
    *((_QWORD *)&v109 + 1) = v16;
    if ( (_DWORD)v17 )
      HIDWORD(v117) |= 0x20u;
    v119 = (char *)v13;
    *(_OWORD *)v120 = (unsigned __int64)v16;
    v121 = 0;
    if ( v12 )
    {
      v61 = (void *)qalloc_or_throw(v12, v62, v13, v17);
      v62 = (const char *)v110;
      v120[1] = v61;
      v121.m128i_i64[1] = v12;
      memcpy(v61, v110, v12);
      v121.m128i_i64[0] = v12;
    }
    v18 = n[0];
    v122 = nullptr;
    v123 = 0;
    if ( n[0] )
    {
      v122 = (void *)qalloc_or_throw(n[0], v62, v13, v17);
      v123.m128i_i64[1] = v18;
      memcpy(v122, src, v18);
      v123.m128i_i64[0] = v18;
    }
    v124 = 0;
    copy_tinfo_t(&v124);
    v19 = (char *)v146;
    v130 = 0;
    v20 = _mm_loadu_si128((const __m128i *)((char *)&v114 + 8));
    v127 = v116;
    v125 = v20;
    v21 = _mm_loadu_si128(&v115);
    v128 = v117;
    v126 = v21;
    v129 = v118;
    if ( &v119 < v146 || &v119 >= (char **)((char *)v146 + 128 * *((_QWORD *)&v147 + 1)) )
    {
      v53 = v147;
      if ( *((_QWORD *)&v147 + 1) < (unsigned __int64)(v147 + 1) )
      {
        v146 = (void *)qvector_reserve(&v146, v146, v147 + 1, 128);
        v19 = (char *)v146;
        v53 = v147;
      }
      v54 = &v19[128 * v53];
      *(__m128i *)v54 = _mm_load_si128((const __m128i *)&v119);
      v55 = v120[1];
      v56 = _mm_loadu_si128(&v121);
      v120[1] = nullptr;
      *((_QWORD *)v54 + 2) = v55;
      *(__m128i *)(v54 + 24) = v56;
      v57 = v122;
      v58 = _mm_load_si128(&v123);
      v121 = 0;
      v122 = nullptr;
      v123 = 0;
      *((_QWORD *)v54 + 5) = v57;
      *((_QWORD *)v54 + 8) = 0;
      *((__m128i *)v54 + 3) = v58;
      copy_tinfo_t(v54 + 64);
      v59 = v127;
      *(__m128i *)(v54 + 72) = _mm_loadu_si128(&v125);
      v60 = _mm_loadu_si128(&v126);
      *((_QWORD *)v54 + 13) = v59;
      *(__m128i *)(v54 + 88) = v60;
      *((_QWORD *)v54 + 14) = v128;
      v54[120] = v129;
      *((_DWORD *)v54 + 31) = v130;
    }
    else
    {
      v22 = v120[1];
      si128 = _mm_load_si128((const __m128i *)&v119);
      v120[1] = nullptr;
      *(_QWORD *)&v148[16] = v22;
      *(__m128i *)v148 = si128;
      v24 = _mm_loadu_si128(&v121);
      v150[0] = v122;
      *(__m128i *)v149 = v24;
      v25 = _mm_load_si128(&v123);
      v122 = nullptr;
      v151 = 0;
      v121 = 0;
      *(__m128i *)&v150[1] = v25;
      v123 = 0;
      copy_tinfo_t(&v151);
      v26 = v147;
      v27 = _mm_loadu_si128(&v125);
      v28 = (char *)v146;
      v154[0] = v127;
      *(__m128i *)v152 = v27;
      v29 = _mm_loadu_si128(&v126);
      v154[1] = v128;
      v153 = v29;
      LOBYTE(v155) = v129;
      DWORD1(v155) = v130;
      if ( *((_QWORD *)&v147 + 1) < (unsigned __int64)(v147 + 1) )
      {
        v146 = (void *)qvector_reserve(&v146, v146, v147 + 1, 128);
        v26 = v147;
        v28 = (char *)v146;
      }
      v30 = &v28[128 * v26];
      *(__m128i *)v30 = _mm_load_si128((const __m128i *)v148);
      v31 = *(_QWORD *)&v148[16];
      v32 = _mm_loadu_si128((const __m128i *)v149);
      *(_QWORD *)&v148[16] = 0;
      *((_QWORD *)v30 + 2) = v31;
      *(__m128i *)(v30 + 24) = v32;
      v33 = v150[0];
      v34 = _mm_load_si128((const __m128i *)&v150[1]);
      *(_OWORD *)v149 = 0;
      memset(v150, 0, sizeof(v150));
      *((_QWORD *)v30 + 5) = v33;
      *((_QWORD *)v30 + 8) = 0;
      *((__m128i *)v30 + 3) = v34;
      copy_tinfo_t(v30 + 64);
      v35 = v154[0];
      *(__m128i *)(v30 + 72) = _mm_loadu_si128((const __m128i *)v152);
      v36 = _mm_loadu_si128(&v153);
      *((_QWORD *)v30 + 13) = v35;
      *(__m128i *)(v30 + 88) = v36;
      *((void **)v30 + 14) = v154[1];
      v30[120] = v155;
      *((_DWORD *)v30 + 31) = DWORD1(v155);
      clear_tinfo_t(&v151);
      if ( v150[0] )
      {
        v150[1] = nullptr;
        qfree(v150[0]);
      }
      if ( *(_QWORD *)&v148[16] )
      {
        v149[0] = nullptr;
        qfree(*(void **)&v148[16]);
      }
    }
    *(_QWORD *)&v147 = v147 + 1;
    clear_tinfo_t(&v124);
    if ( v122 )
    {
      v123.m128i_i64[0] = 0;
      qfree(v122);
    }
    if ( v120[1] )
    {
      v121.m128i_i64[0] = 0;
      qfree(v120[1]);
    }
    v8 = (void *)*((unsigned int *)v40 + 6);
    sub_69E750(a1, (unsigned int)v8, 0);
    clear_tinfo_t(&v114);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    if ( v110 )
    {
      *(_QWORD *)&v111 = 0;
      qfree(v110);
    }
    v10 = ptr;
    if ( ptr )
    {
      v108.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  memset(v148, 0, sizeof(v148));
  LODWORD(v149[0]) = -1;
  WORD2(v149[0]) = 0;
  BYTE6(v149[0]) = 0;
  v149[1] = nullptr;
  v150[2] = v154;
  v151 = 1;
  v152[0] = nullptr;
  v152[1] = nullptr;
  v153.m128i_i32[0] = 1065353216;
  v153.m128i_i64[1] = 0;
  v156 = nullptr;
  ptr = nullptr;
  v119 = nullptr;
  v122 = nullptr;
  v123.m128i_i32[0] = 1;
  *(_OWORD *)v150 = 0;
  *(_OWORD *)v154 = 0;
  v155 = 0;
  v157 = 0;
  *(_OWORD *)v120 = 0;
  v121 = 0;
  if ( a3 )
  {
    LOWORD(v110) = 256;
    idati = a1[1];
    *((_QWORD *)&v109 + 1) = a3;
    if ( !idati )
      idati = get_idati(v10, v8);
    *(_QWORD *)&v109 = idati;
    if ( (unsigned __int8)create_tinfo(&ptr, 61, 61, &v109)
      && (v64 = a4, LOBYTE(v64) = get_tinfo_details(ptr, 141, &v119) | a4, (_BYTE)v64) )
    {
      sub_6A0BD0((__int64)v148, (char *)a1, a3, (__int64)&v119, 1, 0.0, a6);
      sub_6A7DD0((__int64)&v131, a1, (__int64)v148);
      sub_69BD10(a1, a3, (__int64)v148, 1);
    }
    else
    {
      v64 = 0;
    }
    v65 = v119;
    if ( v119 )
    {
      v66 = v120[0];
      if ( v120[0] )
      {
        v67 = nullptr;
        do
        {
          v68 = &v65[128 * (_QWORD)v67];
          clear_tinfo_t(v68 + 64);
          v69 = *((void **)v68 + 5);
          if ( v69 )
          {
            *((_QWORD *)v68 + 6) = 0;
            qfree(v69);
          }
          v70 = *((void **)v68 + 2);
          if ( v70 )
          {
            *((_QWORD *)v68 + 3) = 0;
            qfree(v70);
          }
          v67 = (char *)v67 + 1;
          v65 = v119;
        }
        while ( v66 != v67 );
      }
      v120[0] = nullptr;
      qfree(v65);
    }
  }
  else
  {
    v64 = 0;
  }
  clear_tinfo_t(&ptr);
  v71 = (char *)v156;
  if ( v156 )
  {
    v72 = v157;
    if ( (_QWORD)v157 )
    {
      v73 = 0;
      do
      {
        v74 = &v71[128 * v73];
        clear_tinfo_t(v74 + 64);
        v75 = *((void **)v74 + 5);
        if ( v75 )
        {
          *((_QWORD *)v74 + 6) = 0;
          qfree(v75);
        }
        v76 = *((void **)v74 + 2);
        if ( v76 )
        {
          *((_QWORD *)v74 + 3) = 0;
          qfree(v76);
        }
        ++v73;
        v71 = (char *)v156;
      }
      while ( v72 != v73 );
    }
    *(_QWORD *)&v157 = 0;
    qfree(v71);
  }
  if ( v154[1] )
  {
    *(_QWORD *)&v155 = 0;
    qfree(v154[1]);
  }
  v77 = v152[0];
  if ( v152[0] )
  {
    do
    {
      v78 = v77;
      v77 = (_QWORD *)*v77;
      operator delete(v78, 0x20u);
    }
    while ( v77 );
  }
  memset(v150[2], 0, 8 * v151);
  v152[1] = nullptr;
  v152[0] = nullptr;
  if ( v150[2] != v154 )
    operator delete(v150[2], 8 * v151);
  v79 = (char *)v149[1];
  if ( v149[1] )
  {
    v80 = v150[0];
    if ( v150[0] )
    {
      v81 = nullptr;
      do
      {
        v82 = &v79[32 * (_QWORD)v81];
        v83 = *(void **)v82;
        if ( *(_QWORD *)v82 )
        {
          *((_QWORD *)v82 + 1) = 0;
          qfree(v83);
          v79 = (char *)v149[1];
        }
        v81 = (char *)v81 + 1;
      }
      while ( v80 != v81 );
    }
    v150[0] = nullptr;
    qfree(v79);
  }
  if ( *(_QWORD *)v148 )
  {
    *(_QWORD *)&v148[8] = 0;
    qfree(*(void **)v148);
  }
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree(v105);
  }
  v84 = (char *)v146;
  if ( v146 )
  {
    v85 = v147;
    if ( (_QWORD)v147 )
    {
      v86 = 0;
      do
      {
        v87 = &v84[128 * v86];
        clear_tinfo_t(v87 + 64);
        v88 = *((void **)v87 + 5);
        if ( v88 )
        {
          *((_QWORD *)v87 + 6) = 0;
          qfree(v88);
        }
        v89 = *((void **)v87 + 2);
        if ( v89 )
        {
          *((_QWORD *)v87 + 3) = 0;
          qfree(v89);
        }
        ++v86;
        v84 = (char *)v146;
      }
      while ( v85 != v86 );
    }
    *(_QWORD *)&v147 = 0;
    qfree(v84);
  }
  if ( v144[1] )
  {
    *(_QWORD *)&v145 = 0;
    qfree(v144[1]);
  }
  v90 = v140;
  if ( v140 )
  {
    do
    {
      v91 = v90;
      v90 = (_QWORD *)*v90;
      operator delete(v91, 0x20u);
    }
    while ( v90 );
  }
  memset(v138, 0, 8 * v139);
  v141 = 0;
  v140 = nullptr;
  if ( v138 != v144 )
    operator delete(v138, 8 * v139);
  v92 = (char *)v136;
  if ( v136 )
  {
    v93 = v137;
    if ( (_QWORD)v137 )
    {
      v94 = 0;
      do
      {
        v95 = &v92[32 * v94];
        v96 = *(void **)v95;
        if ( *(_QWORD *)v95 )
        {
          *((_QWORD *)v95 + 1) = 0;
          qfree(v96);
          v92 = (char *)v136;
        }
        ++v94;
      }
      while ( v93 != v94 );
    }
    *(_QWORD *)&v137 = 0;
    qfree(v92);
  }
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree(v131);
  }
  return v64;
}

