unsigned __int64 __fastcall sub_5A7200(_QWORD *a1, const __m128i *a2, char a3)
{
  void (__fastcall *v4)(__int128 *, const __m128i *, __int64); // rax
  __m128i v5; // xmm0
  void (__fastcall *v6)(__int128 *, const __m128i *, __int64); // rax
  __m128i v7; // xmm0
  void (__fastcall *v8)(__int128 *, const __m128i *, __int64); // rax
  unsigned __int64 v9; // r13
  __m128i **v10; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i *v13; // rsi
  __m128i *v14; // r15
  __m128i si128; // xmm0
  void (__fastcall *v16)(__m128i *, __m128i *, __int64); // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rdx
  __m128i *v21; // rbp
  __int64 v22; // rax
  __m128i v23; // xmm0
  _BYTE *v24; // r8
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __int64 *v27; // rax
  __int64 v28; // r13
  __int64 v29; // r12
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r15
  __m128i *v34; // r14
  char *m128i_i8; // rax
  const __m128i *v36; // r10
  char *v37; // rax
  unsigned __int64 v38; // r12
  __m128i *v39; // rcx
  void (__fastcall *v40)(unsigned __int64 *, unsigned __int64 *, __int64); // rax
  __m128i *v41; // rax
  const __m128i *v42; // r14
  char *v43; // r15
  __int64 v44; // rax
  _BYTE *v45; // r12
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  __int64 v48; // rax
  __m128i *v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // r15
  __m128i *v53; // r8
  unsigned __int64 v54; // rbp
  void *v55; // rcx
  __m128i *v56; // rdi
  __int64 v57; // rax
  __m128i *v58; // rdx
  __m128i v59; // xmm0
  bool v60; // cf
  __m128i v61; // xmm0
  __int64 v62; // r13
  __int64 v63; // rax
  unsigned __int64 v64; // r13
  unsigned __int64 v65; // r13
  __m128i *v66; // rax
  __m128i *v67; // rdx
  __m128i *v68; // rsi
  const __m128i *v69; // rcx
  __m128i v70; // xmm0
  char *v71; // rbp
  void *v72; // rbp
  char *v73; // r15
  _QWORD *v74; // rax
  __int64 v75; // rcx
  _QWORD *v76; // r14
  unsigned __int64 v77; // rbp
  __int64 v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rax
  _QWORD *v81; // r12
  unsigned __int64 v82; // rcx
  _BYTE *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  const void *v86; // rsi
  __int64 v87; // rcx
  char *v88; // rax
  char *v89; // rdi
  char *v90; // rcx
  __int64 v91; // rax
  __int64 v92; // r13
  __int64 v93; // rbp
  __int64 *v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // r13
  __int64 v97; // rcx
  int v98; // r10d
  __int64 v99; // rdx
  char *v100; // rsi
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rsi
  __int64 v105; // rdx
  __int64 *v106; // rax
  __int64 v107; // r14
  int v108; // r15d
  int v109; // r12d
  void *v110; // rax
  unsigned __int64 v111; // r8
  _QWORD *v112; // rax
  _BYTE *v113; // r9
  __int64 v114; // r13
  unsigned __int64 v115; // rax
  __int64 v116; // rsi
  __int64 v117; // rax
  __int64 v118; // rdi
  const char *v119; // rsi
  _QWORD *v120; // r12
  _QWORD *v121; // rdi
  const char *v122; // r8
  int v123; // eax
  unsigned int *v124; // rbp
  __int64 v125; // r15
  __int64 v126; // rax
  char *v127; // rbx
  char *v128; // rdx
  __int64 v129; // rax
  __int64 v130; // r14
  __int64 v131; // rbx
  size_t v132; // r14
  __m128i *v133; // r13
  signed __int64 v134; // r15
  signed __int64 v135; // rax
  signed __int64 v136; // rdx
  unsigned __int64 v137; // rax
  __int64 v138; // rax
  unsigned __int64 *v139; // r15
  void *v140; // r14
  const __m128i *v141; // rcx
  __int64 v142; // rdx
  __m128i v143; // xmm0
  void *v144; // rbp
  __int64 v145; // rax
  __m128i *v146; // r12
  __int64 v147; // r13
  __m128i *v148; // rdi
  __int64 v149; // rax
  __m128i *v150; // rdx
  __m128i v151; // xmm0
  __int64 v152; // rcx
  __int128 *v153; // rdi
  void **v154; // rdi
  __int64 i; // rcx
  __m128i *v156; // [rsp+0h] [rbp-258h]
  _BYTE *v157; // [rsp+0h] [rbp-258h]
  char *v158; // [rsp+0h] [rbp-258h]
  _BYTE *v159; // [rsp+0h] [rbp-258h]
  void *v160; // [rsp+0h] [rbp-258h]
  const __m128i *v161; // [rsp+0h] [rbp-258h]
  char *v162; // [rsp+0h] [rbp-258h]
  char *v163; // [rsp+0h] [rbp-258h]
  void *v164; // [rsp+0h] [rbp-258h]
  __int64 v165; // [rsp+0h] [rbp-258h]
  _BYTE *v166; // [rsp+8h] [rbp-250h]
  __int64 v168; // [rsp+18h] [rbp-240h]
  __int64 v169; // [rsp+20h] [rbp-238h]
  __int64 v170; // [rsp+20h] [rbp-238h]
  const __m128i *v172; // [rsp+28h] [rbp-230h]
  const __m128i *v173; // [rsp+28h] [rbp-230h]
  signed __int64 v174; // [rsp+28h] [rbp-230h]
  __m128i *v175; // [rsp+30h] [rbp-228h]
  __m128i *v176; // [rsp+30h] [rbp-228h]
  void *ptr; // [rsp+50h] [rbp-208h] BYREF
  __int128 v178; // [rsp+58h] [rbp-200h]
  void *v179; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v180; // [rsp+78h] [rbp-1E0h]
  _BYTE dest[24]; // [rsp+90h] [rbp-1C8h] BYREF
  _BYTE *v182; // [rsp+A8h] [rbp-1B0h]
  _BYTE *v183; // [rsp+B0h] [rbp-1A8h]
  __int64 v184; // [rsp+B8h] [rbp-1A0h]
  __int128 v185; // [rsp+C0h] [rbp-198h] BYREF
  __m128i v186; // [rsp+D0h] [rbp-188h] BYREF
  _QWORD *v187; // [rsp+E0h] [rbp-178h] BYREF
  __int128 v188; // [rsp+E8h] [rbp-170h] BYREF
  __m128i v189; // [rsp+F8h] [rbp-160h]
  _QWORD *v190; // [rsp+110h] [rbp-148h]
  __int128 v191; // [rsp+118h] [rbp-140h] BYREF
  __m128i v192; // [rsp+128h] [rbp-130h]
  __m128i v193[3]; // [rsp+140h] [rbp-118h] BYREF
  __m128i v194[3]; // [rsp+170h] [rbp-E8h] BYREF
  __m128i v195[3]; // [rsp+1A0h] [rbp-B8h] BYREF
  void *v196[2]; // [rsp+1D0h] [rbp-88h] BYREF
  __m128i v197; // [rsp+1E0h] [rbp-78h] BYREF
  _BYTE v198[16]; // [rsp+1F0h] [rbp-68h] BYREF
  __m128i v199; // [rsp+200h] [rbp-58h] BYREF
  unsigned __int64 v200; // [rsp+218h] [rbp-40h]

  v200 = __readfsqword(0x28u);
  v4 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
  v185 = 0;
  v186 = 0u;
  if ( v4 )
  {
    v4(&v185, a2, 2);
    v5 = _mm_loadu_si128(a2 + 1);
    v6 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
    v187 = a1;
    v189 = 0u;
    v186 = v5;
    v188 = 0;
    if ( v6 )
    {
      v6(&v188, a2, 2);
      v7 = _mm_loadu_si128(a2 + 1);
      v8 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
      v190 = a1;
      v192 = 0u;
      v189 = v7;
      v191 = 0;
      if ( v8 )
      {
        v8(&v191, a2, 2);
        v192 = _mm_loadu_si128(a2 + 1);
      }
    }
    else
    {
      v152 = 6;
      v190 = a1;
      v153 = &v191;
      while ( v152 )
      {
        *(_DWORD *)v153 = 0;
        v153 = (__int128 *)((char *)v153 + 4);
        --v152;
      }
      v192.m128i_i64[1] = 0;
    }
  }
  else
  {
    v187 = a1;
    v189 = 0u;
    v190 = a1;
    v192 = 0u;
    v188 = 0;
    v191 = 0;
  }
  v9 = 0;
  v10 = (__m128i **)(a1 + 2);
  if ( a1[1] )
  {
    while ( 1 )
    {
      switch_dbctx(*(int *)(*a1 + 4 * v9 + 16));
      memset(v193, 0, 32);
      if ( !v186.m128i_i64[0] )
        break;
      ((void (__fastcall *)(__m128i *, __int128 *, __int64))v186.m128i_i64[0])(v193, &v185, 2);
      v13 = v10[1];
      v14 = *v10;
      memset(v194, 0, 32);
      v169 = 32LL * (_QWORD)v13;
      v156 = &v14[2 * (_QWORD)v13];
      v193[1] = _mm_load_si128(&v186);
      if ( !v186.m128i_i64[0] )
        goto LABEL_95;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128i_i64[0])(v194, v193, 2);
      si128 = _mm_load_si128(&v193[1]);
      v197 = 0u;
      v194[1] = si128;
      *(_OWORD *)v196 = 0;
      if ( !v193[1].m128i_i64[0] )
        goto LABEL_95;
      ((void (__fastcall *)(void **, __m128i *, __int64))v193[1].m128i_i64[0])(v196, v194, 2);
      v197 = _mm_load_si128(&v194[1]);
      memset(v195, 0, 32);
      if ( !v194[1].m128i_i64[0] )
        goto LABEL_96;
      ((void (__fastcall *)(__m128i *, void **, __int64))v194[1].m128i_i64[0])(v195, v196, 2);
      v195[1] = _mm_load_si128(&v197);
      if ( v197.m128i_i64[0] )
      {
        ((void (__fastcall *)(void **, void **, __int64))v197.m128i_i64[0])(v196, v196, 3);
        v16 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v195[1].m128i_i64[0];
        if ( v156 != v14 )
        {
          v197 = 0u;
          *(_OWORD *)v196 = 0;
          if ( v195[1].m128i_i64[0] )
          {
            ((void (__fastcall *)(void **, __m128i *, __int64))v195[1].m128i_i64[0])(v196, v195, 2);
            v197 = _mm_load_si128(&v195[1]);
          }
LABEL_14:
          v17 = -2;
          if ( v169 >> 5 )
          {
            _BitScanReverse64(&v18, v169 >> 5);
            v17 = 2LL * (int)v18;
          }
          sub_5A69B0(v14, v156, v17, (const __m128i *)v196, v11, v12);
          if ( v197.m128i_i64[0] )
            ((void (__fastcall *)(void **, void **, __int64))v197.m128i_i64[0])(v196, v196, 3);
          v197 = 0u;
          *(_OWORD *)v196 = 0;
          if ( v195[1].m128i_i64[0] )
          {
            ((void (__fastcall *)(void **, __m128i *, __int64))v195[1].m128i_i64[0])(v196, v195, 2);
            v197 = _mm_load_si128(&v195[1]);
          }
          sub_5A6120(v14, v156, (const __m128i *)v196);
          if ( v197.m128i_i64[0] )
            ((void (__fastcall *)(void **, void **, __int64))v197.m128i_i64[0])(v196, v196, 3);
          v16 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v195[1].m128i_i64[0];
        }
        if ( v16 )
          v16(v195, v195, 3);
        goto LABEL_25;
      }
      if ( v156 != v14 )
      {
        v154 = v196;
        for ( i = 6; i; --i )
        {
          *(_DWORD *)v154 = 0;
          v154 = (void **)((char *)v154 + 4);
        }
        v197.m128i_i64[1] = 0;
        goto LABEL_14;
      }
LABEL_25:
      if ( v194[1].m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v194[1].m128i_i64[0])(v194, v194, 3);
      if ( v193[1].m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193[1].m128i_i64[0])(v193, v193, 3);
      ++v9;
      v10 += 3;
      if ( v9 >= a1[1] )
        goto LABEL_30;
    }
    v50 = v10[1];
    v14 = *v10;
    memset(v194, 0, 32);
    v169 = 32LL * (_QWORD)v50;
    v156 = &v14[2 * (_QWORD)v50];
LABEL_95:
    memset(v195, 0, 32);
LABEL_96:
    if ( v156 != v14 )
    {
      v197 = 0u;
      *(_OWORD *)v196 = 0;
      goto LABEL_14;
    }
    goto LABEL_25;
  }
LABEL_30:
  memset(dest, 0, sizeof(dest));
  sub_5A59D0((__int64)v196, (__int64)&v187, (const __m128i *)dest);
  if ( *(_QWORD *)dest )
    operator delete(*(void **)dest, *(_QWORD *)&dest[16] - *(_QWORD *)dest);
  if ( !a1[1] )
  {
    ptr = nullptr;
    v178 = 0;
    goto LABEL_48;
  }
  v19 = 0;
  do
  {
    while ( !a1[3 * v19 + 3] )
    {
LABEL_34:
      v20 = a1[1];
      if ( ++v19 >= v20 )
        goto LABEL_47;
    }
    v21 = (__m128i *)v196[1];
    if ( v196[1] == (void *)v197.m128i_i64[0] )
    {
      v133 = (__m128i *)v196[0];
      v134 = (char *)v196[1] - (char *)v196[0];
      v135 = ((char *)v196[1] - (char *)v196[0]) >> 4;
      if ( v135 == 0x7FFFFFFFFFFFFFFLL )
        std::__throw_length_error("vector::_M_realloc_append");
      v136 = 1;
      if ( v135 )
        v136 = ((char *)v196[1] - (char *)v196[0]) >> 4;
      v60 = __CFADD__(v136, v135);
      v137 = v136 + v135;
      if ( v60 )
      {
        v165 = 0x7FFFFFFFFFFFFFF0LL;
        v138 = operator new(0x7FFFFFFFFFFFFFF0uLL);
      }
      else
      {
        if ( v137 > 0x7FFFFFFFFFFFFFFLL )
          v137 = 0x7FFFFFFFFFFFFFFLL;
        v165 = 16 * v137;
        v138 = operator new(16 * v137);
      }
      v139 = (unsigned __int64 *)(v138 + v134);
      v140 = (void *)v138;
      *v139 = v19;
      v139[1] = 0;
      if ( v21 != v133 )
      {
        v141 = v133;
        v142 = v138 + (char *)v21 - (char *)v133;
        do
        {
          v143 = _mm_loadu_si128(v141);
          v138 += 16;
          ++v141;
          *(__m128i *)(v138 - 16) = v143;
        }
        while ( v138 != v142 );
      }
      v144 = (void *)(v138 + 16);
      if ( v133 )
        operator delete(v133, v197.m128i_i64[0] - (_QWORD)v133);
      v196[0] = v140;
      v196[1] = v144;
      v197.m128i_i64[0] = (__int64)v140 + v165;
    }
    else
    {
      *(_QWORD *)v196[1] = v19;
      v21->m128i_i64[1] = 0;
      v196[1] = (char *)v196[1] + 16;
    }
    v22 = v197.m128i_i64[1];
    v193[0].m128i_i64[0] = v197.m128i_i64[1];
    memset(&v193[0].m128i_u64[1], 0, 32);
    if ( !v199.m128i_i64[0] )
    {
      v24 = v196[1];
      v157 = v196[0];
LABEL_222:
      v194[0].m128i_i64[0] = v22;
      memset(&v194[0].m128i_u64[1], 0, 32);
      goto LABEL_43;
    }
    ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v199.m128i_i64[0])(&v193[0].m128i_u64[1], v198, 2);
    v23 = _mm_load_si128(&v199);
    v22 = v193[0].m128i_i64[0];
    v195[0].m128i_i64[0] = v193[0].m128i_i64[0];
    v24 = v196[1];
    v157 = v196[0];
    *(__m128i *)((char *)&v193[1] + 8) = v23;
    memset(&v195[0].m128i_u64[1], 0, 32);
    if ( !v199.m128i_i64[0] )
      goto LABEL_222;
    v166 = v196[1];
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v199.m128i_i64[0])(
      &v195[0].m128i_u64[1],
      &v193[0].m128i_u64[1],
      2);
    v25 = _mm_loadu_si128((const __m128i *)&v193[1].m128i_u64[1]);
    v24 = v166;
    v194[0].m128i_i64[0] = v195[0].m128i_i64[0];
    *(__m128i *)((char *)&v195[1] + 8) = v25;
    memset(&v194[0].m128i_u64[1], 0, 32);
    if ( v193[1].m128i_i64[1] )
    {
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v193[1].m128i_i64[1])(
        &v194[0].m128i_u64[1],
        &v195[0].m128i_u64[1],
        2);
      v26 = _mm_loadu_si128((const __m128i *)&v195[1].m128i_u64[1]);
      v24 = v166;
      *(__m128i *)((char *)&v194[1] + 8) = v26;
      if ( v26.m128i_i64[0] )
      {
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v26.m128i_i64[0])(
          &v195[0].m128i_u64[1],
          &v195[0].m128i_u64[1],
          3);
        v24 = v166;
      }
    }
LABEL_43:
    sub_5A55C0((__int64)v157, ((v24 - v157) >> 4) - 1, 0, *((_QWORD *)v24 - 2), *((_QWORD *)v24 - 1), (__int64)v194);
    if ( v194[1].m128i_i64[1] )
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v194[1].m128i_i64[1])(
        &v194[0].m128i_u64[1],
        &v194[0].m128i_u64[1],
        3);
    if ( !v193[1].m128i_i64[1] )
      goto LABEL_34;
    ++v19;
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v193[1].m128i_i64[1])(
      &v193[0].m128i_u64[1],
      &v193[0].m128i_u64[1],
      3);
    v20 = a1[1];
  }
  while ( v19 < v20 );
LABEL_47:
  ptr = nullptr;
  v178 = 0;
  if ( v20 )
  {
    v146 = (__m128i *)qvector_reserve(&ptr, 0, v20, 16);
    v147 = *((_QWORD *)&v178 + 1);
    *((_QWORD *)&v178 + 1) = 0;
    v148 = (__m128i *)ptr;
    v149 = v178 - 1;
    if ( (__int64)v178 - 1 >= 0 )
    {
      v150 = v146;
      do
      {
        v151 = _mm_loadu_si128(v148);
        ++v150;
        ++v148;
        v150[-1] = v151;
        v60 = v149-- == 0;
      }
      while ( !v60 );
      v148 = (__m128i *)ptr;
    }
    qfree(v148);
    ptr = v146;
    *((_QWORD *)&v178 + 1) = v147;
  }
LABEL_48:
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      interr(1961);
    goto LABEL_261;
  }
  v27 = (__int64 *)v196[0];
  if ( v196[0] == v196[1] )
    goto LABEL_81;
  while ( 2 )
  {
    *(_QWORD *)&v178 = 0;
    v28 = v27[1];
    v29 = *v27;
    v168 = 32 * v28;
    v170 = 3 * *v27;
    while ( 2 )
    {
      if ( a3 )
        goto LABEL_58;
      v31 = *(_QWORD *)(a1[3 * v29 + 2] + 32 * v28 + 24);
      if ( v31 < 0 )
      {
        if ( !under_debugger )
          interr(2170);
        goto LABEL_261;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v31) != (1 << a1[1]) - 1 )
      {
LABEL_58:
        v33 = *((_QWORD *)&v178 + 1);
        v32 = v178;
        if ( *((_QWORD *)&v178 + 1) < (unsigned __int64)(v178 + 1) )
        {
          v34 = (__m128i *)qvector_reserve(&ptr, 0, v178 + 1, 16);
          v55 = *((void **)&v178 + 1);
          *((_QWORD *)&v178 + 1) = v33;
          v56 = (__m128i *)ptr;
          v57 = v178 - 1;
          if ( (__int64)v178 - 1 >= 0 )
          {
            v58 = v34;
            do
            {
              v59 = _mm_loadu_si128(v56);
              ++v58;
              ++v56;
              v58[-1] = v59;
              v60 = v57-- == 0;
            }
            while ( !v60 );
            v56 = (__m128i *)ptr;
          }
          v160 = v55;
          qfree(v56);
          v32 = v178;
          ptr = v34;
          *((_QWORD *)&v178 + 1) = v160;
        }
        else
        {
          v34 = (__m128i *)ptr;
        }
        m128i_i8 = v34[v32].m128i_i8;
        *(_QWORD *)m128i_i8 = v29;
        *((_QWORD *)m128i_i8 + 1) = v28;
        *(_QWORD *)&v178 = v178 + 1;
      }
      v36 = (const __m128i *)v196[0];
      v37 = *((char **)v196[0] + 1);
      v38 = *(_QWORD *)v196[0];
      memset(&v193[0].m128i_u64[1], 0, 32);
      v158 = v37;
      v193[0].m128i_i64[0] = v197.m128i_i64[1];
      if ( v199.m128i_i64[0] )
      {
        ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v199.m128i_i64[0])(&v193[0].m128i_u64[1], v198, 2);
        v39 = (__m128i *)v196[1];
        v36 = (const __m128i *)v196[0];
        v40 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v199.m128i_i64[0];
        *(__m128i *)((char *)&v193[1] + 8) = _mm_load_si128(&v199);
        if ( (char *)v196[1] - (char *)v196[0] <= 16 )
          goto LABEL_63;
        v51 = v193[0].m128i_i64[0];
        v195[0].m128i_i64[0] = v193[0].m128i_i64[0];
        memset(&v195[0].m128i_u64[1], 0, 32);
        if ( v199.m128i_i64[0] )
        {
          v176 = (__m128i *)v196[1];
          v173 = (const __m128i *)v196[0];
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v199.m128i_i64[0])(
            &v195[0].m128i_u64[1],
            &v193[0].m128i_u64[1],
            2);
          v36 = v173;
          *(__m128i *)((char *)&v195[1] + 8) = _mm_loadu_si128((const __m128i *)&v193[1].m128i_u64[1]);
          v39 = v176;
          v194[0].m128i_i64[0] = v195[0].m128i_i64[0];
          memset(&v194[0].m128i_u64[1], 0, 32);
          if ( v193[1].m128i_i64[1] )
          {
            ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v193[1].m128i_i64[1])(
              &v194[0].m128i_u64[1],
              &v195[0].m128i_u64[1],
              2);
            v61 = _mm_loadu_si128((const __m128i *)&v195[1].m128i_u64[1]);
            v36 = v173;
            v39 = v176;
            *(__m128i *)((char *)&v194[1] + 8) = v61;
            if ( v61.m128i_i64[0] )
            {
              ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v61.m128i_i64[0])(
                &v195[0].m128i_u64[1],
                &v195[0].m128i_u64[1],
                3);
              v39 = v176;
              v36 = v173;
            }
          }
          goto LABEL_101;
        }
LABEL_100:
        v194[0].m128i_i64[0] = v51;
        memset(&v194[0].m128i_u64[1], 0, 32);
LABEL_101:
        v52 = v39[-1].m128i_u64[0];
        v53 = v39 - 1;
        v54 = v39[-1].m128i_u64[1];
        v39[-1] = _mm_loadu_si128(v36);
        v195[0].m128i_i64[0] = v194[0].m128i_i64[0];
        memset(&v195[0].m128i_u64[1], 0, 32);
        if ( v194[1].m128i_i64[1] )
        {
          v175 = v39 - 1;
          v172 = v36;
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v194[1].m128i_i64[1])(
            &v195[0].m128i_u64[1],
            &v194[0].m128i_u64[1],
            2);
          v53 = v175;
          v36 = v172;
          *(__m128i *)((char *)&v195[1] + 8) = _mm_loadu_si128((const __m128i *)&v194[1].m128i_u64[1]);
        }
        sub_5A5710((__int64)v36, 0, v53 - v36, v52, v54, v195[0].m128i_i64);
        if ( v195[1].m128i_i64[1] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v195[1].m128i_i64[1])(
            &v195[0].m128i_u64[1],
            &v195[0].m128i_u64[1],
            3);
        if ( v194[1].m128i_i64[1] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v194[1].m128i_i64[1])(
            &v194[0].m128i_u64[1],
            &v194[0].m128i_u64[1],
            3);
        v40 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v193[1].m128i_i64[1];
LABEL_63:
        if ( v40 )
          v40(&v193[0].m128i_u64[1], &v193[0].m128i_u64[1], 3);
      }
      else
      {
        v39 = (__m128i *)v196[1];
        if ( (char *)v196[1] - (char *)v196[0] > 16 )
        {
          v51 = v197.m128i_i64[1];
          goto LABEL_100;
        }
      }
      v41 = (__m128i *)v196[1];
      v42 = (const __m128i *)((char *)v196[1] - 16);
      v43 = v158 + 1;
      v196[1] = (char *)v196[1] - 16;
      if ( (unsigned __int64)(v158 + 1) >= a1[3 * v38 + 3] )
      {
        v30 = (__int64 *)v196[0];
        if ( v196[0] == v42 )
          break;
        goto LABEL_53;
      }
      if ( v42 == (const __m128i *)v197.m128i_i64[0] )
      {
        v62 = ((char *)v42 - (char *)v196[0]) >> 4;
        if ( v62 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v63 = 1;
        if ( v62 )
          v63 = ((char *)v42 - (char *)v196[0]) >> 4;
        v60 = __CFADD__(v63, v62);
        v64 = v63 + v62;
        if ( v60 )
        {
          v65 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v64 > 0x7FFFFFFFFFFFFFFLL )
            v64 = 0x7FFFFFFFFFFFFFFLL;
          v65 = v64;
        }
        v174 = (char *)v42 - (char *)v196[0];
        v161 = (const __m128i *)v196[0];
        v66 = (__m128i *)operator new(v65 * 16);
        v67 = (__m128i *)v161;
        *(__m128i *)((char *)v66 + v174) = _mm_unpacklo_epi64((__m128i)v38, (__m128i)(unsigned __int64)v43);
        if ( v42 == v161 )
        {
          v71 = (char *)v66;
        }
        else
        {
          v68 = v66;
          v69 = v161;
          do
          {
            v70 = _mm_loadu_si128(v69++);
            ++v68;
            v68[-1] = v70;
          }
          while ( v42 != v69 );
          v71 = &v66->m128i_i8[(char *)v42 - (char *)v161];
        }
        v72 = v71 + 16;
        if ( v161 )
        {
          v162 = (char *)v66;
          operator delete(v67, v197.m128i_i64[0] - (_QWORD)v67);
          v66 = (__m128i *)v162;
        }
        v196[0] = v66;
        v196[1] = v72;
        v197.m128i_i64[0] = (__int64)v66[v65].m128i_i64;
      }
      else
      {
        v41[-1] = _mm_unpacklo_epi64((__m128i)v38, (__m128i)(unsigned __int64)v43);
        v196[1] = (char *)v196[1] + 16;
      }
      v44 = v197.m128i_i64[1];
      v193[0].m128i_i64[0] = v197.m128i_i64[1];
      memset(&v193[0].m128i_u64[1], 0, 32);
      if ( !v199.m128i_i64[0] )
      {
        v45 = v196[1];
        v159 = v196[0];
        goto LABEL_118;
      }
      ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v199.m128i_i64[0])(&v193[0].m128i_u64[1], v198, 2);
      v44 = v193[0].m128i_i64[0];
      v45 = v196[1];
      v46 = _mm_load_si128(&v199);
      v159 = v196[0];
      v195[0].m128i_i64[0] = v193[0].m128i_i64[0];
      *(__m128i *)((char *)&v193[1] + 8) = v46;
      memset(&v195[0].m128i_u64[1], 0, 32);
      if ( !v199.m128i_i64[0] )
      {
LABEL_118:
        v194[0].m128i_i64[0] = v44;
        memset(&v194[0].m128i_u64[1], 0, 32);
        goto LABEL_73;
      }
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v199.m128i_i64[0])(
        &v195[0].m128i_u64[1],
        &v193[0].m128i_u64[1],
        2);
      *(__m128i *)((char *)&v195[1] + 8) = _mm_loadu_si128((const __m128i *)&v193[1].m128i_u64[1]);
      v194[0].m128i_i64[0] = v195[0].m128i_i64[0];
      memset(&v194[0].m128i_u64[1], 0, 32);
      if ( v193[1].m128i_i64[1] )
      {
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v193[1].m128i_i64[1])(
          &v194[0].m128i_u64[1],
          &v195[0].m128i_u64[1],
          2);
        v47 = _mm_loadu_si128((const __m128i *)&v195[1].m128i_u64[1]);
        *(__m128i *)((char *)&v194[1] + 8) = v47;
        if ( v47.m128i_i64[0] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v47.m128i_i64[0])(
            &v195[0].m128i_u64[1],
            &v195[0].m128i_u64[1],
            3);
      }
LABEL_73:
      sub_5A55C0((__int64)v159, ((v45 - v159) >> 4) - 1, 0, *((_QWORD *)v45 - 2), *((_QWORD *)v45 - 1), (__int64)v194);
      if ( v194[1].m128i_i64[1] )
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v194[1].m128i_i64[1])(
          &v194[0].m128i_u64[1],
          &v194[0].m128i_u64[1],
          3);
      if ( v193[1].m128i_i64[1] )
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v193[1].m128i_i64[1])(
          &v193[0].m128i_u64[1],
          &v193[0].m128i_u64[1],
          3);
      v30 = (__int64 *)v196[0];
      if ( v196[0] != v196[1] )
      {
LABEL_53:
        v29 = *v30;
        v28 = v30[1];
        if ( !v192.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__int128 *, __int64, __int64))v192.m128i_i64[1])(
               &v191,
               v190[3 * *v30 + 2] + 32 * v28,
               v190[v170 + 2] + v168) )
        {
          break;
        }
        continue;
      }
      break;
    }
    if ( a3 )
    {
      v114 = a1[12];
      v115 = a1[13];
      *(_DWORD *)dest = 0;
      v116 = a1[11];
      if ( v115 < v114 + 1 )
      {
        v145 = qvector_reserve(a1 + 11, v116, v114 + 1, 4);
        a1[11] = v145;
        v116 = v145;
        v117 = a1[12];
      }
      else
      {
        v117 = v114;
      }
      *(_DWORD *)(v116 + 4 * v117) = 0;
      v118 = v178;
      v119 = (const char *)(4 * v114);
      v120 = ptr;
      ++a1[12];
      v121 = &v120[2 * v118];
      if ( v120 == v121 )
        goto LABEL_80;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v120 + 2] + 32LL * v120[1] + 24) = v114;
        v122 = &v119[a1[11]];
        v123 = 1 << *v120;
        if ( (*(_DWORD *)v122 & v123) != 0 )
          break;
        v120 += 2;
        *(_DWORD *)v122 |= v123;
        if ( v121 == v120 )
          goto LABEL_80;
      }
      switch_dbctx(*(int *)(*a1 + 4LL * *v120 + 16));
      v124 = nullptr;
      v125 = 2LL * *v120;
      v126 = a1[3 * *v120 + 3];
      if ( v126 )
      {
        v164 = (void *)*v120;
        v132 = 32 * v126;
        v124 = (unsigned int *)qalloc_or_throw(32 * v126, v119);
        memcpy(v124, (const void *)a1[(_QWORD)v164 + v125 + 2], v132);
      }
      v127 = (char *)ptr;
      v128 = (char *)ptr + 16 * v178;
      if ( v128 != ptr )
      {
        do
        {
          if ( *(_QWORD *)v127 == *v120 )
          {
            v129 = *((_QWORD *)v127 + 1);
            v130 = v120[1];
            if ( v129 != v130 && *(_QWORD *)&v124[8 * v129 + 6] == v114 )
            {
              memset(dest, 0, sizeof(dest));
              get_ea_diffpos_name(dest, v124[8 * v130 + 2]);
              v131 = *((_QWORD *)v127 + 1);
              v179 = nullptr;
              v180 = 0;
              get_ea_diffpos_name(&v179, v124[8 * v131 + 2]);
              sub_365330();
            }
          }
          v127 += 16;
        }
        while ( v128 != v127 );
      }
      if ( !under_debugger )
        interr(2171);
LABEL_261:
      BUG();
    }
    v48 = v178;
    if ( (unsigned __int64)v178 <= 1 )
      goto LABEL_80;
    v73 = (char *)ptr;
    *(_DWORD *)&dest[8] = 0;
    v182 = &dest[8];
    *(_QWORD *)&dest[16] = 0;
    v183 = &dest[8];
    v184 = 0;
    v163 = (char *)ptr + 16 * v178;
    if ( v163 == ptr )
      goto LABEL_170;
    v74 = nullptr;
    while ( 2 )
    {
      v75 = *(_QWORD *)v73;
      v76 = &dest[8];
      v77 = *(_QWORD *)(a1[3 * *(_QWORD *)v73 + 2] + 32LL * *((_QWORD *)v73 + 1) + 24);
      if ( !v74 )
        goto LABEL_142;
      do
      {
        while ( 1 )
        {
          v78 = v74[2];
          v79 = v74[3];
          if ( v74[4] < v77 )
            break;
          v76 = v74;
          v74 = (_QWORD *)v74[2];
          if ( !v78 )
            goto LABEL_140;
        }
        v74 = (_QWORD *)v74[3];
      }
      while ( v79 );
LABEL_140:
      if ( v76 == (_QWORD *)&dest[8] || v77 < v76[4] )
      {
LABEL_142:
        v80 = operator new(0x30u);
        *(_QWORD *)(v80 + 32) = v77;
        v81 = (_QWORD *)v80;
        *(_DWORD *)(v80 + 40) = 0;
        if ( v76 == (_QWORD *)&dest[8] )
        {
          if ( !v184 )
            goto LABEL_157;
          v83 = v183;
          v76 = nullptr;
          if ( *((_QWORD *)v183 + 4) >= v77 )
            goto LABEL_157;
LABEL_148:
          if ( v83 )
            goto LABEL_149;
        }
        else
        {
          v82 = v76[4];
          if ( v77 < v82 )
          {
            v83 = v76;
            if ( v182 == (_BYTE *)v76 )
              goto LABEL_148;
            v84 = std::_Rb_tree_decrement();
            v83 = (_BYTE *)v84;
            if ( *(_QWORD *)(v84 + 32) < v77 )
            {
              if ( *(_QWORD *)(v84 + 24) )
                v83 = v76;
              else
                v76 = nullptr;
              goto LABEL_148;
            }
LABEL_157:
            v76 = sub_59C280((__int64)dest, v77);
            goto LABEL_148;
          }
          if ( v82 < v77 )
          {
            if ( v183 != (_BYTE *)v76 )
            {
              v85 = std::_Rb_tree_increment();
              v83 = (_BYTE *)v85;
              if ( v77 >= *(_QWORD *)(v85 + 32) )
                goto LABEL_157;
              if ( v76[3] )
              {
                v76 = (_QWORD *)v85;
                goto LABEL_148;
              }
            }
            if ( v76 )
            {
LABEL_149:
              v76 = v81;
              std::_Rb_tree_insert_and_rebalance();
              ++v184;
              goto LABEL_150;
            }
          }
        }
        if ( v81 )
          operator delete(v81, 0x30u);
LABEL_150:
        v75 = *(_QWORD *)v73;
      }
      v73 += 16;
      *((_DWORD *)v76 + 10) |= 1 << v75;
      if ( v163 != v73 )
      {
        v74 = *(_QWORD **)&dest[16];
        continue;
      }
      break;
    }
    v107 = (__int64)v182;
    while ( (_BYTE *)v107 != &dest[8] )
    {
      v108 = *(_DWORD *)(v107 + 40);
      v109 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v107 + 32));
      v107 = std::_Rb_tree_increment();
      if ( v109 != v108 )
      {
        v110 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v110, 0x30u);
        --v184;
      }
    }
    v48 = v178;
    v73 = (char *)ptr;
    v89 = (char *)ptr;
    v90 = (char *)ptr + 16 * v178;
    if ( v90 != ptr )
    {
      do
      {
        v86 = v89 + 16;
        v111 = *(_QWORD *)(a1[3 * *(_QWORD *)v89 + 2] + 32LL * *((_QWORD *)v89 + 1) + 24);
        v112 = *(_QWORD **)&dest[16];
        if ( !*(_QWORD *)&dest[16] )
          goto LABEL_165;
        v113 = &dest[8];
        do
        {
          if ( v112[4] >= v111 )
          {
            v113 = v112;
            v112 = (_QWORD *)v112[2];
          }
          else
          {
            v112 = (_QWORD *)v112[3];
          }
        }
        while ( v112 );
        v86 = v89 + 16;
        if ( v113 != &dest[8] && v111 >= *((_QWORD *)v113 + 4) )
        {
          v48 = v178;
          v89 += 16;
        }
        else
        {
LABEL_165:
          v87 = v90 - v89;
          if ( (v87 >> 4) - 2 >= 0 )
          {
            v88 = (char *)memmove(v89, v86, v87 - 16);
            v73 = (char *)ptr;
            v89 = v88;
          }
          v48 = v178 - 1;
          *(_QWORD *)&v178 = v178 - 1;
        }
        v90 = &v73[16 * v48];
      }
      while ( v89 != v90 );
    }
    if ( v48 )
    {
      while ( 1 )
      {
LABEL_170:
        v91 = 16 * v48;
        v92 = *(_QWORD *)v73;
        v93 = *((_QWORD *)v73 + 1);
        v94 = (__int64 *)v73;
        if ( (v91 >> 4) - 2 >= 0 )
        {
          memmove(v73, v73 + 16, v91 - 16);
          v73 = (char *)ptr;
          v94 = (__int64 *)ptr;
        }
        v95 = a1[1];
        v48 = v178 - 1;
        v96 = *(_QWORD *)(a1[3 * v92 + 2] + 32 * v93 + 24);
        *(_QWORD *)&v178 = v178 - 1;
        if ( v95 )
        {
          v97 = 0;
          v98 = *(_DWORD *)(a1[11] + 4 * v96);
          do
          {
            v99 = -1;
            if ( (v98 & (1 << v97)) != 0 )
              v99 = v96;
            v195[0].m128i_i64[v97++] = v99;
          }
          while ( v97 != v95 );
        }
        if ( 16 * v48 )
          break;
LABEL_188:
        if ( !v48 )
          goto LABEL_189;
      }
      while ( 1 )
      {
        v101 = *v94;
        v102 = a1[3 * *v94 + 2] + 32 * v94[1];
        v103 = *(_QWORD *)(v102 + 24);
        if ( v195[0].m128i_i64[*v94] == -1 )
        {
          v104 = a1[11];
          v195[0].m128i_i64[v101] = v103;
          *(_DWORD *)(v104 + 4 * v103) &= ~(1 << v101);
          if ( !*(_DWORD *)(a1[11] + 4 * v103) )
            ++a1[14];
          *(_QWORD *)(v102 + 24) = v96;
          *(_DWORD *)(4 * v96 + a1[11]) |= 1 << *v94;
          v105 = *(_QWORD *)(v102 + 24);
          v100 = (char *)(v94 + 2);
          v73 = (char *)ptr;
          v48 = v178;
          if ( v96 != v105 )
          {
LABEL_180:
            v94 = (__int64 *)v100;
            if ( v100 == &v73[16 * v48] )
              goto LABEL_188;
            continue;
          }
        }
        else
        {
          v48 = v178;
          v100 = (char *)(v94 + 2);
          if ( v96 != v103 )
            goto LABEL_180;
        }
        if ( ((&v73[16 * v48] - (char *)v94) >> 4) - 2 >= 0 )
        {
          v106 = (__int64 *)memmove(v94, v100, &v73[16 * v48] - (char *)v94 - 16);
          v73 = (char *)ptr;
          v94 = v106;
          v48 = v178;
        }
        *(_QWORD *)&v178 = --v48;
        if ( v94 == (__int64 *)&v73[16 * v48] )
          goto LABEL_188;
      }
    }
LABEL_189:
    sub_59C850(*(_QWORD **)&dest[16]);
LABEL_80:
    v27 = (__int64 *)v196[0];
    if ( v196[1] != v196[0] )
      continue;
    break;
  }
LABEL_81:
  if ( ptr )
  {
    *(_QWORD *)&v178 = 0;
    qfree(ptr);
  }
  if ( v199.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v199.m128i_i64[0])(v198, v198, 3);
  if ( v196[0] )
    operator delete(v196[0], v197.m128i_i64[0] - (unsigned __int64)v196[0]);
  if ( v192.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v192.m128i_i64[0])(&v191, &v191, 3);
  if ( v189.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v189.m128i_i64[0])(&v188, &v188, 3);
  if ( v186.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v186.m128i_i64[0])(&v185, &v185, 3);
  return v200 - __readfsqword(0x28u);
}

