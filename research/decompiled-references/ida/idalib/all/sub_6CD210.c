__int64 __fastcall sub_6CD210(_QWORD *a1, __int64 a2, char *a3, unsigned __int8 a4, double a5, __m128 a6)
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
  size_t v17; // rbp
  char *v18; // rsi
  __m128i v19; // xmm0
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
  __m128i v30; // xmm0
  char *v31; // rbp
  __int64 v32; // rax
  __m128i v33; // xmm0
  void *v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // r13
  __int64 v39; // rdx
  char *v40; // rsi
  char *v41; // rbx
  char *v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rax
  size_t v45; // rax
  char *v46; // r15
  size_t v47; // r8
  size_t v48; // rax
  size_t v49; // rbp
  void *v50; // rdi
  size_t v51; // rdx
  void *v52; // rax
  __int64 v53; // r15
  __int64 v54; // rax
  char *v55; // rbp
  void *v56; // rax
  __m128i v57; // xmm0
  void *v58; // rax
  __m128i v59; // xmm0
  __int64 v60; // rax
  __m128i v61; // xmm0
  __int64 idati; // rax
  unsigned int v63; // ebx
  char *v64; // rdi
  void *v65; // r14
  void *v66; // r13
  char *v67; // rbp
  void *v68; // rdi
  void *v69; // rdi
  char *v70; // rdi
  __int64 v71; // r14
  __int64 v72; // r13
  char *v73; // rbp
  void *v74; // rdi
  void *v75; // rdi
  _QWORD *v76; // rbp
  void *v77; // rdi
  char *v78; // rdx
  __int64 v79; // r12
  __int64 v80; // rbp
  char *v81; // rax
  void *v82; // rdi
  char *v83; // rdi
  __int64 v84; // r13
  __int64 v85; // r12
  char *v86; // rbp
  void *v87; // rdi
  void *v88; // rdi
  _QWORD *v89; // rbp
  void *v90; // rdi
  char *v91; // rdx
  __int64 v92; // r12
  __int64 v93; // rbp
  char *v94; // rax
  void *v95; // rdi
  void *v98; // [rsp+8h] [rbp-340h]
  size_t v99; // [rsp+8h] [rbp-340h]
  size_t i; // [rsp+20h] [rbp-328h]
  size_t v102; // [rsp+30h] [rbp-318h]
  void *v104; // [rsp+50h] [rbp-2F8h] BYREF
  __int128 v105; // [rsp+58h] [rbp-2F0h]
  void *ptr; // [rsp+70h] [rbp-2D8h] BYREF
  __m128i v107; // [rsp+78h] [rbp-2D0h]
  __int128 v108; // [rsp+90h] [rbp-2B8h] BYREF
  void *v109; // [rsp+A0h] [rbp-2A8h]
  __int128 v110; // [rsp+A8h] [rbp-2A0h]
  void *src; // [rsp+B8h] [rbp-290h]
  size_t n[2]; // [rsp+C0h] [rbp-288h]
  __int128 v113; // [rsp+D0h] [rbp-278h] BYREF
  __m128i v114; // [rsp+E8h] [rbp-260h] BYREF
  __m128i v115; // [rsp+F8h] [rbp-250h] BYREF
  __int64 v116; // [rsp+108h] [rbp-240h]
  __int64 v117; // [rsp+110h] [rbp-238h]
  char v118; // [rsp+118h] [rbp-230h]
  char *v119; // [rsp+120h] [rbp-228h] BYREF
  void *v120[2]; // [rsp+128h] [rbp-220h]
  __m128i v121; // [rsp+138h] [rbp-210h] BYREF
  void *v122; // [rsp+148h] [rbp-200h]
  __m128i v123; // [rsp+150h] [rbp-1F8h] BYREF
  __int64 v124; // [rsp+160h] [rbp-1E8h] BYREF
  __m128i v125; // [rsp+168h] [rbp-1E0h] BYREF
  __m128i v126; // [rsp+178h] [rbp-1D0h] BYREF
  __m128i v127; // [rsp+188h] [rbp-1C0h] BYREF
  __int64 v128; // [rsp+198h] [rbp-1B0h]
  __int64 v129; // [rsp+1A0h] [rbp-1A8h]
  char v130; // [rsp+1A8h] [rbp-1A0h]
  int v131; // [rsp+1ACh] [rbp-19Ch]
  void *v132; // [rsp+1B0h] [rbp-198h] BYREF
  __int128 v133; // [rsp+1B8h] [rbp-190h]
  __int64 v134; // [rsp+1C8h] [rbp-180h]
  __int16 v135; // [rsp+1D0h] [rbp-178h]
  char v136; // [rsp+1D2h] [rbp-176h]
  void *v137; // [rsp+1D8h] [rbp-170h] BYREF
  __int128 v138; // [rsp+1E0h] [rbp-168h]
  void *v139; // [rsp+1F0h] [rbp-158h]
  __int64 v140; // [rsp+1F8h] [rbp-150h]
  void *v141; // [rsp+200h] [rbp-148h]
  __int64 v142; // [rsp+208h] [rbp-140h]
  int v143; // [rsp+210h] [rbp-138h]
  __int64 v144; // [rsp+218h] [rbp-130h]
  void *v145[2]; // [rsp+220h] [rbp-128h] BYREF
  __int128 v146; // [rsp+230h] [rbp-118h]
  void *v147; // [rsp+240h] [rbp-108h] BYREF
  __int128 v148; // [rsp+248h] [rbp-100h]
  _BYTE v149[24]; // [rsp+260h] [rbp-E8h] BYREF
  __m128i v150; // [rsp+278h] [rbp-D0h] BYREF
  void *v151; // [rsp+288h] [rbp-C0h]
  __m128i v152; // [rsp+290h] [rbp-B8h] BYREF
  void *v153; // [rsp+2A0h] [rbp-A8h] BYREF
  void *v154[2]; // [rsp+2A8h] [rbp-A0h] BYREF
  __m128i v155; // [rsp+2B8h] [rbp-90h] BYREF
  _BYTE v156[24]; // [rsp+2C8h] [rbp-80h] BYREF
  __int128 v157; // [rsp+2E0h] [rbp-68h]
  void *v158; // [rsp+2F0h] [rbp-58h]
  __int128 v159; // [rsp+2F8h] [rbp-50h]
  unsigned __int64 v160; // [rsp+308h] [rbp-40h]

  v160 = __readfsqword(0x28u);
  v132 = nullptr;
  v135 = 0;
  v139 = v145;
  v134 = -1;
  v136 = 0;
  v137 = nullptr;
  v140 = 1;
  v141 = nullptr;
  v142 = 0;
  v143 = 1065353216;
  v133 = 0;
  v138 = 0;
  v144 = 0;
  v7 = *(_DWORD *)(a2 + 28);
  v8 = a1;
  v147 = nullptr;
  *(_OWORD *)v145 = 0;
  v146 = 0;
  v148 = 0;
  sub_6B9940((__int64)&v132, a1, (v7 & 2) == 0 ? 13 : 29, a3, 0);
  v9 = *(unsigned int *)(a2 + 8);
  if ( *((_QWORD *)&v138 + 1) < v9 )
  {
    v8 = v137;
    v137 = (void *)qvector_reserve(&v137, v137, *(unsigned int *)(a2 + 8), 32);
  }
  if ( (v135 & 0x3F) == 0x2D )
  {
    if ( *((_QWORD *)&v146 + 1) < v9 )
    {
      v8 = v145[1];
      v145[1] = (void *)qvector_reserve(&v145[1], v145[1], v9, 8);
    }
  }
  else if ( *((_QWORD *)&v148 + 1) < v9 )
  {
    v8 = v147;
    v147 = (void *)qvector_reserve(&v147, v147, v9, 144);
  }
  v10 = a3;
  v11 = 0;
  v104 = nullptr;
  v105 = 0;
  for ( i = strlen(a3) + 1; v11 < *(unsigned int *)(a2 + 8); ++v11 )
  {
    v38 = *(_QWORD *)(a2 + 16) + 32 * v11;
    v107 = 0;
    ptr = nullptr;
    if ( sub_5302B0(*(__int64 **)(*a1 + 1872LL), &ptr, *(_QWORD *)v38) <= 0 )
    {
      if ( (unsigned __int64)v105 <= 1 )
        sub_35A790((char **)&v104);
      sub_6CC9B0(a1, *(_QWORD *)v38, nullptr, (__int64)&v104, v11);
    }
    v39 = v138;
    v40 = (char *)v137;
    if ( *((_QWORD *)&v138 + 1) < (unsigned __int64)(v138 + 1) )
    {
      v137 = (void *)qvector_reserve(&v137, v137, v138 + 1, 32);
      v39 = v138;
      v40 = (char *)v137;
    }
    v41 = &v40[32 * v39];
    *(_OWORD *)(v41 + 8) = 0;
    *(_QWORD *)v41 = 0;
    *((_QWORD *)v41 + 3) = -1;
    *(_QWORD *)&v138 = v138 + 1;
    v42 = *(char **)v41;
    *(_QWORD *)v41 = ptr;
    v43 = _mm_loadu_si128((const __m128i *)(v41 + 8));
    *(__m128i *)(v41 + 8) = v107;
    ptr = v42;
    v107 = v43;
    *((_QWORD *)v41 + 3) = *(_QWORD *)v38;
    v109 = nullptr;
    src = nullptr;
    v115.m128i_i64[1] = (__int64)&dword_0 + 1;
    LODWORD(v116) = -1;
    v117 = 0;
    v118 = 0;
    v108 = 0;
    v110 = 0;
    *(_OWORD *)n = 0;
    v113 = 0;
    v44 = *((_QWORD *)v41 + 1);
    if ( !v44 )
      goto LABEL_8;
    v45 = v44 - 1;
    v46 = *(char **)v41;
    memset(v149, 0, sizeof(v149));
    v47 = i;
    if ( i > v45 )
      v47 = v45;
    v48 = v45 - v47;
    v49 = v48;
    if ( v48 )
    {
      v50 = nullptr;
      v51 = v48 + 1;
      if ( v48 != -1 )
      {
        v102 = v47;
        v99 = v48 + 1;
        *(_QWORD *)v149 = qvector_reserve(v149, 0, v51, 1);
        v47 = v102;
        v50 = *(void **)v149;
        v51 = v99;
      }
      *(_QWORD *)&v149[8] = v51;
      memmove(v50, &v46[v47], v49);
      *(_BYTE *)(*(_QWORD *)v149 + v49) = 0;
      v52 = *(void **)v149;
      v12 = *(_QWORD *)&v149[8];
      memset(v149, 0, sizeof(v149));
      v53 = *(_QWORD *)&v149[16];
      if ( v109 )
      {
        v98 = v52;
        *(_QWORD *)&v110 = 0;
        qfree(v109);
        *(_QWORD *)&v110 = v12;
        *((_QWORD *)&v110 + 1) = v53;
        v109 = v98;
        if ( *(_QWORD *)v149 )
        {
          *(_QWORD *)&v149[8] = 0;
          qfree(*(void **)v149);
          v12 = v110;
        }
      }
      else
      {
        v109 = v52;
        *(_QWORD *)&v110 = v12;
        *((_QWORD *)&v110 + 1) = *(_QWORD *)&v149[16];
      }
    }
    else
    {
LABEL_8:
      v109 = nullptr;
      v12 = 0;
      v110 = 0u;
    }
    v13 = 0;
    if ( (*(_BYTE *)(a2 + 28) & 2) == 0 )
      v13 = 8LL * *(_QWORD *)(v38 + 8);
    *(_QWORD *)&v108 = v13;
    v14 = *(_DWORD *)(v38 + 28);
    v15 = *(_QWORD *)(v38 + 16);
    if ( (v14 & 2) == 0 )
      v15 -= *(_QWORD *)(v38 + 8);
    v16 = 8 * v15;
    *((_QWORD *)&v108 + 1) = v16;
    if ( (v14 & 0x20) != 0 )
      HIDWORD(v117) |= 0x20u;
    v119 = (char *)v13;
    *(_OWORD *)v120 = (unsigned __int64)v16;
    v121 = 0;
    if ( v12 )
    {
      v120[1] = (void *)qalloc_or_throw(v12);
      v121.m128i_i64[1] = v12;
      memcpy(v120[1], v109, v12);
      v121.m128i_i64[0] = v12;
    }
    v17 = n[0];
    v122 = nullptr;
    v123 = 0;
    if ( n[0] )
    {
      v122 = (void *)qalloc_or_throw(n[0]);
      v123.m128i_i64[1] = v17;
      memcpy(v122, src, v17);
      v123.m128i_i64[0] = v17;
    }
    v124 = 0;
    copy_tinfo_t(&v124);
    v18 = (char *)v147;
    v131 = 0;
    v19 = _mm_loadu_si128((const __m128i *)((char *)&v113 + 8));
    v128 = v116;
    v125 = v19;
    v20 = _mm_loadu_si128(&v114);
    v129 = v117;
    v126 = v20;
    v21 = _mm_loadu_si128(&v115);
    v130 = v118;
    v127 = v21;
    if ( &v119 < v147 || &v119 >= (char **)((char *)v147 + 144 * *((_QWORD *)&v148 + 1)) )
    {
      v54 = v148;
      if ( *((_QWORD *)&v148 + 1) < (unsigned __int64)(v148 + 1) )
      {
        v147 = (void *)qvector_reserve(&v147, v147, v148 + 1, 144);
        v18 = (char *)v147;
        v54 = v148;
      }
      v55 = &v18[144 * v54];
      *(__m128i *)v55 = _mm_load_si128((const __m128i *)&v119);
      v56 = v120[1];
      v57 = _mm_loadu_si128(&v121);
      v120[1] = nullptr;
      *((_QWORD *)v55 + 2) = v56;
      *(__m128i *)(v55 + 24) = v57;
      v58 = v122;
      v59 = _mm_load_si128(&v123);
      v121 = 0;
      v122 = nullptr;
      v123 = 0;
      *((_QWORD *)v55 + 5) = v58;
      *((_QWORD *)v55 + 8) = 0;
      *((__m128i *)v55 + 3) = v59;
      copy_tinfo_t(v55 + 64);
      v60 = v128;
      *(__m128i *)(v55 + 72) = _mm_loadu_si128(&v125);
      v61 = _mm_loadu_si128(&v126);
      *((_QWORD *)v55 + 15) = v60;
      *(__m128i *)(v55 + 88) = v61;
      *(__m128i *)(v55 + 104) = _mm_loadu_si128(&v127);
      *((_QWORD *)v55 + 16) = v129;
      v55[136] = v130;
      *((_DWORD *)v55 + 35) = v131;
    }
    else
    {
      v22 = v120[1];
      si128 = _mm_load_si128((const __m128i *)&v119);
      v120[1] = nullptr;
      *(_QWORD *)&v149[16] = v22;
      *(__m128i *)v149 = si128;
      v24 = _mm_loadu_si128(&v121);
      v151 = v122;
      v150 = v24;
      v25 = _mm_load_si128(&v123);
      v122 = nullptr;
      v153 = nullptr;
      v121 = 0;
      v152 = v25;
      v123 = 0;
      copy_tinfo_t(&v153);
      v26 = v148;
      v27 = _mm_loadu_si128(&v125);
      v28 = (char *)v147;
      *(_QWORD *)&v156[16] = v128;
      *(__m128i *)v154 = v27;
      v29 = _mm_loadu_si128(&v126);
      *(_QWORD *)&v157 = v129;
      v155 = v29;
      v30 = _mm_loadu_si128(&v127);
      BYTE8(v157) = v130;
      *(__m128i *)v156 = v30;
      HIDWORD(v157) = v131;
      if ( *((_QWORD *)&v148 + 1) < (unsigned __int64)(v148 + 1) )
      {
        v147 = (void *)qvector_reserve(&v147, v147, v148 + 1, 144);
        v26 = v148;
        v28 = (char *)v147;
      }
      v31 = &v28[144 * v26];
      *(__m128i *)v31 = _mm_load_si128((const __m128i *)v149);
      v32 = *(_QWORD *)&v149[16];
      v33 = _mm_loadu_si128(&v150);
      *(_QWORD *)&v149[16] = 0;
      *((_QWORD *)v31 + 2) = v32;
      *(__m128i *)(v31 + 24) = v33;
      v34 = v151;
      v35 = _mm_load_si128(&v152);
      v150 = 0;
      v151 = nullptr;
      v152 = 0;
      *((_QWORD *)v31 + 5) = v34;
      *((_QWORD *)v31 + 8) = 0;
      *((__m128i *)v31 + 3) = v35;
      copy_tinfo_t(v31 + 64);
      v36 = *(_QWORD *)&v156[16];
      *(__m128i *)(v31 + 72) = _mm_loadu_si128((const __m128i *)v154);
      v37 = _mm_loadu_si128(&v155);
      *((_QWORD *)v31 + 15) = v36;
      *(__m128i *)(v31 + 88) = v37;
      *(__m128i *)(v31 + 104) = _mm_loadu_si128((const __m128i *)v156);
      *((_QWORD *)v31 + 16) = v157;
      v31[136] = BYTE8(v157);
      *((_DWORD *)v31 + 35) = HIDWORD(v157);
      clear_tinfo_t(&v153);
      if ( v151 )
      {
        v152.m128i_i64[0] = 0;
        qfree(v151);
      }
      if ( *(_QWORD *)&v149[16] )
      {
        v150.m128i_i64[0] = 0;
        qfree(*(void **)&v149[16]);
      }
    }
    *(_QWORD *)&v148 = v148 + 1;
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
    v8 = *((void **)v41 + 3);
    sub_6BF220(a1, (unsigned __int64)v8, 0);
    clear_tinfo_t(&v113);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    if ( v109 )
    {
      *(_QWORD *)&v110 = 0;
      qfree(v109);
    }
    v10 = ptr;
    if ( ptr )
    {
      v107.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  memset(v149, 0, sizeof(v149));
  v150.m128i_i64[0] = -1;
  v150.m128i_i16[4] = 0;
  v150.m128i_i8[10] = 0;
  v151 = nullptr;
  v153 = &v156[8];
  v154[0] = &dword_0 + 1;
  v154[1] = nullptr;
  v155.m128i_i64[0] = 0;
  v155.m128i_i32[2] = 1065353216;
  memset(v156, 0, sizeof(v156));
  v158 = nullptr;
  ptr = nullptr;
  v119 = nullptr;
  v122 = nullptr;
  v123.m128i_i32[0] = 1;
  v152 = 0;
  v157 = 0;
  v159 = 0;
  *(_OWORD *)v120 = 0;
  v121 = 0;
  if ( a3 )
  {
    LOWORD(v109) = 256;
    idati = a1[1];
    *((_QWORD *)&v108 + 1) = a3;
    if ( !idati )
      idati = get_idati(v10, v8);
    *(_QWORD *)&v108 = idati;
    if ( (unsigned __int8)create_tinfo(&ptr, 61, 61, &v108)
      && (v63 = a4, LOBYTE(v63) = get_tinfo_details(ptr, 141, &v119) | a4, (_BYTE)v63) )
    {
      sub_6C1860((__int64)v149, a1, a3, (__int64)&v119, 1, 0.0, *(double *)a6.m128_u64);
      sub_6C8CF0((__int64)&v132, a1, (__int64)v149, 0.0, a6);
      sub_6BC760(a1, a3, (__int64)v149, 1, 0.0, a6);
    }
    else
    {
      v63 = 0;
    }
    v64 = v119;
    if ( v119 )
    {
      v65 = v120[0];
      if ( v120[0] )
      {
        v66 = nullptr;
        do
        {
          v67 = &v64[144 * (_QWORD)v66];
          clear_tinfo_t(v67 + 64);
          v68 = *((void **)v67 + 5);
          if ( v68 )
          {
            *((_QWORD *)v67 + 6) = 0;
            qfree(v68);
          }
          v69 = *((void **)v67 + 2);
          if ( v69 )
          {
            *((_QWORD *)v67 + 3) = 0;
            qfree(v69);
          }
          v66 = (char *)v66 + 1;
          v64 = v119;
        }
        while ( v65 != v66 );
      }
      v120[0] = nullptr;
      qfree(v64);
    }
  }
  else
  {
    v63 = 0;
  }
  clear_tinfo_t(&ptr);
  v70 = (char *)v158;
  if ( v158 )
  {
    v71 = v159;
    if ( (_QWORD)v159 )
    {
      v72 = 0;
      do
      {
        v73 = &v70[144 * v72];
        clear_tinfo_t(v73 + 64);
        v74 = *((void **)v73 + 5);
        if ( v74 )
        {
          *((_QWORD *)v73 + 6) = 0;
          qfree(v74);
        }
        v75 = *((void **)v73 + 2);
        if ( v75 )
        {
          *((_QWORD *)v73 + 3) = 0;
          qfree(v75);
        }
        ++v72;
        v70 = (char *)v158;
      }
      while ( v71 != v72 );
    }
    *(_QWORD *)&v159 = 0;
    qfree(v70);
  }
  if ( *(_QWORD *)&v156[16] )
  {
    *(_QWORD *)&v157 = 0;
    qfree(*(void **)&v156[16]);
  }
  v76 = v154[1];
  if ( v154[1] )
  {
    do
    {
      v77 = v76;
      v76 = (_QWORD *)*v76;
      operator delete(v77, 0x20u);
    }
    while ( v76 );
  }
  memset(v153, 0, 8 * (__int64)v154[0]);
  v155.m128i_i64[0] = 0;
  v154[1] = nullptr;
  if ( v153 != &v156[8] )
    operator delete(v153, 8 * (__int64)v154[0]);
  v78 = (char *)v151;
  if ( v151 )
  {
    v79 = v152.m128i_i64[0];
    if ( v152.m128i_i64[0] )
    {
      v80 = 0;
      do
      {
        v81 = &v78[32 * v80];
        v82 = *(void **)v81;
        if ( *(_QWORD *)v81 )
        {
          *((_QWORD *)v81 + 1) = 0;
          qfree(v82);
          v78 = (char *)v151;
        }
        ++v80;
      }
      while ( v79 != v80 );
    }
    v152.m128i_i64[0] = 0;
    qfree(v78);
  }
  if ( *(_QWORD *)v149 )
  {
    *(_QWORD *)&v149[8] = 0;
    qfree(*(void **)v149);
  }
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree(v104);
  }
  v83 = (char *)v147;
  if ( v147 )
  {
    v84 = v148;
    if ( (_QWORD)v148 )
    {
      v85 = 0;
      do
      {
        v86 = &v83[144 * v85];
        clear_tinfo_t(v86 + 64);
        v87 = *((void **)v86 + 5);
        if ( v87 )
        {
          *((_QWORD *)v86 + 6) = 0;
          qfree(v87);
        }
        v88 = *((void **)v86 + 2);
        if ( v88 )
        {
          *((_QWORD *)v86 + 3) = 0;
          qfree(v88);
        }
        ++v85;
        v83 = (char *)v147;
      }
      while ( v84 != v85 );
    }
    *(_QWORD *)&v148 = 0;
    qfree(v83);
  }
  if ( v145[1] )
  {
    *(_QWORD *)&v146 = 0;
    qfree(v145[1]);
  }
  v89 = v141;
  if ( v141 )
  {
    do
    {
      v90 = v89;
      v89 = (_QWORD *)*v89;
      operator delete(v90, 0x20u);
    }
    while ( v89 );
  }
  memset(v139, 0, 8 * v140);
  v142 = 0;
  v141 = nullptr;
  if ( v139 != v145 )
    operator delete(v139, 8 * v140);
  v91 = (char *)v137;
  if ( v137 )
  {
    v92 = v138;
    if ( (_QWORD)v138 )
    {
      v93 = 0;
      do
      {
        v94 = &v91[32 * v93];
        v95 = *(void **)v94;
        if ( *(_QWORD *)v94 )
        {
          *((_QWORD *)v94 + 1) = 0;
          qfree(v95);
          v91 = (char *)v137;
        }
        ++v93;
      }
      while ( v92 != v93 );
    }
    *(_QWORD *)&v138 = 0;
    qfree(v91);
  }
  if ( v132 )
  {
    *(_QWORD *)&v133 = 0;
    qfree(v132);
  }
  return v63;
}
