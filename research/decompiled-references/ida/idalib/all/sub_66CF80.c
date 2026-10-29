__int64 __fastcall sub_66CF80(__int64 a1, int a2, unsigned __int64 a3, const char *a4, char a5, char a6)
{
  int v6; // r12d
  const char *v8; // r14
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // r13
  size_t v12; // rax
  __int64 v13; // r13
  size_t v14; // r14
  size_t v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdx
  int v18; // eax
  char *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  char *v23; // r15
  const void **v24; // r12
  __int64 v25; // r8
  unsigned __int64 v26; // r14
  void *v27; // rsi
  size_t v28; // rax
  char *v29; // r13
  __int64 v30; // rax
  size_t v31; // r15
  void *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // r14
  char *v36; // rax
  void *v37; // rdi
  char *v38; // rcx
  char *v39; // r13
  char *v40; // r14
  __int64 (__fastcall *v41)(_QWORD, const char *); // rax
  const char **v42; // r15
  const char *v43; // rsi
  unsigned int v44; // r12d
  unsigned __int64 *v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // rbx
  char *v49; // rax
  void *v50; // rdi
  char *v51; // r15
  __int64 v52; // rbx
  __int64 v53; // r14
  char *v54; // rax
  void *v55; // rdi
  char *v57; // rcx
  size_t v58; // rax
  __int64 v59; // r13
  size_t v60; // r14
  __int64 v61; // rax
  char *v62; // r15
  char *v63; // r13
  char *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // r9
  __int64 v67; // r14
  __int64 v68; // rsi
  __int64 v69; // rdx
  size_t v70; // rdx
  char *v71; // rax
  __int64 v72; // rdx
  char *v73; // rsi
  char *v74; // r8
  char *v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rdx
  char *v78; // rsi
  char *v79; // rax
  const char *v80; // r14
  __int64 v81; // rdx
  char *v82; // rsi
  char *v83; // rdi
  char *v84; // rax
  __int64 v85; // rbx
  unsigned __int64 v86; // r15
  char *v87; // rdi
  __int64 v88; // rdx
  char *v89; // rsi
  void *v90; // rdi
  __int64 v91; // r14
  char *v92; // rdx
  char *v93; // rax
  void *v94; // rdi
  unsigned __int64 v95; // r12
  size_t v96; // r15
  unsigned __int64 v97; // r14
  __int64 v98; // r12
  __int64 v99; // rsi
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rsi
  __int64 v103; // rdx
  unsigned __int64 v104; // rax
  __int64 v105; // rcx
  unsigned __int64 v106; // rdx
  char *v107; // r8
  __int64 v108; // r14
  __int64 v109; // rsi
  __int64 v110; // rax
  char *v111; // rdi
  char *i; // rax
  char *v113; // r15
  char v114; // al
  __int64 v115; // rdx
  char *v116; // rsi
  char *v117; // rdi
  __int64 v118; // rax
  size_t v119; // r10
  __int64 v120; // r8
  char *v121; // r9
  __int64 v122; // rsi
  _BYTE *v123; // rdx
  __int64 v124; // rax
  char *v125; // r14
  size_t v126; // rax
  size_t v127; // r13
  size_t v128; // rbx
  char *v129; // r15
  char *v130; // r14
  char *v131; // rdi
  __int64 v132; // rdx
  char *v133; // rsi
  const char *v134; // rbx
  size_t v135; // rax
  __int64 v136; // r12
  size_t v137; // r14
  __int64 v138; // rax
  char *v139; // rsi
  unsigned __int64 v140; // rdi
  __m128i v141; // xmm0
  char *v142; // rax
  __int64 v143; // rbx
  __int64 v144; // r14
  char *v145; // rdx
  char *v146; // rax
  void *v147; // rdi
  __int64 v148; // r15
  __int64 v149; // rax
  _QWORD *v150; // rax
  __int64 v151; // rcx
  unsigned __int64 v152; // r13
  __int64 v153; // rax
  char *v154; // r15
  char *v155; // rax
  void *v156; // rdi
  char *v157; // rdx
  size_t v158; // r14
  __int64 v159; // r13
  void *v160; // rdi
  __m128i si128; // xmm0
  _BYTE *v162; // r15
  void *v163; // rdi
  char *v164; // r13
  void *v165; // r14
  __m128i v166; // xmm0
  __m128i v167; // xmm1
  char *v168; // rax
  size_t v169; // r8
  __int64 v170; // rdi
  __int64 v171; // r15
  __int64 v172; // rsi
  __int64 v173; // rax
  __int64 v176; // [rsp+18h] [rbp-138h]
  __int64 v177; // [rsp+20h] [rbp-130h]
  char *v178; // [rsp+20h] [rbp-130h]
  __int64 v179; // [rsp+28h] [rbp-128h]
  char *v180; // [rsp+30h] [rbp-120h]
  _BYTE *v181; // [rsp+38h] [rbp-118h]
  size_t v182; // [rsp+38h] [rbp-118h]
  char *v183[2]; // [rsp+40h] [rbp-110h] BYREF
  __int64 v184; // [rsp+50h] [rbp-100h]
  __m128i s; // [rsp+58h] [rbp-F8h] BYREF
  __m128i v186; // [rsp+68h] [rbp-E8h]
  void *v187; // [rsp+80h] [rbp-D0h] BYREF
  __int128 v188; // [rsp+88h] [rbp-C8h]
  void *v189; // [rsp+A0h] [rbp-B0h] BYREF
  __int128 v190; // [rsp+A8h] [rbp-A8h]
  void *v191; // [rsp+C0h] [rbp-90h] BYREF
  __int128 v192; // [rsp+C8h] [rbp-88h]
  void *ptr; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v194; // [rsp+E8h] [rbp-68h]
  void *src; // [rsp+100h] [rbp-50h] BYREF
  __m128i v196; // [rsp+108h] [rbp-48h] BYREF
  unsigned __int64 v197; // [rsp+118h] [rbp-38h]

  v6 = a2;
  v184 = a1;
  v8 = *(const char **)(a1 + 56);
  s = (__m128i)a3;
  v197 = __readfsqword(0x28u);
  v186 = 0;
  if ( v8 )
  {
    v9 = strlen(v8);
    v10 = v9 + 1;
    v11 = v9;
    s.m128i_i64[1] = qvector_reserve(&s.m128i_u64[1], 0, v9 + 1, 1);
    v186.m128i_i64[0] = v10;
    *(_BYTE *)(s.m128i_i64[1] + v11) = 0;
    memmove((void *)s.m128i_i64[1], v8, v11);
  }
  if ( a2 )
  {
    v6 = *(_DWORD *)(v184 + 48) * a2;
    if ( v6 )
      sub_35A910(&s.m128i_i64[1]);
  }
  if ( s.m128i_i64[0] )
  {
    v12 = strlen((const char *)s.m128i_i64[0]);
    v13 = v186.m128i_i64[0];
    v14 = v12;
    v15 = v12;
    if ( v186.m128i_i64[0] )
    {
      v13 = v186.m128i_i64[0] - 1;
      v15 = v12 + v186.m128i_i64[0] - 1;
    }
    v16 = s.m128i_i64[1];
    v17 = v15 + 1;
    if ( v186.m128i_i64[1] < v15 + 1 )
    {
      v183[0] = (char *)(v15 + 1);
      s.m128i_i64[1] = qvector_reserve(&s.m128i_u64[1], s.m128i_i64[1], v17, 1);
      v17 = v15 + 1;
      v16 = s.m128i_i64[1];
    }
    v186.m128i_i64[0] = v17;
    *(_BYTE *)(v16 + v15) = 0;
    memmove((void *)(v13 + s.m128i_i64[1]), (const void *)s.m128i_i64[0], v14);
  }
  v187 = nullptr;
  v188 = 0;
  v18 = *(_DWORD *)(v184 + 12);
  if ( (v18 & 8) != 0 )
  {
    sub_65E480(&s.m128i_i64[1]);
  }
  else if ( (v18 & 0x10) != 0 )
  {
    sub_65E3C0((__int64)&s.m128i_i64[1]);
  }
  else if ( (v18 & 4) != 0 && v186.m128i_i64[0] > 1uLL )
  {
    v111 = (char *)s.m128i_i64[1];
    s.m128i_i64[0] = s.m128i_i64[1];
LABEL_129:
    for ( i = tag_skipcodes(v111); ; i = tag_skipcodes(v113 + 1) )
    {
      v113 = i;
      v114 = *i;
      if ( v114 != 10 )
      {
        v111 = v113 + 1;
        if ( v114 )
          goto LABEL_129;
      }
      v115 = v188;
      v116 = (char *)v187;
      if ( *((_QWORD *)&v188 + 1) < (unsigned __int64)(v188 + 1) )
      {
        v187 = (void *)qvector_reserve(&v187, v187, v188 + 1, 24);
        v115 = v188;
        v116 = (char *)v187;
      }
      v117 = &v116[24 * v115];
      v118 = s.m128i_i64[0];
      *(_OWORD *)(v117 + 8) = 0;
      *(_QWORD *)v117 = 0;
      v119 = (size_t)&v113[-v118];
      *(_QWORD *)&v188 = v188 + 1;
      v120 = *((_QWORD *)v117 + 1);
      v121 = &v113[-v118];
      if ( v120 )
      {
        --v120;
        v121 = (char *)(v119 + v120);
      }
      v122 = *(_QWORD *)v117;
      v123 = v121 + 1;
      if ( v121 != (char *)-1LL )
      {
        v178 = v121;
        v179 = v120;
        v180 = &v113[-v118];
        v181 = v121 + 1;
        v183[0] = v117;
        v124 = qvector_reserve(v117, v122, v123, 1);
        v121 = v178;
        v122 = v124;
        v120 = v179;
        v119 = (size_t)v180;
        *(_QWORD *)v117 = v124;
        v123 = v181;
      }
      *((_QWORD *)v117 + 1) = v123;
      v121[v122] = 0;
      memmove((void *)(*(_QWORD *)v117 + v120), (const void *)s.m128i_i64[0], v119);
      if ( !*v113 )
        break;
      s.m128i_i64[0] = (__int64)(v113 + 1);
    }
    if ( (unsigned __int64)v188 <= 1 )
    {
      if ( !under_debugger )
        interr(3105);
      BUG();
    }
    v150 = (char *)v187 + 24 * v188 - 24;
    v151 = *v150;
    v152 = v150[1];
    *v150 = 0;
    *(_OWORD *)(v150 + 1) = 0;
    v153 = v188;
    v154 = (char *)v187;
    s.m128i_i64[0] = v151;
    if ( (_QWORD)v188 )
    {
      *(_QWORD *)&v188 = v188 - 1;
      v155 = (char *)v187 + 24 * v153 - 24;
      v156 = *(void **)v155;
      if ( *(_QWORD *)v155 )
      {
        *((_QWORD *)v155 + 1) = 0;
        qfree(v156);
        v154 = (char *)v187;
      }
      v153 = v188;
    }
    v157 = v154;
    if ( v152 )
    {
      v158 = v152 - 1;
      if ( v152 != 1 )
      {
        v169 = v152 - 1;
        v170 = (__int64)&v154[24 * v153 - 24];
        v171 = *(_QWORD *)(v170 + 8);
        if ( v171 )
        {
          --v171;
          v169 = v158 + v171;
          v152 += v171;
        }
        v172 = *(_QWORD *)v170;
        if ( *(_QWORD *)(v170 + 16) < v152 )
        {
          v182 = v169;
          v183[0] = (char *)v170;
          v173 = qvector_reserve(v170, v172, v152, 1);
          v169 = v182;
          v172 = v173;
          *(_QWORD *)v170 = v173;
        }
        *(_QWORD *)(v170 + 8) = v152;
        *(_BYTE *)(v172 + v169) = 0;
        memcpy((void *)(*(_QWORD *)v170 + v171), (const void *)s.m128i_i64[0], v158);
        v157 = (char *)v187;
      }
    }
    v159 = *(_QWORD *)v157;
    *(_QWORD *)v157 = 0;
    v160 = (void *)s.m128i_i64[1];
    si128 = _mm_loadu_si128((const __m128i *)(v157 + 8));
    *(_OWORD *)(v157 + 8) = 0;
    if ( v160 )
    {
      *(__m128i *)v183 = si128;
      v186.m128i_i64[0] = 0;
      qfree(v160);
      si128 = _mm_load_si128((const __m128i *)v183);
    }
    v162 = v187;
    s.m128i_i64[1] = v159;
    v186 = si128;
    v163 = *(void **)v187;
    v164 = (char *)v187;
    if ( *(_QWORD *)v187 )
    {
      *((_QWORD *)v187 + 1) = 0;
      qfree(v163);
      v162 = v187;
    }
    memmove(v164, v164 + 24, &v162[24 * v188] - v164 - 24);
    *(_QWORD *)&v188 = v188 - 1;
    if ( s.m128i_i64[0] )
      qfree((void *)s.m128i_i64[0]);
  }
  v189 = nullptr;
  v190 = 0;
  if ( !a4 || !*a4 )
  {
    v189 = (void *)qvector_reserve(&v189, 0, 1, 24);
    v19 = (char *)v189 + 24 * v190;
    *(_QWORD *)v19 = 0;
    v20 = s.m128i_i64[1];
    *(_OWORD *)(v19 + 8) = 0;
    *(_QWORD *)&v190 = v190 + 1;
    v21 = *(_QWORD *)v19;
    *(_QWORD *)v19 = v20;
    v22 = *((_QWORD *)v19 + 1);
    s.m128i_i64[1] = v21;
    *((_QWORD *)v19 + 1) = v186.m128i_i64[0];
    v186.m128i_i64[0] = v22;
    *((_QWORD *)v19 + 2) = v186.m128i_i64[1];
    v186.m128i_i64[1] = 0;
    goto LABEL_18;
  }
  v196 = 0;
  v191 = nullptr;
  v57 = *(char **)(v184 + 56);
  src = nullptr;
  v192 = 0;
  v183[0] = v57;
  v58 = strlen(a4);
  v59 = v58 + 1;
  v60 = v58;
  src = (void *)qvector_reserve(&src, 0, v58 + 1, 1);
  v196.m128i_i64[0] = v59;
  memmove(src, a4, v60);
  *((_BYTE *)src + v60) = 0;
  v61 = v196.m128i_i64[0];
  v62 = (char *)src;
  if ( v196.m128i_i64[0] )
  {
    v63 = (char *)src + v196.m128i_i64[0] - 1;
    if ( src >= v63 )
      goto LABEL_81;
    do
    {
      v71 = strchr(v62, 10);
      v72 = v192;
      v73 = (char *)v191;
      v74 = v71;
      v75 = v71;
      if ( !v71 )
        v74 = v63;
      s.m128i_i64[0] = v74 - v62;
      if ( *((_QWORD *)&v192 + 1) < (unsigned __int64)(v192 + 1) )
      {
        v191 = (void *)qvector_reserve(&v191, v191, v192 + 1, 24);
        v72 = v192;
        v73 = (char *)v191;
      }
      v64 = &v73[24 * v72];
      v65 = s.m128i_i64[0];
      *(_OWORD *)(v64 + 8) = 0;
      *(_QWORD *)v64 = 0;
      v66 = v65;
      *(_QWORD *)&v192 = v192 + 1;
      v67 = *((_QWORD *)v64 + 1);
      if ( v67 )
      {
        --v67;
        v66 = v65 + v67;
      }
      v68 = *(_QWORD *)v64;
      v69 = v66 + 1;
      if ( v66 != -1 )
      {
        v176 = v66;
        v177 = v66 + 1;
        v76 = qvector_reserve(v64, v68, v69, 1);
        v66 = v176;
        v68 = v76;
        v69 = v177;
        *(_QWORD *)v64 = v76;
      }
      *((_QWORD *)v64 + 1) = v69;
      v70 = s.m128i_i64[0];
      *(_BYTE *)(v68 + v66) = 0;
      memmove((void *)(*(_QWORD *)v64 + v67), v62, v70);
      if ( !v75 )
        break;
      v62 = v75 + 1;
    }
    while ( v75 + 1 < v63 );
    v61 = v196.m128i_i64[0];
    v62 = (char *)src;
    if ( v196.m128i_i64[0] )
    {
LABEL_81:
      if ( v61 != 1 && v62[v61 - 2] == 10 )
      {
        v77 = v192;
        v78 = (char *)v191;
        if ( *((_QWORD *)&v192 + 1) < (unsigned __int64)(v192 + 1) )
        {
          v191 = (void *)qvector_reserve(&v191, v191, v192 + 1, 24);
          v77 = v192;
          v78 = (char *)v191;
        }
        v79 = &v78[24 * v77];
        *(_QWORD *)v79 = 0;
        *(_OWORD *)(v79 + 8) = 0;
        v62 = (char *)src;
        *(_QWORD *)&v192 = v192 + 1;
      }
    }
  }
  if ( v62 )
  {
    v196.m128i_i64[0] = 0;
    qfree(v62);
  }
  s.m128i_i8[0] = a5 == 0 ? 12 : 4;
  if ( a6 )
  {
    v125 = v183[0];
    ptr = nullptr;
    v194 = 0;
    if ( v183[0] )
    {
      v126 = strlen(v183[0]);
      v127 = v126 + 1;
      v128 = v126;
      ptr = (void *)qvector_reserve(&ptr, 0, v126 + 1, 1);
      *(_QWORD *)&v194 = v127;
      memmove(ptr, v125, v128);
      *((_BYTE *)ptr + v128) = 0;
    }
    if ( v6 )
      sub_35A910((__int64 *)&ptr);
    v129 = (char *)v191;
    v130 = (char *)v191 + 24 * v192;
    if ( v191 != v130 )
    {
      do
      {
        v132 = v190;
        v133 = (char *)v189;
        if ( *((_QWORD *)&v190 + 1) < (unsigned __int64)(v190 + 1) )
        {
          v189 = (void *)qvector_reserve(&v189, v189, v190 + 1, 24);
          v132 = v190;
          v133 = (char *)v189;
        }
        v131 = &v133[24 * v132];
        *(_QWORD *)v131 = 0;
        *(_OWORD *)(v131 + 8) = 0;
        *(_QWORD *)&v190 = v190 + 1;
        sub_35A790((char **)v131);
        v129 += 24;
      }
      while ( v130 != v129 );
    }
    v134 = haystack;
    if ( v186.m128i_i64[0] )
      v134 = (const char *)s.m128i_i64[1];
    src = nullptr;
    v196 = 0;
    if ( v134 )
    {
      v135 = strlen(v134);
      v136 = v135 + 1;
      v137 = v135;
      src = (void *)qvector_reserve(&src, 0, v135 + 1, 1);
      v196.m128i_i64[0] = v136;
      memmove(src, v134, v137);
      *((_BYTE *)src + v137) = 0;
    }
    v138 = v190;
    v139 = (char *)v189;
    v140 = v190 + 1;
    if ( &src >= v189 && &src < (void **)((char *)v189 + 24 * *((_QWORD *)&v190 + 1)) )
    {
      v165 = src;
      v166 = _mm_loadl_epi64(&v196);
      src = nullptr;
      v167 = _mm_loadl_epi64((const __m128i *)&v196.m128i_u64[1]);
      v196 = 0;
      if ( *((_QWORD *)&v190 + 1) < v140 )
      {
        v183[0] = (char *)v167.m128i_i64[0];
        s.m128i_i64[0] = v166.m128i_i64[0];
        v189 = (void *)qvector_reserve(&v189, v189, v190 + 1, 24);
        v139 = (char *)v189;
        v167 = _mm_loadl_epi64((const __m128i *)v183);
        v166 = _mm_loadl_epi64(&s);
        v138 = v190;
      }
      v168 = &v139[24 * v138];
      *(_QWORD *)v168 = v165;
      *(__m128i *)(v168 + 8) = _mm_unpacklo_epi64(v166, v167);
      *(_QWORD *)&v190 = v190 + 1;
      if ( src )
      {
        v196.m128i_i64[0] = 0;
        qfree(src);
      }
    }
    else
    {
      if ( *((_QWORD *)&v190 + 1) < v140 )
      {
        v189 = (void *)qvector_reserve(&v189, v189, v190 + 1, 24);
        v139 = (char *)v189;
        v138 = v190;
      }
      v141 = _mm_loadu_si128(&v196);
      v142 = &v139[24 * v138];
      *(_QWORD *)v142 = src;
      *(__m128i *)(v142 + 8) = v141;
      *(_QWORD *)&v190 = v190 + 1;
    }
    if ( ptr )
    {
      *(_QWORD *)&v194 = 0;
      qfree(ptr);
    }
    v90 = v191;
    if ( v191 )
    {
      if ( (_QWORD)v192 )
      {
        v143 = 0;
        v144 = v192;
        v145 = (char *)v191;
        do
        {
          v146 = &v145[24 * v143];
          v147 = *(void **)v146;
          if ( *(_QWORD *)v146 )
          {
            *((_QWORD *)v146 + 1) = 0;
            qfree(v147);
            v145 = (char *)v191;
          }
          ++v143;
        }
        while ( v144 != v143 );
        v90 = v145;
      }
      goto LABEL_109;
    }
  }
  else
  {
    v80 = haystack;
    if ( v186.m128i_i64[0] )
      v80 = (const char *)s.m128i_i64[1];
    tag_strlen(v80);
    v81 = v190;
    v82 = (char *)v189;
    if ( *((_QWORD *)&v190 + 1) < (unsigned __int64)(v190 + 1) )
    {
      v189 = (void *)qvector_reserve(&v189, v189, v190 + 1, 24);
      v81 = v190;
      v82 = (char *)v189;
    }
    v83 = &v82[24 * v81];
    *(_QWORD *)v83 = 0;
    *(_OWORD *)(v83 + 8) = 0;
    *(_QWORD *)&v190 = v190 + 1;
    sub_35A910((__int64 *)v83);
    s.m128i_i32[0] = s.m128i_u8[0];
    sub_35A910((__int64 *)v83);
    v84 = (char *)&byte_22F0C30;
    if ( v183[0] )
      v84 = v183[0];
    v183[0] = v84;
    tag_strlen(v84);
    v85 = v192;
    if ( (unsigned __int64)v192 > 1 )
    {
      v86 = 1;
      do
      {
        v88 = v190;
        v89 = (char *)v189;
        if ( *((_QWORD *)&v190 + 1) < (unsigned __int64)(v190 + 1) )
        {
          v189 = (void *)qvector_reserve(&v189, v189, v190 + 1, 24);
          v88 = v190;
          v89 = (char *)v189;
        }
        v87 = &v89[24 * v88];
        *(_QWORD *)v87 = 0;
        *(_OWORD *)(v87 + 8) = 0;
        *(_QWORD *)&v190 = v190 + 1;
        sub_35A790((char **)v87);
        v85 = v192;
        ++v86;
      }
      while ( v86 < (unsigned __int64)v192 );
    }
    v90 = v191;
    if ( v191 )
    {
      if ( v85 )
      {
        v91 = 0;
        v92 = (char *)v191;
        do
        {
          v93 = &v92[24 * v91];
          v94 = *(void **)v93;
          if ( *(_QWORD *)v93 )
          {
            *((_QWORD *)v93 + 1) = 0;
            qfree(v94);
            v92 = (char *)v191;
          }
          ++v91;
        }
        while ( v91 != v85 );
        v90 = v92;
      }
LABEL_109:
      *(_QWORD *)&v192 = 0;
      qfree(v90);
    }
  }
LABEL_18:
  v23 = (char *)v187;
  v24 = (const void **)v187;
  v25 = 24 * v188;
  v26 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v188) >> 3);
  if ( v26 )
  {
    v27 = v189;
    s.m128i_i64[0] = 24 * v190;
    v28 = 0;
    if ( *((_QWORD *)&v190 + 1) < v26 + (unsigned __int64)v190 )
    {
      v183[0] = (char *)(24 * v188);
      v189 = (void *)qvector_reserve(&v189, v189, v26 + v190, 24);
      v27 = v189;
      v25 = (__int64)v183[0];
      v28 = 24 * v190 - s.m128i_i64[0];
    }
    v29 = &v23[v25];
    s.m128i_i64[0] += (__int64)v27;
    memmove((void *)(s.m128i_i64[0] + v25), (const void *)s.m128i_i64[0], v28);
    if ( v23 != v29 )
    {
      do
      {
        v30 = s.m128i_i64[0];
        *(_QWORD *)s.m128i_i64[0] = 0;
        *(_OWORD *)(v30 + 8) = 0;
        v31 = (size_t)v24[1];
        if ( v31 )
        {
          v32 = (void *)qalloc_or_throw(v24[1]);
          v33 = s.m128i_i64[0];
          *(_QWORD *)s.m128i_i64[0] = v32;
          *(_QWORD *)(v33 + 16) = v31;
          memcpy(v32, *v24, v31);
          *(_QWORD *)(v33 + 8) = v31;
        }
        v24 += 3;
        s.m128i_i64[0] += 24;
      }
      while ( v29 != (char *)v24 );
    }
    *(_QWORD *)&v190 = v26 + v190;
    v23 = (char *)v187;
  }
  if ( v23 )
  {
    if ( (_QWORD)v188 )
    {
      v34 = 0;
      v35 = v188;
      do
      {
        v36 = &v23[24 * v34];
        v37 = *(void **)v36;
        if ( *(_QWORD *)v36 )
        {
          *((_QWORD *)v36 + 1) = 0;
          qfree(v37);
          v23 = (char *)v187;
        }
        ++v34;
      }
      while ( v35 != v34 );
    }
    *(_QWORD *)&v188 = 0;
    qfree(v23);
    v187 = nullptr;
    *((_QWORD *)&v188 + 1) = 0;
  }
  if ( (*(_BYTE *)(v184 + 12) & 2) == 0 )
  {
    v38 = (char *)v189;
    v39 = (char *)v189 + 24 * v190;
    if ( !(24LL * (_QWORD)v190) )
      goto LABEL_183;
    v40 = (char *)v189;
    do
    {
      if ( *((_QWORD *)v40 + 1) > 1u )
        tag_remove(v40, *(_QWORD *)v40, 0);
      v40 += 24;
    }
    while ( v39 != v40 );
  }
  v38 = (char *)v189;
  v41 = *(__int64 (__fastcall **)(_QWORD, const char *))(v184 + 64);
  v39 = (char *)v189 + 24 * v190;
  if ( v41 )
  {
    if ( v189 != v39 )
    {
      v42 = (const char **)v189;
      while ( 1 )
      {
        v43 = haystack;
        if ( v42[1] )
          v43 = *v42;
        v44 = v41(*(_QWORD *)(v184 + 72), v43);
        if ( !(_BYTE)v44 )
          break;
        v45 = (unsigned __int64 *)v184;
        v46 = (unsigned __int64)&v42[1][(v42[1] == nullptr) - 1 + *(_QWORD *)(v184 + 40)];
        *(_QWORD *)(v184 + 40) = v46;
        if ( v46 >= *v45 )
        {
          v39 = (char *)v189;
          v44 = 0;
          *(_BYTE *)(v184 + 8) = 1;
          v38 = v39;
          goto LABEL_49;
        }
        v42 += 3;
        if ( v39 == (char *)v42 )
          break;
        v41 = *(__int64 (__fastcall **)(_QWORD, const char *))(v184 + 64);
      }
      v39 = (char *)v189;
      v38 = (char *)v189;
      goto LABEL_49;
    }
LABEL_183:
    v44 = 1;
    goto LABEL_49;
  }
  if ( v189 == v39 )
    goto LABEL_183;
  s.m128i_i64[0] = (__int64)v189;
  do
  {
    v95 = *(_QWORD *)(s.m128i_i64[0] + 8);
    if ( v95 )
    {
      v96 = v95 - 1;
      if ( v95 != 1 )
      {
        v107 = (char *)(v95 - 1);
        v108 = *(_QWORD *)(v184 + 24);
        if ( v108 )
        {
          --v108;
          v107 = (char *)(v96 + v108);
          v95 += v108;
        }
        v109 = *(_QWORD *)(v184 + 16);
        if ( *(_QWORD *)(v184 + 32) < v95 )
        {
          v183[0] = v107;
          v109 = qvector_reserve(v184 + 16, v109, v95, 1);
          v107 = v183[0];
          *(_QWORD *)(v184 + 16) = v109;
        }
        v110 = v184;
        *(_QWORD *)(v184 + 24) = v95;
        v107[v109] = 0;
        memcpy((void *)(v108 + *(_QWORD *)(v110 + 16)), *(const void **)s.m128i_i64[0], v96);
      }
    }
    v97 = 2;
    v98 = *(_QWORD *)(v184 + 24);
    if ( v98 )
      v97 = v98-- + 1;
    v99 = *(_QWORD *)(v184 + 16);
    if ( *(_QWORD *)(v184 + 32) < v97 )
    {
      v148 = v184;
      v149 = qvector_reserve(v184 + 16, v99, v97, 1);
      *(_QWORD *)(v148 + 16) = v149;
      v99 = v149;
    }
    v100 = v184;
    v101 = s.m128i_i64[0];
    *(_QWORD *)(v184 + 24) = v97;
    *(_BYTE *)(v99 + v98) = 10;
    v102 = v100;
    *(_BYTE *)(*(_QWORD *)(v100 + 16) + v98 + 1) = 0;
    v103 = *(_QWORD *)(v100 + 40);
    v104 = v103 + 1;
    *(_QWORD *)(v102 + 40) = v103 + 1;
    v105 = *(_QWORD *)(v101 + 8);
    v106 = v105 + v103;
    if ( v105 )
      v104 = v106;
    *(_QWORD *)(v102 + 40) = v104;
    if ( v104 >= *(_QWORD *)v102 )
    {
      v39 = (char *)v189;
      *(_BYTE *)(v102 + 8) = 1;
      v44 = 0;
      v38 = v39;
      goto LABEL_49;
    }
    s.m128i_i64[0] += 24;
  }
  while ( v39 != (char *)s.m128i_i64[0] );
  v39 = (char *)v189;
  v44 = 1;
  v38 = (char *)v189;
LABEL_49:
  if ( v39 )
  {
    v47 = v190;
    if ( (_QWORD)v190 )
    {
      v48 = 0;
      do
      {
        v49 = &v39[24 * v48];
        v50 = *(void **)v49;
        if ( *(_QWORD *)v49 )
        {
          *((_QWORD *)v49 + 1) = 0;
          qfree(v50);
          v38 = (char *)v189;
        }
        ++v48;
        v39 = v38;
      }
      while ( v47 != v48 );
    }
    *(_QWORD *)&v190 = 0;
    qfree(v39);
  }
  v51 = (char *)v187;
  if ( v187 )
  {
    if ( (_QWORD)v188 )
    {
      v52 = 0;
      v53 = v188;
      do
      {
        v54 = &v51[24 * v52];
        v55 = *(void **)v54;
        if ( *(_QWORD *)v54 )
        {
          *((_QWORD *)v54 + 1) = 0;
          qfree(v55);
          v51 = (char *)v187;
        }
        ++v52;
      }
      while ( v53 != v52 );
    }
    *(_QWORD *)&v188 = 0;
    qfree(v51);
  }
  if ( s.m128i_i64[1] )
  {
    v186.m128i_i64[0] = 0;
    qfree((void *)s.m128i_i64[1]);
  }
  return v44;
}
