unsigned __int64 __fastcall sub_5C1AA0(_QWORD *a1, const __m128i *a2, char a3)
{
  void (__fastcall *v4)(__int128 *, const __m128i *, __int64); // rax
  __m128i v5; // xmm0
  void (__fastcall *v6)(__int128 *, const __m128i *, __int64); // rax
  __m128i v7; // xmm0
  void (__fastcall *v8)(__int128 *, const __m128i *, __int64); // rax
  unsigned __int64 v9; // r12
  __m128i **v10; // r13
  __int64 v11; // r8
  __m128i *v12; // rdx
  __m128i *v13; // r14
  __m128i si128; // xmm0
  void (__fastcall *v15)(__m128i *, __m128i *, __int64); // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rdx
  __m128i *v20; // rbp
  __int64 v21; // rax
  __m128i v22; // xmm0
  _BYTE *v23; // r8
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 *v26; // rax
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // r14
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r15
  __m128i *v34; // r14
  char *m128i_i8; // rax
  const __m128i *v36; // r10
  size_t v37; // rax
  unsigned __int64 v38; // r12
  __m128i *v39; // rcx
  void (__fastcall *v40)(unsigned __int64 *, unsigned __int64 *, __int64); // rax
  __m128i *v41; // rax
  const __m128i *v42; // r14
  size_t v43; // r15
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
  size_t v55; // rcx
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
  __int64 v77; // rsi
  unsigned __int64 v78; // rbp
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdx
  _QWORD *v82; // r12
  unsigned __int64 v83; // rcx
  _BYTE *v84; // rdx
  __int64 v85; // rax
  _BOOL8 v86; // rdi
  __int64 v87; // rax
  const void *v88; // rsi
  __int64 v89; // rcx
  char *v90; // rax
  char *v91; // rdi
  char *v92; // rcx
  __int64 v93; // rax
  __int64 v94; // r13
  __int64 v95; // rbp
  __int64 *v96; // rdi
  __int64 v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // r13
  __int64 v100; // rcx
  int v101; // r10d
  __int64 v102; // rdx
  bool v103; // zf
  char *v104; // rsi
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rsi
  __int64 *v109; // rax
  __int64 v110; // r14
  __int64 v111; // rdx
  __int64 v112; // rbp
  int v113; // r15d
  int v114; // r12d
  void *v115; // rax
  unsigned __int64 v116; // r8
  _QWORD *v117; // rax
  _BYTE *v118; // r9
  __int64 v119; // r13
  unsigned __int64 v120; // rax
  __int64 v121; // rsi
  __int64 v122; // rax
  __int64 v123; // rdi
  __int64 *v124; // r12
  __int64 *v125; // rdi
  _DWORD *v126; // r8
  int v127; // eax
  __int64 v128; // r15
  void *v129; // rbp
  __int64 v130; // r14
  __int64 v131; // rax
  char *v132; // rbx
  char *v133; // rdx
  __int64 v134; // rax
  __int64 v135; // r14
  __int64 v136; // rbx
  __m128i *v137; // r13
  signed __int64 v138; // r15
  signed __int64 v139; // rax
  signed __int64 v140; // rdx
  unsigned __int64 v141; // rax
  __int64 v142; // rax
  unsigned __int64 *v143; // r15
  void *v144; // r14
  const __m128i *v145; // rcx
  __int64 v146; // rdx
  __m128i v147; // xmm0
  void *v148; // rbp
  __int64 v149; // rax
  __m128i *v150; // r12
  __int64 v151; // r13
  __m128i *v152; // rdi
  __int64 v153; // rax
  __m128i *v154; // rdx
  __m128i v155; // xmm0
  __int64 v156; // rcx
  __int128 *v157; // rdi
  void **v158; // rdi
  __int64 i; // rcx
  __m128i *n; // [rsp+0h] [rbp-258h]
  _BYTE *na; // [rsp+0h] [rbp-258h]
  size_t nb; // [rsp+0h] [rbp-258h]
  _BYTE *nc; // [rsp+0h] [rbp-258h]
  size_t ng; // [rsp+0h] [rbp-258h]
  const __m128i *nd; // [rsp+0h] [rbp-258h]
  size_t nh; // [rsp+0h] [rbp-258h]
  char *ne; // [rsp+0h] [rbp-258h]
  __int64 ni; // [rsp+0h] [rbp-258h]
  size_t nf; // [rsp+0h] [rbp-258h]
  _BYTE *v170; // [rsp+8h] [rbp-250h]
  __int64 v172; // [rsp+18h] [rbp-240h]
  unsigned __int64 v173; // [rsp+18h] [rbp-240h]
  __int64 v174; // [rsp+20h] [rbp-238h]
  __int64 v175; // [rsp+20h] [rbp-238h]
  const __m128i *v177; // [rsp+28h] [rbp-230h]
  const __m128i *v178; // [rsp+28h] [rbp-230h]
  signed __int64 v179; // [rsp+28h] [rbp-230h]
  __m128i *v180; // [rsp+30h] [rbp-228h]
  __m128i *v181; // [rsp+30h] [rbp-228h]
  void *ptr; // [rsp+50h] [rbp-208h] BYREF
  __int128 v183; // [rsp+58h] [rbp-200h]
  void *v184; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v185; // [rsp+78h] [rbp-1E0h]
  _BYTE dest[24]; // [rsp+90h] [rbp-1C8h] BYREF
  _BYTE *v187; // [rsp+A8h] [rbp-1B0h]
  _BYTE *v188; // [rsp+B0h] [rbp-1A8h]
  __int64 v189; // [rsp+B8h] [rbp-1A0h]
  __int128 v190; // [rsp+C0h] [rbp-198h] BYREF
  __m128i v191; // [rsp+D0h] [rbp-188h] BYREF
  _QWORD *v192; // [rsp+E0h] [rbp-178h] BYREF
  __int128 v193; // [rsp+E8h] [rbp-170h] BYREF
  __m128i v194; // [rsp+F8h] [rbp-160h]
  _QWORD *v195; // [rsp+110h] [rbp-148h]
  __int128 v196; // [rsp+118h] [rbp-140h] BYREF
  __m128i v197; // [rsp+128h] [rbp-130h]
  __m128i v198[3]; // [rsp+140h] [rbp-118h] BYREF
  __m128i v199[3]; // [rsp+170h] [rbp-E8h] BYREF
  __m128i v200[3]; // [rsp+1A0h] [rbp-B8h] BYREF
  void *v201[2]; // [rsp+1D0h] [rbp-88h] BYREF
  __m128i v202; // [rsp+1E0h] [rbp-78h] BYREF
  _BYTE v203[16]; // [rsp+1F0h] [rbp-68h] BYREF
  __m128i v204; // [rsp+200h] [rbp-58h] BYREF
  unsigned __int64 v205; // [rsp+218h] [rbp-40h]

  v205 = __readfsqword(0x28u);
  v4 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
  v190 = 0;
  v191 = 0u;
  if ( v4 )
  {
    v4(&v190, a2, 2);
    v5 = _mm_loadu_si128(a2 + 1);
    v6 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
    v192 = a1;
    v194 = 0u;
    v191 = v5;
    v193 = 0;
    if ( v6 )
    {
      v6(&v193, a2, 2);
      v7 = _mm_loadu_si128(a2 + 1);
      v8 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
      v195 = a1;
      v197 = 0u;
      v194 = v7;
      v196 = 0;
      if ( v8 )
      {
        v8(&v196, a2, 2);
        v197 = _mm_loadu_si128(a2 + 1);
      }
    }
    else
    {
      v156 = 6;
      v195 = a1;
      v157 = &v196;
      while ( v156 )
      {
        *(_DWORD *)v157 = 0;
        v157 = (__int128 *)((char *)v157 + 4);
        --v156;
      }
      v197.m128i_i64[1] = 0;
    }
  }
  else
  {
    v192 = a1;
    v194 = 0u;
    v195 = a1;
    v197 = 0u;
    v193 = 0;
    v196 = 0;
  }
  v9 = 0;
  v10 = (__m128i **)(a1 + 2);
  if ( a1[1] )
  {
    while ( 1 )
    {
      switch_dbctx(*(int *)(*a1 + 4 * v9 + 16));
      memset(v198, 0, 32);
      if ( !v191.m128i_i64[0] )
        break;
      ((void (__fastcall *)(__m128i *, __int128 *, __int64))v191.m128i_i64[0])(v198, &v190, 2);
      v12 = v10[1];
      v13 = *v10;
      v198[1] = _mm_load_si128(&v191);
      v174 = 40LL * (_QWORD)v12;
      n = (__m128i *)((char *)v13 + 40 * (_QWORD)v12);
      memset(v199, 0, 32);
      if ( !v191.m128i_i64[0] )
        goto LABEL_95;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v191.m128i_i64[0])(v199, v198, 2);
      si128 = _mm_load_si128(&v198[1]);
      v202 = 0u;
      v199[1] = si128;
      *(_OWORD *)v201 = 0;
      if ( !v198[1].m128i_i64[0] )
        goto LABEL_95;
      ((void (__fastcall *)(void **, __m128i *, __int64))v198[1].m128i_i64[0])(v201, v199, 2);
      v202 = _mm_load_si128(&v199[1]);
      memset(v200, 0, 32);
      if ( !v199[1].m128i_i64[0] )
        goto LABEL_96;
      ((void (__fastcall *)(__m128i *, void **, __int64))v199[1].m128i_i64[0])(v200, v201, 2);
      v200[1] = _mm_load_si128(&v202);
      if ( v202.m128i_i64[0] )
      {
        ((void (__fastcall *)(void **, void **, __int64))v202.m128i_i64[0])(v201, v201, 3);
        v15 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v200[1].m128i_i64[0];
        if ( n != v13 )
        {
          v202 = 0u;
          *(_OWORD *)v201 = 0;
          if ( v200[1].m128i_i64[0] )
          {
            ((void (__fastcall *)(void **, __m128i *, __int64))v200[1].m128i_i64[0])(v201, v200, 2);
            v202 = _mm_load_si128(&v200[1]);
          }
LABEL_14:
          v16 = -2;
          v17 = 0xCCCCCCCCCCCCCCCDLL * (v174 >> 3);
          if ( v17 )
          {
            _BitScanReverse64(&v17, v17);
            v16 = 2LL * (int)v17;
          }
          sub_5C1220((__int64)v13, n, v16, (const __m128i *)v201, v11);
          if ( v202.m128i_i64[0] )
            ((void (__fastcall *)(void **, void **, __int64))v202.m128i_i64[0])(v201, v201, 3);
          v202 = 0u;
          *(_OWORD *)v201 = 0;
          if ( v200[1].m128i_i64[0] )
          {
            ((void (__fastcall *)(void **, __m128i *, __int64))v200[1].m128i_i64[0])(v201, v200, 2);
            v202 = _mm_load_si128(&v200[1]);
          }
          sub_5C08E0(v13, n, (const __m128i *)v201);
          if ( v202.m128i_i64[0] )
            ((void (__fastcall *)(void **, void **, __int64))v202.m128i_i64[0])(v201, v201, 3);
          v15 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v200[1].m128i_i64[0];
        }
        if ( v15 )
          v15(v200, v200, 3);
        goto LABEL_25;
      }
      if ( n != v13 )
      {
        v158 = v201;
        for ( i = 6; i; --i )
        {
          *(_DWORD *)v158 = 0;
          v158 = (void **)((char *)v158 + 4);
        }
        v202.m128i_i64[1] = 0;
        goto LABEL_14;
      }
LABEL_25:
      if ( v199[1].m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v199[1].m128i_i64[0])(v199, v199, 3);
      if ( v198[1].m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v198[1].m128i_i64[0])(v198, v198, 3);
      ++v9;
      v10 += 3;
      if ( v9 >= a1[1] )
        goto LABEL_30;
    }
    v50 = v10[1];
    v13 = *v10;
    memset(v199, 0, 32);
    v174 = 40LL * (_QWORD)v50;
    n = (__m128i *)((char *)v13 + 40 * (_QWORD)v50);
LABEL_95:
    memset(v200, 0, 32);
LABEL_96:
    if ( n != v13 )
    {
      v202 = 0u;
      *(_OWORD *)v201 = 0;
      goto LABEL_14;
    }
    goto LABEL_25;
  }
LABEL_30:
  memset(dest, 0, sizeof(dest));
  sub_5C0170((__int64)v201, (__int64)&v192, (const __m128i *)dest);
  if ( *(_QWORD *)dest )
    operator delete(*(void **)dest, *(_QWORD *)&dest[16] - *(_QWORD *)dest);
  if ( !a1[1] )
  {
    ptr = nullptr;
    v183 = 0;
    goto LABEL_48;
  }
  v18 = 0;
  do
  {
    while ( !a1[3 * v18 + 3] )
    {
LABEL_34:
      v19 = a1[1];
      if ( ++v18 >= v19 )
        goto LABEL_47;
    }
    v20 = (__m128i *)v201[1];
    if ( v201[1] == (void *)v202.m128i_i64[0] )
    {
      v137 = (__m128i *)v201[0];
      v138 = (char *)v201[1] - (char *)v201[0];
      v139 = ((char *)v201[1] - (char *)v201[0]) >> 4;
      if ( v139 == 0x7FFFFFFFFFFFFFFLL )
        std::__throw_length_error("vector::_M_realloc_append");
      v140 = 1;
      if ( v139 )
        v140 = ((char *)v201[1] - (char *)v201[0]) >> 4;
      v60 = __CFADD__(v140, v139);
      v141 = v140 + v139;
      if ( v60 )
      {
        nf = 0x7FFFFFFFFFFFFFF0LL;
        v142 = operator new(0x7FFFFFFFFFFFFFF0uLL);
      }
      else
      {
        if ( v141 > 0x7FFFFFFFFFFFFFFLL )
          v141 = 0x7FFFFFFFFFFFFFFLL;
        nf = 16 * v141;
        v142 = operator new(16 * v141);
      }
      v143 = (unsigned __int64 *)(v142 + v138);
      v144 = (void *)v142;
      *v143 = v18;
      v143[1] = 0;
      if ( v20 != v137 )
      {
        v145 = v137;
        v146 = v142 + (char *)v20 - (char *)v137;
        do
        {
          v147 = _mm_loadu_si128(v145);
          v142 += 16;
          ++v145;
          *(__m128i *)(v142 - 16) = v147;
        }
        while ( v142 != v146 );
      }
      v148 = (void *)(v142 + 16);
      if ( v137 )
        operator delete(v137, v202.m128i_i64[0] - (_QWORD)v137);
      v201[0] = v144;
      v201[1] = v148;
      v202.m128i_i64[0] = (__int64)v144 + nf;
    }
    else
    {
      *(_QWORD *)v201[1] = v18;
      v20->m128i_i64[1] = 0;
      v201[1] = (char *)v201[1] + 16;
    }
    v21 = v202.m128i_i64[1];
    v198[0].m128i_i64[0] = v202.m128i_i64[1];
    memset(&v198[0].m128i_u64[1], 0, 32);
    if ( !v204.m128i_i64[0] )
    {
      v23 = v201[1];
      na = v201[0];
LABEL_226:
      v199[0].m128i_i64[0] = v21;
      memset(&v199[0].m128i_u64[1], 0, 32);
      goto LABEL_43;
    }
    ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v204.m128i_i64[0])(&v198[0].m128i_u64[1], v203, 2);
    v22 = _mm_load_si128(&v204);
    v21 = v198[0].m128i_i64[0];
    v200[0].m128i_i64[0] = v198[0].m128i_i64[0];
    v23 = v201[1];
    na = v201[0];
    *(__m128i *)((char *)&v198[1] + 8) = v22;
    memset(&v200[0].m128i_u64[1], 0, 32);
    if ( !v204.m128i_i64[0] )
      goto LABEL_226;
    v170 = v201[1];
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v204.m128i_i64[0])(
      &v200[0].m128i_u64[1],
      &v198[0].m128i_u64[1],
      2);
    v24 = _mm_loadu_si128((const __m128i *)&v198[1].m128i_u64[1]);
    v23 = v170;
    v199[0].m128i_i64[0] = v200[0].m128i_i64[0];
    *(__m128i *)((char *)&v200[1] + 8) = v24;
    memset(&v199[0].m128i_u64[1], 0, 32);
    if ( v198[1].m128i_i64[1] )
    {
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v198[1].m128i_i64[1])(
        &v199[0].m128i_u64[1],
        &v200[0].m128i_u64[1],
        2);
      v25 = _mm_loadu_si128((const __m128i *)&v200[1].m128i_u64[1]);
      v23 = v170;
      *(__m128i *)((char *)&v199[1] + 8) = v25;
      if ( v25.m128i_i64[0] )
      {
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v25.m128i_i64[0])(
          &v200[0].m128i_u64[1],
          &v200[0].m128i_u64[1],
          3);
        v23 = v170;
      }
    }
LABEL_43:
    sub_5BFD60((__int64)na, ((v23 - na) >> 4) - 1, 0, *((_QWORD *)v23 - 2), *((_QWORD *)v23 - 1), (__int64)v199);
    if ( v199[1].m128i_i64[1] )
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v199[1].m128i_i64[1])(
        &v199[0].m128i_u64[1],
        &v199[0].m128i_u64[1],
        3);
    if ( !v198[1].m128i_i64[1] )
      goto LABEL_34;
    ++v18;
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v198[1].m128i_i64[1])(
      &v198[0].m128i_u64[1],
      &v198[0].m128i_u64[1],
      3);
    v19 = a1[1];
  }
  while ( v18 < v19 );
LABEL_47:
  ptr = nullptr;
  v183 = 0;
  if ( v19 )
  {
    v150 = (__m128i *)qvector_reserve(&ptr, 0, v19, 16);
    v151 = *((_QWORD *)&v183 + 1);
    *((_QWORD *)&v183 + 1) = 0;
    v152 = (__m128i *)ptr;
    v153 = v183 - 1;
    if ( (__int64)v183 - 1 >= 0 )
    {
      v154 = v150;
      do
      {
        v155 = _mm_loadu_si128(v152);
        ++v154;
        ++v152;
        v154[-1] = v155;
        v60 = v153-- == 0;
      }
      while ( !v60 );
      v152 = (__m128i *)ptr;
    }
    qfree(v152);
    ptr = v150;
    *((_QWORD *)&v183 + 1) = v151;
  }
LABEL_48:
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      interr(1961);
    goto LABEL_265;
  }
  v26 = (__int64 *)v201[0];
  if ( v201[0] == v201[1] )
    goto LABEL_81;
  while ( 2 )
  {
    *(_QWORD *)&v183 = 0;
    v27 = v26[1];
    v28 = *v26;
    v29 = 4 * v27;
    v172 = 40 * v27;
    v175 = 3 * *v26;
    while ( 2 )
    {
      if ( a3 )
        goto LABEL_58;
      v31 = *(_QWORD *)(a1[3 * v28 + 2] + 8 * (v27 + v29) + 32);
      if ( v31 < 0 )
      {
        if ( !under_debugger )
          interr(2170);
        goto LABEL_265;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v31) != (1 << a1[1]) - 1 )
      {
LABEL_58:
        v33 = *((_QWORD *)&v183 + 1);
        v32 = v183;
        if ( *((_QWORD *)&v183 + 1) < (unsigned __int64)(v183 + 1) )
        {
          v34 = (__m128i *)qvector_reserve(&ptr, 0, v183 + 1, 16);
          v55 = *((_QWORD *)&v183 + 1);
          *((_QWORD *)&v183 + 1) = v33;
          v56 = (__m128i *)ptr;
          v57 = v183 - 1;
          if ( (__int64)v183 - 1 >= 0 )
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
          ng = v55;
          qfree(v56);
          v32 = v183;
          ptr = v34;
          *((_QWORD *)&v183 + 1) = ng;
        }
        else
        {
          v34 = (__m128i *)ptr;
        }
        m128i_i8 = v34[v32].m128i_i8;
        *(_QWORD *)m128i_i8 = v28;
        *((_QWORD *)m128i_i8 + 1) = v27;
        *(_QWORD *)&v183 = v183 + 1;
      }
      v36 = (const __m128i *)v201[0];
      v37 = *((_QWORD *)v201[0] + 1);
      v38 = *(_QWORD *)v201[0];
      memset(&v198[0].m128i_u64[1], 0, 32);
      nb = v37;
      v198[0].m128i_i64[0] = v202.m128i_i64[1];
      if ( v204.m128i_i64[0] )
      {
        ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v204.m128i_i64[0])(&v198[0].m128i_u64[1], v203, 2);
        v39 = (__m128i *)v201[1];
        v36 = (const __m128i *)v201[0];
        v40 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v204.m128i_i64[0];
        *(__m128i *)((char *)&v198[1] + 8) = _mm_load_si128(&v204);
        if ( (char *)v201[1] - (char *)v201[0] <= 16 )
          goto LABEL_63;
        v51 = v198[0].m128i_i64[0];
        v200[0].m128i_i64[0] = v198[0].m128i_i64[0];
        memset(&v200[0].m128i_u64[1], 0, 32);
        if ( v204.m128i_i64[0] )
        {
          v181 = (__m128i *)v201[1];
          v178 = (const __m128i *)v201[0];
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v204.m128i_i64[0])(
            &v200[0].m128i_u64[1],
            &v198[0].m128i_u64[1],
            2);
          v36 = v178;
          *(__m128i *)((char *)&v200[1] + 8) = _mm_loadu_si128((const __m128i *)&v198[1].m128i_u64[1]);
          v39 = v181;
          v199[0].m128i_i64[0] = v200[0].m128i_i64[0];
          memset(&v199[0].m128i_u64[1], 0, 32);
          if ( v198[1].m128i_i64[1] )
          {
            ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v198[1].m128i_i64[1])(
              &v199[0].m128i_u64[1],
              &v200[0].m128i_u64[1],
              2);
            v61 = _mm_loadu_si128((const __m128i *)&v200[1].m128i_u64[1]);
            v36 = v178;
            v39 = v181;
            *(__m128i *)((char *)&v199[1] + 8) = v61;
            if ( v61.m128i_i64[0] )
            {
              ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v61.m128i_i64[0])(
                &v200[0].m128i_u64[1],
                &v200[0].m128i_u64[1],
                3);
              v39 = v181;
              v36 = v178;
            }
          }
          goto LABEL_101;
        }
LABEL_100:
        v199[0].m128i_i64[0] = v51;
        memset(&v199[0].m128i_u64[1], 0, 32);
LABEL_101:
        v52 = v39[-1].m128i_u64[0];
        v53 = v39 - 1;
        v54 = v39[-1].m128i_u64[1];
        v39[-1] = _mm_loadu_si128(v36);
        v200[0].m128i_i64[0] = v199[0].m128i_i64[0];
        memset(&v200[0].m128i_u64[1], 0, 32);
        if ( v199[1].m128i_i64[1] )
        {
          v180 = v39 - 1;
          v177 = v36;
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v199[1].m128i_i64[1])(
            &v200[0].m128i_u64[1],
            &v199[0].m128i_u64[1],
            2);
          v53 = v180;
          v36 = v177;
          *(__m128i *)((char *)&v200[1] + 8) = _mm_loadu_si128((const __m128i *)&v199[1].m128i_u64[1]);
        }
        sub_5BFEB0((__int64)v36, 0, v53 - v36, v52, v54, v200[0].m128i_i64);
        if ( v200[1].m128i_i64[1] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v200[1].m128i_i64[1])(
            &v200[0].m128i_u64[1],
            &v200[0].m128i_u64[1],
            3);
        if ( v199[1].m128i_i64[1] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v199[1].m128i_i64[1])(
            &v199[0].m128i_u64[1],
            &v199[0].m128i_u64[1],
            3);
        v40 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v198[1].m128i_i64[1];
LABEL_63:
        if ( v40 )
          v40(&v198[0].m128i_u64[1], &v198[0].m128i_u64[1], 3);
      }
      else
      {
        v39 = (__m128i *)v201[1];
        if ( (char *)v201[1] - (char *)v201[0] > 16 )
        {
          v51 = v202.m128i_i64[1];
          goto LABEL_100;
        }
      }
      v41 = (__m128i *)v201[1];
      v42 = (const __m128i *)((char *)v201[1] - 16);
      v43 = nb + 1;
      v201[1] = (char *)v201[1] - 16;
      if ( nb + 1 >= a1[3 * v38 + 3] )
      {
        v30 = (__int64 *)v201[0];
        if ( v201[0] == v42 )
          break;
        goto LABEL_53;
      }
      if ( v42 == (const __m128i *)v202.m128i_i64[0] )
      {
        v62 = ((char *)v42 - (char *)v201[0]) >> 4;
        if ( v62 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v63 = 1;
        if ( v62 )
          v63 = ((char *)v42 - (char *)v201[0]) >> 4;
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
        v179 = (char *)v42 - (char *)v201[0];
        nd = (const __m128i *)v201[0];
        v66 = (__m128i *)operator new(v65 * 16);
        v67 = (__m128i *)nd;
        *(__m128i *)((char *)v66 + v179) = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v43);
        if ( v42 == nd )
        {
          v71 = (char *)v66;
        }
        else
        {
          v68 = v66;
          v69 = nd;
          do
          {
            v70 = _mm_loadu_si128(v69++);
            ++v68;
            v68[-1] = v70;
          }
          while ( v42 != v69 );
          v71 = &v66->m128i_i8[(char *)v42 - (char *)nd];
        }
        v72 = v71 + 16;
        if ( nd )
        {
          nh = (size_t)v66;
          operator delete(v67, v202.m128i_i64[0] - (_QWORD)v67);
          v66 = (__m128i *)nh;
        }
        v201[0] = v66;
        v201[1] = v72;
        v202.m128i_i64[0] = (__int64)v66[v65].m128i_i64;
      }
      else
      {
        v41[-1] = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v43);
        v201[1] = (char *)v201[1] + 16;
      }
      v44 = v202.m128i_i64[1];
      v198[0].m128i_i64[0] = v202.m128i_i64[1];
      memset(&v198[0].m128i_u64[1], 0, 32);
      if ( !v204.m128i_i64[0] )
      {
        v45 = v201[1];
        nc = v201[0];
        goto LABEL_118;
      }
      ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v204.m128i_i64[0])(&v198[0].m128i_u64[1], v203, 2);
      v44 = v198[0].m128i_i64[0];
      v45 = v201[1];
      v46 = _mm_load_si128(&v204);
      nc = v201[0];
      v200[0].m128i_i64[0] = v198[0].m128i_i64[0];
      *(__m128i *)((char *)&v198[1] + 8) = v46;
      memset(&v200[0].m128i_u64[1], 0, 32);
      if ( !v204.m128i_i64[0] )
      {
LABEL_118:
        v199[0].m128i_i64[0] = v44;
        memset(&v199[0].m128i_u64[1], 0, 32);
        goto LABEL_73;
      }
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v204.m128i_i64[0])(
        &v200[0].m128i_u64[1],
        &v198[0].m128i_u64[1],
        2);
      *(__m128i *)((char *)&v200[1] + 8) = _mm_loadu_si128((const __m128i *)&v198[1].m128i_u64[1]);
      v199[0].m128i_i64[0] = v200[0].m128i_i64[0];
      memset(&v199[0].m128i_u64[1], 0, 32);
      if ( v198[1].m128i_i64[1] )
      {
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v198[1].m128i_i64[1])(
          &v199[0].m128i_u64[1],
          &v200[0].m128i_u64[1],
          2);
        v47 = _mm_loadu_si128((const __m128i *)&v200[1].m128i_u64[1]);
        *(__m128i *)((char *)&v199[1] + 8) = v47;
        if ( v47.m128i_i64[0] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v47.m128i_i64[0])(
            &v200[0].m128i_u64[1],
            &v200[0].m128i_u64[1],
            3);
      }
LABEL_73:
      sub_5BFD60((__int64)nc, ((v45 - nc) >> 4) - 1, 0, *((_QWORD *)v45 - 2), *((_QWORD *)v45 - 1), (__int64)v199);
      if ( v199[1].m128i_i64[1] )
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v199[1].m128i_i64[1])(
          &v199[0].m128i_u64[1],
          &v199[0].m128i_u64[1],
          3);
      if ( v198[1].m128i_i64[1] )
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v198[1].m128i_i64[1])(
          &v198[0].m128i_u64[1],
          &v198[0].m128i_u64[1],
          3);
      v30 = (__int64 *)v201[0];
      if ( v201[0] != v201[1] )
      {
LABEL_53:
        v28 = *v30;
        v27 = v30[1];
        v29 = 4 * v27;
        if ( !v197.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__int128 *, __int64, __int64))v197.m128i_i64[1])(
               &v196,
               v195[3 * *v30 + 2] + 40 * v27,
               v195[v175 + 2] + v172) )
        {
          break;
        }
        continue;
      }
      break;
    }
    if ( a3 )
    {
      v119 = a1[12];
      v120 = a1[13];
      *(_DWORD *)dest = 0;
      v121 = a1[11];
      if ( v120 < v119 + 1 )
      {
        v149 = qvector_reserve(a1 + 11, v121, v119 + 1, 4);
        a1[11] = v149;
        v121 = v149;
        v122 = a1[12];
      }
      else
      {
        v122 = v119;
      }
      *(_DWORD *)(v121 + 4 * v122) = 0;
      v123 = v183;
      v124 = (__int64 *)ptr;
      ++a1[12];
      v125 = &v124[2 * v123];
      if ( v124 == v125 )
        goto LABEL_80;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v124 + 2] + 40 * v124[1] + 32) = v119;
        v126 = (_DWORD *)(4 * v119 + a1[11]);
        v127 = 1 << *v124;
        if ( (*v126 & v127) != 0 )
          break;
        v124 += 2;
        *v126 |= v127;
        if ( v125 == v124 )
          goto LABEL_80;
      }
      switch_dbctx(*(int *)(*a1 + 4 * *v124 + 16));
      v128 = *v124;
      v129 = nullptr;
      v130 = 2 * *v124;
      v131 = a1[3 * *v124 + 3];
      if ( v131 )
      {
        ni = 40 * v131;
        v129 = (void *)qalloc_or_throw(40 * v131);
        memcpy(v129, (const void *)a1[v128 + 2 + v130], ni);
      }
      v132 = (char *)ptr;
      v133 = (char *)ptr + 16 * v183;
      if ( v133 != ptr )
      {
        do
        {
          if ( *(_QWORD *)v132 == *v124 )
          {
            v134 = *((_QWORD *)v132 + 1);
            v135 = v124[1];
            if ( v134 != v135 && *((_QWORD *)v129 + 5 * v134 + 4) == v119 )
            {
              memset(dest, 0, sizeof(dest));
              get_ea_diffpos_name(dest, *((_QWORD *)v129 + 5 * v135 + 1));
              v136 = *((_QWORD *)v132 + 1);
              v184 = nullptr;
              v185 = 0;
              get_ea_diffpos_name(&v184, *((_QWORD *)v129 + 5 * v136 + 1));
              sub_368890();
            }
          }
          v132 += 16;
        }
        while ( v133 != v132 );
      }
      if ( !under_debugger )
        interr(2171);
LABEL_265:
      BUG();
    }
    v48 = v183;
    if ( (unsigned __int64)v183 <= 1 )
      goto LABEL_80;
    v73 = (char *)ptr;
    *(_DWORD *)&dest[8] = 0;
    v187 = &dest[8];
    *(_QWORD *)&dest[16] = 0;
    v188 = &dest[8];
    v189 = 0;
    ne = (char *)ptr + 16 * v183;
    if ( ne == ptr )
      goto LABEL_173;
    v74 = nullptr;
    while ( 2 )
    {
      v75 = *(_QWORD *)v73;
      v76 = &dest[8];
      v77 = 3LL * *(_QWORD *)v73;
      v78 = *(_QWORD *)(a1[3 * *(_QWORD *)v73 + 2] + 40LL * *((_QWORD *)v73 + 1) + 32);
      if ( !v74 )
        goto LABEL_142;
      do
      {
        while ( 1 )
        {
          v77 = v74[2];
          v79 = v74[3];
          if ( v74[4] < v78 )
            break;
          v76 = v74;
          v74 = (_QWORD *)v74[2];
          if ( !v77 )
            goto LABEL_140;
        }
        v74 = (_QWORD *)v74[3];
      }
      while ( v79 );
LABEL_140:
      if ( v76 == (_QWORD *)&dest[8] || v78 < v76[4] )
      {
LABEL_142:
        v80 = operator new(0x30u);
        *(_QWORD *)(v80 + 32) = v78;
        v82 = (_QWORD *)v80;
        *(_DWORD *)(v80 + 40) = 0;
        if ( v76 == (_QWORD *)&dest[8] )
        {
          if ( !v189 )
            goto LABEL_160;
          v84 = v188;
          v76 = nullptr;
          if ( *((_QWORD *)v188 + 4) >= v78 )
            goto LABEL_160;
LABEL_148:
          if ( !v84 )
            goto LABEL_156;
          if ( !v76 && v84 != &dest[8] )
          {
            v83 = *((_QWORD *)v84 + 4);
            goto LABEL_223;
          }
          v86 = 1;
LABEL_152:
          v77 = (__int64)v82;
          v76 = v82;
          std::_Rb_tree_insert_and_rebalance(v86, v82, v84, &dest[8]);
          ++v189;
        }
        else
        {
          v83 = v76[4];
          if ( v78 < v83 )
          {
            v84 = v76;
            if ( v187 == (_BYTE *)v76 )
              goto LABEL_148;
            v85 = std::_Rb_tree_decrement(v76);
            v84 = (_BYTE *)v85;
            if ( *(_QWORD *)(v85 + 32) < v78 )
            {
              if ( *(_QWORD *)(v85 + 24) )
                v84 = v76;
              else
                v76 = nullptr;
              goto LABEL_148;
            }
LABEL_160:
            v77 = v78;
            v76 = sub_5B6400((__int64)dest, v78);
            goto LABEL_148;
          }
          if ( v83 < v78 )
          {
            if ( v188 != (_BYTE *)v76 )
            {
              v173 = v76[4];
              v87 = std::_Rb_tree_increment(v76, v77, v81, v83);
              v84 = (_BYTE *)v87;
              if ( v78 >= *(_QWORD *)(v87 + 32) )
                goto LABEL_160;
              v83 = v173;
              if ( v76[3] )
              {
                v76 = (_QWORD *)v87;
                goto LABEL_148;
              }
            }
            v84 = v76;
            if ( v76 )
            {
LABEL_223:
              v86 = v78 < v83;
              goto LABEL_152;
            }
          }
LABEL_156:
          if ( v82 )
          {
            v77 = 48;
            operator delete(v82, 0x30u);
          }
        }
        v75 = *(_QWORD *)v73;
      }
      v73 += 16;
      *((_DWORD *)v76 + 10) |= 1 << v75;
      if ( ne != v73 )
      {
        v74 = *(_QWORD **)&dest[16];
        continue;
      }
      break;
    }
    v110 = (__int64)v187;
    while ( (_BYTE *)v110 != &dest[8] )
    {
      v111 = *(_QWORD *)(v110 + 32);
      v112 = v110;
      v113 = *(_DWORD *)(v110 + 40);
      v114 = *(_DWORD *)(a1[11] + 4 * v111);
      v110 = std::_Rb_tree_increment(v110, v77, v111, v75);
      if ( v114 != v113 )
      {
        v115 = (void *)std::_Rb_tree_rebalance_for_erase(v112, &dest[8]);
        v77 = 48;
        operator delete(v115, 0x30u);
        --v189;
      }
    }
    v48 = v183;
    v73 = (char *)ptr;
    v91 = (char *)ptr;
    v92 = (char *)ptr + 16 * v183;
    if ( v92 != ptr )
    {
      do
      {
        v88 = v91 + 16;
        v116 = *(_QWORD *)(a1[3 * *(_QWORD *)v91 + 2] + 40LL * *((_QWORD *)v91 + 1) + 32);
        v117 = *(_QWORD **)&dest[16];
        if ( !*(_QWORD *)&dest[16] )
          goto LABEL_168;
        v118 = &dest[8];
        do
        {
          if ( v117[4] >= v116 )
          {
            v118 = v117;
            v117 = (_QWORD *)v117[2];
          }
          else
          {
            v117 = (_QWORD *)v117[3];
          }
        }
        while ( v117 );
        v88 = v91 + 16;
        if ( v118 != &dest[8] && v116 >= *((_QWORD *)v118 + 4) )
        {
          v48 = v183;
          v91 += 16;
        }
        else
        {
LABEL_168:
          v89 = v92 - v91;
          if ( (v89 >> 4) - 2 >= 0 )
          {
            v90 = (char *)memmove(v91, v88, v89 - 16);
            v73 = (char *)ptr;
            v91 = v90;
          }
          v48 = v183 - 1;
          *(_QWORD *)&v183 = v183 - 1;
        }
        v92 = &v73[16 * v48];
      }
      while ( v91 != v92 );
    }
    if ( v48 )
    {
      while ( 1 )
      {
LABEL_173:
        v93 = 16 * v48;
        v94 = *(_QWORD *)v73;
        v95 = *((_QWORD *)v73 + 1);
        v96 = (__int64 *)v73;
        if ( (v93 >> 4) - 2 >= 0 )
        {
          memmove(v73, v73 + 16, v93 - 16);
          v73 = (char *)ptr;
          v96 = (__int64 *)ptr;
        }
        v97 = a1[1];
        v48 = v183 - 1;
        v98 = a1[3 * v94 + 2] + 40 * v95;
        *(_QWORD *)&v183 = v183 - 1;
        v99 = *(_QWORD *)(v98 + 32);
        if ( v97 )
        {
          v100 = 0;
          v101 = *(_DWORD *)(a1[11] + 4 * v99);
          do
          {
            v102 = -1;
            if ( (v101 & (1 << v100)) != 0 )
              v102 = v99;
            v200[0].m128i_i64[v100++] = v102;
          }
          while ( v100 != v97 );
        }
        if ( 16 * v48 )
          break;
LABEL_191:
        if ( !v48 )
          goto LABEL_192;
      }
      while ( 1 )
      {
        v105 = *v96;
        v106 = a1[3 * *v96 + 2] + 40 * v96[1];
        v107 = *(_QWORD *)(v106 + 32);
        if ( v200[0].m128i_i64[*v96] == -1 )
        {
          v108 = a1[11];
          v200[0].m128i_i64[v105] = v107;
          *(_DWORD *)(v108 + 4 * v107) &= ~(1 << v105);
          if ( !*(_DWORD *)(a1[11] + 4 * v107) )
            ++a1[14];
          *(_QWORD *)(v106 + 32) = v99;
          *(_DWORD *)(4 * v99 + a1[11]) |= 1 << *v96;
          v104 = (char *)(v96 + 2);
          v73 = (char *)ptr;
          v48 = v183;
          if ( v99 != *(_QWORD *)(v106 + 32) )
          {
LABEL_183:
            v96 = (__int64 *)v104;
            if ( v104 == &v73[16 * v48] )
              goto LABEL_191;
            continue;
          }
        }
        else
        {
          v103 = v99 == v107;
          v104 = (char *)(v96 + 2);
          v48 = v183;
          if ( !v103 )
            goto LABEL_183;
        }
        if ( ((&v73[16 * v48] - (char *)v96) >> 4) - 2 >= 0 )
        {
          v109 = (__int64 *)memmove(v96, v104, &v73[16 * v48] - (char *)v96 - 16);
          v73 = (char *)ptr;
          v96 = v109;
          v48 = v183;
        }
        *(_QWORD *)&v183 = --v48;
        if ( v96 == (__int64 *)&v73[16 * v48] )
          goto LABEL_191;
      }
    }
LABEL_192:
    sub_5B69E0(*(_QWORD **)&dest[16]);
LABEL_80:
    v26 = (__int64 *)v201[0];
    if ( v201[1] != v201[0] )
      continue;
    break;
  }
LABEL_81:
  if ( ptr )
  {
    *(_QWORD *)&v183 = 0;
    qfree(ptr);
  }
  if ( v204.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v204.m128i_i64[0])(v203, v203, 3);
  if ( v201[0] )
    operator delete(v201[0], v202.m128i_i64[0] - (unsigned __int64)v201[0]);
  if ( v197.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v197.m128i_i64[0])(&v196, &v196, 3);
  if ( v194.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v194.m128i_i64[0])(&v193, &v193, 3);
  if ( v191.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v191.m128i_i64[0])(&v190, &v190, 3);
  return v205 - __readfsqword(0x28u);
}
