unsigned __int64 __fastcall sub_409DC0(_QWORD *a1, const __m128i *a2, char a3)
{
  void (__fastcall *v4)(__int128 *, const __m128i *, __int64); // rax
  __m128i v5; // xmm0
  void (__fastcall *v6)(__int128 *, const __m128i *, __int64); // rax
  __m128i v7; // xmm0
  void (__fastcall *v8)(__int128 *, const __m128i *, __int64); // rax
  unsigned __int64 v9; // r12
  __m128i **v10; // r13
  __m128i *v11; // rdx
  __m128i *v12; // r14
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
  __m128i *v49; // rax
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
  __m128i *v73; // rax
  __int64 v74; // rcx
  __m128i *v75; // r14
  __int64 v76; // rsi
  unsigned __int64 v77; // rbp
  __int64 v78; // rdx
  __m128i *v79; // rax
  __int64 v80; // rdx
  __m128i *v81; // r12
  unsigned __int64 v82; // rcx
  __m128i *v83; // rdx
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
  __int64 v96; // rsi
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
  __m128i *v108; // r14
  __int64 v109; // rdx
  __m128i *v110; // rbp
  __int32 v111; // r15d
  int v112; // r12d
  void *v113; // rax
  unsigned __int64 v114; // r8
  __m128i *v115; // rax
  __m128i *v116; // r9
  __int64 v117; // r14
  unsigned __int64 v118; // rax
  __int64 v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rdi
  __int64 *v122; // r15
  __int64 *v123; // rdi
  _DWORD *v124; // r8
  int v125; // eax
  __int64 v126; // rsi
  __int64 v127; // r13
  void *v128; // rax
  char *v129; // rbx
  char *v130; // rdx
  __int64 v131; // rax
  __int64 v132; // rbp
  __int64 v133; // r12
  size_t v134; // rcx
  size_t v135; // rbp
  size_t v136; // rbp
  const __m128i *v137; // rax
  __m128i v138; // xmm0
  const __m128i *v139; // rbx
  void *v140; // rax
  void *v141; // rax
  void *v142; // rax
  __m128i *v143; // r13
  signed __int64 v144; // r15
  signed __int64 v145; // rax
  signed __int64 v146; // rdx
  unsigned __int64 v147; // rax
  __int64 v148; // rax
  unsigned __int64 *v149; // r15
  void *v150; // r14
  const __m128i *v151; // rcx
  __int64 v152; // rdx
  __m128i v153; // xmm0
  void *v154; // rbp
  __int64 v155; // rax
  __m128i *v156; // r12
  __int64 v157; // r13
  __m128i *v158; // rdi
  __int64 v159; // rax
  __m128i *v160; // rdx
  __m128i v161; // xmm0
  void **v162; // rdi
  __int64 i; // rcx
  __int64 v164; // rcx
  __int128 *v165; // rdi
  __m128i *v166; // [rsp+0h] [rbp-258h]
  _BYTE *v167; // [rsp+0h] [rbp-258h]
  char *v168; // [rsp+0h] [rbp-258h]
  _BYTE *v169; // [rsp+0h] [rbp-258h]
  void *v170; // [rsp+0h] [rbp-258h]
  const __m128i *v171; // [rsp+0h] [rbp-258h]
  char *v172; // [rsp+0h] [rbp-258h]
  char *v173; // [rsp+0h] [rbp-258h]
  void *v174; // [rsp+0h] [rbp-258h]
  __int64 v175; // [rsp+0h] [rbp-258h]
  _BYTE *v176; // [rsp+8h] [rbp-250h]
  _QWORD *v177; // [rsp+8h] [rbp-250h]
  size_t na; // [rsp+10h] [rbp-248h]
  size_t nd; // [rsp+10h] [rbp-248h]
  size_t nc; // [rsp+10h] [rbp-248h]
  size_t nb; // [rsp+10h] [rbp-248h]
  __int64 v183; // [rsp+18h] [rbp-240h]
  __int64 v184; // [rsp+18h] [rbp-240h]
  size_t v185; // [rsp+18h] [rbp-240h]
  __int64 v186; // [rsp+20h] [rbp-238h]
  __int64 v187; // [rsp+20h] [rbp-238h]
  const __m128i *v189; // [rsp+28h] [rbp-230h]
  const __m128i *v190; // [rsp+28h] [rbp-230h]
  signed __int64 v191; // [rsp+28h] [rbp-230h]
  __m128i *v192; // [rsp+30h] [rbp-228h]
  __m128i *v193; // [rsp+30h] [rbp-228h]
  void *ptr; // [rsp+50h] [rbp-208h] BYREF
  __int128 v195; // [rsp+58h] [rbp-200h]
  void *v196; // [rsp+70h] [rbp-1E8h] BYREF
  __m128i dest; // [rsp+90h] [rbp-1C8h] BYREF
  __m128i *v198; // [rsp+A0h] [rbp-1B8h]
  __int64 *v199; // [rsp+A8h] [rbp-1B0h]
  __int64 *v200; // [rsp+B0h] [rbp-1A8h]
  __int64 v201; // [rsp+B8h] [rbp-1A0h]
  __int128 v202; // [rsp+C0h] [rbp-198h] BYREF
  __m128i v203; // [rsp+D0h] [rbp-188h] BYREF
  _QWORD *v204; // [rsp+E0h] [rbp-178h] BYREF
  __int128 v205; // [rsp+E8h] [rbp-170h] BYREF
  __m128i v206; // [rsp+F8h] [rbp-160h]
  _QWORD *v207; // [rsp+110h] [rbp-148h]
  __int128 v208; // [rsp+118h] [rbp-140h] BYREF
  __m128i v209; // [rsp+128h] [rbp-130h]
  __m128i v210[3]; // [rsp+140h] [rbp-118h] BYREF
  __m128i v211[3]; // [rsp+170h] [rbp-E8h] BYREF
  __m128i v212[3]; // [rsp+1A0h] [rbp-B8h] BYREF
  void *v213[2]; // [rsp+1D0h] [rbp-88h] BYREF
  __m128i v214; // [rsp+1E0h] [rbp-78h] BYREF
  _BYTE v215[16]; // [rsp+1F0h] [rbp-68h] BYREF
  __m128i v216; // [rsp+200h] [rbp-58h] BYREF
  unsigned __int64 v217; // [rsp+218h] [rbp-40h]

  v217 = __readfsqword(0x28u);
  v4 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
  v202 = 0;
  v203 = 0u;
  if ( v4 )
  {
    v4(&v202, a2, 2);
    v5 = _mm_loadu_si128(a2 + 1);
    v6 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
    v204 = a1;
    v206 = 0u;
    v203 = v5;
    v205 = 0;
    if ( v6 )
    {
      v6(&v205, a2, 2);
      v7 = _mm_loadu_si128(a2 + 1);
      v8 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a2[1].m128i_i64[0];
      v207 = a1;
      v209 = 0u;
      v206 = v7;
      v208 = 0;
      if ( v8 )
      {
        v8(&v208, a2, 2);
        v209 = _mm_loadu_si128(a2 + 1);
      }
    }
    else
    {
      v164 = 6;
      v207 = a1;
      v165 = &v208;
      while ( v164 )
      {
        *(_DWORD *)v165 = 0;
        v165 = (__int128 *)((char *)v165 + 4);
        --v164;
      }
      v209.m128i_i64[1] = 0;
    }
  }
  else
  {
    v204 = a1;
    v206 = 0u;
    v207 = a1;
    v209 = 0u;
    v205 = 0;
    v208 = 0;
  }
  v9 = 0;
  v10 = (__m128i **)(a1 + 2);
  if ( a1[1] )
  {
    while ( 1 )
    {
      switch_dbctx(*(int *)(*a1 + 4 * v9 + 16));
      memset(v210, 0, 32);
      if ( !v203.m128i_i64[0] )
        break;
      ((void (__fastcall *)(__m128i *, __int128 *, __int64))v203.m128i_i64[0])(v210, &v202, 2);
      v11 = v10[1];
      v12 = *v10;
      v210[1] = _mm_load_si128(&v203);
      v186 = 96LL * (_QWORD)v11;
      v166 = &v12[6 * (_QWORD)v11];
      memset(v211, 0, 32);
      if ( !v203.m128i_i64[0] )
        goto LABEL_95;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v203.m128i_i64[0])(v211, v210, 2);
      si128 = _mm_load_si128(&v210[1]);
      v214 = 0u;
      v211[1] = si128;
      *(_OWORD *)v213 = 0;
      if ( !v210[1].m128i_i64[0] )
        goto LABEL_95;
      ((void (__fastcall *)(void **, __m128i *, __int64))v210[1].m128i_i64[0])(v213, v211, 2);
      v214 = _mm_load_si128(&v211[1]);
      memset(v212, 0, 32);
      if ( !v211[1].m128i_i64[0] )
        goto LABEL_96;
      ((void (__fastcall *)(__m128i *, void **, __int64))v211[1].m128i_i64[0])(v212, v213, 2);
      v212[1] = _mm_load_si128(&v214);
      if ( v214.m128i_i64[0] )
      {
        ((void (__fastcall *)(void **, void **, __int64))v214.m128i_i64[0])(v213, v213, 3);
        v14 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v212[1].m128i_i64[0];
        if ( v166 != v12 )
        {
          v214 = 0u;
          *(_OWORD *)v213 = 0;
          if ( v212[1].m128i_i64[0] )
          {
            ((void (__fastcall *)(void **, __m128i *, __int64))v212[1].m128i_i64[0])(v213, v212, 2);
            v214 = _mm_load_si128(&v212[1]);
          }
LABEL_14:
          v15 = -2;
          v16 = 0xAAAAAAAAAAAAAAABLL * (v186 >> 5);
          if ( v16 )
          {
            _BitScanReverse64(&v16, v16);
            v15 = 2LL * (int)v16;
          }
          sub_409210((__int64)v12, (__int64)v166, v15, (const __m128i *)v213);
          if ( v214.m128i_i64[0] )
            ((void (__fastcall *)(void **, void **, __int64))v214.m128i_i64[0])(v213, v213, 3);
          v214 = 0u;
          *(_OWORD *)v213 = 0;
          if ( v212[1].m128i_i64[0] )
          {
            ((void (__fastcall *)(void **, __m128i *, __int64))v212[1].m128i_i64[0])(v213, v212, 2);
            v214 = _mm_load_si128(&v212[1]);
          }
          sub_4080E0(v12, v166, (const __m128i *)v213);
          if ( v214.m128i_i64[0] )
            ((void (__fastcall *)(void **, void **, __int64))v214.m128i_i64[0])(v213, v213, 3);
          v14 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v212[1].m128i_i64[0];
        }
        if ( v14 )
          v14(v212, v212, 3);
        goto LABEL_25;
      }
      if ( v166 != v12 )
      {
        v162 = v213;
        for ( i = 6; i; --i )
        {
          *(_DWORD *)v162 = 0;
          v162 = (void **)((char *)v162 + 4);
        }
        v214.m128i_i64[1] = 0;
        goto LABEL_14;
      }
LABEL_25:
      if ( v211[1].m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v211[1].m128i_i64[0])(v211, v211, 3);
      if ( v210[1].m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v210[1].m128i_i64[0])(v210, v210, 3);
      ++v9;
      v10 += 3;
      if ( v9 >= a1[1] )
        goto LABEL_30;
    }
    v49 = v10[1];
    v12 = *v10;
    memset(v211, 0, 32);
    v186 = 96LL * (_QWORD)v49;
    v166 = &v12[6 * (_QWORD)v49];
LABEL_95:
    memset(v212, 0, 32);
LABEL_96:
    if ( v166 != v12 )
    {
      v214 = 0u;
      *(_OWORD *)v213 = 0;
      goto LABEL_14;
    }
    goto LABEL_25;
  }
LABEL_30:
  v198 = nullptr;
  dest = 0;
  sub_4074C0((__int64)v213, (__int64)&v204, &dest);
  if ( dest.m128i_i64[0] )
    operator delete((void *)dest.m128i_i64[0], (unsigned __int64)v198 - dest.m128i_i64[0]);
  if ( !a1[1] )
  {
    ptr = nullptr;
    v195 = 0;
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
    v19 = (__m128i *)v213[1];
    if ( v213[1] == (void *)v214.m128i_i64[0] )
    {
      v143 = (__m128i *)v213[0];
      v144 = (char *)v213[1] - (char *)v213[0];
      v145 = ((char *)v213[1] - (char *)v213[0]) >> 4;
      if ( v145 == 0x7FFFFFFFFFFFFFFLL )
        std::__throw_length_error("vector::_M_realloc_append");
      v146 = 1;
      if ( v145 )
        v146 = ((char *)v213[1] - (char *)v213[0]) >> 4;
      v59 = __CFADD__(v146, v145);
      v147 = v146 + v145;
      if ( v59 )
      {
        v175 = 0x7FFFFFFFFFFFFFF0LL;
        v148 = operator new(0x7FFFFFFFFFFFFFF0uLL);
      }
      else
      {
        if ( v147 > 0x7FFFFFFFFFFFFFFLL )
          v147 = 0x7FFFFFFFFFFFFFFLL;
        v175 = 16 * v147;
        v148 = operator new(16 * v147);
      }
      v149 = (unsigned __int64 *)(v148 + v144);
      v150 = (void *)v148;
      *v149 = v17;
      v149[1] = 0;
      if ( v19 != v143 )
      {
        v151 = v143;
        v152 = v148 + (char *)v19 - (char *)v143;
        do
        {
          v153 = _mm_loadu_si128(v151);
          v148 += 16;
          ++v151;
          *(__m128i *)(v148 - 16) = v153;
        }
        while ( v148 != v152 );
      }
      v154 = (void *)(v148 + 16);
      if ( v143 )
        operator delete(v143, v214.m128i_i64[0] - (_QWORD)v143);
      v213[0] = v150;
      v213[1] = v154;
      v214.m128i_i64[0] = (__int64)v150 + v175;
    }
    else
    {
      *(_QWORD *)v213[1] = v17;
      v19->m128i_i64[1] = 0;
      v213[1] = (char *)v213[1] + 16;
    }
    v20 = v214.m128i_i64[1];
    v210[0].m128i_i64[0] = v214.m128i_i64[1];
    memset(&v210[0].m128i_u64[1], 0, 32);
    if ( !v216.m128i_i64[0] )
    {
      v22 = v213[1];
      v167 = v213[0];
LABEL_225:
      v211[0].m128i_i64[0] = v20;
      memset(&v211[0].m128i_u64[1], 0, 32);
      goto LABEL_43;
    }
    ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v216.m128i_i64[0])(&v210[0].m128i_u64[1], v215, 2);
    v21 = _mm_load_si128(&v216);
    v20 = v210[0].m128i_i64[0];
    v212[0].m128i_i64[0] = v210[0].m128i_i64[0];
    v22 = v213[1];
    v167 = v213[0];
    *(__m128i *)((char *)&v210[1] + 8) = v21;
    memset(&v212[0].m128i_u64[1], 0, 32);
    if ( !v216.m128i_i64[0] )
      goto LABEL_225;
    v176 = v213[1];
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v216.m128i_i64[0])(
      &v212[0].m128i_u64[1],
      &v210[0].m128i_u64[1],
      2);
    v23 = _mm_loadu_si128((const __m128i *)&v210[1].m128i_u64[1]);
    v22 = v176;
    v211[0].m128i_i64[0] = v212[0].m128i_i64[0];
    *(__m128i *)((char *)&v212[1] + 8) = v23;
    memset(&v211[0].m128i_u64[1], 0, 32);
    if ( v210[1].m128i_i64[1] )
    {
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v210[1].m128i_i64[1])(
        &v211[0].m128i_u64[1],
        &v212[0].m128i_u64[1],
        2);
      v24 = _mm_loadu_si128((const __m128i *)&v212[1].m128i_u64[1]);
      v22 = v176;
      *(__m128i *)((char *)&v211[1] + 8) = v24;
      if ( v24.m128i_i64[0] )
      {
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v24.m128i_i64[0])(
          &v212[0].m128i_u64[1],
          &v212[0].m128i_u64[1],
          3);
        v22 = v176;
      }
    }
LABEL_43:
    sub_4070B0((__int64)v167, ((v22 - v167) >> 4) - 1, 0, *((_QWORD *)v22 - 2), *((_QWORD *)v22 - 1), (__int64)v211);
    if ( v211[1].m128i_i64[1] )
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v211[1].m128i_i64[1])(
        &v211[0].m128i_u64[1],
        &v211[0].m128i_u64[1],
        3);
    if ( !v210[1].m128i_i64[1] )
      goto LABEL_34;
    ++v17;
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v210[1].m128i_i64[1])(
      &v210[0].m128i_u64[1],
      &v210[0].m128i_u64[1],
      3);
    v18 = a1[1];
  }
  while ( v17 < v18 );
LABEL_47:
  ptr = nullptr;
  v195 = 0;
  if ( v18 )
  {
    v156 = (__m128i *)qvector_reserve(&ptr, 0, v18, 16);
    v157 = *((_QWORD *)&v195 + 1);
    *((_QWORD *)&v195 + 1) = 0;
    v158 = (__m128i *)ptr;
    v159 = v195 - 1;
    if ( (__int64)v195 - 1 >= 0 )
    {
      v160 = v156;
      do
      {
        v161 = _mm_loadu_si128(v158);
        ++v160;
        ++v158;
        v160[-1] = v161;
        v59 = v159-- == 0;
      }
      while ( !v59 );
      v158 = (__m128i *)ptr;
    }
    qfree(v158);
    ptr = v156;
    *((_QWORD *)&v195 + 1) = v157;
  }
LABEL_48:
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      interr(1961);
    goto LABEL_272;
  }
  v25 = (__int64 *)v213[0];
  if ( v213[0] == v213[1] )
    goto LABEL_81;
  while ( 2 )
  {
    *(_QWORD *)&v195 = 0;
    v26 = v25[1];
    v27 = *v25;
    v28 = 2 * v26;
    v183 = 96 * v26;
    v187 = 3 * *v25;
    while ( 2 )
    {
      if ( a3 )
        goto LABEL_58;
      v30 = *(_QWORD *)(a1[3 * v27 + 2] + 32 * (v26 + v28) + 88);
      if ( v30 < 0 )
      {
        if ( !under_debugger )
          interr(2170);
        goto LABEL_272;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v30) != (1 << a1[1]) - 1 )
      {
LABEL_58:
        v32 = *((_QWORD *)&v195 + 1);
        v31 = v195;
        if ( *((_QWORD *)&v195 + 1) < (unsigned __int64)(v195 + 1) )
        {
          v33 = (__m128i *)qvector_reserve(&ptr, 0, v195 + 1, 16);
          v54 = *((void **)&v195 + 1);
          *((_QWORD *)&v195 + 1) = v32;
          v55 = (__m128i *)ptr;
          v56 = v195 - 1;
          if ( (__int64)v195 - 1 >= 0 )
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
          v170 = v54;
          qfree(v55);
          v31 = v195;
          ptr = v33;
          *((_QWORD *)&v195 + 1) = v170;
        }
        else
        {
          v33 = (__m128i *)ptr;
        }
        m128i_i8 = v33[v31].m128i_i8;
        *(_QWORD *)m128i_i8 = v27;
        *((_QWORD *)m128i_i8 + 1) = v26;
        *(_QWORD *)&v195 = v195 + 1;
      }
      v35 = (const __m128i *)v213[0];
      v36 = *((char **)v213[0] + 1);
      v37 = *(_QWORD *)v213[0];
      memset(&v210[0].m128i_u64[1], 0, 32);
      v168 = v36;
      v210[0].m128i_i64[0] = v214.m128i_i64[1];
      if ( v216.m128i_i64[0] )
      {
        ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v216.m128i_i64[0])(&v210[0].m128i_u64[1], v215, 2);
        v38 = (__m128i *)v213[1];
        v35 = (const __m128i *)v213[0];
        v39 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v216.m128i_i64[0];
        *(__m128i *)((char *)&v210[1] + 8) = _mm_load_si128(&v216);
        if ( (char *)v213[1] - (char *)v213[0] <= 16 )
          goto LABEL_63;
        v50 = v210[0].m128i_i64[0];
        v212[0].m128i_i64[0] = v210[0].m128i_i64[0];
        memset(&v212[0].m128i_u64[1], 0, 32);
        if ( v216.m128i_i64[0] )
        {
          v193 = (__m128i *)v213[1];
          v190 = (const __m128i *)v213[0];
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v216.m128i_i64[0])(
            &v212[0].m128i_u64[1],
            &v210[0].m128i_u64[1],
            2);
          v35 = v190;
          *(__m128i *)((char *)&v212[1] + 8) = _mm_loadu_si128((const __m128i *)&v210[1].m128i_u64[1]);
          v38 = v193;
          v211[0].m128i_i64[0] = v212[0].m128i_i64[0];
          memset(&v211[0].m128i_u64[1], 0, 32);
          if ( v210[1].m128i_i64[1] )
          {
            ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v210[1].m128i_i64[1])(
              &v211[0].m128i_u64[1],
              &v212[0].m128i_u64[1],
              2);
            v60 = _mm_loadu_si128((const __m128i *)&v212[1].m128i_u64[1]);
            v35 = v190;
            v38 = v193;
            *(__m128i *)((char *)&v211[1] + 8) = v60;
            if ( v60.m128i_i64[0] )
            {
              ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v60.m128i_i64[0])(
                &v212[0].m128i_u64[1],
                &v212[0].m128i_u64[1],
                3);
              v38 = v193;
              v35 = v190;
            }
          }
          goto LABEL_101;
        }
LABEL_100:
        v211[0].m128i_i64[0] = v50;
        memset(&v211[0].m128i_u64[1], 0, 32);
LABEL_101:
        v51 = v38[-1].m128i_u64[0];
        v52 = v38 - 1;
        v53 = v38[-1].m128i_u64[1];
        v38[-1] = _mm_loadu_si128(v35);
        v212[0].m128i_i64[0] = v211[0].m128i_i64[0];
        memset(&v212[0].m128i_u64[1], 0, 32);
        if ( v211[1].m128i_i64[1] )
        {
          v192 = v38 - 1;
          v189 = v35;
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v211[1].m128i_i64[1])(
            &v212[0].m128i_u64[1],
            &v211[0].m128i_u64[1],
            2);
          v52 = v192;
          v35 = v189;
          *(__m128i *)((char *)&v212[1] + 8) = _mm_loadu_si128((const __m128i *)&v211[1].m128i_u64[1]);
        }
        sub_4071F0((__int64)v35, 0, v52 - v35, v51, v53, v212[0].m128i_i64);
        if ( v212[1].m128i_i64[1] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v212[1].m128i_i64[1])(
            &v212[0].m128i_u64[1],
            &v212[0].m128i_u64[1],
            3);
        if ( v211[1].m128i_i64[1] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v211[1].m128i_i64[1])(
            &v211[0].m128i_u64[1],
            &v211[0].m128i_u64[1],
            3);
        v39 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v210[1].m128i_i64[1];
LABEL_63:
        if ( v39 )
          v39(&v210[0].m128i_u64[1], &v210[0].m128i_u64[1], 3);
      }
      else
      {
        v38 = (__m128i *)v213[1];
        if ( (char *)v213[1] - (char *)v213[0] > 16 )
        {
          v50 = v214.m128i_i64[1];
          goto LABEL_100;
        }
      }
      v40 = (__m128i *)v213[1];
      v41 = (const __m128i *)((char *)v213[1] - 16);
      v42 = v168 + 1;
      v213[1] = (char *)v213[1] - 16;
      if ( (unsigned __int64)(v168 + 1) >= a1[3 * v37 + 3] )
      {
        v29 = (__int64 *)v213[0];
        if ( v213[0] == v41 )
          break;
        goto LABEL_53;
      }
      if ( v41 == (const __m128i *)v214.m128i_i64[0] )
      {
        v61 = ((char *)v41 - (char *)v213[0]) >> 4;
        if ( v61 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v62 = 1;
        if ( v61 )
          v62 = ((char *)v41 - (char *)v213[0]) >> 4;
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
        v191 = (char *)v41 - (char *)v213[0];
        v171 = (const __m128i *)v213[0];
        v65 = (__m128i *)operator new(v64 * 16);
        v66 = (__m128i *)v171;
        *(__m128i *)((char *)v65 + v191) = _mm_unpacklo_epi64((__m128i)v37, (__m128i)(unsigned __int64)v42);
        if ( v41 == v171 )
        {
          v70 = (char *)v65;
        }
        else
        {
          v67 = v65;
          v68 = v171;
          do
          {
            v69 = _mm_loadu_si128(v68++);
            ++v67;
            v67[-1] = v69;
          }
          while ( v41 != v68 );
          v70 = &v65->m128i_i8[(char *)v41 - (char *)v171];
        }
        v71 = v70 + 16;
        if ( v171 )
        {
          v172 = (char *)v65;
          operator delete(v66, v214.m128i_i64[0] - (_QWORD)v66);
          v65 = (__m128i *)v172;
        }
        v213[0] = v65;
        v213[1] = v71;
        v214.m128i_i64[0] = (__int64)v65[v64].m128i_i64;
      }
      else
      {
        v40[-1] = _mm_unpacklo_epi64((__m128i)v37, (__m128i)(unsigned __int64)v42);
        v213[1] = (char *)v213[1] + 16;
      }
      v43 = v214.m128i_i64[1];
      v210[0].m128i_i64[0] = v214.m128i_i64[1];
      memset(&v210[0].m128i_u64[1], 0, 32);
      if ( !v216.m128i_i64[0] )
      {
        v44 = v213[1];
        v169 = v213[0];
        goto LABEL_118;
      }
      ((void (__fastcall *)(unsigned __int64 *, _BYTE *, __int64))v216.m128i_i64[0])(&v210[0].m128i_u64[1], v215, 2);
      v43 = v210[0].m128i_i64[0];
      v44 = v213[1];
      v45 = _mm_load_si128(&v216);
      v169 = v213[0];
      v212[0].m128i_i64[0] = v210[0].m128i_i64[0];
      *(__m128i *)((char *)&v210[1] + 8) = v45;
      memset(&v212[0].m128i_u64[1], 0, 32);
      if ( !v216.m128i_i64[0] )
      {
LABEL_118:
        v211[0].m128i_i64[0] = v43;
        memset(&v211[0].m128i_u64[1], 0, 32);
        goto LABEL_73;
      }
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v216.m128i_i64[0])(
        &v212[0].m128i_u64[1],
        &v210[0].m128i_u64[1],
        2);
      *(__m128i *)((char *)&v212[1] + 8) = _mm_loadu_si128((const __m128i *)&v210[1].m128i_u64[1]);
      v211[0].m128i_i64[0] = v212[0].m128i_i64[0];
      memset(&v211[0].m128i_u64[1], 0, 32);
      if ( v210[1].m128i_i64[1] )
      {
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v210[1].m128i_i64[1])(
          &v211[0].m128i_u64[1],
          &v212[0].m128i_u64[1],
          2);
        v46 = _mm_loadu_si128((const __m128i *)&v212[1].m128i_u64[1]);
        *(__m128i *)((char *)&v211[1] + 8) = v46;
        if ( v46.m128i_i64[0] )
          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v46.m128i_i64[0])(
            &v212[0].m128i_u64[1],
            &v212[0].m128i_u64[1],
            3);
      }
LABEL_73:
      sub_4070B0((__int64)v169, ((v44 - v169) >> 4) - 1, 0, *((_QWORD *)v44 - 2), *((_QWORD *)v44 - 1), (__int64)v211);
      if ( v211[1].m128i_i64[1] )
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v211[1].m128i_i64[1])(
          &v211[0].m128i_u64[1],
          &v211[0].m128i_u64[1],
          3);
      if ( v210[1].m128i_i64[1] )
        ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v210[1].m128i_i64[1])(
          &v210[0].m128i_u64[1],
          &v210[0].m128i_u64[1],
          3);
      v29 = (__int64 *)v213[0];
      if ( v213[0] != v213[1] )
      {
LABEL_53:
        v26 = v29[1];
        v27 = *v29;
        v28 = 2 * v26;
        if ( !v209.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__int128 *, __int64, __int64))v209.m128i_i64[1])(
               &v208,
               v207[3 * *v29 + 2] + 96 * v26,
               v207[v187 + 2] + v183) )
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
      dest.m128i_i32[0] = 0;
      v119 = a1[11];
      if ( v118 < v117 + 1 )
      {
        v155 = qvector_reserve(a1 + 11, v119, v117 + 1, 4);
        a1[11] = v155;
        v119 = v155;
        v120 = a1[12];
      }
      else
      {
        v120 = v117;
      }
      *(_DWORD *)(v119 + 4 * v120) = 0;
      v121 = v195;
      v122 = (__int64 *)ptr;
      ++a1[12];
      v123 = &v122[2 * v121];
      if ( v122 == v123 )
        goto LABEL_80;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v122 + 2] + 96 * v122[1] + 88) = v117;
        v124 = (_DWORD *)(4 * v117 + a1[11]);
        v125 = 1 << *v122;
        if ( (*v124 & v125) != 0 )
          break;
        v122 += 2;
        *v124 |= v125;
        if ( v123 == v122 )
          goto LABEL_80;
      }
      switch_dbctx(*(int *)(*a1 + 4 * *v122 + 16));
      v126 = *v122;
      v127 = 0;
      v128 = (void *)a1[3 * *v122 + 3];
      v174 = v128;
      if ( v128 )
      {
        na = 2 * *v122;
        v127 = qalloc_or_throw(96LL * (_QWORD)v128);
        v133 = v127;
        v134 = 0;
        v177 = &a1[v126 + na];
        do
        {
          v137 = (const __m128i *)(v177[2] + 96 * v134);
          v138 = _mm_loadu_si128(v137);
          v139 = v137;
          *(_QWORD *)(v133 + 16) = 0;
          *(__m128i *)v133 = v138;
          *(_OWORD *)(v133 + 24) = 0;
          if ( v137[1].m128i_i64[1] )
          {
            v185 = v134;
            nd = v137[1].m128i_u64[1];
            v140 = (void *)qalloc_or_throw(nd);
            *(_QWORD *)(v133 + 16) = v140;
            *(_QWORD *)(v133 + 32) = nd;
            memcpy(v140, (const void *)v139[1].m128i_i64[0], nd);
            v134 = v185;
            *(_QWORD *)(v133 + 24) = nd;
          }
          *(_QWORD *)(v133 + 40) = 0;
          *(_OWORD *)(v133 + 48) = 0;
          v135 = v139[3].m128i_u64[0];
          if ( v135 )
          {
            nb = v134;
            v142 = (void *)qalloc_or_throw(v139[3].m128i_i64[0]);
            *(_QWORD *)(v133 + 40) = v142;
            *(_QWORD *)(v133 + 56) = v135;
            memcpy(v142, (const void *)v139[2].m128i_i64[1], v135);
            *(_QWORD *)(v133 + 48) = v135;
            v134 = nb;
          }
          *(_QWORD *)(v133 + 64) = 0;
          *(_OWORD *)(v133 + 72) = 0;
          v136 = v139[4].m128i_u64[1];
          if ( v136 )
          {
            nc = v134;
            v141 = (void *)qalloc_or_throw(v139[4].m128i_i64[1]);
            *(_QWORD *)(v133 + 64) = v141;
            *(_QWORD *)(v133 + 80) = v136;
            memcpy(v141, (const void *)v139[4].m128i_i64[0], v136);
            *(_QWORD *)(v133 + 72) = v136;
            v134 = nc;
          }
          ++v134;
          v133 += 96;
          *(_QWORD *)(v133 - 8) = v139[5].m128i_i64[1];
        }
        while ( v174 != (void *)v134 );
      }
      v129 = (char *)ptr;
      v130 = (char *)ptr + 16 * v195;
      if ( v130 != ptr )
      {
        do
        {
          if ( *(_QWORD *)v129 == *v122 )
          {
            v131 = *((_QWORD *)v129 + 1);
            v132 = v122[1];
            if ( v131 != v132 && *(_QWORD *)(v127 + 96 * v131 + 88) == v117 )
            {
              sub_4040C0((__int64)&dest, (_QWORD *)(v127 + 96 * v132));
              sub_4040C0((__int64)&v196, (_QWORD *)(v127 + 96LL * *((_QWORD *)v129 + 1)));
              sub_368890();
            }
          }
          v129 += 16;
        }
        while ( v130 != v129 );
      }
      if ( !under_debugger )
        interr(2171);
LABEL_272:
      BUG();
    }
    v47 = v195;
    if ( (unsigned __int64)v195 <= 1 )
      goto LABEL_80;
    v72 = (char *)ptr;
    dest.m128i_i32[2] = 0;
    v199 = &dest.m128i_i64[1];
    v198 = nullptr;
    v200 = &dest.m128i_i64[1];
    v201 = 0;
    v173 = (char *)ptr + 16 * v195;
    if ( v173 == ptr )
      goto LABEL_173;
    v73 = nullptr;
    while ( 2 )
    {
      v74 = *(_QWORD *)v72;
      v75 = (__m128i *)&dest.m128i_u64[1];
      v76 = 3LL * *(_QWORD *)v72;
      v77 = *(_QWORD *)(a1[3 * *(_QWORD *)v72 + 2] + 96LL * *((_QWORD *)v72 + 1) + 88);
      if ( !v73 )
        goto LABEL_142;
      do
      {
        while ( 1 )
        {
          v76 = v73[1].m128i_i64[0];
          v78 = v73[1].m128i_i64[1];
          if ( v73[2].m128i_i64[0] < v77 )
            break;
          v75 = v73;
          v73 = (__m128i *)v73[1].m128i_i64[0];
          if ( !v76 )
            goto LABEL_140;
        }
        v73 = (__m128i *)v73[1].m128i_i64[1];
      }
      while ( v78 );
LABEL_140:
      if ( v75 == (__m128i *)&dest.m128i_u64[1] || v77 < v75[2].m128i_i64[0] )
      {
LABEL_142:
        v79 = (__m128i *)operator new(0x30u);
        v79[2].m128i_i64[0] = v77;
        v81 = v79;
        v79[2].m128i_i32[2] = 0;
        if ( v75 == (__m128i *)&dest.m128i_u64[1] )
        {
          if ( !v201 )
            goto LABEL_160;
          v83 = (__m128i *)v200;
          v75 = nullptr;
          if ( v200[4] >= v77 )
            goto LABEL_160;
LABEL_148:
          if ( !v83 )
            goto LABEL_156;
          if ( !v75 && v83 != (__m128i *)&dest.m128i_u64[1] )
          {
            v82 = v83[2].m128i_u64[0];
            goto LABEL_222;
          }
          v85 = 1;
LABEL_152:
          v76 = (__int64)v81;
          v75 = v81;
          std::_Rb_tree_insert_and_rebalance(v85, v81, v83, &dest.m128i_u64[1]);
          ++v201;
        }
        else
        {
          v82 = v75[2].m128i_u64[0];
          if ( v77 < v82 )
          {
            v83 = v75;
            if ( v199 == (__int64 *)v75 )
              goto LABEL_148;
            v84 = std::_Rb_tree_decrement(v75);
            v83 = (__m128i *)v84;
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
            v75 = (__m128i *)sub_403100((__int64)&dest, v77);
            goto LABEL_148;
          }
          if ( v82 < v77 )
          {
            if ( v200 != (__int64 *)v75 )
            {
              v184 = v75[2].m128i_i64[0];
              v86 = std::_Rb_tree_increment(v75, v76, v80, v82);
              v83 = (__m128i *)v86;
              if ( v77 >= *(_QWORD *)(v86 + 32) )
                goto LABEL_160;
              v82 = v184;
              if ( v75[1].m128i_i64[1] )
              {
                v75 = (__m128i *)v86;
                goto LABEL_148;
              }
            }
            v83 = v75;
            if ( v75 )
            {
LABEL_222:
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
      v75[2].m128i_i32[2] |= 1 << v74;
      if ( v173 != v72 )
      {
        v73 = v198;
        continue;
      }
      break;
    }
    v108 = (__m128i *)v199;
    if ( v199 != (__int64 *)&dest.m128i_u64[1] )
    {
      do
      {
        v109 = v108[2].m128i_i64[0];
        v110 = v108;
        v111 = v108[2].m128i_i32[2];
        v112 = *(_DWORD *)(a1[11] + 4 * v109);
        v108 = (__m128i *)std::_Rb_tree_increment(v108, v76, v109, v74);
        if ( v112 != v111 )
        {
          v113 = (void *)std::_Rb_tree_rebalance_for_erase(v110, &dest.m128i_u64[1]);
          v76 = 48;
          operator delete(v113, 0x30u);
          --v201;
        }
      }
      while ( v108 != (__m128i *)&dest.m128i_u64[1] );
    }
    v47 = v195;
    v72 = (char *)ptr;
    v90 = (char *)ptr;
    v91 = (char *)ptr + 16 * v195;
    if ( v91 != ptr )
    {
      do
      {
        v87 = v90 + 16;
        v114 = *(_QWORD *)(a1[3 * *(_QWORD *)v90 + 2] + 96LL * *((_QWORD *)v90 + 1) + 88);
        v115 = v198;
        if ( !v198 )
          goto LABEL_168;
        v116 = (__m128i *)&dest.m128i_u64[1];
        do
        {
          if ( v115[2].m128i_i64[0] >= v114 )
          {
            v116 = v115;
            v115 = (__m128i *)v115[1].m128i_i64[0];
          }
          else
          {
            v115 = (__m128i *)v115[1].m128i_i64[1];
          }
        }
        while ( v115 );
        v87 = v90 + 16;
        if ( v116 != (__m128i *)&dest.m128i_u64[1] && v114 >= v116[2].m128i_i64[0] )
        {
          v47 = v195;
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
          v47 = v195 - 1;
          *(_QWORD *)&v195 = v195 - 1;
        }
        v91 = &v72[16 * v47];
      }
      while ( v90 != v91 );
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
        v96 = a1[1];
        v47 = v195 - 1;
        v97 = *(_QWORD *)(a1[3 * v93 + 2] + 96 * v94 + 88);
        *(_QWORD *)&v195 = v195 - 1;
        if ( v96 )
        {
          v98 = 0;
          v99 = *(_DWORD *)(a1[11] + 4 * v97);
          do
          {
            v100 = -1;
            if ( (v99 & (1 << v98)) != 0 )
              v100 = v97;
            v212[0].m128i_i64[v98++] = v100;
          }
          while ( v98 != v96 );
        }
        if ( 16 * v47 )
          break;
LABEL_191:
        if ( !v47 )
          goto LABEL_192;
      }
      while ( 1 )
      {
        v102 = *v95;
        v103 = a1[3 * *v95 + 2] + 96 * v95[1];
        v104 = *(_QWORD *)(v103 + 88);
        if ( v212[0].m128i_i64[*v95] == -1 )
        {
          v105 = a1[11];
          v212[0].m128i_i64[v102] = v104;
          *(_DWORD *)(v105 + 4 * v104) &= ~(1 << v102);
          if ( !*(_DWORD *)(a1[11] + 4 * v104) )
            ++a1[14];
          *(_QWORD *)(v103 + 88) = v97;
          *(_DWORD *)(4 * v97 + a1[11]) |= 1 << *v95;
          v106 = *(_QWORD *)(v103 + 88);
          v101 = (char *)(v95 + 2);
          v72 = (char *)ptr;
          v47 = v195;
          if ( v97 != v106 )
          {
LABEL_183:
            v95 = (__int64 *)v101;
            if ( v101 == &v72[16 * v47] )
              goto LABEL_191;
            continue;
          }
        }
        else
        {
          v47 = v195;
          v101 = (char *)(v95 + 2);
          if ( v97 != v104 )
            goto LABEL_183;
        }
        if ( ((&v72[16 * v47] - (char *)v95) >> 4) - 2 >= 0 )
        {
          v107 = (__int64 *)memmove(v95, v101, &v72[16 * v47] - (char *)v95 - 16);
          v72 = (char *)ptr;
          v95 = v107;
          v47 = v195;
        }
        *(_QWORD *)&v195 = --v47;
        if ( v95 == (__int64 *)&v72[16 * v47] )
          goto LABEL_191;
      }
    }
LABEL_192:
    sub_4036F0(v198);
LABEL_80:
    v25 = (__int64 *)v213[0];
    if ( v213[1] != v213[0] )
      continue;
    break;
  }
LABEL_81:
  if ( ptr )
  {
    *(_QWORD *)&v195 = 0;
    qfree(ptr);
  }
  if ( v216.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v216.m128i_i64[0])(v215, v215, 3);
  if ( v213[0] )
    operator delete(v213[0], v214.m128i_i64[0] - (unsigned __int64)v213[0]);
  if ( v209.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v209.m128i_i64[0])(&v208, &v208, 3);
  if ( v206.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v206.m128i_i64[0])(&v205, &v205, 3);
  if ( v203.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v203.m128i_i64[0])(&v202, &v202, 3);
  return v217 - __readfsqword(0x28u);
}
