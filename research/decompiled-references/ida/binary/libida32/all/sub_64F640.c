__int64 __fastcall sub_64F640(__int64 a1, int a2, unsigned __int64 a3, const char *a4, char a5, char a6)
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
  char *v27; // rsi
  size_t v28; // rax
  char *v29; // r13
  char *v30; // rsi
  __int64 v31; // rax
  size_t v32; // r15
  void *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // r14
  char *v37; // rax
  void *v38; // rdi
  char *v39; // rcx
  char *v40; // r13
  char *v41; // r14
  __int64 (__fastcall *v42)(_QWORD, const char *); // rax
  const char **v43; // r15
  const char *v44; // rsi
  unsigned int v45; // r12d
  unsigned __int64 *v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rbx
  char *v50; // rax
  void *v51; // rdi
  char *v52; // r15
  __int64 v53; // rbx
  __int64 v54; // r14
  char *v55; // rax
  void *v56; // rdi
  char *v58; // rcx
  size_t v59; // rax
  __int64 v60; // r13
  size_t v61; // r14
  __int64 v62; // rax
  char *v63; // r15
  char *v64; // r13
  char *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // r9
  __int64 v68; // r14
  __int64 v69; // rsi
  __int64 v70; // rdx
  size_t v71; // rdx
  char *v72; // rax
  __int64 v73; // rdx
  char *v74; // rsi
  char *v75; // r8
  char *v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rdx
  char *v79; // rsi
  char *v80; // rax
  const char *v81; // r14
  __int64 v82; // rdx
  char *v83; // rsi
  char *v84; // rdi
  char *v85; // rax
  __int64 v86; // rbx
  unsigned __int64 v87; // r15
  char *v88; // rdi
  __int64 v89; // rdx
  char *v90; // rsi
  void *v91; // rdi
  __int64 v92; // r14
  char *v93; // rdx
  char *v94; // rax
  void *v95; // rdi
  unsigned __int64 v96; // r12
  size_t v97; // r15
  unsigned __int64 v98; // r14
  __int64 v99; // r12
  __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rsi
  __int64 v104; // rdx
  unsigned __int64 v105; // rax
  __int64 v106; // rcx
  unsigned __int64 v107; // rdx
  char *v108; // r8
  __int64 v109; // r14
  __int64 v110; // rsi
  __int64 v111; // rax
  __int64 v112; // rdi
  _BYTE *i; // rax
  _BYTE *v114; // r15
  char v115; // al
  __int64 v116; // rdx
  char *v117; // rsi
  char *v118; // rdi
  __int64 v119; // rax
  size_t v120; // r10
  __int64 v121; // r8
  _BYTE *v122; // r9
  __int64 v123; // rsi
  _BYTE *v124; // rdx
  __int64 v125; // rax
  char *v126; // r14
  size_t v127; // rax
  size_t v128; // r13
  size_t v129; // rbx
  char *v130; // r15
  char *v131; // r14
  char *v132; // rdi
  __int64 v133; // rdx
  char *v134; // rsi
  const char *v135; // rbx
  size_t v136; // rax
  __int64 v137; // r12
  size_t v138; // r14
  __int64 v139; // rax
  char *v140; // rsi
  unsigned __int64 v141; // rdi
  __m128i v142; // xmm0
  char *v143; // rax
  __int64 v144; // rbx
  __int64 v145; // r14
  char *v146; // rdx
  char *v147; // rax
  void *v148; // rdi
  __int64 v149; // r15
  __int64 v150; // rax
  _QWORD *v151; // rax
  __int64 v152; // rcx
  unsigned __int64 v153; // r13
  __int64 v154; // rax
  char *v155; // r15
  char *v156; // rax
  void *v157; // rdi
  char *v158; // rdx
  size_t v159; // r14
  __int64 v160; // r13
  void *v161; // rdi
  __m128i si128; // xmm0
  _BYTE *v163; // r15
  void *v164; // rdi
  char *v165; // r13
  void *v166; // r14
  __m128i v167; // xmm0
  __m128i v168; // xmm1
  char *v169; // rax
  size_t v170; // r8
  __int64 v171; // rdi
  __int64 v172; // r15
  __int64 v173; // rsi
  __int64 v174; // rax
  __int64 v177; // [rsp+18h] [rbp-138h]
  __int64 v178; // [rsp+20h] [rbp-130h]
  _BYTE *v179; // [rsp+20h] [rbp-130h]
  __int64 v180; // [rsp+28h] [rbp-128h]
  _BYTE *v181; // [rsp+30h] [rbp-120h]
  _BYTE *v182; // [rsp+38h] [rbp-118h]
  size_t v183; // [rsp+38h] [rbp-118h]
  char *v184[2]; // [rsp+40h] [rbp-110h] BYREF
  __int64 v185; // [rsp+50h] [rbp-100h]
  __m128i s; // [rsp+58h] [rbp-F8h] BYREF
  __m128i v187; // [rsp+68h] [rbp-E8h]
  void *v188; // [rsp+80h] [rbp-D0h] BYREF
  __int128 v189; // [rsp+88h] [rbp-C8h]
  void *v190; // [rsp+A0h] [rbp-B0h] BYREF
  __int128 v191; // [rsp+A8h] [rbp-A8h]
  void *v192; // [rsp+C0h] [rbp-90h] BYREF
  __int128 v193; // [rsp+C8h] [rbp-88h]
  void *ptr; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v195; // [rsp+E8h] [rbp-68h]
  void *src; // [rsp+100h] [rbp-50h] BYREF
  __m128i v197; // [rsp+108h] [rbp-48h] BYREF
  unsigned __int64 v198; // [rsp+118h] [rbp-38h]

  v6 = a2;
  v185 = a1;
  v8 = *(const char **)(a1 + 56);
  s = (__m128i)a3;
  v198 = __readfsqword(0x28u);
  v187 = 0;
  if ( v8 )
  {
    v9 = strlen(v8);
    v10 = v9 + 1;
    v11 = v9;
    s.m128i_i64[1] = qvector_reserve(&s.m128i_u64[1], 0, v9 + 1, 1);
    v187.m128i_i64[0] = v10;
    *(_BYTE *)(s.m128i_i64[1] + v11) = 0;
    memmove((void *)s.m128i_i64[1], v8, v11);
  }
  if ( a2 )
  {
    v6 = *(_DWORD *)(v185 + 48) * a2;
    if ( v6 )
      sub_357520(&s.m128i_i64[1]);
  }
  if ( s.m128i_i64[0] )
  {
    v12 = strlen((const char *)s.m128i_i64[0]);
    v13 = v187.m128i_i64[0];
    v14 = v12;
    v15 = v12;
    if ( v187.m128i_i64[0] )
    {
      v13 = v187.m128i_i64[0] - 1;
      v15 = v12 + v187.m128i_i64[0] - 1;
    }
    v16 = s.m128i_i64[1];
    v17 = v15 + 1;
    if ( v187.m128i_i64[1] < v15 + 1 )
    {
      v184[0] = (char *)(v15 + 1);
      s.m128i_i64[1] = qvector_reserve(&s.m128i_u64[1], s.m128i_i64[1], v17, 1);
      v17 = v15 + 1;
      v16 = s.m128i_i64[1];
    }
    v187.m128i_i64[0] = v17;
    *(_BYTE *)(v16 + v15) = 0;
    memmove((void *)(v13 + s.m128i_i64[1]), (const void *)s.m128i_i64[0], v14);
  }
  v188 = nullptr;
  v189 = 0;
  v18 = *(_DWORD *)(v185 + 12);
  if ( (v18 & 8) != 0 )
  {
    sub_640BA0(&s.m128i_i64[1]);
  }
  else if ( (v18 & 0x10) != 0 )
  {
    sub_640AE0(&s.m128i_i64[1]);
  }
  else if ( (v18 & 4) != 0 && v187.m128i_i64[0] > 1uLL )
  {
    v112 = s.m128i_i64[1];
    s.m128i_i64[0] = s.m128i_i64[1];
LABEL_129:
    for ( i = (_BYTE *)tag_skipcodes(v112); ; i = (_BYTE *)tag_skipcodes(v114 + 1) )
    {
      v114 = i;
      v115 = *i;
      if ( v115 != 10 )
      {
        v112 = (__int64)(v114 + 1);
        if ( v115 )
          goto LABEL_129;
      }
      v116 = v189;
      v117 = (char *)v188;
      if ( *((_QWORD *)&v189 + 1) < (unsigned __int64)(v189 + 1) )
      {
        v188 = (void *)qvector_reserve(&v188, v188, v189 + 1, 24);
        v116 = v189;
        v117 = (char *)v188;
      }
      v118 = &v117[24 * v116];
      v119 = s.m128i_i64[0];
      *(_OWORD *)(v118 + 8) = 0;
      *(_QWORD *)v118 = 0;
      v120 = (size_t)&v114[-v119];
      *(_QWORD *)&v189 = v189 + 1;
      v121 = *((_QWORD *)v118 + 1);
      v122 = &v114[-v119];
      if ( v121 )
      {
        --v121;
        v122 = (_BYTE *)(v120 + v121);
      }
      v123 = *(_QWORD *)v118;
      v124 = v122 + 1;
      if ( v122 != (_BYTE *)-1LL )
      {
        v179 = v122;
        v180 = v121;
        v181 = &v114[-v119];
        v182 = v122 + 1;
        v184[0] = v118;
        v125 = qvector_reserve(v118, v123, v124, 1);
        v122 = v179;
        v123 = v125;
        v121 = v180;
        v120 = (size_t)v181;
        *(_QWORD *)v118 = v125;
        v124 = v182;
      }
      *((_QWORD *)v118 + 1) = v124;
      v122[v123] = 0;
      memmove((void *)(*(_QWORD *)v118 + v121), (const void *)s.m128i_i64[0], v120);
      if ( !*v114 )
        break;
      s.m128i_i64[0] = (__int64)(v114 + 1);
    }
    if ( (unsigned __int64)v189 <= 1 )
    {
      if ( !under_debugger )
        interr(3105);
      BUG();
    }
    v151 = (char *)v188 + 24 * v189 - 24;
    v152 = *v151;
    v153 = v151[1];
    *v151 = 0;
    *(_OWORD *)(v151 + 1) = 0;
    v154 = v189;
    v155 = (char *)v188;
    s.m128i_i64[0] = v152;
    if ( (_QWORD)v189 )
    {
      *(_QWORD *)&v189 = v189 - 1;
      v156 = (char *)v188 + 24 * v154 - 24;
      v157 = *(void **)v156;
      if ( *(_QWORD *)v156 )
      {
        *((_QWORD *)v156 + 1) = 0;
        qfree(v157);
        v155 = (char *)v188;
      }
      v154 = v189;
    }
    v158 = v155;
    if ( v153 )
    {
      v159 = v153 - 1;
      if ( v153 != 1 )
      {
        v170 = v153 - 1;
        v171 = (__int64)&v155[24 * v154 - 24];
        v172 = *(_QWORD *)(v171 + 8);
        if ( v172 )
        {
          --v172;
          v170 = v159 + v172;
          v153 += v172;
        }
        v173 = *(_QWORD *)v171;
        if ( *(_QWORD *)(v171 + 16) < v153 )
        {
          v183 = v170;
          v184[0] = (char *)v171;
          v174 = qvector_reserve(v171, v173, v153, 1);
          v170 = v183;
          v173 = v174;
          *(_QWORD *)v171 = v174;
        }
        *(_QWORD *)(v171 + 8) = v153;
        *(_BYTE *)(v173 + v170) = 0;
        memcpy((void *)(*(_QWORD *)v171 + v172), (const void *)s.m128i_i64[0], v159);
        v158 = (char *)v188;
      }
    }
    v160 = *(_QWORD *)v158;
    *(_QWORD *)v158 = 0;
    v161 = (void *)s.m128i_i64[1];
    si128 = _mm_loadu_si128((const __m128i *)(v158 + 8));
    *(_OWORD *)(v158 + 8) = 0;
    if ( v161 )
    {
      *(__m128i *)v184 = si128;
      v187.m128i_i64[0] = 0;
      qfree(v161);
      si128 = _mm_load_si128((const __m128i *)v184);
    }
    v163 = v188;
    s.m128i_i64[1] = v160;
    v187 = si128;
    v164 = *(void **)v188;
    v165 = (char *)v188;
    if ( *(_QWORD *)v188 )
    {
      *((_QWORD *)v188 + 1) = 0;
      qfree(v164);
      v163 = v188;
    }
    memmove(v165, v165 + 24, &v163[24 * v189] - v165 - 24);
    *(_QWORD *)&v189 = v189 - 1;
    if ( s.m128i_i64[0] )
      qfree((void *)s.m128i_i64[0]);
  }
  v190 = nullptr;
  v191 = 0;
  if ( !a4 || !*a4 )
  {
    v190 = (void *)qvector_reserve(&v190, 0, 1, 24);
    v19 = (char *)v190 + 24 * v191;
    *(_QWORD *)v19 = 0;
    v20 = s.m128i_i64[1];
    *(_OWORD *)(v19 + 8) = 0;
    *(_QWORD *)&v191 = v191 + 1;
    v21 = *(_QWORD *)v19;
    *(_QWORD *)v19 = v20;
    v22 = *((_QWORD *)v19 + 1);
    s.m128i_i64[1] = v21;
    *((_QWORD *)v19 + 1) = v187.m128i_i64[0];
    v187.m128i_i64[0] = v22;
    *((_QWORD *)v19 + 2) = v187.m128i_i64[1];
    v187.m128i_i64[1] = 0;
    goto LABEL_18;
  }
  v197 = 0;
  v192 = nullptr;
  v58 = *(char **)(v185 + 56);
  src = nullptr;
  v193 = 0;
  v184[0] = v58;
  v59 = strlen(a4);
  v60 = v59 + 1;
  v61 = v59;
  src = (void *)qvector_reserve(&src, 0, v59 + 1, 1);
  v197.m128i_i64[0] = v60;
  memmove(src, a4, v61);
  *((_BYTE *)src + v61) = 0;
  v62 = v197.m128i_i64[0];
  v63 = (char *)src;
  if ( v197.m128i_i64[0] )
  {
    v64 = (char *)src + v197.m128i_i64[0] - 1;
    if ( src >= v64 )
      goto LABEL_81;
    do
    {
      v72 = strchr(v63, 10);
      v73 = v193;
      v74 = (char *)v192;
      v75 = v72;
      v76 = v72;
      if ( !v72 )
        v75 = v64;
      s.m128i_i64[0] = v75 - v63;
      if ( *((_QWORD *)&v193 + 1) < (unsigned __int64)(v193 + 1) )
      {
        v192 = (void *)qvector_reserve(&v192, v192, v193 + 1, 24);
        v73 = v193;
        v74 = (char *)v192;
      }
      v65 = &v74[24 * v73];
      v66 = s.m128i_i64[0];
      *(_OWORD *)(v65 + 8) = 0;
      *(_QWORD *)v65 = 0;
      v67 = v66;
      *(_QWORD *)&v193 = v193 + 1;
      v68 = *((_QWORD *)v65 + 1);
      if ( v68 )
      {
        --v68;
        v67 = v66 + v68;
      }
      v69 = *(_QWORD *)v65;
      v70 = v67 + 1;
      if ( v67 != -1 )
      {
        v177 = v67;
        v178 = v67 + 1;
        v77 = qvector_reserve(v65, v69, v70, 1);
        v67 = v177;
        v69 = v77;
        v70 = v178;
        *(_QWORD *)v65 = v77;
      }
      *((_QWORD *)v65 + 1) = v70;
      v71 = s.m128i_i64[0];
      *(_BYTE *)(v69 + v67) = 0;
      memmove((void *)(*(_QWORD *)v65 + v68), v63, v71);
      if ( !v76 )
        break;
      v63 = v76 + 1;
    }
    while ( v76 + 1 < v64 );
    v62 = v197.m128i_i64[0];
    v63 = (char *)src;
    if ( v197.m128i_i64[0] )
    {
LABEL_81:
      if ( v62 != 1 && v63[v62 - 2] == 10 )
      {
        v78 = v193;
        v79 = (char *)v192;
        if ( *((_QWORD *)&v193 + 1) < (unsigned __int64)(v193 + 1) )
        {
          v192 = (void *)qvector_reserve(&v192, v192, v193 + 1, 24);
          v78 = v193;
          v79 = (char *)v192;
        }
        v80 = &v79[24 * v78];
        *(_QWORD *)v80 = 0;
        *(_OWORD *)(v80 + 8) = 0;
        v63 = (char *)src;
        *(_QWORD *)&v193 = v193 + 1;
      }
    }
  }
  if ( v63 )
  {
    v197.m128i_i64[0] = 0;
    qfree(v63);
  }
  s.m128i_i8[0] = a5 == 0 ? 12 : 4;
  if ( a6 )
  {
    v126 = v184[0];
    ptr = nullptr;
    v195 = 0;
    if ( v184[0] )
    {
      v127 = strlen(v184[0]);
      v128 = v127 + 1;
      v129 = v127;
      ptr = (void *)qvector_reserve(&ptr, 0, v127 + 1, 1);
      *(_QWORD *)&v195 = v128;
      memmove(ptr, v126, v129);
      *((_BYTE *)ptr + v129) = 0;
    }
    if ( v6 )
      sub_357520((__int64 *)&ptr);
    v130 = (char *)v192;
    v131 = (char *)v192 + 24 * v193;
    if ( v192 != v131 )
    {
      do
      {
        v133 = v191;
        v134 = (char *)v190;
        if ( *((_QWORD *)&v191 + 1) < (unsigned __int64)(v191 + 1) )
        {
          v190 = (void *)qvector_reserve(&v190, v190, v191 + 1, 24);
          v133 = v191;
          v134 = (char *)v190;
        }
        v132 = &v134[24 * v133];
        *(_QWORD *)v132 = 0;
        *(_OWORD *)(v132 + 8) = 0;
        *(_QWORD *)&v191 = v191 + 1;
        sub_3573A0((char **)v132);
        v130 += 24;
      }
      while ( v131 != v130 );
    }
    v135 = haystack;
    if ( v187.m128i_i64[0] )
      v135 = (const char *)s.m128i_i64[1];
    src = nullptr;
    v197 = 0;
    if ( v135 )
    {
      v136 = strlen(v135);
      v137 = v136 + 1;
      v138 = v136;
      src = (void *)qvector_reserve(&src, 0, v136 + 1, 1);
      v197.m128i_i64[0] = v137;
      memmove(src, v135, v138);
      *((_BYTE *)src + v138) = 0;
    }
    v139 = v191;
    v140 = (char *)v190;
    v141 = v191 + 1;
    if ( &src >= v190 && &src < (void **)((char *)v190 + 24 * *((_QWORD *)&v191 + 1)) )
    {
      v166 = src;
      v167 = _mm_loadl_epi64(&v197);
      src = nullptr;
      v168 = _mm_loadl_epi64((const __m128i *)&v197.m128i_u64[1]);
      v197 = 0;
      if ( *((_QWORD *)&v191 + 1) < v141 )
      {
        v184[0] = (char *)v168.m128i_i64[0];
        s.m128i_i64[0] = v167.m128i_i64[0];
        v190 = (void *)qvector_reserve(&v190, v190, v191 + 1, 24);
        v140 = (char *)v190;
        v168 = _mm_loadl_epi64((const __m128i *)v184);
        v167 = _mm_loadl_epi64(&s);
        v139 = v191;
      }
      v169 = &v140[24 * v139];
      *(_QWORD *)v169 = v166;
      *(__m128i *)(v169 + 8) = _mm_unpacklo_epi64(v167, v168);
      *(_QWORD *)&v191 = v191 + 1;
      if ( src )
      {
        v197.m128i_i64[0] = 0;
        qfree(src);
      }
    }
    else
    {
      if ( *((_QWORD *)&v191 + 1) < v141 )
      {
        v190 = (void *)qvector_reserve(&v190, v190, v191 + 1, 24);
        v140 = (char *)v190;
        v139 = v191;
      }
      v142 = _mm_loadu_si128(&v197);
      v143 = &v140[24 * v139];
      *(_QWORD *)v143 = src;
      *(__m128i *)(v143 + 8) = v142;
      *(_QWORD *)&v191 = v191 + 1;
    }
    if ( ptr )
    {
      *(_QWORD *)&v195 = 0;
      qfree(ptr);
    }
    v91 = v192;
    if ( v192 )
    {
      if ( (_QWORD)v193 )
      {
        v144 = 0;
        v145 = v193;
        v146 = (char *)v192;
        do
        {
          v147 = &v146[24 * v144];
          v148 = *(void **)v147;
          if ( *(_QWORD *)v147 )
          {
            *((_QWORD *)v147 + 1) = 0;
            qfree(v148);
            v146 = (char *)v192;
          }
          ++v144;
        }
        while ( v145 != v144 );
        v91 = v146;
      }
      goto LABEL_109;
    }
  }
  else
  {
    v81 = haystack;
    if ( v187.m128i_i64[0] )
      v81 = (const char *)s.m128i_i64[1];
    tag_strlen(v81);
    v82 = v191;
    v83 = (char *)v190;
    if ( *((_QWORD *)&v191 + 1) < (unsigned __int64)(v191 + 1) )
    {
      v190 = (void *)qvector_reserve(&v190, v190, v191 + 1, 24);
      v82 = v191;
      v83 = (char *)v190;
    }
    v84 = &v83[24 * v82];
    *(_QWORD *)v84 = 0;
    *(_OWORD *)(v84 + 8) = 0;
    *(_QWORD *)&v191 = v191 + 1;
    sub_357520((__int64 *)v84);
    s.m128i_i32[0] = s.m128i_u8[0];
    sub_357520((__int64 *)v84);
    v85 = (char *)&byte_22CD811;
    if ( v184[0] )
      v85 = v184[0];
    v184[0] = v85;
    tag_strlen(v85);
    v86 = v193;
    if ( (unsigned __int64)v193 > 1 )
    {
      v87 = 1;
      do
      {
        v89 = v191;
        v90 = (char *)v190;
        if ( *((_QWORD *)&v191 + 1) < (unsigned __int64)(v191 + 1) )
        {
          v190 = (void *)qvector_reserve(&v190, v190, v191 + 1, 24);
          v89 = v191;
          v90 = (char *)v190;
        }
        v88 = &v90[24 * v89];
        *(_QWORD *)v88 = 0;
        *(_OWORD *)(v88 + 8) = 0;
        *(_QWORD *)&v191 = v191 + 1;
        sub_3573A0((char **)v88);
        v86 = v193;
        ++v87;
      }
      while ( v87 < (unsigned __int64)v193 );
    }
    v91 = v192;
    if ( v192 )
    {
      if ( v86 )
      {
        v92 = 0;
        v93 = (char *)v192;
        do
        {
          v94 = &v93[24 * v92];
          v95 = *(void **)v94;
          if ( *(_QWORD *)v94 )
          {
            *((_QWORD *)v94 + 1) = 0;
            qfree(v95);
            v93 = (char *)v192;
          }
          ++v92;
        }
        while ( v92 != v86 );
        v91 = v93;
      }
LABEL_109:
      *(_QWORD *)&v193 = 0;
      qfree(v91);
    }
  }
LABEL_18:
  v23 = (char *)v188;
  v24 = (const void **)v188;
  v25 = 24 * v189;
  v26 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v189) >> 3);
  if ( v26 )
  {
    v27 = (char *)v190;
    s.m128i_i64[0] = 24 * v191;
    v28 = 0;
    if ( *((_QWORD *)&v191 + 1) < v26 + (unsigned __int64)v191 )
    {
      v184[0] = (char *)(24 * v189);
      v190 = (void *)qvector_reserve(&v190, v190, v26 + v191, 24);
      v27 = (char *)v190;
      v25 = (__int64)v184[0];
      v28 = 24 * v191 - s.m128i_i64[0];
    }
    v29 = &v23[v25];
    v30 = &v27[s.m128i_i64[0]];
    s.m128i_i64[0] = (__int64)v30;
    memmove(&v30[v25], v30, v28);
    if ( v23 != v29 )
    {
      do
      {
        v31 = s.m128i_i64[0];
        *(_QWORD *)s.m128i_i64[0] = 0;
        *(_OWORD *)(v31 + 8) = 0;
        v32 = (size_t)v24[1];
        if ( v32 )
        {
          v33 = (void *)qalloc_or_throw(v24[1], v30);
          v34 = s.m128i_i64[0];
          *(_QWORD *)s.m128i_i64[0] = v33;
          *(_QWORD *)(v34 + 16) = v32;
          v30 = (char *)*v24;
          memcpy(v33, *v24, v32);
          *(_QWORD *)(v34 + 8) = v32;
        }
        v24 += 3;
        s.m128i_i64[0] += 24;
      }
      while ( v29 != (char *)v24 );
    }
    *(_QWORD *)&v191 = v26 + v191;
    v23 = (char *)v188;
  }
  if ( v23 )
  {
    if ( (_QWORD)v189 )
    {
      v35 = 0;
      v36 = v189;
      do
      {
        v37 = &v23[24 * v35];
        v38 = *(void **)v37;
        if ( *(_QWORD *)v37 )
        {
          *((_QWORD *)v37 + 1) = 0;
          qfree(v38);
          v23 = (char *)v188;
        }
        ++v35;
      }
      while ( v36 != v35 );
    }
    *(_QWORD *)&v189 = 0;
    qfree(v23);
    v188 = nullptr;
    *((_QWORD *)&v189 + 1) = 0;
  }
  if ( (*(_BYTE *)(v185 + 12) & 2) == 0 )
  {
    v39 = (char *)v190;
    v40 = (char *)v190 + 24 * v191;
    if ( !(24LL * (_QWORD)v191) )
      goto LABEL_183;
    v41 = (char *)v190;
    do
    {
      if ( *((_QWORD *)v41 + 1) > 1u )
        tag_remove();
      v41 += 24;
    }
    while ( v40 != v41 );
  }
  v39 = (char *)v190;
  v42 = *(__int64 (__fastcall **)(_QWORD, const char *))(v185 + 64);
  v40 = (char *)v190 + 24 * v191;
  if ( v42 )
  {
    if ( v190 != v40 )
    {
      v43 = (const char **)v190;
      while ( 1 )
      {
        v44 = haystack;
        if ( v43[1] )
          v44 = *v43;
        v45 = v42(*(_QWORD *)(v185 + 72), v44);
        if ( !(_BYTE)v45 )
          break;
        v46 = (unsigned __int64 *)v185;
        v47 = (unsigned __int64)&v43[1][(v43[1] == nullptr) - 1 + *(_QWORD *)(v185 + 40)];
        *(_QWORD *)(v185 + 40) = v47;
        if ( v47 >= *v46 )
        {
          v40 = (char *)v190;
          v45 = 0;
          *(_BYTE *)(v185 + 8) = 1;
          v39 = v40;
          goto LABEL_49;
        }
        v43 += 3;
        if ( v40 == (char *)v43 )
          break;
        v42 = *(__int64 (__fastcall **)(_QWORD, const char *))(v185 + 64);
      }
      v40 = (char *)v190;
      v39 = (char *)v190;
      goto LABEL_49;
    }
LABEL_183:
    v45 = 1;
    goto LABEL_49;
  }
  if ( v190 == v40 )
    goto LABEL_183;
  s.m128i_i64[0] = (__int64)v190;
  do
  {
    v96 = *(_QWORD *)(s.m128i_i64[0] + 8);
    if ( v96 )
    {
      v97 = v96 - 1;
      if ( v96 != 1 )
      {
        v108 = (char *)(v96 - 1);
        v109 = *(_QWORD *)(v185 + 24);
        if ( v109 )
        {
          --v109;
          v108 = (char *)(v97 + v109);
          v96 += v109;
        }
        v110 = *(_QWORD *)(v185 + 16);
        if ( *(_QWORD *)(v185 + 32) < v96 )
        {
          v184[0] = v108;
          v110 = qvector_reserve(v185 + 16, v110, v96, 1);
          v108 = v184[0];
          *(_QWORD *)(v185 + 16) = v110;
        }
        v111 = v185;
        *(_QWORD *)(v185 + 24) = v96;
        v108[v110] = 0;
        memcpy((void *)(v109 + *(_QWORD *)(v111 + 16)), *(const void **)s.m128i_i64[0], v97);
      }
    }
    v98 = 2;
    v99 = *(_QWORD *)(v185 + 24);
    if ( v99 )
      v98 = v99-- + 1;
    v100 = *(_QWORD *)(v185 + 16);
    if ( *(_QWORD *)(v185 + 32) < v98 )
    {
      v149 = v185;
      v150 = qvector_reserve(v185 + 16, v100, v98, 1);
      *(_QWORD *)(v149 + 16) = v150;
      v100 = v150;
    }
    v101 = v185;
    v102 = s.m128i_i64[0];
    *(_QWORD *)(v185 + 24) = v98;
    *(_BYTE *)(v100 + v99) = 10;
    v103 = v101;
    *(_BYTE *)(*(_QWORD *)(v101 + 16) + v99 + 1) = 0;
    v104 = *(_QWORD *)(v101 + 40);
    v105 = v104 + 1;
    *(_QWORD *)(v103 + 40) = v104 + 1;
    v106 = *(_QWORD *)(v102 + 8);
    v107 = v106 + v104;
    if ( v106 )
      v105 = v107;
    *(_QWORD *)(v103 + 40) = v105;
    if ( v105 >= *(_QWORD *)v103 )
    {
      v40 = (char *)v190;
      *(_BYTE *)(v103 + 8) = 1;
      v45 = 0;
      v39 = v40;
      goto LABEL_49;
    }
    s.m128i_i64[0] += 24;
  }
  while ( v40 != (char *)s.m128i_i64[0] );
  v40 = (char *)v190;
  v45 = 1;
  v39 = (char *)v190;
LABEL_49:
  if ( v40 )
  {
    v48 = v191;
    if ( (_QWORD)v191 )
    {
      v49 = 0;
      do
      {
        v50 = &v40[24 * v49];
        v51 = *(void **)v50;
        if ( *(_QWORD *)v50 )
        {
          *((_QWORD *)v50 + 1) = 0;
          qfree(v51);
          v39 = (char *)v190;
        }
        ++v49;
        v40 = v39;
      }
      while ( v48 != v49 );
    }
    *(_QWORD *)&v191 = 0;
    qfree(v40);
  }
  v52 = (char *)v188;
  if ( v188 )
  {
    if ( (_QWORD)v189 )
    {
      v53 = 0;
      v54 = v189;
      do
      {
        v55 = &v52[24 * v53];
        v56 = *(void **)v55;
        if ( *(_QWORD *)v55 )
        {
          *((_QWORD *)v55 + 1) = 0;
          qfree(v56);
          v52 = (char *)v188;
        }
        ++v53;
      }
      while ( v54 != v53 );
    }
    *(_QWORD *)&v189 = 0;
    qfree(v52);
  }
  if ( s.m128i_i64[1] )
  {
    v187.m128i_i64[0] = 0;
    qfree((void *)s.m128i_i64[1]);
  }
  return v45;
}

