unsigned __int64 __fastcall sub_50FAC0(_QWORD *a1, const __m128i *a2, char a3)
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
  unsigned __int64 v75; // rbp
  __int64 v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rax
  _QWORD *v79; // r12
  unsigned __int64 v80; // rcx
  _BYTE *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rax
  const void *v84; // rsi
  __int64 v85; // rcx
  char *v86; // rax
  char *v87; // rdi
  char *v88; // rcx
  __int64 v89; // rax
  __int64 v90; // r13
  __int64 v91; // rbp
  __int64 *v92; // rdi
  __int64 v93; // rsi
  __int64 v94; // rbp
  __int64 v95; // r13
  __int64 v96; // rcx
  int v97; // r10d
  __int64 v98; // rdx
  char *v99; // rsi
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rsi
  __int64 v104; // rdx
  __int64 *v105; // rax
  __int64 v106; // r14
  int v107; // r15d
  int v108; // r12d
  void *v109; // rax
  unsigned __int64 v110; // r8
  _QWORD *v111; // rax
  _BYTE *v112; // r9
  __int64 v113; // r13
  unsigned __int64 v114; // rax
  __int64 v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rdi
  const char *v118; // rsi
  _QWORD *v119; // r12
  _QWORD *v120; // rdi
  const char *v121; // r8
  int v122; // eax
  void *v123; // rbp
  __int64 v124; // r15
  __int64 v125; // rax
  char *v126; // rbx
  char *v127; // rdx
  __int64 v128; // rax
  size_t v129; // r14
  __m128i *v130; // r13
  signed __int64 v131; // r15
  signed __int64 v132; // rax
  signed __int64 v133; // rdx
  unsigned __int64 v134; // rax
  __int64 v135; // rax
  unsigned __int64 *v136; // r15
  void *v137; // r14
  const __m128i *v138; // rcx
  __int64 v139; // rdx
  __m128i v140; // xmm0
  void *v141; // rbp
  __int64 v142; // rax
  __m128i *v143; // r12
  __int64 v144; // r13
  __m128i *v145; // rdi
  __int64 v146; // rax
  __m128i *v147; // rdx
  __m128i v148; // xmm0
  __int64 v149; // rcx
  __int128 *v150; // rdi
  void **v151; // rdi
  __int64 i; // rcx
  __m128i *v153; // [rsp+0h] [rbp-258h]
  _BYTE *v154; // [rsp+0h] [rbp-258h]
  char *v155; // [rsp+0h] [rbp-258h]
  _BYTE *v156; // [rsp+0h] [rbp-258h]
  void *v157; // [rsp+0h] [rbp-258h]
  const __m128i *v158; // [rsp+0h] [rbp-258h]
  char *v159; // [rsp+0h] [rbp-258h]
  char *v160; // [rsp+0h] [rbp-258h]
  void *v161; // [rsp+0h] [rbp-258h]
  __int64 v162; // [rsp+0h] [rbp-258h]
  _BYTE *v163; // [rsp+8h] [rbp-250h]
  __int64 v165; // [rsp+18h] [rbp-240h]
  __int64 v166; // [rsp+20h] [rbp-238h]
  __int64 v167; // [rsp+20h] [rbp-238h]
  const __m128i *v169; // [rsp+28h] [rbp-230h]
  const __m128i *v170; // [rsp+28h] [rbp-230h]
  signed __int64 v171; // [rsp+28h] [rbp-230h]
  __m128i *v172; // [rsp+30h] [rbp-228h]
  __m128i *v173; // [rsp+30h] [rbp-228h]
  void *ptr; // [rsp+50h] [rbp-208h] BYREF
  __int128 v175; // [rsp+58h] [rbp-200h]
  void *v176; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v177; // [rsp+78h] [rbp-1E0h]
  _BYTE dest[24]; // [rsp+90h] [rbp-1C8h] BYREF
  _BYTE *v179; // [rsp+A8h] [rbp-1B0h]
  _BYTE *v180; // [rsp+B0h] [rbp-1A8h]
  __int64 v181; // [rsp+B8h] [rbp-1A0h]
  __int128 v182; // [rsp+C0h] [rbp-198h] BYREF
  __m128i v183; // [rsp+D0h] [rbp-188h] BYREF
  _QWORD *v184; // [rsp+E0h] [rbp-178h] BYREF
  __int128 v185; // [rsp+E8h] [rbp-170h] BYREF
  __m128i v186; // [rsp+F8h] [rbp-160h]
  _QWORD *v187; // [rsp+110h] [rbp-148h]
  __int128 v188; // [rsp+118h] [rbp-140h] BYREF
  __m128i v189; // [rsp+128h] [rbp-130h]
  __m128i v190[3]; // [rsp+140h] [rbp-118h] BYREF
  __m128i v191[3]; // [rsp+170h] [rbp-E8h] BYREF
  __m128i v192[3]; // [rsp+1A0h] [rbp-B8h] BYREF
  void *v193[2]; // [rsp+1D0h] [rbp-88h] BYREF
  __m128i v194; // [rsp+1E0h] [rbp-78h] BYREF
  _BYTE v195[16]; // [rsp+1F0h] [rbp-68h] BYREF
  __m128i v196; // [rsp+200h] [rbp-58h] BYREF
  unsigned __int64 v197; // [rsp+218h] [rbp-40h]

  v197 = __readfsqword(0x28u);
  v4 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
  v182 = 0;
  v183 = 0u;
  if ( v4 )
  {
    v4(&v182, a2, 2);
    v5 = _mm_loadu_si128(a2 + 1);
    v6 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
    v184 = a1;
    v186 = 0u;
    v183 = v5;
    v185 = 0;
    if ( v6 )
    {
      v6(&v185, a2, 2);
      v7 = _mm_loadu_si128(a2 + 1);
      v8 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
      v187 = a1;
      v189 = 0u;
      v186 = v7;
      v188 = 0;
      if ( v8 )
      {
        v8(&v188, a2, 2);
        v189 = _mm_loadu_si128(a2 + 1);
      }
    }
    else
    {
      v149 = 6;
      v187 = a1;
      v150 = &v188;
      while ( v149 )
      {
        *(_DWORD *)v150 = 0;
        v150 = (__int128 *)((char *)v150 + 4);
        --v149;
      }
      v189.m128i_i64[1] = 0;
    }
  }
  else
  {
    v184 = a1;
    v186 = 0u;
    v187 = a1;
    v189 = 0u;
    v185 = 0;
    v188 = 0;
  }
  v9 = 0;
  v10 = (__m128i **)(a1 + 2);
  if ( a1[1] )
  {
    while ( 1 )
    {
      switch_dbctx(*(int *)(*a1 + 4 * v9 + 16));
      memset(v190, 0, 32);
      if ( !v183.m128i_i64[0] )
        break;
      ((void (__fastcall *)(__m128i *, __int128 *, __int64))v183.m128i_i64[0])(v190, &v182, 2);
      v11 = v10[1];
      v12 = *v10;
      memset(v191, 0, 32);
      v166 = 16LL * (_QWORD)v11;
      v153 = &v12[(_QWORD)v11];
      v190[1] = _mm_load_si128(&v183);
      if ( !v183.m128i_i64[0] )
        goto LABEL_95;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v183.m128i_i64[0])(v191, v190, 2);
      si128 = _mm_load_si128(&v190[1]);
      v194 = 0u;
      v191[1] = si128;
      *(_OWORD *)v193 = 0;
      if ( !v190[1].m128i_i64[0] )
        goto LABEL_95;
      ((void (__fastcall *)(void **, __m128i *, __int64))v190[1].m128i_i64[0])(v193, v191, 2);
      v194 = _mm_load_si128(&v191[1]);
      memset(v192, 0, 32);
      if ( !v191[1].m128i_i64[0] )
        goto LABEL_96;
      ((void (__fastcall *)(__m128i *, void **, __int64))v191[1].m128i_i64[0])(v192, v193, 2);
      v192[1] = _mm_load_si128(&v194);
      if ( v194.m128i_i64[0] )
      {
        ((void (__fastcall *)(void **, void **, __int64))v194.m128i_i64[0])(v193, v193, 3);
        v14 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v192[1].m128i_i64[0];
        if ( v153 != v12 )
        {
          v194 = 0u;
          *(_OWORD *)v193 = 0;
          if ( v192[1].m128i_i64[0] )
          {
            ((void (__fastcall *)(void **, __m128i *, __int64))v192[1].m128i_i64[0])(v193, v192, 2);
            v194 = _mm_load_si128(&v192[1]);
          }
LABEL_14:
          v15 = -2;
          if ( v166 >> 4 )
          {
            _BitScanReverse64(&v16, v166 >> 4);
            v15 = 2LL * (int)v16;
          }
          sub_50F390(v12, v153->m128i_i64, v15, (const __m128i *)v193);
          if ( v194.m128i_i64[0] )
            ((void (__fastcall *)(void **, void **, __int64))v194.m128i_i64[0])(v193, v193, 3);
          v194 = 0u;
          *(_OWORD *)v193 = 0;
          if ( v192[1].m128i_i64[0] )
          {
            ((void (__fastcall *)(void **, __m128i *, __int64))v192[1].m128i_i64[0])(v193, v192, 2);
            v194 = _mm_load_si128(&v192[1]);
          }
          sub_50EB80(v12, v153, (const __m128i *)v193);
          if ( v194.m128i_i64[0] )
            ((void (__fastcall *)(void **, void **, __int64))v194.m128i_i64[0])(v193, v193, 3);
          v14 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v192[1].m128i_i64[0];
        }
        if ( v14 )
          v14(v192, v192, 3);
        goto LABEL_25;
      }
      if ( v153 != v12 )
      {
        v151 = v193;
        for ( i = 6; i; --i )
        {
          *(_DWORD *)v151 = 0;
          v151 = (void **)((char *)v151 + 4);
        }
        v194.m128i_i64[1] = 0;
        goto LABEL_14;
      }
LABEL_25:
      if ( v191[1].m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v191[1].m128i_i64[0])(v191, v191, 3);
      if ( v190[1].m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v190[1].m128i_i64[0])(v190, v190, 3);
      ++v9;
      v10 += 3;
      if ( v9 >= a1[1] )
        goto LABEL_30;
    }
    v48 = v10[1];
    v12 = *v10;
    memset(v191, 0, 32);
    v166 = 16LL * (_QWORD)v48;
    v153 = &v12[(_QWORD)v48];
LABEL_95:
    memset(v192, 0, 32);
LABEL_96:
    if ( v153 != v12 )
    {
      v194 = 0u;
      *(_OWORD *)v193 = 0;
      goto LABEL_14;
    }
    goto LABEL_25;
  }
LABEL_30:
  memset(dest, 0, sizeof(dest));
  sub_50E4B0((__int64)v193, (__int64)&v184, (const __m128i *)dest);
  if ( *(_QWORD *)dest )
    operator delete(*(void **)dest, *(_QWORD *)&dest[16] - *(_QWORD *)dest);
  if ( !a1[1] )
  {
    ptr = nullptr;
    v175 = 0;
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
    v19 = (__m128i *)v193[1];
    if ( v193[1] == (void *)v194.m128i_i64[0] )
    {
      v130 = (__m128i *)v193[0];
      v131 = (char *)v193[1] - (char *)v193[0];
      v132 = ((char *)v193[1] - (char *)v193[0]) >> 4;
      if ( v132 == 0x7FFFFFFFFFFFFFFLL )
        std::__throw_length_error("vector::_M_realloc_append");
      v133 = 1;
      if ( v132 )
        v133 = ((char *)v193[1] - (char *)v193[0]) >> 4;
      v58 = __CFADD__(v133, v132);
      v134 = v133 + v132;
      if ( v58 )
      {
        v162 = 0x7FFFFFFFFFFFFFF0LL;
        v135 = operator new(0x7FFFFFFFFFFFFFF0uLL);
      }
      else
      {
        if ( v134 > 0x7FFFFFFFFFFFFFFLL )
          v134 = 0x7FFFFFFFFFFFFFFLL;
        v162 = 16 * v134;
        v135 = operator new(16 * v134);
      }
      v136 = (unsigned __int64 *)(v135 + v131);
      v137 = (void *)v135;
      *v136 = v17;
      v136[1] = 0;
      if ( v19 != v130 )
      {
        v138 = v130;
        v139 = v135 + (char *)v19 - (char *)v130;
        do
        {
          v140 = _mm_loadu_si128(v138);
          v135 += 16;
          ++v138;
          *(__m128i *)(v135 - 16) = v140;
        }
        while ( v135 != v139 );
      }
      v141 = (void *)(v135 + 16);
      if ( v130 )
        operator delete(v130, v194.m128i_i64[0] - (_QWORD)v130);
      v193[0] = v137;
      v193[1] = v141;
      v194.m128i_i64[0] = (__int64)v137 + v162;
    }
    else
    {
      *(_QWORD *)v193[1] = v17;
      v19->m128i_i64[1] = 0;
      v193[1] = (char *)v193[1] + 16;
    }
    v20 = v194.m128i_i64[1];
    v190[0].m128i_i64[0] = v194.m128i_i64[1];
    memset(&v190[0].m128i_u64[1], 0, 32);
    if ( !v196.m128i_i64[0] )
    {
      v22 = v193[1];
      v154 = v193[0];
LABEL_222:
      v191[0].m128i_i64[0] = v20;
      memset(&v191[0].m128i_u64[1], 0, 32);
      goto LABEL_43;
    }
    ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v196.m128i_i64[0])(&v190[0].m128i_u64[1], v195, 2);
    v21 = _mm_load_si128(&v196);
    v20 = v190[0].m128i_i64[0];
    v192[0].m128i_i64[0] = v190[0].m128i_i64[0];
    v22 = v193[1];
    v154 = v193[0];
    *(__m128i *)((char *)&v190[1] + 8) = v21;
    memset(&v192[0].m128i_u64[1], 0, 32);
    if ( !v196.m128i_i64[0] )
      goto LABEL_222;
    v163 = v193[1];
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v196.m128i_i64[0])(
      &v192[0].m128i_u64[1],
      &v190[0].m128i_u64[1],
      2);
    v23 = _mm_loadu_si128((const __m128i *)&v190[1].m128i_u64[1]);
    v22 = v163;
    v191[0].m128i_i64[0] = v192[0].m128i_i64[0];
    *(__m128i *)((char *)&v192[1] + 8) = v23;
    memset(&v191[0].m128i_u64[1], 0, 32);
    if ( v190[1].m128i_i64[1] )
    {
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v190[1].m128i_i64[1])(
        &v191[0].m128i_u64[1],
        &v192[0].m128i_u64[1],
        2);
      v24 = _mm_loadu_si128((const __m128i *)&v192[1].m128i_u64[1]);
      v22 = v163;
      *(__m128i *)((char *)&v191[1] + 8) = v24;
      if ( v24.m128i_i64[0] )
      {
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v24.m128i_i64[0])(
          &v192[0].m128i_u64[1],
          &v192[0].m128i_u64[1],
          3);
        v22 = v163;
      }
    }
LABEL_43:
    sub_50E0A0((__int64)v154, ((v22 - v154) >> 4) - 1, 0, *((_QWORD *)v22 - 2), *((_QWORD *)v22 - 1), (__int64)v191);
    if ( v191[1].m128i_i64[1] )
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v191[1].m128i_i64[1])(
        &v191[0].m128i_u64[1],
        &v191[0].m128i_u64[1],
        3);
    if ( !v190[1].m128i_i64[1] )
      goto LABEL_34;
    ++v17;
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v190[1].m128i_i64[1])(
      &v190[0].m128i_u64[1],
      &v190[0].m128i_u64[1],
      3);
    v18 = a1[1];
  }
  while ( v17 < v18 );
LABEL_47:
  ptr = nullptr;
  v175 = 0;
  if ( v18 )
  {
    v143 = (__m128i *)qvector_reserve(&ptr, 0, v18, 16);
    v144 = *((_QWORD *)&v175 + 1);
    *((_QWORD *)&v175 + 1) = 0;
    v145 = (__m128i *)ptr;
    v146 = v175 - 1;
    if ( (__int64)v175 - 1 >= 0 )
    {
      v147 = v143;
      do
      {
        v148 = _mm_loadu_si128(v145);
        ++v147;
        ++v145;
        v147[-1] = v148;
        v58 = v146-- == 0;
      }
      while ( !v58 );
      v145 = (__m128i *)ptr;
    }
    qfree(v145);
    ptr = v143;
    *((_QWORD *)&v175 + 1) = v144;
  }
LABEL_48:
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      interr(1961);
    goto LABEL_261;
  }
  v25 = (__int64 *)v193[0];
  if ( v193[0] == v193[1] )
    goto LABEL_81;
  while ( 2 )
  {
    *(_QWORD *)&v175 = 0;
    v26 = v25[1];
    v27 = *v25;
    v165 = 16 * v26;
    v167 = 3 * *v25;
    while ( 2 )
    {
      if ( a3 )
        goto LABEL_58;
      v29 = *(_QWORD *)(a1[3 * v27 + 2] + 16 * v26 + 8);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          interr(2170);
        goto LABEL_261;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_58:
        v31 = *((_QWORD *)&v175 + 1);
        v30 = v175;
        if ( *((_QWORD *)&v175 + 1) < (unsigned __int64)(v175 + 1) )
        {
          v32 = (__m128i *)qvector_reserve(&ptr, 0, v175 + 1, 16);
          v53 = *((void **)&v175 + 1);
          *((_QWORD *)&v175 + 1) = v31;
          v54 = (__m128i *)ptr;
          v55 = v175 - 1;
          if ( (__int64)v175 - 1 >= 0 )
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
          v157 = v53;
          qfree(v54);
          v30 = v175;
          ptr = v32;
          *((_QWORD *)&v175 + 1) = v157;
        }
        else
        {
          v32 = (__m128i *)ptr;
        }
        m128i_i8 = v32[v30].m128i_i8;
        *(_QWORD *)m128i_i8 = v27;
        *((_QWORD *)m128i_i8 + 1) = v26;
        *(_QWORD *)&v175 = v175 + 1;
      }
      v34 = (const __m128i *)v193[0];
      v35 = *((char **)v193[0] + 1);
      v36 = *(_QWORD *)v193[0];
      memset(&v190[0].m128i_u64[1], 0, 32);
      v155 = v35;
      v190[0].m128i_i64[0] = v194.m128i_i64[1];
      if ( v196.m128i_i64[0] )
      {
        ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v196.m128i_i64[0])(&v190[0].m128i_u64[1], v195, 2);
        v37 = (__m128i *)v193[1];
        v34 = (const __m128i *)v193[0];
        v38 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v196.m128i_i64[0];
        *(__m128i *)((char *)&v190[1] + 8) = _mm_load_si128(&v196);
        if ( (char *)v193[1] - (char *)v193[0] <= 16 )
          goto LABEL_63;
        v49 = v190[0].m128i_i64[0];
        v192[0].m128i_i64[0] = v190[0].m128i_i64[0];
        memset(&v192[0].m128i_u64[1], 0, 32);
        if ( v196.m128i_i64[0] )
        {
          v173 = (__m128i *)v193[1];
          v170 = (const __m128i *)v193[0];
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v196.m128i_i64[0])(
            &v192[0].m128i_u64[1],
            &v190[0].m128i_u64[1],
            2);
          v34 = v170;
          *(__m128i *)((char *)&v192[1] + 8) = _mm_loadu_si128((const __m128i *)&v190[1].m128i_u64[1]);
          v37 = v173;
          v191[0].m128i_i64[0] = v192[0].m128i_i64[0];
          memset(&v191[0].m128i_u64[1], 0, 32);
          if ( v190[1].m128i_i64[1] )
          {
            ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v190[1].m128i_i64[1])(
              &v191[0].m128i_u64[1],
              &v192[0].m128i_u64[1],
              2);
            v59 = _mm_loadu_si128((const __m128i *)&v192[1].m128i_u64[1]);
            v34 = v170;
            v37 = v173;
            *(__m128i *)((char *)&v191[1] + 8) = v59;
            if ( v59.m128i_i64[0] )
            {
              ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v59.m128i_i64[0])(
                &v192[0].m128i_u64[1],
                &v192[0].m128i_u64[1],
                3);
              v37 = v173;
              v34 = v170;
            }
          }
          goto LABEL_101;
        }
LABEL_100:
        v191[0].m128i_i64[0] = v49;
        memset(&v191[0].m128i_u64[1], 0, 32);
LABEL_101:
        v50 = v37[-1].m128i_u64[0];
        v51 = v37 - 1;
        v52 = v37[-1].m128i_u64[1];
        v37[-1] = _mm_loadu_si128(v34);
        v192[0].m128i_i64[0] = v191[0].m128i_i64[0];
        memset(&v192[0].m128i_u64[1], 0, 32);
        if ( v191[1].m128i_i64[1] )
        {
          v172 = v37 - 1;
          v169 = v34;
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v191[1].m128i_i64[1])(
            &v192[0].m128i_u64[1],
            &v191[0].m128i_u64[1],
            2);
          v51 = v172;
          v34 = v169;
          *(__m128i *)((char *)&v192[1] + 8) = _mm_loadu_si128((const __m128i *)&v191[1].m128i_u64[1]);
        }
        sub_50E1F0((__int64)v34, 0, v51 - v34, v50, v52, v192[0].m128i_i64);
        if ( v192[1].m128i_i64[1] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v192[1].m128i_i64[1])(
            &v192[0].m128i_u64[1],
            &v192[0].m128i_u64[1],
            3);
        if ( v191[1].m128i_i64[1] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v191[1].m128i_i64[1])(
            &v191[0].m128i_u64[1],
            &v191[0].m128i_u64[1],
            3);
        v38 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v190[1].m128i_i64[1];
LABEL_63:
        if ( v38 )
          v38(&v190[0].m128i_u64[1], &v190[0].m128i_u64[1], 3);
      }
      else
      {
        v37 = (__m128i *)v193[1];
        if ( (char *)v193[1] - (char *)v193[0] > 16 )
        {
          v49 = v194.m128i_i64[1];
          goto LABEL_100;
        }
      }
      v39 = (__m128i *)v193[1];
      v40 = (const __m128i *)((char *)v193[1] - 16);
      v41 = v155 + 1;
      v193[1] = (char *)v193[1] - 16;
      if ( (unsigned __int64)(v155 + 1) >= a1[3 * v36 + 3] )
      {
        v28 = (__int64 *)v193[0];
        if ( v193[0] == v40 )
          break;
        goto LABEL_53;
      }
      if ( v40 == (const __m128i *)v194.m128i_i64[0] )
      {
        v60 = ((char *)v40 - (char *)v193[0]) >> 4;
        if ( v60 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v61 = 1;
        if ( v60 )
          v61 = ((char *)v40 - (char *)v193[0]) >> 4;
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
        v171 = (char *)v40 - (char *)v193[0];
        v158 = (const __m128i *)v193[0];
        v64 = (__m128i *)operator new(v63 * 16);
        v65 = (__m128i *)v158;
        *(__m128i *)((char *)v64 + v171) = _mm_unpacklo_epi64((__m128i)v36, (__m128i)(unsigned __int64)v41);
        if ( v40 == v158 )
        {
          v69 = (char *)v64;
        }
        else
        {
          v66 = v64;
          v67 = v158;
          do
          {
            v68 = _mm_loadu_si128(v67++);
            ++v66;
            v66[-1] = v68;
          }
          while ( v40 != v67 );
          v69 = &v64->m128i_i8[(char *)v40 - (char *)v158];
        }
        v70 = v69 + 16;
        if ( v158 )
        {
          v159 = (char *)v64;
          operator delete(v65, v194.m128i_i64[0] - (_QWORD)v65);
          v64 = (__m128i *)v159;
        }
        v193[0] = v64;
        v193[1] = v70;
        v194.m128i_i64[0] = (__int64)v64[v63].m128i_i64;
      }
      else
      {
        v39[-1] = _mm_unpacklo_epi64((__m128i)v36, (__m128i)(unsigned __int64)v41);
        v193[1] = (char *)v193[1] + 16;
      }
      v42 = v194.m128i_i64[1];
      v190[0].m128i_i64[0] = v194.m128i_i64[1];
      memset(&v190[0].m128i_u64[1], 0, 32);
      if ( !v196.m128i_i64[0] )
      {
        v43 = v193[1];
        v156 = v193[0];
        goto LABEL_118;
      }
      ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v196.m128i_i64[0])(&v190[0].m128i_u64[1], v195, 2);
      v42 = v190[0].m128i_i64[0];
      v43 = v193[1];
      v44 = _mm_load_si128(&v196);
      v156 = v193[0];
      v192[0].m128i_i64[0] = v190[0].m128i_i64[0];
      *(__m128i *)((char *)&v190[1] + 8) = v44;
      memset(&v192[0].m128i_u64[1], 0, 32);
      if ( !v196.m128i_i64[0] )
      {
LABEL_118:
        v191[0].m128i_i64[0] = v42;
        memset(&v191[0].m128i_u64[1], 0, 32);
        goto LABEL_73;
      }
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v196.m128i_i64[0])(
        &v192[0].m128i_u64[1],
        &v190[0].m128i_u64[1],
        2);
      *(__m128i *)((char *)&v192[1] + 8) = _mm_loadu_si128((const __m128i *)&v190[1].m128i_u64[1]);
      v191[0].m128i_i64[0] = v192[0].m128i_i64[0];
      memset(&v191[0].m128i_u64[1], 0, 32);
      if ( v190[1].m128i_i64[1] )
      {
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v190[1].m128i_i64[1])(
          &v191[0].m128i_u64[1],
          &v192[0].m128i_u64[1],
          2);
        v45 = _mm_loadu_si128((const __m128i *)&v192[1].m128i_u64[1]);
        *(__m128i *)((char *)&v191[1] + 8) = v45;
        if ( v45.m128i_i64[0] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v45.m128i_i64[0])(
            &v192[0].m128i_u64[1],
            &v192[0].m128i_u64[1],
            3);
      }
LABEL_73:
      sub_50E0A0((__int64)v156, ((v43 - v156) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)v191);
      if ( v191[1].m128i_i64[1] )
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v191[1].m128i_i64[1])(
          &v191[0].m128i_u64[1],
          &v191[0].m128i_u64[1],
          3);
      if ( v190[1].m128i_i64[1] )
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v190[1].m128i_i64[1])(
          &v190[0].m128i_u64[1],
          &v190[0].m128i_u64[1],
          3);
      v28 = (__int64 *)v193[0];
      if ( v193[0] != v193[1] )
      {
LABEL_53:
        v27 = *v28;
        v26 = v28[1];
        if ( !v189.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__int128 *, __int64, __int64))v189.m128i_i64[1])(
               &v188,
               v187[3 * *v28 + 2] + 16 * v26,
               v187[v167 + 2] + v165) )
        {
          break;
        }
        continue;
      }
      break;
    }
    if ( a3 )
    {
      v113 = a1[12];
      v114 = a1[13];
      *(_DWORD *)dest = 0;
      v115 = a1[11];
      if ( v114 < v113 + 1 )
      {
        v142 = qvector_reserve(a1 + 11, v115, v113 + 1, 4);
        a1[11] = v142;
        v115 = v142;
        v116 = a1[12];
      }
      else
      {
        v116 = v113;
      }
      *(_DWORD *)(v115 + 4 * v116) = 0;
      v117 = v175;
      v118 = (const char *)(4 * v113);
      v119 = ptr;
      ++a1[12];
      v120 = &v119[2 * v117];
      if ( v119 == v120 )
        goto LABEL_80;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v119 + 2] + 16LL * v119[1] + 8) = v113;
        v121 = &v118[a1[11]];
        v122 = 1 << *v119;
        if ( (*(_DWORD *)v121 & v122) != 0 )
          break;
        v119 += 2;
        *(_DWORD *)v121 |= v122;
        if ( v120 == v119 )
          goto LABEL_80;
      }
      switch_dbctx(*(int *)(*a1 + 4LL * *v119 + 16));
      v123 = nullptr;
      v124 = 2LL * *v119;
      v125 = a1[3 * *v119 + 3];
      if ( v125 )
      {
        v161 = (void *)*v119;
        v129 = 16 * v125;
        v123 = (void *)qalloc_or_throw(16 * v125, v118);
        memcpy(v123, (const void *)a1[(_QWORD)v161 + v124 + 2], v129);
      }
      v126 = (char *)ptr;
      v127 = (char *)ptr + 16 * v175;
      if ( v127 != ptr )
      {
        do
        {
          if ( *(_QWORD *)v126 == *v119 )
          {
            v128 = *((_QWORD *)v126 + 1);
            if ( v128 != v119[1] && *((_QWORD *)v123 + 2 * v128 + 1) == v113 )
            {
              memset(dest, 0, sizeof(dest));
              sub_3573A0((char **)dest);
              v176 = nullptr;
              v177 = 0;
              sub_3573A0((char **)&v176);
              sub_365330();
            }
          }
          v126 += 16;
        }
        while ( v127 != v126 );
      }
      if ( !under_debugger )
        interr(2171);
LABEL_261:
      BUG();
    }
    v46 = v175;
    if ( (unsigned __int64)v175 <= 1 )
      goto LABEL_80;
    v71 = (char *)ptr;
    *(_DWORD *)&dest[8] = 0;
    v179 = &dest[8];
    *(_QWORD *)&dest[16] = 0;
    v180 = &dest[8];
    v181 = 0;
    v160 = (char *)ptr + 16 * v175;
    if ( v160 == ptr )
      goto LABEL_170;
    v72 = nullptr;
    while ( 2 )
    {
      v73 = *(_QWORD *)v71;
      v74 = &dest[8];
      v75 = *(_QWORD *)(a1[3 * *(_QWORD *)v71 + 2] + 16LL * *((_QWORD *)v71 + 1) + 8);
      if ( !v72 )
        goto LABEL_142;
      do
      {
        while ( 1 )
        {
          v76 = v72[2];
          v77 = v72[3];
          if ( v72[4] < v75 )
            break;
          v74 = v72;
          v72 = (_QWORD *)v72[2];
          if ( !v76 )
            goto LABEL_140;
        }
        v72 = (_QWORD *)v72[3];
      }
      while ( v77 );
LABEL_140:
      if ( v74 == (_QWORD *)&dest[8] || v75 < v74[4] )
      {
LABEL_142:
        v78 = operator new(0x30u);
        *(_QWORD *)(v78 + 32) = v75;
        v79 = (_QWORD *)v78;
        *(_DWORD *)(v78 + 40) = 0;
        if ( v74 == (_QWORD *)&dest[8] )
        {
          if ( !v181 )
            goto LABEL_157;
          v81 = v180;
          v74 = nullptr;
          if ( *((_QWORD *)v180 + 4) >= v75 )
            goto LABEL_157;
LABEL_148:
          if ( v81 )
            goto LABEL_149;
        }
        else
        {
          v80 = v74[4];
          if ( v75 < v80 )
          {
            v81 = v74;
            if ( v179 == (_BYTE *)v74 )
              goto LABEL_148;
            v82 = std::_Rb_tree_decrement();
            v81 = (_BYTE *)v82;
            if ( *(_QWORD *)(v82 + 32) < v75 )
            {
              if ( *(_QWORD *)(v82 + 24) )
                v81 = v74;
              else
                v74 = nullptr;
              goto LABEL_148;
            }
LABEL_157:
            v74 = sub_507880((__int64)dest, v75);
            goto LABEL_148;
          }
          if ( v80 < v75 )
          {
            if ( v180 != (_BYTE *)v74 )
            {
              v83 = std::_Rb_tree_increment();
              v81 = (_BYTE *)v83;
              if ( v75 >= *(_QWORD *)(v83 + 32) )
                goto LABEL_157;
              if ( v74[3] )
              {
                v74 = (_QWORD *)v83;
                goto LABEL_148;
              }
            }
            if ( v74 )
            {
LABEL_149:
              v74 = v79;
              std::_Rb_tree_insert_and_rebalance();
              ++v181;
              goto LABEL_150;
            }
          }
        }
        if ( v79 )
          operator delete(v79, 0x30u);
LABEL_150:
        v73 = *(_QWORD *)v71;
      }
      v71 += 16;
      *((_DWORD *)v74 + 10) |= 1 << v73;
      if ( v160 != v71 )
      {
        v72 = *(_QWORD **)&dest[16];
        continue;
      }
      break;
    }
    v106 = (__int64)v179;
    while ( (_BYTE *)v106 != &dest[8] )
    {
      v107 = *(_DWORD *)(v106 + 40);
      v108 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v106 + 32));
      v106 = std::_Rb_tree_increment();
      if ( v108 != v107 )
      {
        v109 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v109, 0x30u);
        --v181;
      }
    }
    v46 = v175;
    v71 = (char *)ptr;
    v87 = (char *)ptr;
    v88 = (char *)ptr + 16 * v175;
    if ( v88 != ptr )
    {
      do
      {
        v84 = v87 + 16;
        v110 = *(_QWORD *)(a1[3 * *(_QWORD *)v87 + 2] + 16LL * *((_QWORD *)v87 + 1) + 8);
        v111 = *(_QWORD **)&dest[16];
        if ( !*(_QWORD *)&dest[16] )
          goto LABEL_165;
        v112 = &dest[8];
        do
        {
          if ( v111[4] >= v110 )
          {
            v112 = v111;
            v111 = (_QWORD *)v111[2];
          }
          else
          {
            v111 = (_QWORD *)v111[3];
          }
        }
        while ( v111 );
        v84 = v87 + 16;
        if ( v112 != &dest[8] && v110 >= *((_QWORD *)v112 + 4) )
        {
          v46 = v175;
          v87 += 16;
        }
        else
        {
LABEL_165:
          v85 = v88 - v87;
          if ( (v85 >> 4) - 2 >= 0 )
          {
            v86 = (char *)memmove(v87, v84, v85 - 16);
            v71 = (char *)ptr;
            v87 = v86;
          }
          v46 = v175 - 1;
          *(_QWORD *)&v175 = v175 - 1;
        }
        v88 = &v71[16 * v46];
      }
      while ( v87 != v88 );
    }
    if ( v46 )
    {
      while ( 1 )
      {
LABEL_170:
        v89 = 16 * v46;
        v90 = *(_QWORD *)v71;
        v91 = *((_QWORD *)v71 + 1);
        v92 = (__int64 *)v71;
        if ( (v89 >> 4) - 2 >= 0 )
        {
          memmove(v71, v71 + 16, v89 - 16);
          v71 = (char *)ptr;
          v92 = (__int64 *)ptr;
        }
        v93 = a1[1];
        v94 = a1[3 * v90 + 2] + 16 * v91;
        v46 = v175 - 1;
        *(_QWORD *)&v175 = v175 - 1;
        v95 = *(_QWORD *)(v94 + 8);
        if ( v93 )
        {
          v96 = 0;
          v97 = *(_DWORD *)(a1[11] + 4 * v95);
          do
          {
            v98 = -1;
            if ( (v97 & (1 << v96)) != 0 )
              v98 = v95;
            v192[0].m128i_i64[v96++] = v98;
          }
          while ( v96 != v93 );
        }
        if ( 16 * v46 )
          break;
LABEL_188:
        if ( !v46 )
          goto LABEL_189;
      }
      while ( 1 )
      {
        v100 = *v92;
        v101 = a1[3 * *v92 + 2] + 16 * v92[1];
        v102 = *(_QWORD *)(v101 + 8);
        if ( v192[0].m128i_i64[*v92] == -1 )
        {
          v103 = a1[11];
          v192[0].m128i_i64[v100] = v102;
          *(_DWORD *)(v103 + 4 * v102) &= ~(1 << v100);
          if ( !*(_DWORD *)(a1[11] + 4 * v102) )
            ++a1[14];
          *(_QWORD *)(v101 + 8) = v95;
          *(_DWORD *)(4 * v95 + a1[11]) |= 1 << *v92;
          v104 = *(_QWORD *)(v101 + 8);
          v99 = (char *)(v92 + 2);
          v71 = (char *)ptr;
          v46 = v175;
          if ( v95 != v104 )
          {
LABEL_180:
            v92 = (__int64 *)v99;
            if ( v99 == &v71[16 * v46] )
              goto LABEL_188;
            continue;
          }
        }
        else
        {
          v46 = v175;
          v99 = (char *)(v92 + 2);
          if ( v95 != v102 )
            goto LABEL_180;
        }
        if ( ((&v71[16 * v46] - (char *)v92) >> 4) - 2 >= 0 )
        {
          v105 = (__int64 *)memmove(v92, v99, &v71[16 * v46] - (char *)v92 - 16);
          v71 = (char *)ptr;
          v92 = v105;
          v46 = v175;
        }
        *(_QWORD *)&v175 = --v46;
        if ( v92 == (__int64 *)&v71[16 * v46] )
          goto LABEL_188;
      }
    }
LABEL_189:
    sub_507D40(*(_QWORD **)&dest[16]);
LABEL_80:
    v25 = (__int64 *)v193[0];
    if ( v193[1] != v193[0] )
      continue;
    break;
  }
LABEL_81:
  if ( ptr )
  {
    *(_QWORD *)&v175 = 0;
    qfree(ptr);
  }
  if ( v196.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v196.m128i_i64[0])(v195, v195, 3);
  if ( v193[0] )
    operator delete(v193[0], v194.m128i_i64[0] - (unsigned __int64)v193[0]);
  if ( v189.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v189.m128i_i64[0])(&v188, &v188, 3);
  if ( v186.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v186.m128i_i64[0])(&v185, &v185, 3);
  if ( v183.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v183.m128i_i64[0])(&v182, &v182, 3);
  return v197 - __readfsqword(0x28u);
}

