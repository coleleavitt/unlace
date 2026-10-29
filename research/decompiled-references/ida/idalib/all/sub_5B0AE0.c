unsigned __int64 __fastcall sub_5B0AE0(_QWORD *a1, const __m128i *a2, char a3)
{
  void (__fastcall *v4)(__int128 *, const __m128i *, __int64); // rax
  __m128i v5; // xmm0
  void (__fastcall *v6)(__int128 *, const __m128i *, __int64); // rax
  __m128i v7; // xmm0
  void (__fastcall *v8)(__int128 *, const __m128i *, __int64); // rax
  unsigned __int64 v9; // r12
  __int64 *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r14
  __m128i si128; // xmm0
  void (__fastcall *v14)(__m128i *, __m128i *, __int64); // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rdx
  const __m128i *v19; // rbp
  __int64 v20; // rax
  __m128i v21; // xmm0
  _BYTE *v22; // r8
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __int64 *v25; // rax
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v28; // r14
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r15
  __m128i *v33; // r14
  char *m128i_i8; // rax
  const __m128i *v35; // r10
  char *v36; // rax
  unsigned __int64 v37; // r12
  __m128i *v38; // rcx
  void (__fastcall *v39)(unsigned __int64 *, unsigned __int64 *, __int64); // rax
  __m128i *v40; // rax
  const __m128i *v41; // r14
  char *v42; // r15
  __int64 v43; // rax
  _BYTE *v44; // r12
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __int64 v47; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // r15
  __m128i *v52; // r8
  unsigned __int64 v53; // rbp
  void *v54; // rcx
  __m128i *v55; // rdi
  __int64 v56; // rax
  __m128i *v57; // rdx
  __m128i v58; // xmm0
  bool v59; // cf
  __m128i v60; // xmm0
  __int64 v61; // r13
  __int64 v62; // rax
  unsigned __int64 v63; // r13
  unsigned __int64 v64; // r13
  __m128i *v65; // rax
  __m128i *v66; // rdx
  __m128i *v67; // rsi
  const __m128i *v68; // rcx
  __m128i v69; // xmm0
  char *v70; // rbp
  void *v71; // rbp
  char *v72; // r15
  _QWORD *v73; // rax
  __int64 v74; // rcx
  _QWORD *v75; // r14
  __int64 v76; // rsi
  unsigned __int64 v77; // rbp
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  _QWORD *v81; // r12
  unsigned __int64 v82; // rcx
  _BYTE *v83; // rdx
  __int64 v84; // rax
  _BOOL8 v85; // rdi
  __int64 v86; // rax
  const void *v87; // rsi
  __int64 v88; // rcx
  char *v89; // rax
  char *v90; // rdi
  char *v91; // rcx
  __int64 v92; // rax
  __int64 v93; // r13
  __int64 v94; // rbp
  __int64 *v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // r13
  __int64 v99; // rcx
  int v100; // r10d
  __int64 v101; // rdx
  bool v102; // zf
  char *v103; // rsi
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rsi
  __int64 *v108; // rax
  __int64 v109; // r14
  __int64 v110; // rdx
  __int64 v111; // rbp
  int v112; // r15d
  int v113; // r12d
  void *v114; // rax
  unsigned __int64 v115; // r8
  _QWORD *v116; // rax
  _BYTE *v117; // r9
  __int64 v118; // r14
  unsigned __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rax
  __int64 v122; // rdi
  char *v123; // r8
  char *v124; // rdi
  char *v125; // r13
  _DWORD *v126; // r8
  int v127; // eax
  __int64 v128; // rsi
  __int64 v129; // r12
  void *v130; // rax
  char *v131; // rbp
  char *v132; // rdx
  __int64 v133; // rax
  __int64 v134; // r15
  __int64 v135; // r14
  void *v136; // rbx
  __int64 v137; // r14
  __int64 v138; // rdx
  void *v139; // rbp
  __int64 v140; // r15
  void *v141; // rcx
  _QWORD *v142; // rbx
  __int64 v143; // rdx
  const void **v144; // r9
  void *v145; // rax
  __m128i *v146; // r13
  signed __int64 v147; // r15
  signed __int64 v148; // rax
  signed __int64 v149; // rdx
  unsigned __int64 v150; // rax
  char *v151; // rax
  char *v152; // r15
  char *v153; // r14
  __m128i *v154; // rdx
  const __m128i *v155; // rax
  __m128i v156; // xmm0
  char *v157; // rbp
  void *v158; // rbp
  __int64 v159; // rax
  __m128i *v160; // r12
  __int64 v161; // r13
  __m128i *v162; // rdi
  __int64 v163; // rax
  __m128i *v164; // rdx
  __m128i v165; // xmm0
  void **v166; // rdi
  __int64 i; // rcx
  __int64 v168; // rcx
  __int128 *v169; // rdi
  void *v170; // [rsp+0h] [rbp-238h]
  _BYTE *v171; // [rsp+0h] [rbp-238h]
  char *v172; // [rsp+0h] [rbp-238h]
  _BYTE *v173; // [rsp+0h] [rbp-238h]
  void *v174; // [rsp+0h] [rbp-238h]
  const __m128i *v175; // [rsp+0h] [rbp-238h]
  char *v176; // [rsp+0h] [rbp-238h]
  char *v177; // [rsp+0h] [rbp-238h]
  void *v178; // [rsp+0h] [rbp-238h]
  __int64 v179; // [rsp+0h] [rbp-238h]
  _BYTE *n; // [rsp+8h] [rbp-230h]
  size_t na; // [rsp+8h] [rbp-230h]
  size_t nb; // [rsp+8h] [rbp-230h]
  size_t v184; // [rsp+10h] [rbp-228h]
  size_t v185; // [rsp+10h] [rbp-228h]
  const void **v186; // [rsp+10h] [rbp-228h]
  __int64 v187; // [rsp+18h] [rbp-220h]
  unsigned __int64 v188; // [rsp+18h] [rbp-220h]
  void *v189; // [rsp+18h] [rbp-220h]
  __int64 v190; // [rsp+20h] [rbp-218h]
  __int64 v191; // [rsp+20h] [rbp-218h]
  const __m128i *v193; // [rsp+28h] [rbp-210h]
  __m128i *v194; // [rsp+28h] [rbp-210h]
  signed __int64 v195; // [rsp+28h] [rbp-210h]
  __m128i *v196; // [rsp+30h] [rbp-208h]
  const __m128i *v197; // [rsp+30h] [rbp-208h]
  void *ptr; // [rsp+50h] [rbp-1E8h] BYREF
  __int128 v199; // [rsp+58h] [rbp-1E0h]
  _BYTE dest[24]; // [rsp+70h] [rbp-1C8h] BYREF
  _BYTE *v201; // [rsp+88h] [rbp-1B0h]
  _BYTE *v202; // [rsp+90h] [rbp-1A8h]
  __int64 v203; // [rsp+98h] [rbp-1A0h]
  __int128 v204; // [rsp+A0h] [rbp-198h] BYREF
  __m128i v205; // [rsp+B0h] [rbp-188h] BYREF
  _QWORD *v206; // [rsp+C0h] [rbp-178h] BYREF
  __int128 v207; // [rsp+C8h] [rbp-170h] BYREF
  __m128i v208; // [rsp+D8h] [rbp-160h]
  _QWORD *v209; // [rsp+F0h] [rbp-148h]
  __int128 v210; // [rsp+F8h] [rbp-140h] BYREF
  __m128i v211; // [rsp+108h] [rbp-130h]
  __m128i v212[3]; // [rsp+120h] [rbp-118h] BYREF
  __m128i v213[3]; // [rsp+150h] [rbp-E8h] BYREF
  __m128i v214[3]; // [rsp+180h] [rbp-B8h] BYREF
  void *v215[2]; // [rsp+1B0h] [rbp-88h] BYREF
  __m128i v216; // [rsp+1C0h] [rbp-78h] BYREF
  _BYTE v217[16]; // [rsp+1D0h] [rbp-68h] BYREF
  __m128i v218; // [rsp+1E0h] [rbp-58h] BYREF
  unsigned __int64 v219; // [rsp+1F8h] [rbp-40h]

  v219 = __readfsqword(0x28u);
  v4 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
  v204 = 0;
  v205 = 0u;
  if ( v4 )
  {
    v4(&v204, a2, 2);
    v5 = _mm_loadu_si128(a2 + 1);
    v6 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
    v206 = a1;
    v208 = 0u;
    v205 = v5;
    v207 = 0;
    if ( v6 )
    {
      v6(&v207, a2, 2);
      v7 = _mm_loadu_si128(a2 + 1);
      v8 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
      v209 = a1;
      v211 = 0u;
      v208 = v7;
      v210 = 0;
      if ( v8 )
      {
        v8(&v210, a2, 2);
        v211 = _mm_loadu_si128(a2 + 1);
      }
    }
    else
    {
      v168 = 6;
      v209 = a1;
      v169 = &v210;
      while ( v168 )
      {
        *(_DWORD *)v169 = 0;
        v169 = (__int128 *)((char *)v169 + 4);
        --v168;
      }
      v211.m128i_i64[1] = 0;
    }
  }
  else
  {
    v206 = a1;
    v208 = 0u;
    v209 = a1;
    v211 = 0u;
    v207 = 0;
    v210 = 0;
  }
  v9 = 0;
  v10 = a1 + 2;
  if ( a1[1] )
  {
    while ( 1 )
    {
      switch_dbctx(*(int *)(*a1 + 4 * v9 + 16));
      memset(v212, 0, 32);
      if ( !v205.m128i_i64[0] )
        break;
      ((void (__fastcall *)(__m128i *, __int128 *, __int64))v205.m128i_i64[0])(v212, &v204, 2);
      v11 = v10[1];
      v12 = *v10;
      v212[1] = _mm_load_si128(&v205);
      v190 = 40 * v11;
      v170 = (void *)(v12 + 40 * v11);
      memset(v213, 0, 32);
      if ( !v205.m128i_i64[0] )
        goto LABEL_95;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v205.m128i_i64[0])(v213, v212, 2);
      si128 = _mm_load_si128(&v212[1]);
      v216 = 0u;
      v213[1] = si128;
      *(_OWORD *)v215 = 0;
      if ( !v212[1].m128i_i64[0] )
        goto LABEL_95;
      ((void (__fastcall *)(void **, __m128i *, __int64))v212[1].m128i_i64[0])(v215, v213, 2);
      v216 = _mm_load_si128(&v213[1]);
      memset(v214, 0, 32);
      if ( !v213[1].m128i_i64[0] )
        goto LABEL_96;
      ((void (__fastcall *)(__m128i *, void **, __int64))v213[1].m128i_i64[0])(v214, v215, 2);
      v214[1] = _mm_load_si128(&v216);
      if ( v216.m128i_i64[0] )
      {
        ((void (__fastcall *)(void **, void **, __int64))v216.m128i_i64[0])(v215, v215, 3);
        v14 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v214[1].m128i_i64[0];
        if ( v170 != (void *)v12 )
        {
          v216 = 0u;
          *(_OWORD *)v215 = 0;
          if ( v214[1].m128i_i64[0] )
          {
            ((void (__fastcall *)(void **, __m128i *, __int64))v214[1].m128i_i64[0])(v215, v214, 2);
            v216 = _mm_load_si128(&v214[1]);
          }
LABEL_14:
          v15 = -2;
          v16 = 0xCCCCCCCCCCCCCCCDLL * (v190 >> 3);
          if ( v16 )
          {
            _BitScanReverse64(&v16, v16);
            v15 = 2LL * (int)v16;
          }
          sub_5B02C0(v12, (__int64)v170, v15, (const __m128i *)v215);
          if ( v216.m128i_i64[0] )
            ((void (__fastcall *)(void **, void **, __int64))v216.m128i_i64[0])(v215, v215, 3);
          v216 = 0u;
          *(_OWORD *)v215 = 0;
          if ( v214[1].m128i_i64[0] )
          {
            ((void (__fastcall *)(void **, __m128i *, __int64))v214[1].m128i_i64[0])(v215, v214, 2);
            v216 = _mm_load_si128(&v214[1]);
          }
          sub_5AF920(v12, (__int64)v170, (const __m128i *)v215);
          if ( v216.m128i_i64[0] )
            ((void (__fastcall *)(void **, void **, __int64))v216.m128i_i64[0])(v215, v215, 3);
          v14 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v214[1].m128i_i64[0];
        }
        if ( v14 )
          v14(v214, v214, 3);
        goto LABEL_25;
      }
      if ( v170 != (void *)v12 )
      {
        v166 = v215;
        for ( i = 6; i; --i )
        {
          *(_DWORD *)v166 = 0;
          v166 = (void **)((char *)v166 + 4);
        }
        v216.m128i_i64[1] = 0;
        goto LABEL_14;
      }
LABEL_25:
      if ( v213[1].m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v213[1].m128i_i64[0])(v213, v213, 3);
      if ( v212[1].m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v212[1].m128i_i64[0])(v212, v212, 3);
      ++v9;
      v10 += 3;
      if ( v9 >= a1[1] )
        goto LABEL_30;
    }
    v49 = v10[1];
    v12 = *v10;
    memset(v213, 0, 32);
    v190 = 40 * v49;
    v170 = (void *)(v12 + 40 * v49);
LABEL_95:
    memset(v214, 0, 32);
LABEL_96:
    if ( (void *)v12 != v170 )
    {
      v216 = 0u;
      *(_OWORD *)v215 = 0;
      goto LABEL_14;
    }
    goto LABEL_25;
  }
LABEL_30:
  memset(dest, 0, sizeof(dest));
  sub_5AEBB0((__int64)v215, (__int64)&v206, (const __m128i *)dest);
  if ( *(_QWORD *)dest )
    operator delete(*(void **)dest, *(_QWORD *)&dest[16] - *(_QWORD *)dest);
  if ( !a1[1] )
  {
    ptr = nullptr;
    v199 = 0;
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
    v19 = (const __m128i *)v215[1];
    if ( v215[1] == (void *)v216.m128i_i64[0] )
    {
      v146 = (__m128i *)v215[0];
      v147 = (char *)v215[1] - (char *)v215[0];
      v148 = ((char *)v215[1] - (char *)v215[0]) >> 4;
      if ( v148 == 0x7FFFFFFFFFFFFFFLL )
        std::__throw_length_error("vector::_M_realloc_append");
      v149 = 1;
      if ( v148 )
        v149 = ((char *)v215[1] - (char *)v215[0]) >> 4;
      v59 = __CFADD__(v149, v148);
      v150 = v149 + v148;
      if ( v59 )
      {
        v179 = 0x7FFFFFFFFFFFFFF0LL;
        v151 = (char *)operator new(0x7FFFFFFFFFFFFFF0uLL);
      }
      else
      {
        if ( v150 > 0x7FFFFFFFFFFFFFFLL )
          v150 = 0x7FFFFFFFFFFFFFFLL;
        v179 = 16 * v150;
        v151 = (char *)operator new(16 * v150);
      }
      v152 = &v151[v147];
      v153 = v151;
      *(_QWORD *)v152 = v17;
      *((_QWORD *)v152 + 1) = 0;
      if ( v19 == v146 )
      {
        v157 = v151;
      }
      else
      {
        v154 = (__m128i *)v151;
        v155 = v146;
        do
        {
          v156 = _mm_loadu_si128(v155++);
          ++v154;
          v154[-1] = v156;
        }
        while ( v19 != v155 );
        v157 = &v153[(char *)v19 - (char *)v146];
      }
      v158 = v157 + 16;
      if ( v146 )
        operator delete(v146, v216.m128i_i64[0] - (_QWORD)v146);
      v215[0] = v153;
      v215[1] = v158;
      v216.m128i_i64[0] = (__int64)&v153[v179];
    }
    else
    {
      *(_QWORD *)v215[1] = v17;
      v19->m128i_i64[1] = 0;
      v215[1] = (char *)v215[1] + 16;
    }
    v20 = v216.m128i_i64[1];
    v212[0].m128i_i64[0] = v216.m128i_i64[1];
    memset(&v212[0].m128i_u64[1], 0, 32);
    if ( !v218.m128i_i64[0] )
    {
      v22 = v215[1];
      v171 = v215[0];
LABEL_229:
      v213[0].m128i_i64[0] = v20;
      memset(&v213[0].m128i_u64[1], 0, 32);
      goto LABEL_43;
    }
    ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v218.m128i_i64[0])(&v212[0].m128i_u64[1], v217, 2);
    v21 = _mm_load_si128(&v218);
    v20 = v212[0].m128i_i64[0];
    v214[0].m128i_i64[0] = v212[0].m128i_i64[0];
    v22 = v215[1];
    v171 = v215[0];
    *(__m128i *)((char *)&v212[1] + 8) = v21;
    memset(&v214[0].m128i_u64[1], 0, 32);
    if ( !v218.m128i_i64[0] )
      goto LABEL_229;
    n = v215[1];
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v218.m128i_i64[0])(
      &v214[0].m128i_u64[1],
      &v212[0].m128i_u64[1],
      2);
    v23 = _mm_loadu_si128((const __m128i *)&v212[1].m128i_u64[1]);
    v22 = n;
    v213[0].m128i_i64[0] = v214[0].m128i_i64[0];
    *(__m128i *)((char *)&v214[1] + 8) = v23;
    memset(&v213[0].m128i_u64[1], 0, 32);
    if ( v212[1].m128i_i64[1] )
    {
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v212[1].m128i_i64[1])(
        &v213[0].m128i_u64[1],
        &v214[0].m128i_u64[1],
        2);
      v24 = _mm_loadu_si128((const __m128i *)&v214[1].m128i_u64[1]);
      v22 = n;
      *(__m128i *)((char *)&v213[1] + 8) = v24;
      if ( v24.m128i_i64[0] )
      {
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v24.m128i_i64[0])(
          &v214[0].m128i_u64[1],
          &v214[0].m128i_u64[1],
          3);
        v22 = n;
      }
    }
LABEL_43:
    sub_5AE7A0((__int64)v171, ((v22 - v171) >> 4) - 1, 0, *((_QWORD *)v22 - 2), *((_QWORD *)v22 - 1), (__int64)v213);
    if ( v213[1].m128i_i64[1] )
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v213[1].m128i_i64[1])(
        &v213[0].m128i_u64[1],
        &v213[0].m128i_u64[1],
        3);
    if ( !v212[1].m128i_i64[1] )
      goto LABEL_34;
    ++v17;
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v212[1].m128i_i64[1])(
      &v212[0].m128i_u64[1],
      &v212[0].m128i_u64[1],
      3);
    v18 = a1[1];
  }
  while ( v17 < v18 );
LABEL_47:
  ptr = nullptr;
  v199 = 0;
  if ( v18 )
  {
    v160 = (__m128i *)qvector_reserve(&ptr, 0, v18, 16);
    v161 = *((_QWORD *)&v199 + 1);
    *((_QWORD *)&v199 + 1) = 0;
    v162 = (__m128i *)ptr;
    v163 = v199 - 1;
    if ( (__int64)v199 - 1 >= 0 )
    {
      v164 = v160;
      do
      {
        v165 = _mm_loadu_si128(v162);
        ++v164;
        ++v162;
        v164[-1] = v165;
        v59 = v163-- == 0;
      }
      while ( !v59 );
      v162 = (__m128i *)ptr;
    }
    qfree(v162);
    ptr = v160;
    *((_QWORD *)&v199 + 1) = v161;
  }
LABEL_48:
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      interr(1961);
    goto LABEL_276;
  }
  v25 = (__int64 *)v215[0];
  if ( v215[0] == v215[1] )
    goto LABEL_81;
  while ( 2 )
  {
    *(_QWORD *)&v199 = 0;
    v26 = v25[1];
    v27 = *v25;
    v28 = 4 * v26;
    v187 = 40 * v26;
    v191 = 3 * *v25;
    while ( 2 )
    {
      if ( a3 )
        goto LABEL_58;
      v30 = *(_QWORD *)(a1[3 * v27 + 2] + 8 * (v26 + v28) + 32);
      if ( v30 < 0 )
      {
        if ( !under_debugger )
          interr(2170);
        goto LABEL_276;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v30) != (1 << a1[1]) - 1 )
      {
LABEL_58:
        v32 = *((_QWORD *)&v199 + 1);
        v31 = v199;
        if ( *((_QWORD *)&v199 + 1) < (unsigned __int64)(v199 + 1) )
        {
          v33 = (__m128i *)qvector_reserve(&ptr, 0, v199 + 1, 16);
          v54 = *((void **)&v199 + 1);
          *((_QWORD *)&v199 + 1) = v32;
          v55 = (__m128i *)ptr;
          v56 = v199 - 1;
          if ( (__int64)v199 - 1 >= 0 )
          {
            v57 = v33;
            do
            {
              v58 = _mm_loadu_si128(v55);
              ++v57;
              ++v55;
              v57[-1] = v58;
              v59 = v56-- == 0;
            }
            while ( !v59 );
            v55 = (__m128i *)ptr;
          }
          v174 = v54;
          qfree(v55);
          v31 = v199;
          ptr = v33;
          *((_QWORD *)&v199 + 1) = v174;
        }
        else
        {
          v33 = (__m128i *)ptr;
        }
        m128i_i8 = v33[v31].m128i_i8;
        *(_QWORD *)m128i_i8 = v27;
        *((_QWORD *)m128i_i8 + 1) = v26;
        *(_QWORD *)&v199 = v199 + 1;
      }
      v35 = (const __m128i *)v215[0];
      v36 = *((char **)v215[0] + 1);
      v37 = *(_QWORD *)v215[0];
      memset(&v212[0].m128i_u64[1], 0, 32);
      v172 = v36;
      v212[0].m128i_i64[0] = v216.m128i_i64[1];
      if ( v218.m128i_i64[0] )
      {
        ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v218.m128i_i64[0])(&v212[0].m128i_u64[1], v217, 2);
        v38 = (__m128i *)v215[1];
        v35 = (const __m128i *)v215[0];
        v39 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v218.m128i_i64[0];
        *(__m128i *)((char *)&v212[1] + 8) = _mm_load_si128(&v218);
        if ( (char *)v215[1] - (char *)v215[0] <= 16 )
          goto LABEL_63;
        v50 = v212[0].m128i_i64[0];
        v214[0].m128i_i64[0] = v212[0].m128i_i64[0];
        memset(&v214[0].m128i_u64[1], 0, 32);
        if ( v218.m128i_i64[0] )
        {
          v197 = (const __m128i *)v215[0];
          v194 = (__m128i *)v215[1];
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v218.m128i_i64[0])(
            &v214[0].m128i_u64[1],
            &v212[0].m128i_u64[1],
            2);
          v38 = v194;
          *(__m128i *)((char *)&v214[1] + 8) = _mm_loadu_si128((const __m128i *)&v212[1].m128i_u64[1]);
          v35 = v197;
          v213[0].m128i_i64[0] = v214[0].m128i_i64[0];
          memset(&v213[0].m128i_u64[1], 0, 32);
          if ( v212[1].m128i_i64[1] )
          {
            ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v212[1].m128i_i64[1])(
              &v213[0].m128i_u64[1],
              &v214[0].m128i_u64[1],
              2);
            v60 = _mm_loadu_si128((const __m128i *)&v214[1].m128i_u64[1]);
            v38 = v194;
            v35 = v197;
            *(__m128i *)((char *)&v213[1] + 8) = v60;
            if ( v60.m128i_i64[0] )
            {
              ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v60.m128i_i64[0])(
                &v214[0].m128i_u64[1],
                &v214[0].m128i_u64[1],
                3);
              v35 = v197;
              v38 = v194;
            }
          }
          goto LABEL_101;
        }
LABEL_100:
        v213[0].m128i_i64[0] = v50;
        memset(&v213[0].m128i_u64[1], 0, 32);
LABEL_101:
        v51 = v38[-1].m128i_u64[0];
        v52 = v38 - 1;
        v53 = v38[-1].m128i_u64[1];
        v38[-1] = _mm_loadu_si128(v35);
        v214[0].m128i_i64[0] = v213[0].m128i_i64[0];
        memset(&v214[0].m128i_u64[1], 0, 32);
        if ( v213[1].m128i_i64[1] )
        {
          v196 = v38 - 1;
          v193 = v35;
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v213[1].m128i_i64[1])(
            &v214[0].m128i_u64[1],
            &v213[0].m128i_u64[1],
            2);
          v52 = v196;
          v35 = v193;
          *(__m128i *)((char *)&v214[1] + 8) = _mm_loadu_si128((const __m128i *)&v213[1].m128i_u64[1]);
        }
        sub_5AE8F0((__int64)v35, 0, v52 - v35, v51, v53, v214[0].m128i_i64);
        if ( v214[1].m128i_i64[1] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v214[1].m128i_i64[1])(
            &v214[0].m128i_u64[1],
            &v214[0].m128i_u64[1],
            3);
        if ( v213[1].m128i_i64[1] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v213[1].m128i_i64[1])(
            &v213[0].m128i_u64[1],
            &v213[0].m128i_u64[1],
            3);
        v39 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v212[1].m128i_i64[1];
LABEL_63:
        if ( v39 )
          v39(&v212[0].m128i_u64[1], &v212[0].m128i_u64[1], 3);
      }
      else
      {
        v38 = (__m128i *)v215[1];
        if ( (char *)v215[1] - (char *)v215[0] > 16 )
        {
          v50 = v216.m128i_i64[1];
          goto LABEL_100;
        }
      }
      v40 = (__m128i *)v215[1];
      v41 = (const __m128i *)((char *)v215[1] - 16);
      v42 = v172 + 1;
      v215[1] = (char *)v215[1] - 16;
      if ( (unsigned __int64)(v172 + 1) >= a1[3 * v37 + 3] )
      {
        v29 = (__int64 *)v215[0];
        if ( v215[0] == v41 )
          break;
        goto LABEL_53;
      }
      if ( v41 == (const __m128i *)v216.m128i_i64[0] )
      {
        v61 = ((char *)v41 - (char *)v215[0]) >> 4;
        if ( v61 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v62 = 1;
        if ( v61 )
          v62 = ((char *)v41 - (char *)v215[0]) >> 4;
        v59 = __CFADD__(v62, v61);
        v63 = v62 + v61;
        if ( v59 )
        {
          v64 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v63 > 0x7FFFFFFFFFFFFFFLL )
            v63 = 0x7FFFFFFFFFFFFFFLL;
          v64 = v63;
        }
        v195 = (char *)v41 - (char *)v215[0];
        v175 = (const __m128i *)v215[0];
        v65 = (__m128i *)operator new(v64 * 16);
        v66 = (__m128i *)v175;
        *(__m128i *)((char *)v65 + v195) = _mm_unpacklo_epi64((__m128i)v37, (__m128i)(unsigned __int64)v42);
        if ( v41 == v175 )
        {
          v70 = (char *)v65;
        }
        else
        {
          v67 = v65;
          v68 = v175;
          do
          {
            v69 = _mm_loadu_si128(v68++);
            ++v67;
            v67[-1] = v69;
          }
          while ( v41 != v68 );
          v70 = &v65->m128i_i8[(char *)v41 - (char *)v175];
        }
        v71 = v70 + 16;
        if ( v175 )
        {
          v176 = (char *)v65;
          operator delete(v66, v216.m128i_i64[0] - (_QWORD)v66);
          v65 = (__m128i *)v176;
        }
        v215[0] = v65;
        v215[1] = v71;
        v216.m128i_i64[0] = (__int64)v65[v64].m128i_i64;
      }
      else
      {
        v40[-1] = _mm_unpacklo_epi64((__m128i)v37, (__m128i)(unsigned __int64)v42);
        v215[1] = (char *)v215[1] + 16;
      }
      v43 = v216.m128i_i64[1];
      v212[0].m128i_i64[0] = v216.m128i_i64[1];
      memset(&v212[0].m128i_u64[1], 0, 32);
      if ( !v218.m128i_i64[0] )
      {
        v44 = v215[1];
        v173 = v215[0];
        goto LABEL_118;
      }
      ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v218.m128i_i64[0])(&v212[0].m128i_u64[1], v217, 2);
      v43 = v212[0].m128i_i64[0];
      v44 = v215[1];
      v45 = _mm_load_si128(&v218);
      v173 = v215[0];
      v214[0].m128i_i64[0] = v212[0].m128i_i64[0];
      *(__m128i *)((char *)&v212[1] + 8) = v45;
      memset(&v214[0].m128i_u64[1], 0, 32);
      if ( !v218.m128i_i64[0] )
      {
LABEL_118:
        v213[0].m128i_i64[0] = v43;
        memset(&v213[0].m128i_u64[1], 0, 32);
        goto LABEL_73;
      }
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v218.m128i_i64[0])(
        &v214[0].m128i_u64[1],
        &v212[0].m128i_u64[1],
        2);
      *(__m128i *)((char *)&v214[1] + 8) = _mm_loadu_si128((const __m128i *)&v212[1].m128i_u64[1]);
      v213[0].m128i_i64[0] = v214[0].m128i_i64[0];
      memset(&v213[0].m128i_u64[1], 0, 32);
      if ( v212[1].m128i_i64[1] )
      {
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v212[1].m128i_i64[1])(
          &v213[0].m128i_u64[1],
          &v214[0].m128i_u64[1],
          2);
        v46 = _mm_loadu_si128((const __m128i *)&v214[1].m128i_u64[1]);
        *(__m128i *)((char *)&v213[1] + 8) = v46;
        if ( v46.m128i_i64[0] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v46.m128i_i64[0])(
            &v214[0].m128i_u64[1],
            &v214[0].m128i_u64[1],
            3);
      }
LABEL_73:
      sub_5AE7A0((__int64)v173, ((v44 - v173) >> 4) - 1, 0, *((_QWORD *)v44 - 2), *((_QWORD *)v44 - 1), (__int64)v213);
      if ( v213[1].m128i_i64[1] )
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v213[1].m128i_i64[1])(
          &v213[0].m128i_u64[1],
          &v213[0].m128i_u64[1],
          3);
      if ( v212[1].m128i_i64[1] )
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v212[1].m128i_i64[1])(
          &v212[0].m128i_u64[1],
          &v212[0].m128i_u64[1],
          3);
      v29 = (__int64 *)v215[0];
      if ( v215[0] != v215[1] )
      {
LABEL_53:
        v27 = *v29;
        v26 = v29[1];
        v28 = 4 * v26;
        if ( !v211.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__int128 *, __int64, __int64))v211.m128i_i64[1])(
               &v210,
               v209[3 * *v29 + 2] + 40 * v26,
               v209[v191 + 2] + v187) )
        {
          break;
        }
        continue;
      }
      break;
    }
    if ( a3 )
    {
      v118 = a1[12];
      v119 = a1[13];
      *(_DWORD *)dest = 0;
      v120 = a1[11];
      if ( v119 < v118 + 1 )
      {
        v159 = qvector_reserve(a1 + 11, v120, v118 + 1, 4);
        a1[11] = v159;
        v120 = v159;
        v121 = a1[12];
      }
      else
      {
        v121 = v118;
      }
      *(_DWORD *)(v120 + 4 * v121) = 0;
      v122 = v199;
      v123 = (char *)ptr;
      ++a1[12];
      v124 = &v123[16 * v122];
      v125 = v123;
      if ( v123 == v124 )
        goto LABEL_80;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *(_QWORD *)v125 + 2] + 40LL * *((_QWORD *)v125 + 1) + 32) = v118;
        v126 = (_DWORD *)(4 * v118 + a1[11]);
        v127 = 1 << *(_QWORD *)v125;
        if ( (*v126 & v127) != 0 )
          break;
        v125 += 16;
        *v126 |= v127;
        if ( v124 == v125 )
          goto LABEL_80;
      }
      switch_dbctx(*(int *)(*a1 + 4LL * *(_QWORD *)v125 + 16));
      v128 = *(_QWORD *)v125;
      v129 = 0;
      v130 = (void *)a1[3 * *(_QWORD *)v125 + 3];
      v178 = v130;
      if ( v130 )
      {
        v185 = 2LL * *(_QWORD *)v125;
        v129 = qalloc_or_throw(40LL * (_QWORD)v130);
        v140 = v129;
        v141 = nullptr;
        v142 = &a1[v185 + v128];
        do
        {
          v143 = v142[2];
          *(_QWORD *)v140 = 0;
          *(_OWORD *)(v140 + 8) = 0;
          v144 = (const void **)(v143 + 40LL * (_QWORD)v141);
          if ( v144[1] )
          {
            v189 = v141;
            v186 = (const void **)(v143 + 40LL * (_QWORD)v141);
            nb = (size_t)v144[1];
            v145 = (void *)qalloc_or_throw(nb);
            *(_QWORD *)v140 = v145;
            *(_QWORD *)(v140 + 16) = nb;
            memcpy(v145, *v186, nb);
            v141 = v189;
            v144 = v186;
            *(_QWORD *)(v140 + 8) = nb;
          }
          v141 = (char *)v141 + 1;
          v140 += 40;
          *(_DWORD *)(v140 - 16) = *((_DWORD *)v144 + 6);
          *(_QWORD *)(v140 - 8) = v144[4];
        }
        while ( v178 != v141 );
      }
      v131 = (char *)ptr;
      v132 = (char *)ptr + 16 * v199;
      if ( v132 != ptr )
      {
        do
        {
          if ( *(_QWORD *)v131 == *(_QWORD *)v125 )
          {
            v133 = *((_QWORD *)v131 + 1);
            v134 = *((_QWORD *)v125 + 1);
            if ( v133 != v134 && *(_QWORD *)(v129 + 40 * v133 + 32) == v118 )
            {
              v135 = v129 + 40 * v134;
              if ( *(_QWORD *)(v135 + 8) <= 1u )
              {
                memset(dest, 0, sizeof(dest));
                sub_35A790((char **)dest);
              }
              else
              {
                na = *(_QWORD *)(v135 + 8);
                v136 = (void *)qalloc_or_throw(na);
                memcpy(v136, *(const void **)v135, na);
              }
              v137 = *((_QWORD *)v131 + 1);
              v138 = v129 + 40 * v137;
              if ( *(_QWORD *)(v138 + 8) <= 1u )
              {
                memset(dest, 0, sizeof(dest));
                sub_35A790((char **)dest);
              }
              else
              {
                v184 = *(_QWORD *)(v138 + 8);
                v139 = (void *)qalloc_or_throw(v184);
                memcpy(v139, *(const void **)(v129 + 40 * v137), v184);
              }
              sub_368890();
            }
          }
          v131 += 16;
        }
        while ( v132 != v131 );
      }
      if ( !under_debugger )
        interr(2171);
LABEL_276:
      BUG();
    }
    v47 = v199;
    if ( (unsigned __int64)v199 <= 1 )
      goto LABEL_80;
    v72 = (char *)ptr;
    *(_DWORD *)&dest[8] = 0;
    v201 = &dest[8];
    *(_QWORD *)&dest[16] = 0;
    v202 = &dest[8];
    v203 = 0;
    v177 = (char *)ptr + 16 * v199;
    if ( v177 == ptr )
      goto LABEL_173;
    v73 = nullptr;
    while ( 2 )
    {
      v74 = *(_QWORD *)v72;
      v75 = &dest[8];
      v76 = 3LL * *(_QWORD *)v72;
      v77 = *(_QWORD *)(a1[3 * *(_QWORD *)v72 + 2] + 40LL * *((_QWORD *)v72 + 1) + 32);
      if ( !v73 )
        goto LABEL_142;
      do
      {
        while ( 1 )
        {
          v76 = v73[2];
          v78 = v73[3];
          if ( v73[4] < v77 )
            break;
          v75 = v73;
          v73 = (_QWORD *)v73[2];
          if ( !v76 )
            goto LABEL_140;
        }
        v73 = (_QWORD *)v73[3];
      }
      while ( v78 );
LABEL_140:
      if ( v75 == (_QWORD *)&dest[8] || v77 < v75[4] )
      {
LABEL_142:
        v79 = operator new(0x30u);
        *(_QWORD *)(v79 + 32) = v77;
        v81 = (_QWORD *)v79;
        *(_DWORD *)(v79 + 40) = 0;
        if ( v75 == (_QWORD *)&dest[8] )
        {
          if ( !v203 )
            goto LABEL_160;
          v83 = v202;
          v75 = nullptr;
          if ( *((_QWORD *)v202 + 4) >= v77 )
            goto LABEL_160;
LABEL_148:
          if ( !v83 )
            goto LABEL_156;
          if ( !v75 && v83 != &dest[8] )
          {
            v82 = *((_QWORD *)v83 + 4);
            goto LABEL_226;
          }
          v85 = 1;
LABEL_152:
          v76 = (__int64)v81;
          v75 = v81;
          std::_Rb_tree_insert_and_rebalance(v85, v81, v83, &dest[8]);
          ++v203;
        }
        else
        {
          v82 = v75[4];
          if ( v77 < v82 )
          {
            v83 = v75;
            if ( v201 == (_BYTE *)v75 )
              goto LABEL_148;
            v84 = std::_Rb_tree_decrement(v75);
            v83 = (_BYTE *)v84;
            if ( *(_QWORD *)(v84 + 32) < v77 )
            {
              if ( *(_QWORD *)(v84 + 24) )
                v83 = v75;
              else
                v75 = nullptr;
              goto LABEL_148;
            }
LABEL_160:
            v76 = v77;
            v75 = sub_5A7B80((__int64)dest, v77);
            goto LABEL_148;
          }
          if ( v82 < v77 )
          {
            if ( v202 != (_BYTE *)v75 )
            {
              v188 = v75[4];
              v86 = std::_Rb_tree_increment(v75, v76, v80, v82);
              v83 = (_BYTE *)v86;
              if ( v77 >= *(_QWORD *)(v86 + 32) )
                goto LABEL_160;
              v82 = v188;
              if ( v75[3] )
              {
                v75 = (_QWORD *)v86;
                goto LABEL_148;
              }
            }
            v83 = v75;
            if ( v75 )
            {
LABEL_226:
              v85 = v77 < v82;
              goto LABEL_152;
            }
          }
LABEL_156:
          if ( v81 )
          {
            v76 = 48;
            operator delete(v81, 0x30u);
          }
        }
        v74 = *(_QWORD *)v72;
      }
      v72 += 16;
      *((_DWORD *)v75 + 10) |= 1 << v74;
      if ( v177 != v72 )
      {
        v73 = *(_QWORD **)&dest[16];
        continue;
      }
      break;
    }
    v109 = (__int64)v201;
    while ( (_BYTE *)v109 != &dest[8] )
    {
      v110 = *(_QWORD *)(v109 + 32);
      v111 = v109;
      v112 = *(_DWORD *)(v109 + 40);
      v113 = *(_DWORD *)(a1[11] + 4 * v110);
      v109 = std::_Rb_tree_increment(v109, v76, v110, v74);
      if ( v113 != v112 )
      {
        v114 = (void *)std::_Rb_tree_rebalance_for_erase(v111, &dest[8]);
        v76 = 48;
        operator delete(v114, 0x30u);
        --v203;
      }
    }
    v47 = v199;
    v72 = (char *)ptr;
    v90 = (char *)ptr;
    v91 = (char *)ptr + 16 * v199;
    if ( v91 != ptr )
    {
      do
      {
        v87 = v90 + 16;
        v115 = *(_QWORD *)(a1[3 * *(_QWORD *)v90 + 2] + 40LL * *((_QWORD *)v90 + 1) + 32);
        v116 = *(_QWORD **)&dest[16];
        if ( !*(_QWORD *)&dest[16] )
          goto LABEL_168;
        v117 = &dest[8];
        do
        {
          if ( v116[4] >= v115 )
          {
            v117 = v116;
            v116 = (_QWORD *)v116[2];
          }
          else
          {
            v116 = (_QWORD *)v116[3];
          }
        }
        while ( v116 );
        v87 = v90 + 16;
        if ( v117 != &dest[8] && v115 >= *((_QWORD *)v117 + 4) )
        {
          v47 = v199;
          v90 += 16;
        }
        else
        {
LABEL_168:
          v88 = v91 - v90;
          if ( (v88 >> 4) - 2 >= 0 )
          {
            v89 = (char *)memmove(v90, v87, v88 - 16);
            v72 = (char *)ptr;
            v90 = v89;
          }
          v47 = v199 - 1;
          *(_QWORD *)&v199 = v199 - 1;
        }
        v91 = &v72[16 * v47];
      }
      while ( v91 != v90 );
    }
    if ( v47 )
    {
      while ( 1 )
      {
LABEL_173:
        v92 = 16 * v47;
        v93 = *(_QWORD *)v72;
        v94 = *((_QWORD *)v72 + 1);
        v95 = (__int64 *)v72;
        if ( (v92 >> 4) - 2 >= 0 )
        {
          memmove(v72, v72 + 16, v92 - 16);
          v72 = (char *)ptr;
          v95 = (__int64 *)ptr;
        }
        v47 = v199 - 1;
        v96 = a1[3 * v93 + 2] + 40 * v94;
        v97 = a1[1];
        *(_QWORD *)&v199 = v199 - 1;
        v98 = *(_QWORD *)(v96 + 32);
        if ( v97 )
        {
          v99 = 0;
          v100 = *(_DWORD *)(a1[11] + 4 * v98);
          do
          {
            v101 = -1;
            if ( (v100 & (1 << v99)) != 0 )
              v101 = v98;
            v214[0].m128i_i64[v99++] = v101;
          }
          while ( v99 != v97 );
        }
        if ( 16 * v47 )
          break;
LABEL_191:
        if ( !v47 )
          goto LABEL_192;
      }
      while ( 1 )
      {
        v104 = *v95;
        v105 = a1[3 * *v95 + 2] + 40 * v95[1];
        v106 = *(_QWORD *)(v105 + 32);
        if ( v214[0].m128i_i64[*v95] == -1 )
        {
          v107 = a1[11];
          v214[0].m128i_i64[v104] = v106;
          *(_DWORD *)(v107 + 4 * v106) &= ~(1 << v104);
          if ( !*(_DWORD *)(a1[11] + 4 * v106) )
            ++a1[14];
          *(_QWORD *)(v105 + 32) = v98;
          *(_DWORD *)(4 * v98 + a1[11]) |= 1 << *v95;
          v103 = (char *)(v95 + 2);
          v72 = (char *)ptr;
          v47 = v199;
          if ( v98 != *(_QWORD *)(v105 + 32) )
          {
LABEL_183:
            v95 = (__int64 *)v103;
            if ( v103 == &v72[16 * v47] )
              goto LABEL_191;
            continue;
          }
        }
        else
        {
          v102 = v98 == v106;
          v103 = (char *)(v95 + 2);
          v47 = v199;
          if ( !v102 )
            goto LABEL_183;
        }
        if ( ((&v72[16 * v47] - (char *)v95) >> 4) - 2 >= 0 )
        {
          v108 = (__int64 *)memmove(v95, v103, &v72[16 * v47] - (char *)v95 - 16);
          v72 = (char *)ptr;
          v95 = v108;
          v47 = v199;
        }
        *(_QWORD *)&v199 = --v47;
        if ( v95 == (__int64 *)&v72[16 * v47] )
          goto LABEL_191;
      }
    }
LABEL_192:
    sub_5A8570(*(_QWORD **)&dest[16]);
LABEL_80:
    v25 = (__int64 *)v215[0];
    if ( v215[1] != v215[0] )
      continue;
    break;
  }
LABEL_81:
  if ( ptr )
  {
    *(_QWORD *)&v199 = 0;
    qfree(ptr);
  }
  if ( v218.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v218.m128i_i64[0])(v217, v217, 3);
  if ( v215[0] )
    operator delete(v215[0], v216.m128i_i64[0] - (unsigned __int64)v215[0]);
  if ( v211.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v211.m128i_i64[0])(&v210, &v210, 3);
  if ( v208.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v208.m128i_i64[0])(&v207, &v207, 3);
  if ( v205.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v205.m128i_i64[0])(&v204, &v204, 3);
  return v219 - __readfsqword(0x28u);
}
