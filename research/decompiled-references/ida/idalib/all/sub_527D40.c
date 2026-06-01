unsigned __int64 __fastcall sub_527D40(_QWORD *a1, const __m128i *a2, char a3)
{
  void (__fastcall *v4)(__int128 *, const __m128i *, __int64); // rax
  __m128i v5; // xmm0
  void (__fastcall *v6)(__int128 *, const __m128i *, __int64); // rax
  __m128i v7; // xmm0
  void (__fastcall *v8)(__int128 *, const __m128i *, __int64); // rax
  unsigned __int64 v9; // r13
  __m128i **v10; // r14
  __m128i *v11; // rsi
  __m128i *v12; // r15
  __m128i si128; // xmm0
  void (__fastcall *v14)(__m128i *, __m128i *, __int64); // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rdx
  __m128i *v19; // rbp
  __int64 v20; // rax
  __m128i v21; // xmm0
  _BYTE *v22; // r8
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __int64 *v25; // rax
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r15
  __m128i *v32; // r14
  char *m128i_i8; // rax
  const __m128i *v34; // r10
  char *v35; // rax
  unsigned __int64 v36; // r12
  __m128i *v37; // rcx
  void (__fastcall *v38)(unsigned __int64 *, unsigned __int64 *, __int64); // rax
  __m128i *v39; // rax
  const __m128i *v40; // r14
  char *v41; // r15
  __int64 v42; // rax
  _BYTE *v43; // r12
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __int64 v46; // rax
  __m128i *v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // r15
  __m128i *v51; // r8
  unsigned __int64 v52; // rbp
  void *v53; // rcx
  __m128i *v54; // rdi
  __int64 v55; // rax
  __m128i *v56; // rdx
  __m128i v57; // xmm0
  bool v58; // cf
  __m128i v59; // xmm0
  __int64 v60; // r13
  __int64 v61; // rax
  unsigned __int64 v62; // r13
  unsigned __int64 v63; // r13
  __m128i *v64; // rax
  __m128i *v65; // rdx
  __m128i *v66; // rsi
  const __m128i *v67; // rcx
  __m128i v68; // xmm0
  char *v69; // rbp
  void *v70; // rbp
  char *v71; // r15
  _QWORD *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // r14
  __int64 v75; // rsi
  unsigned __int64 v76; // rbp
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  _QWORD *v80; // r12
  unsigned __int64 v81; // rcx
  _BYTE *v82; // rdx
  __int64 v83; // rax
  _BOOL8 v84; // rdi
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
  __int64 v96; // rbp
  __int64 v97; // r13
  __int64 v98; // rcx
  int v99; // r10d
  __int64 v100; // rdx
  char *v101; // rsi
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rsi
  __int64 v106; // rdx
  __int64 *v107; // rax
  __int64 v108; // r14
  __int64 v109; // rdx
  __int64 v110; // rbp
  int v111; // r15d
  int v112; // r12d
  void *v113; // rax
  unsigned __int64 v114; // r8
  _QWORD *v115; // rax
  _BYTE *v116; // r9
  __int64 v117; // r13
  unsigned __int64 v118; // rax
  __int64 v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rdi
  _QWORD *v122; // r12
  _QWORD *v123; // rdi
  _DWORD *v124; // r8
  int v125; // eax
  void *v126; // rbp
  __int64 v127; // r15
  __int64 v128; // rax
  char *v129; // rbx
  char *v130; // rdx
  __int64 v131; // rax
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
  unsigned __int64 v169; // [rsp+18h] [rbp-240h]
  __int64 v170; // [rsp+20h] [rbp-238h]
  __int64 v171; // [rsp+20h] [rbp-238h]
  const __m128i *v173; // [rsp+28h] [rbp-230h]
  const __m128i *v174; // [rsp+28h] [rbp-230h]
  signed __int64 v175; // [rsp+28h] [rbp-230h]
  __m128i *v176; // [rsp+30h] [rbp-228h]
  __m128i *v177; // [rsp+30h] [rbp-228h]
  void *ptr; // [rsp+50h] [rbp-208h] BYREF
  __int128 v179; // [rsp+58h] [rbp-200h]
  void *v180; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v181; // [rsp+78h] [rbp-1E0h]
  _BYTE dest[24]; // [rsp+90h] [rbp-1C8h] BYREF
  _BYTE *v183; // [rsp+A8h] [rbp-1B0h]
  _BYTE *v184; // [rsp+B0h] [rbp-1A8h]
  __int64 v185; // [rsp+B8h] [rbp-1A0h]
  __int128 v186; // [rsp+C0h] [rbp-198h] BYREF
  __m128i v187; // [rsp+D0h] [rbp-188h] BYREF
  _QWORD *v188; // [rsp+E0h] [rbp-178h] BYREF
  __int128 v189; // [rsp+E8h] [rbp-170h] BYREF
  __m128i v190; // [rsp+F8h] [rbp-160h]
  _QWORD *v191; // [rsp+110h] [rbp-148h]
  __int128 v192; // [rsp+118h] [rbp-140h] BYREF
  __m128i v193; // [rsp+128h] [rbp-130h]
  __m128i v194[3]; // [rsp+140h] [rbp-118h] BYREF
  __m128i v195[3]; // [rsp+170h] [rbp-E8h] BYREF
  __m128i v196[3]; // [rsp+1A0h] [rbp-B8h] BYREF
  void *v197[2]; // [rsp+1D0h] [rbp-88h] BYREF
  __m128i v198; // [rsp+1E0h] [rbp-78h] BYREF
  _BYTE v199[16]; // [rsp+1F0h] [rbp-68h] BYREF
  __m128i v200; // [rsp+200h] [rbp-58h] BYREF
  unsigned __int64 v201; // [rsp+218h] [rbp-40h]

  v201 = __readfsqword(0x28u);
  v4 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
  v186 = 0;
  v187 = 0u;
  if ( v4 )
  {
    v4(&v186, a2, 2);
    v5 = _mm_loadu_si128(a2 + 1);
    v6 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
    v188 = a1;
    v190 = 0u;
    v187 = v5;
    v189 = 0;
    if ( v6 )
    {
      v6(&v189, a2, 2);
      v7 = _mm_loadu_si128(a2 + 1);
      v8 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
      v191 = a1;
      v193 = 0u;
      v190 = v7;
      v192 = 0;
      if ( v8 )
      {
        v8(&v192, a2, 2);
        v193 = _mm_loadu_si128(a2 + 1);
      }
    }
    else
    {
      v152 = 6;
      v191 = a1;
      v153 = &v192;
      while ( v152 )
      {
        *(_DWORD *)v153 = 0;
        v153 = (__int128 *)((char *)v153 + 4);
        --v152;
      }
      v193.m128i_i64[1] = 0;
    }
  }
  else
  {
    v188 = a1;
    v190 = 0u;
    v191 = a1;
    v193 = 0u;
    v189 = 0;
    v192 = 0;
  }
  v9 = 0;
  v10 = (__m128i **)(a1 + 2);
  if ( a1[1] )
  {
    while ( 1 )
    {
      switch_dbctx(*(int *)(*a1 + 4 * v9 + 16));
      memset(v194, 0, 32);
      if ( !v187.m128i_i64[0] )
        break;
      ((void (__fastcall *)(__m128i *, __int128 *, __int64))v187.m128i_i64[0])(v194, &v186, 2);
      v11 = v10[1];
      v12 = *v10;
      memset(v195, 0, 32);
      v170 = 16LL * (_QWORD)v11;
      v156 = &v12[(_QWORD)v11];
      v194[1] = _mm_load_si128(&v187);
      if ( !v187.m128i_i64[0] )
        goto LABEL_95;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(v195, v194, 2);
      si128 = _mm_load_si128(&v194[1]);
      v198 = 0u;
      v195[1] = si128;
      *(_OWORD *)v197 = 0;
      if ( !v194[1].m128i_i64[0] )
        goto LABEL_95;
      ((void (__fastcall *)(void **, __m128i *, __int64))v194[1].m128i_i64[0])(v197, v195, 2);
      v198 = _mm_load_si128(&v195[1]);
      memset(v196, 0, 32);
      if ( !v195[1].m128i_i64[0] )
        goto LABEL_96;
      ((void (__fastcall *)(__m128i *, void **, __int64))v195[1].m128i_i64[0])(v196, v197, 2);
      v196[1] = _mm_load_si128(&v198);
      if ( v198.m128i_i64[0] )
      {
        ((void (__fastcall *)(void **, void **, __int64))v198.m128i_i64[0])(v197, v197, 3);
        v14 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v196[1].m128i_i64[0];
        if ( v156 != v12 )
        {
          v198 = 0u;
          *(_OWORD *)v197 = 0;
          if ( v196[1].m128i_i64[0] )
          {
            ((void (__fastcall *)(void **, __m128i *, __int64))v196[1].m128i_i64[0])(v197, v196, 2);
            v198 = _mm_load_si128(&v196[1]);
          }
LABEL_14:
          v15 = -2;
          if ( v170 >> 4 )
          {
            _BitScanReverse64(&v16, v170 >> 4);
            v15 = 2LL * (int)v16;
          }
          sub_527640(v12, v156->m128i_i64, v15, (const __m128i *)v197);
          if ( v198.m128i_i64[0] )
            ((void (__fastcall *)(void **, void **, __int64))v198.m128i_i64[0])(v197, v197, 3);
          v198 = 0u;
          *(_OWORD *)v197 = 0;
          if ( v196[1].m128i_i64[0] )
          {
            ((void (__fastcall *)(void **, __m128i *, __int64))v196[1].m128i_i64[0])(v197, v196, 2);
            v198 = _mm_load_si128(&v196[1]);
          }
          sub_526E30(v12, v156, (const __m128i *)v197);
          if ( v198.m128i_i64[0] )
            ((void (__fastcall *)(void **, void **, __int64))v198.m128i_i64[0])(v197, v197, 3);
          v14 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v196[1].m128i_i64[0];
        }
        if ( v14 )
          v14(v196, v196, 3);
        goto LABEL_25;
      }
      if ( v156 != v12 )
      {
        v154 = v197;
        for ( i = 6; i; --i )
        {
          *(_DWORD *)v154 = 0;
          v154 = (void **)((char *)v154 + 4);
        }
        v198.m128i_i64[1] = 0;
        goto LABEL_14;
      }
LABEL_25:
      if ( v195[1].m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v195[1].m128i_i64[0])(v195, v195, 3);
      if ( v194[1].m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v194[1].m128i_i64[0])(v194, v194, 3);
      ++v9;
      v10 += 3;
      if ( v9 >= a1[1] )
        goto LABEL_30;
    }
    v48 = v10[1];
    v12 = *v10;
    memset(v195, 0, 32);
    v170 = 16LL * (_QWORD)v48;
    v156 = &v12[(_QWORD)v48];
LABEL_95:
    memset(v196, 0, 32);
LABEL_96:
    if ( v156 != v12 )
    {
      v198 = 0u;
      *(_OWORD *)v197 = 0;
      goto LABEL_14;
    }
    goto LABEL_25;
  }
LABEL_30:
  memset(dest, 0, sizeof(dest));
  sub_526760((__int64)v197, (__int64)&v188, (const __m128i *)dest);
  if ( *(_QWORD *)dest )
    operator delete(*(void **)dest, *(_QWORD *)&dest[16] - *(_QWORD *)dest);
  if ( !a1[1] )
  {
    ptr = nullptr;
    v179 = 0;
    goto LABEL_48;
  }
  v17 = 0;
  do
  {
    while ( !a1[3 * v17 + 3] )
    {
LABEL_34:
      v18 = a1[1];
      if ( ++v17 >= v18 )
        goto LABEL_47;
    }
    v19 = (__m128i *)v197[1];
    if ( v197[1] == (void *)v198.m128i_i64[0] )
    {
      v133 = (__m128i *)v197[0];
      v134 = (char *)v197[1] - (char *)v197[0];
      v135 = ((char *)v197[1] - (char *)v197[0]) >> 4;
      if ( v135 == 0x7FFFFFFFFFFFFFFLL )
        std::__throw_length_error("vector::_M_realloc_append");
      v136 = 1;
      if ( v135 )
        v136 = ((char *)v197[1] - (char *)v197[0]) >> 4;
      v58 = __CFADD__(v136, v135);
      v137 = v136 + v135;
      if ( v58 )
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
      *v139 = v17;
      v139[1] = 0;
      if ( v19 != v133 )
      {
        v141 = v133;
        v142 = v138 + (char *)v19 - (char *)v133;
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
        operator delete(v133, v198.m128i_i64[0] - (_QWORD)v133);
      v197[0] = v140;
      v197[1] = v144;
      v198.m128i_i64[0] = (__int64)v140 + v165;
    }
    else
    {
      *(_QWORD *)v197[1] = v17;
      v19->m128i_i64[1] = 0;
      v197[1] = (char *)v197[1] + 16;
    }
    v20 = v198.m128i_i64[1];
    v194[0].m128i_i64[0] = v198.m128i_i64[1];
    memset(&v194[0].m128i_u64[1], 0, 32);
    if ( !v200.m128i_i64[0] )
    {
      v22 = v197[1];
      v157 = v197[0];
LABEL_226:
      v195[0].m128i_i64[0] = v20;
      memset(&v195[0].m128i_u64[1], 0, 32);
      goto LABEL_43;
    }
    ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v200.m128i_i64[0])(&v194[0].m128i_u64[1], v199, 2);
    v21 = _mm_load_si128(&v200);
    v20 = v194[0].m128i_i64[0];
    v196[0].m128i_i64[0] = v194[0].m128i_i64[0];
    v22 = v197[1];
    v157 = v197[0];
    *(__m128i *)((char *)&v194[1] + 8) = v21;
    memset(&v196[0].m128i_u64[1], 0, 32);
    if ( !v200.m128i_i64[0] )
      goto LABEL_226;
    v166 = v197[1];
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v200.m128i_i64[0])(
      &v196[0].m128i_u64[1],
      &v194[0].m128i_u64[1],
      2);
    v23 = _mm_loadu_si128((const __m128i *)&v194[1].m128i_u64[1]);
    v22 = v166;
    v195[0].m128i_i64[0] = v196[0].m128i_i64[0];
    *(__m128i *)((char *)&v196[1] + 8) = v23;
    memset(&v195[0].m128i_u64[1], 0, 32);
    if ( v194[1].m128i_i64[1] )
    {
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v194[1].m128i_i64[1])(
        &v195[0].m128i_u64[1],
        &v196[0].m128i_u64[1],
        2);
      v24 = _mm_loadu_si128((const __m128i *)&v196[1].m128i_u64[1]);
      v22 = v166;
      *(__m128i *)((char *)&v195[1] + 8) = v24;
      if ( v24.m128i_i64[0] )
      {
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v24.m128i_i64[0])(
          &v196[0].m128i_u64[1],
          &v196[0].m128i_u64[1],
          3);
        v22 = v166;
      }
    }
LABEL_43:
    sub_526350((__int64)v157, ((v22 - v157) >> 4) - 1, 0, *((_QWORD *)v22 - 2), *((_QWORD *)v22 - 1), (__int64)v195);
    if ( v195[1].m128i_i64[1] )
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v195[1].m128i_i64[1])(
        &v195[0].m128i_u64[1],
        &v195[0].m128i_u64[1],
        3);
    if ( !v194[1].m128i_i64[1] )
      goto LABEL_34;
    ++v17;
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v194[1].m128i_i64[1])(
      &v194[0].m128i_u64[1],
      &v194[0].m128i_u64[1],
      3);
    v18 = a1[1];
  }
  while ( v17 < v18 );
LABEL_47:
  ptr = nullptr;
  v179 = 0;
  if ( v18 )
  {
    v146 = (__m128i *)qvector_reserve(&ptr, 0, v18, 16);
    v147 = *((_QWORD *)&v179 + 1);
    *((_QWORD *)&v179 + 1) = 0;
    v148 = (__m128i *)ptr;
    v149 = v179 - 1;
    if ( (__int64)v179 - 1 >= 0 )
    {
      v150 = v146;
      do
      {
        v151 = _mm_loadu_si128(v148);
        ++v150;
        ++v148;
        v150[-1] = v151;
        v58 = v149-- == 0;
      }
      while ( !v58 );
      v148 = (__m128i *)ptr;
    }
    qfree(v148);
    ptr = v146;
    *((_QWORD *)&v179 + 1) = v147;
  }
LABEL_48:
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      interr(1961);
    goto LABEL_265;
  }
  v25 = (__int64 *)v197[0];
  if ( v197[0] == v197[1] )
    goto LABEL_81;
  while ( 2 )
  {
    *(_QWORD *)&v179 = 0;
    v26 = v25[1];
    v27 = *v25;
    v168 = 16 * v26;
    v171 = 3 * *v25;
    while ( 2 )
    {
      if ( a3 )
        goto LABEL_58;
      v29 = *(_QWORD *)(a1[3 * v27 + 2] + 16 * v26 + 8);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          interr(2170);
        goto LABEL_265;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_58:
        v31 = *((_QWORD *)&v179 + 1);
        v30 = v179;
        if ( *((_QWORD *)&v179 + 1) < (unsigned __int64)(v179 + 1) )
        {
          v32 = (__m128i *)qvector_reserve(&ptr, 0, v179 + 1, 16);
          v53 = *((void **)&v179 + 1);
          *((_QWORD *)&v179 + 1) = v31;
          v54 = (__m128i *)ptr;
          v55 = v179 - 1;
          if ( (__int64)v179 - 1 >= 0 )
          {
            v56 = v32;
            do
            {
              v57 = _mm_loadu_si128(v54);
              ++v56;
              ++v54;
              v56[-1] = v57;
              v58 = v55-- == 0;
            }
            while ( !v58 );
            v54 = (__m128i *)ptr;
          }
          v160 = v53;
          qfree(v54);
          v30 = v179;
          ptr = v32;
          *((_QWORD *)&v179 + 1) = v160;
        }
        else
        {
          v32 = (__m128i *)ptr;
        }
        m128i_i8 = v32[v30].m128i_i8;
        *(_QWORD *)m128i_i8 = v27;
        *((_QWORD *)m128i_i8 + 1) = v26;
        *(_QWORD *)&v179 = v179 + 1;
      }
      v34 = (const __m128i *)v197[0];
      v35 = *((char **)v197[0] + 1);
      v36 = *(_QWORD *)v197[0];
      memset(&v194[0].m128i_u64[1], 0, 32);
      v158 = v35;
      v194[0].m128i_i64[0] = v198.m128i_i64[1];
      if ( v200.m128i_i64[0] )
      {
        ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v200.m128i_i64[0])(&v194[0].m128i_u64[1], v199, 2);
        v37 = (__m128i *)v197[1];
        v34 = (const __m128i *)v197[0];
        v38 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v200.m128i_i64[0];
        *(__m128i *)((char *)&v194[1] + 8) = _mm_load_si128(&v200);
        if ( (char *)v197[1] - (char *)v197[0] <= 16 )
          goto LABEL_63;
        v49 = v194[0].m128i_i64[0];
        v196[0].m128i_i64[0] = v194[0].m128i_i64[0];
        memset(&v196[0].m128i_u64[1], 0, 32);
        if ( v200.m128i_i64[0] )
        {
          v177 = (__m128i *)v197[1];
          v174 = (const __m128i *)v197[0];
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v200.m128i_i64[0])(
            &v196[0].m128i_u64[1],
            &v194[0].m128i_u64[1],
            2);
          v34 = v174;
          *(__m128i *)((char *)&v196[1] + 8) = _mm_loadu_si128((const __m128i *)&v194[1].m128i_u64[1]);
          v37 = v177;
          v195[0].m128i_i64[0] = v196[0].m128i_i64[0];
          memset(&v195[0].m128i_u64[1], 0, 32);
          if ( v194[1].m128i_i64[1] )
          {
            ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v194[1].m128i_i64[1])(
              &v195[0].m128i_u64[1],
              &v196[0].m128i_u64[1],
              2);
            v59 = _mm_loadu_si128((const __m128i *)&v196[1].m128i_u64[1]);
            v34 = v174;
            v37 = v177;
            *(__m128i *)((char *)&v195[1] + 8) = v59;
            if ( v59.m128i_i64[0] )
            {
              ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v59.m128i_i64[0])(
                &v196[0].m128i_u64[1],
                &v196[0].m128i_u64[1],
                3);
              v37 = v177;
              v34 = v174;
            }
          }
          goto LABEL_101;
        }
LABEL_100:
        v195[0].m128i_i64[0] = v49;
        memset(&v195[0].m128i_u64[1], 0, 32);
LABEL_101:
        v50 = v37[-1].m128i_u64[0];
        v51 = v37 - 1;
        v52 = v37[-1].m128i_u64[1];
        v37[-1] = _mm_loadu_si128(v34);
        v196[0].m128i_i64[0] = v195[0].m128i_i64[0];
        memset(&v196[0].m128i_u64[1], 0, 32);
        if ( v195[1].m128i_i64[1] )
        {
          v176 = v37 - 1;
          v173 = v34;
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v195[1].m128i_i64[1])(
            &v196[0].m128i_u64[1],
            &v195[0].m128i_u64[1],
            2);
          v51 = v176;
          v34 = v173;
          *(__m128i *)((char *)&v196[1] + 8) = _mm_loadu_si128((const __m128i *)&v195[1].m128i_u64[1]);
        }
        sub_5264A0((__int64)v34, 0, v51 - v34, v50, v52, v196[0].m128i_i64);
        if ( v196[1].m128i_i64[1] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v196[1].m128i_i64[1])(
            &v196[0].m128i_u64[1],
            &v196[0].m128i_u64[1],
            3);
        if ( v195[1].m128i_i64[1] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v195[1].m128i_i64[1])(
            &v195[0].m128i_u64[1],
            &v195[0].m128i_u64[1],
            3);
        v38 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v194[1].m128i_i64[1];
LABEL_63:
        if ( v38 )
          v38(&v194[0].m128i_u64[1], &v194[0].m128i_u64[1], 3);
      }
      else
      {
        v37 = (__m128i *)v197[1];
        if ( (char *)v197[1] - (char *)v197[0] > 16 )
        {
          v49 = v198.m128i_i64[1];
          goto LABEL_100;
        }
      }
      v39 = (__m128i *)v197[1];
      v40 = (const __m128i *)((char *)v197[1] - 16);
      v41 = v158 + 1;
      v197[1] = (char *)v197[1] - 16;
      if ( (unsigned __int64)(v158 + 1) >= a1[3 * v36 + 3] )
      {
        v28 = (__int64 *)v197[0];
        if ( v197[0] == v40 )
          break;
        goto LABEL_53;
      }
      if ( v40 == (const __m128i *)v198.m128i_i64[0] )
      {
        v60 = ((char *)v40 - (char *)v197[0]) >> 4;
        if ( v60 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v61 = 1;
        if ( v60 )
          v61 = ((char *)v40 - (char *)v197[0]) >> 4;
        v58 = __CFADD__(v61, v60);
        v62 = v61 + v60;
        if ( v58 )
        {
          v63 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v62 > 0x7FFFFFFFFFFFFFFLL )
            v62 = 0x7FFFFFFFFFFFFFFLL;
          v63 = v62;
        }
        v175 = (char *)v40 - (char *)v197[0];
        v161 = (const __m128i *)v197[0];
        v64 = (__m128i *)operator new(v63 * 16);
        v65 = (__m128i *)v161;
        *(__m128i *)((char *)v64 + v175) = _mm_unpacklo_epi64((__m128i)v36, (__m128i)(unsigned __int64)v41);
        if ( v40 == v161 )
        {
          v69 = (char *)v64;
        }
        else
        {
          v66 = v64;
          v67 = v161;
          do
          {
            v68 = _mm_loadu_si128(v67++);
            ++v66;
            v66[-1] = v68;
          }
          while ( v40 != v67 );
          v69 = &v64->m128i_i8[(char *)v40 - (char *)v161];
        }
        v70 = v69 + 16;
        if ( v161 )
        {
          v162 = (char *)v64;
          operator delete(v65, v198.m128i_i64[0] - (_QWORD)v65);
          v64 = (__m128i *)v162;
        }
        v197[0] = v64;
        v197[1] = v70;
        v198.m128i_i64[0] = (__int64)v64[v63].m128i_i64;
      }
      else
      {
        v39[-1] = _mm_unpacklo_epi64((__m128i)v36, (__m128i)(unsigned __int64)v41);
        v197[1] = (char *)v197[1] + 16;
      }
      v42 = v198.m128i_i64[1];
      v194[0].m128i_i64[0] = v198.m128i_i64[1];
      memset(&v194[0].m128i_u64[1], 0, 32);
      if ( !v200.m128i_i64[0] )
      {
        v43 = v197[1];
        v159 = v197[0];
        goto LABEL_118;
      }
      ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v200.m128i_i64[0])(&v194[0].m128i_u64[1], v199, 2);
      v42 = v194[0].m128i_i64[0];
      v43 = v197[1];
      v44 = _mm_load_si128(&v200);
      v159 = v197[0];
      v196[0].m128i_i64[0] = v194[0].m128i_i64[0];
      *(__m128i *)((char *)&v194[1] + 8) = v44;
      memset(&v196[0].m128i_u64[1], 0, 32);
      if ( !v200.m128i_i64[0] )
      {
LABEL_118:
        v195[0].m128i_i64[0] = v42;
        memset(&v195[0].m128i_u64[1], 0, 32);
        goto LABEL_73;
      }
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v200.m128i_i64[0])(
        &v196[0].m128i_u64[1],
        &v194[0].m128i_u64[1],
        2);
      *(__m128i *)((char *)&v196[1] + 8) = _mm_loadu_si128((const __m128i *)&v194[1].m128i_u64[1]);
      v195[0].m128i_i64[0] = v196[0].m128i_i64[0];
      memset(&v195[0].m128i_u64[1], 0, 32);
      if ( v194[1].m128i_i64[1] )
      {
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v194[1].m128i_i64[1])(
          &v195[0].m128i_u64[1],
          &v196[0].m128i_u64[1],
          2);
        v45 = _mm_loadu_si128((const __m128i *)&v196[1].m128i_u64[1]);
        *(__m128i *)((char *)&v195[1] + 8) = v45;
        if ( v45.m128i_i64[0] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v45.m128i_i64[0])(
            &v196[0].m128i_u64[1],
            &v196[0].m128i_u64[1],
            3);
      }
LABEL_73:
      sub_526350((__int64)v159, ((v43 - v159) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)v195);
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
      v28 = (__int64 *)v197[0];
      if ( v197[0] != v197[1] )
      {
LABEL_53:
        v27 = *v28;
        v26 = v28[1];
        if ( !v193.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__int128 *, __int64, __int64))v193.m128i_i64[1])(
               &v192,
               v191[3 * *v28 + 2] + 16 * v26,
               v191[v171 + 2] + v168) )
        {
          break;
        }
        continue;
      }
      break;
    }
    if ( a3 )
    {
      v117 = a1[12];
      v118 = a1[13];
      *(_DWORD *)dest = 0;
      v119 = a1[11];
      if ( v118 < v117 + 1 )
      {
        v145 = qvector_reserve(a1 + 11, v119, v117 + 1, 4);
        a1[11] = v145;
        v119 = v145;
        v120 = a1[12];
      }
      else
      {
        v120 = v117;
      }
      *(_DWORD *)(v119 + 4 * v120) = 0;
      v121 = v179;
      v122 = ptr;
      ++a1[12];
      v123 = &v122[2 * v121];
      if ( v122 == v123 )
        goto LABEL_80;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v122 + 2] + 16LL * v122[1] + 8) = v117;
        v124 = (_DWORD *)(4 * v117 + a1[11]);
        v125 = 1 << *v122;
        if ( (*v124 & v125) != 0 )
          break;
        v122 += 2;
        *v124 |= v125;
        if ( v123 == v122 )
          goto LABEL_80;
      }
      switch_dbctx(*(int *)(*a1 + 4LL * *v122 + 16));
      v126 = nullptr;
      v127 = 2LL * *v122;
      v128 = a1[3 * *v122 + 3];
      if ( v128 )
      {
        v164 = (void *)*v122;
        v132 = 16 * v128;
        v126 = (void *)qalloc_or_throw(16 * v128);
        memcpy(v126, (const void *)a1[(_QWORD)v164 + v127 + 2], v132);
      }
      v129 = (char *)ptr;
      v130 = (char *)ptr + 16 * v179;
      if ( v130 != ptr )
      {
        do
        {
          if ( *(_QWORD *)v129 == *v122 )
          {
            v131 = *((_QWORD *)v129 + 1);
            if ( v131 != v122[1] && *((_QWORD *)v126 + 2 * v131 + 1) == v117 )
            {
              memset(dest, 0, sizeof(dest));
              sub_35A790((char **)dest);
              v180 = nullptr;
              v181 = 0;
              sub_35A790((char **)&v180);
              sub_368890();
            }
          }
          v129 += 16;
        }
        while ( v130 != v129 );
      }
      if ( !under_debugger )
        interr(2171);
LABEL_265:
      BUG();
    }
    v46 = v179;
    if ( (unsigned __int64)v179 <= 1 )
      goto LABEL_80;
    v71 = (char *)ptr;
    *(_DWORD *)&dest[8] = 0;
    v183 = &dest[8];
    *(_QWORD *)&dest[16] = 0;
    v184 = &dest[8];
    v185 = 0;
    v163 = (char *)ptr + 16 * v179;
    if ( v163 == ptr )
      goto LABEL_173;
    v72 = nullptr;
    while ( 2 )
    {
      v73 = *(_QWORD *)v71;
      v74 = &dest[8];
      v75 = 3LL * *(_QWORD *)v71;
      v76 = *(_QWORD *)(a1[3 * *(_QWORD *)v71 + 2] + 16LL * *((_QWORD *)v71 + 1) + 8);
      if ( !v72 )
        goto LABEL_142;
      do
      {
        while ( 1 )
        {
          v75 = v72[2];
          v77 = v72[3];
          if ( v72[4] < v76 )
            break;
          v74 = v72;
          v72 = (_QWORD *)v72[2];
          if ( !v75 )
            goto LABEL_140;
        }
        v72 = (_QWORD *)v72[3];
      }
      while ( v77 );
LABEL_140:
      if ( v74 == (_QWORD *)&dest[8] || v76 < v74[4] )
      {
LABEL_142:
        v78 = operator new(0x30u);
        *(_QWORD *)(v78 + 32) = v76;
        v80 = (_QWORD *)v78;
        *(_DWORD *)(v78 + 40) = 0;
        if ( v74 == (_QWORD *)&dest[8] )
        {
          if ( !v185 )
            goto LABEL_160;
          v82 = v184;
          v74 = nullptr;
          if ( *((_QWORD *)v184 + 4) >= v76 )
            goto LABEL_160;
LABEL_148:
          if ( !v82 )
            goto LABEL_156;
          if ( !v74 && v82 != &dest[8] )
          {
            v81 = *((_QWORD *)v82 + 4);
            goto LABEL_223;
          }
          v84 = 1;
LABEL_152:
          v75 = (__int64)v80;
          v74 = v80;
          std::_Rb_tree_insert_and_rebalance(v84, v80, v82, &dest[8]);
          ++v185;
        }
        else
        {
          v81 = v74[4];
          if ( v76 < v81 )
          {
            v82 = v74;
            if ( v183 == (_BYTE *)v74 )
              goto LABEL_148;
            v83 = std::_Rb_tree_decrement(v74);
            v82 = (_BYTE *)v83;
            if ( *(_QWORD *)(v83 + 32) < v76 )
            {
              if ( *(_QWORD *)(v83 + 24) )
                v82 = v74;
              else
                v74 = nullptr;
              goto LABEL_148;
            }
LABEL_160:
            v75 = v76;
            v74 = sub_51F840((__int64)dest, v76);
            goto LABEL_148;
          }
          if ( v81 < v76 )
          {
            if ( v184 != (_BYTE *)v74 )
            {
              v169 = v74[4];
              v85 = std::_Rb_tree_increment(v74, v75, v79, v81);
              v82 = (_BYTE *)v85;
              if ( v76 >= *(_QWORD *)(v85 + 32) )
                goto LABEL_160;
              v81 = v169;
              if ( v74[3] )
              {
                v74 = (_QWORD *)v85;
                goto LABEL_148;
              }
            }
            v82 = v74;
            if ( v74 )
            {
LABEL_223:
              v84 = v76 < v81;
              goto LABEL_152;
            }
          }
LABEL_156:
          if ( v80 )
          {
            v75 = 48;
            operator delete(v80, 0x30u);
          }
        }
        v73 = *(_QWORD *)v71;
      }
      v71 += 16;
      *((_DWORD *)v74 + 10) |= 1 << v73;
      if ( v163 != v71 )
      {
        v72 = *(_QWORD **)&dest[16];
        continue;
      }
      break;
    }
    v108 = (__int64)v183;
    while ( (_BYTE *)v108 != &dest[8] )
    {
      v109 = *(_QWORD *)(v108 + 32);
      v110 = v108;
      v111 = *(_DWORD *)(v108 + 40);
      v112 = *(_DWORD *)(a1[11] + 4 * v109);
      v108 = std::_Rb_tree_increment(v108, v75, v109, v73);
      if ( v112 != v111 )
      {
        v113 = (void *)std::_Rb_tree_rebalance_for_erase(v110, &dest[8]);
        v75 = 48;
        operator delete(v113, 0x30u);
        --v185;
      }
    }
    v46 = v179;
    v71 = (char *)ptr;
    v89 = (char *)ptr;
    v90 = (char *)ptr + 16 * v179;
    if ( v90 != ptr )
    {
      do
      {
        v86 = v89 + 16;
        v114 = *(_QWORD *)(a1[3 * *(_QWORD *)v89 + 2] + 16LL * *((_QWORD *)v89 + 1) + 8);
        v115 = *(_QWORD **)&dest[16];
        if ( !*(_QWORD *)&dest[16] )
          goto LABEL_168;
        v116 = &dest[8];
        do
        {
          if ( v115[4] >= v114 )
          {
            v116 = v115;
            v115 = (_QWORD *)v115[2];
          }
          else
          {
            v115 = (_QWORD *)v115[3];
          }
        }
        while ( v115 );
        v86 = v89 + 16;
        if ( v116 != &dest[8] && v114 >= *((_QWORD *)v116 + 4) )
        {
          v46 = v179;
          v89 += 16;
        }
        else
        {
LABEL_168:
          v87 = v90 - v89;
          if ( (v87 >> 4) - 2 >= 0 )
          {
            v88 = (char *)memmove(v89, v86, v87 - 16);
            v71 = (char *)ptr;
            v89 = v88;
          }
          v46 = v179 - 1;
          *(_QWORD *)&v179 = v179 - 1;
        }
        v90 = &v71[16 * v46];
      }
      while ( v89 != v90 );
    }
    if ( v46 )
    {
      while ( 1 )
      {
LABEL_173:
        v91 = 16 * v46;
        v92 = *(_QWORD *)v71;
        v93 = *((_QWORD *)v71 + 1);
        v94 = (__int64 *)v71;
        if ( (v91 >> 4) - 2 >= 0 )
        {
          memmove(v71, v71 + 16, v91 - 16);
          v71 = (char *)ptr;
          v94 = (__int64 *)ptr;
        }
        v95 = a1[1];
        v96 = a1[3 * v92 + 2] + 16 * v93;
        v46 = v179 - 1;
        *(_QWORD *)&v179 = v179 - 1;
        v97 = *(_QWORD *)(v96 + 8);
        if ( v95 )
        {
          v98 = 0;
          v99 = *(_DWORD *)(a1[11] + 4 * v97);
          do
          {
            v100 = -1;
            if ( (v99 & (1 << v98)) != 0 )
              v100 = v97;
            v196[0].m128i_i64[v98++] = v100;
          }
          while ( v98 != v95 );
        }
        if ( 16 * v46 )
          break;
LABEL_191:
        if ( !v46 )
          goto LABEL_192;
      }
      while ( 1 )
      {
        v102 = *v94;
        v103 = a1[3 * *v94 + 2] + 16 * v94[1];
        v104 = *(_QWORD *)(v103 + 8);
        if ( v196[0].m128i_i64[*v94] == -1 )
        {
          v105 = a1[11];
          v196[0].m128i_i64[v102] = v104;
          *(_DWORD *)(v105 + 4 * v104) &= ~(1 << v102);
          if ( !*(_DWORD *)(a1[11] + 4 * v104) )
            ++a1[14];
          *(_QWORD *)(v103 + 8) = v97;
          *(_DWORD *)(4 * v97 + a1[11]) |= 1 << *v94;
          v106 = *(_QWORD *)(v103 + 8);
          v101 = (char *)(v94 + 2);
          v71 = (char *)ptr;
          v46 = v179;
          if ( v97 != v106 )
          {
LABEL_183:
            v94 = (__int64 *)v101;
            if ( v101 == &v71[16 * v46] )
              goto LABEL_191;
            continue;
          }
        }
        else
        {
          v46 = v179;
          v101 = (char *)(v94 + 2);
          if ( v97 != v104 )
            goto LABEL_183;
        }
        if ( ((&v71[16 * v46] - (char *)v94) >> 4) - 2 >= 0 )
        {
          v107 = (__int64 *)memmove(v94, v101, &v71[16 * v46] - (char *)v94 - 16);
          v71 = (char *)ptr;
          v94 = v107;
          v46 = v179;
        }
        *(_QWORD *)&v179 = --v46;
        if ( v94 == (__int64 *)&v71[16 * v46] )
          goto LABEL_191;
      }
    }
LABEL_192:
    sub_51FD00(*(_QWORD **)&dest[16]);
LABEL_80:
    v25 = (__int64 *)v197[0];
    if ( v197[1] != v197[0] )
      continue;
    break;
  }
LABEL_81:
  if ( ptr )
  {
    *(_QWORD *)&v179 = 0;
    qfree(ptr);
  }
  if ( v200.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v200.m128i_i64[0])(v199, v199, 3);
  if ( v197[0] )
    operator delete(v197[0], v198.m128i_i64[0] - (unsigned __int64)v197[0]);
  if ( v193.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v193.m128i_i64[0])(&v192, &v192, 3);
  if ( v190.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v190.m128i_i64[0])(&v189, &v189, 3);
  if ( v187.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v187.m128i_i64[0])(&v186, &v186, 3);
  return v201 - __readfsqword(0x28u);
}
