unsigned __int64 __fastcall sub_2DD240(_QWORD *a1, const __m128i *a2, char a3)
{
  unsigned __int64 v4; // r13
  __int64 *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  __m128i *v11; // rbp
  _BYTE *v12; // r13
  _BYTE *v13; // r14
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 i; // r13
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rdx
  const __m128i *v21; // r14
  _BYTE *v22; // r13
  _BYTE *v23; // r14
  __int64 *v24; // rax
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // r12
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __m128i *v32; // r15
  char *v33; // rax
  const __m128i *v34; // r15
  unsigned __int64 v35; // r14
  __int64 v36; // r13
  __m128i *v37; // rcx
  void (__fastcall *v38)(__m128i *, __m128i *, __int64); // rax
  __m128i *v39; // rax
  unsigned __int64 v40; // r13
  const __m128i *v41; // rdx
  __int64 v42; // rax
  __m128i v43; // xmm0
  _BYTE *v44; // r14
  _BYTE *v45; // r13
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  __int64 v48; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // r10
  __m128i *v52; // r9
  unsigned __int64 v53; // r8
  void *v54; // rcx
  const __m128i *v55; // rdi
  __int64 v56; // rax
  __m128i *v57; // rdx
  __m128i v58; // xmm0
  bool v59; // cf
  __m128i v60; // xmm0
  __m128i v61; // xmm0
  __int64 v62; // r15
  __int64 v63; // rax
  unsigned __int64 v64; // r15
  unsigned __int64 v65; // r15
  __m128i *v66; // rax
  __m128i *v67; // rcx
  __m128i *v68; // rdi
  const __m128i *v69; // rsi
  __m128i v70; // xmm0
  char *v71; // r13
  void *v72; // r13
  __int64 *v73; // r9
  char *v74; // r14
  _QWORD *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r12
  __int64 v78; // rbp
  int v79; // r15d
  int v80; // r14d
  void *v81; // rax
  __int64 *v82; // r14
  __int64 v83; // r10
  __int64 *v84; // rsi
  __int64 v85; // r10
  __int64 v86; // rax
  __int64 v87; // r13
  __int64 v88; // r12
  __int64 *v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // rdx
  __int64 v92; // r13
  __int64 v93; // rcx
  int v94; // r11d
  __int64 v95; // rdx
  bool v96; // zf
  void *v97; // rsi
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rsi
  __int64 *v102; // rax
  void *v103; // r8
  char *v104; // r14
  char *v105; // rdi
  _DWORD *v106; // rdx
  int v107; // eax
  __int64 v108; // rbp
  void *v109; // r8
  __int64 v110; // r12
  char *v111; // rbx
  char *v112; // rcx
  __int64 v113; // rax
  __int64 v114; // r13
  const char *v115; // r15
  __int64 v116; // rbx
  const char *v117; // rax
  __int64 v118; // r13
  __int64 v119; // rax
  __int64 v120; // rbx
  __int64 v121; // rbx
  __m128i v122; // xmm0
  __m128i v123; // xmm0
  __int32 v124; // esi
  signed __int64 v125; // rax
  signed __int64 v126; // rsi
  unsigned __int64 v127; // rax
  unsigned __int64 v128; // r13
  __m128i *v129; // rax
  __m128i *v130; // rcx
  __m128i *v131; // r8
  char *v132; // rdx
  const __m128i *v133; // rsi
  char *v134; // rdx
  __m128i v135; // xmm0
  __m128i *v136; // r14
  __m128i *v137; // r13
  __int64 v138; // r14
  const __m128i *v139; // rdi
  __int64 v140; // rax
  __m128i *v141; // rdx
  __m128i v142; // xmm0
  __int64 v143; // [rsp+0h] [rbp-268h]
  __m128i *v144; // [rsp+0h] [rbp-268h]
  void *v145; // [rsp+8h] [rbp-260h]
  __int64 v147; // [rsp+10h] [rbp-258h]
  _QWORD *v148; // [rsp+10h] [rbp-258h]
  void *v149; // [rsp+18h] [rbp-250h]
  void *v150; // [rsp+18h] [rbp-250h]
  __int64 v151; // [rsp+18h] [rbp-250h]
  char *v152; // [rsp+18h] [rbp-250h]
  __m128i *v153; // [rsp+18h] [rbp-250h]
  void *v154; // [rsp+18h] [rbp-250h]
  const __m128i *v155; // [rsp+18h] [rbp-250h]
  char *v156; // [rsp+18h] [rbp-250h]
  __m128i *v158; // [rsp+30h] [rbp-238h]
  void *v159; // [rsp+30h] [rbp-238h]
  void *v160; // [rsp+30h] [rbp-238h]
  __m128i *v161; // [rsp+30h] [rbp-238h]
  const __m128i *v162; // [rsp+30h] [rbp-238h]
  char *v163; // [rsp+30h] [rbp-238h]
  unsigned __int64 v164; // [rsp+38h] [rbp-230h]
  signed __int64 v165; // [rsp+38h] [rbp-230h]
  signed __int64 v166; // [rsp+38h] [rbp-230h]
  unsigned __int64 v167; // [rsp+40h] [rbp-228h]
  const __m128i *v168; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v170; // [rsp+68h] [rbp-200h]
  const char *v171; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v172; // [rsp+88h] [rbp-1E0h]
  __int128 v173; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v174; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v175; // [rsp+B8h] [rbp-1B0h]
  char *v176; // [rsp+C0h] [rbp-1A8h]
  __int64 v177; // [rsp+C8h] [rbp-1A0h]
  __m128i v178[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v179; // [rsp+F0h] [rbp-178h]
  __m128i v180[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v181; // [rsp+120h] [rbp-148h]
  _BYTE v182[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v183; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v184)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  __int64 v185; // [rsp+150h] [rbp-118h] BYREF
  __m128i v186; // [rsp+158h] [rbp-110h] BYREF
  __m128i v187; // [rsp+168h] [rbp-100h] BYREF
  __int64 v188; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v189; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v190; // [rsp+198h] [rbp-D0h] BYREF
  __int64 v191; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v192; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v193; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v194[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *m128i_i8; // [rsp+1F0h] [rbp-78h]
  __int64 v196; // [rsp+1F8h] [rbp-70h]
  __m128i v197; // [rsp+200h] [rbp-68h] BYREF
  __m128i v198; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v199; // [rsp+228h] [rbp-40h]

  v199 = __readfsqword(0x28u);
  sub_2C8840((__int64)v178, a2);
  v179 = a1;
  sub_2C8840((__int64)v180, a2);
  v181 = a1;
  sub_2C8840((__int64)v182, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx(*(int *)(*a1 + 4 * v4 + 16));
    sub_2C8840((__int64)&v185, v178);
    v6 = *v5;
    v7 = 88 * v5[1];
    v149 = (void *)(*v5 + v7);
    sub_2C8840((__int64)&v188, (const __m128i *)&v185);
    sub_2C8840((__int64)v194, (const __m128i *)&v188);
    sub_2C8840((__int64)&v191, (const __m128i *)v194);
    sub_621D0((__int64)v194);
    if ( v149 != (void *)v6 )
    {
      sub_2C8840((__int64)v194, (const __m128i *)&v191);
      v8 = -2;
      v9 = 0x2E8BA2E8BA2E8BA3LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2DCBF0(v6, (__int64)v149, v8, (const __m128i *)v194);
      sub_621D0((__int64)v194);
      sub_2C8840((__int64)v194, (const __m128i *)&v191);
      sub_2D7300(v6, (__int64)v149, (const __m128i *)v194);
      sub_621D0((__int64)v194);
    }
    ++v4;
    v5 += 3;
    sub_621D0((__int64)&v191);
    sub_621D0((__int64)&v188);
    sub_621D0((__int64)&v185);
  }
  v174 = nullptr;
  m128i_i8 = nullptr;
  v196 = (__int64)v179;
  v173 = 0;
  *(_OWORD *)v194 = 0;
  sub_2C8840((__int64)&v197, v180);
  v11 = &v186;
  v185 = v196;
  sub_2C8840((__int64)&v186, &v197);
  v12 = v194[1];
  v13 = v194[0];
  v191 = v185;
  sub_2C8840((__int64)&v192, &v186);
  v188 = v191;
  sub_2C8840((__int64)&v189, &v192);
  v14 = v12 - v13;
  sub_621D0((__int64)&v192);
  if ( v14 > 16 )
  {
    v15 = v14 >> 4;
    for ( i = ((v14 >> 4) - 2) / 2; ; --i )
    {
      v17 = *(_QWORD *)&v13[16 * i];
      v18 = *(_QWORD *)&v13[16 * i + 8];
      v193 = 0u;
      v192 = 0;
      v191 = v188;
      if ( v190.m128i_i64[0] )
      {
        v150 = (void *)v18;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v190.m128i_i64[0])(&v192, &v189, 2);
        v18 = (unsigned __int64)v150;
        v193 = _mm_loadu_si128(&v190);
      }
      sub_2D4580((__int64)v13, i, v15, v17, v18, &v191);
      if ( v193.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v192, &v192, 3);
      if ( !i )
        break;
    }
  }
  v19 = 0;
  sub_621D0((__int64)&v189);
  sub_621D0((__int64)&v186);
  if ( a1[1] )
  {
    do
    {
      while ( !a1[3 * v19 + 3] )
      {
        v20 = a1[1];
        if ( ++v19 >= v20 )
          goto LABEL_22;
      }
      v21 = (const __m128i *)v194[1];
      if ( v194[1] == m128i_i8 )
      {
        v125 = ((char *)v194[1] - (char *)v194[0]) >> 4;
        if ( v125 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v126 = 1;
        if ( v125 )
          v126 = ((char *)v194[1] - (char *)v194[0]) >> 4;
        v59 = __CFADD__(v126, v125);
        v127 = v126 + v125;
        if ( v59 )
        {
          v128 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v127 > 0x7FFFFFFFFFFFFFFLL )
            v127 = 0x7FFFFFFFFFFFFFFLL;
          v128 = v127;
        }
        v166 = (char *)v194[1] - (char *)v194[0];
        v155 = (const __m128i *)v194[0];
        v129 = (__m128i *)operator new(v128 * 16);
        v130 = (__m128i *)v155;
        v131 = v129;
        v132 = &v129->m128i_i8[v166];
        *(_QWORD *)v132 = v19;
        *((_QWORD *)v132 + 1) = 0;
        if ( v21 != v155 )
        {
          v133 = v155;
          v134 = &v129->m128i_i8[(char *)v21 - (char *)v155];
          do
          {
            v135 = _mm_loadu_si128(v133);
            ++v129;
            ++v133;
            v129[-1] = v135;
          }
          while ( v129 != (__m128i *)v134 );
        }
        v136 = v129 + 1;
        if ( v155 )
        {
          v156 = (char *)v131;
          operator delete(v130, m128i_i8 - (char *)v130);
          v131 = (__m128i *)v156;
        }
        v194[0] = v131;
        v194[1] = v136;
        m128i_i8 = v131[v128].m128i_i8;
      }
      else
      {
        *(_QWORD *)v194[1] = v19;
        v21->m128i_i64[1] = 0;
        v194[1] = (char *)v194[1] + 16;
      }
      v185 = v196;
      sub_2C8840((__int64)&v186, &v197);
      v22 = v194[1];
      v23 = v194[0];
      v191 = v185;
      sub_2C8840((__int64)&v192, &v186);
      v188 = v191;
      sub_2C8840((__int64)&v189, &v192);
      sub_621D0((__int64)&v192);
      sub_2D4420((__int64)v23, ((v22 - v23) >> 4) - 1, 0, *((_QWORD *)v22 - 2), *((_QWORD *)v22 - 1), (__int64)&v188);
      ++v19;
      sub_621D0((__int64)&v189);
      sub_621D0((__int64)&v186);
      v20 = a1[1];
    }
    while ( v19 < v20 );
LABEL_22:
    dest = nullptr;
    v170 = 0;
    if ( v20 )
    {
      v137 = (__m128i *)qvector_reserve(&dest, 0, v20, 16);
      v138 = *((_QWORD *)&v170 + 1);
      *((_QWORD *)&v170 + 1) = 0;
      v139 = (const __m128i *)dest;
      v140 = v170 - 1;
      if ( (__int64)v170 - 1 >= 0 )
      {
        v141 = v137;
        do
        {
          v142 = _mm_loadu_si128(v139);
          ++v141;
          ++v139;
          v141[-1] = v142;
          v59 = v140-- == 0;
        }
        while ( !v59 );
        v139 = (const __m128i *)dest;
      }
      qfree(v139);
      dest = v137;
      *((_QWORD *)&v170 + 1) = v138;
    }
  }
  else
  {
    dest = nullptr;
    v170 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_37CFE0(1961);
    goto LABEL_182;
  }
  v24 = (__int64 *)v194[0];
  if ( v194[0] == v194[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v170 = 0;
    v25 = v24[1];
    v26 = *v24;
    v27 = 4 * v25;
    v151 = 3 * *v24;
    v28 = 88 * v25;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v30 = *(_QWORD *)(a1[3 * v26 + 2] + 8 * (v25 + 2 * (v25 + v27)) + 80);
      if ( v30 < 0 )
      {
        if ( !under_debugger )
          sub_37CFE0(2170);
        goto LABEL_182;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v30) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v31 = v170;
        if ( *((_QWORD *)&v170 + 1) < (unsigned __int64)(v170 + 1) )
        {
          v159 = *((void **)&v170 + 1);
          v32 = (__m128i *)qvector_reserve(&dest, 0, v170 + 1, 16);
          v54 = *((void **)&v170 + 1);
          v55 = (const __m128i *)dest;
          *((_QWORD *)&v170 + 1) = v159;
          v56 = v170 - 1;
          if ( (__int64)v170 - 1 >= 0 )
          {
            v57 = v32;
            do
            {
              v58 = _mm_loadu_si128(v55);
              ++v57;
              ++v55;
              v57[-1] = v58;
              v59 = v56-- == 0;
            }
            while ( !v59 );
            v55 = (const __m128i *)dest;
          }
          v160 = v54;
          qfree(v55);
          v31 = v170;
          dest = v32;
          *((_QWORD *)&v170 + 1) = v160;
        }
        else
        {
          v32 = (__m128i *)dest;
        }
        v33 = v32[v31].m128i_i8;
        *(_QWORD *)v33 = v26;
        *((_QWORD *)v33 + 1) = v25;
        *(_QWORD *)&v170 = v170 + 1;
      }
      v34 = (const __m128i *)v194[0];
      v35 = *(_QWORD *)v194[0];
      v36 = *((_QWORD *)v194[0] + 1);
      v185 = v196;
      v187 = 0u;
      v186 = 0;
      if ( !v198.m128i_i64[0] )
      {
        v37 = (__m128i *)v194[1];
        if ( (char *)v194[1] - (char *)v194[0] <= 16 )
          goto LABEL_40;
        v50 = v196;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0])(v11, &v197, 2);
      v37 = (__m128i *)v194[1];
      v34 = (const __m128i *)v194[0];
      v38 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0];
      v187 = _mm_load_si128(&v198);
      if ( (char *)v194[1] - (char *)v194[0] > 16 )
      {
        v50 = v185;
        v193 = 0u;
        v191 = v185;
        v192 = 0;
        if ( v198.m128i_i64[0] )
        {
          v161 = (__m128i *)v194[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0])(&v192, v11, 2);
          v60 = _mm_loadu_si128(&v187);
          v190 = 0u;
          v37 = v161;
          v193 = v60;
          v188 = v191;
          v189 = 0;
          if ( v187.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v187.m128i_i64[0])(&v189, &v192, 2);
            v61 = _mm_loadu_si128(&v193);
            v37 = v161;
            v190 = v61;
            if ( v61.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v61.m128i_i64[0])(&v192, &v192, 3);
              v37 = v161;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v188 = v50;
        v190 = 0u;
        v189 = 0;
LABEL_64:
        v51 = v37[-1].m128i_u64[0];
        v52 = v37 - 1;
        v53 = v37[-1].m128i_u64[1];
        v37[-1] = _mm_loadu_si128(v34);
        v193 = 0u;
        v191 = v188;
        v192 = 0;
        if ( v190.m128i_i64[0] )
        {
          v167 = v53;
          v164 = v51;
          v158 = v37 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v190.m128i_i64[0])(&v192, &v189, 2);
          v53 = v167;
          v51 = v164;
          v52 = v158;
          v193 = _mm_loadu_si128(&v190);
        }
        sub_2D4580((__int64)v34, 0, v52 - v34, v51, v53, &v191);
        if ( v193.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v192, &v192, 3);
        if ( v190.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v190.m128i_i64[0])(&v189, &v189, 3);
        v38 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0];
      }
      if ( v38 )
        v38(v11, v11, 3);
LABEL_40:
      v39 = (__m128i *)v194[1];
      v40 = v36 + 1;
      v41 = (const __m128i *)((char *)v194[1] - 16);
      v194[1] = (char *)v194[1] - 16;
      if ( v40 >= a1[3 * v35 + 3] )
      {
        v29 = (__int64 *)v194[0];
        if ( v194[0] == v41 )
          break;
        goto LABEL_28;
      }
      if ( v41 == (const __m128i *)m128i_i8 )
      {
        v62 = ((char *)v41 - (char *)v194[0]) >> 4;
        if ( v62 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v63 = 1;
        if ( v62 )
          v63 = ((char *)v41 - (char *)v194[0]) >> 4;
        v59 = __CFADD__(v63, v62);
        v64 = v63 + v62;
        if ( v59 )
        {
          v65 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v64 > 0x7FFFFFFFFFFFFFFLL )
            v64 = 0x7FFFFFFFFFFFFFFLL;
          v65 = v64;
        }
        v168 = v41;
        v165 = (char *)v41 - (char *)v194[0];
        v162 = (const __m128i *)v194[0];
        v66 = (__m128i *)operator new(v65 * 16);
        v67 = (__m128i *)v162;
        *(__m128i *)((char *)v66 + v165) = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v40);
        if ( v168 == v162 )
        {
          v71 = (char *)v66;
        }
        else
        {
          v68 = v66;
          v69 = v162;
          do
          {
            v70 = _mm_loadu_si128(v69++);
            ++v68;
            v68[-1] = v70;
          }
          while ( v168 != v69 );
          v71 = &v66->m128i_i8[(char *)v168 - (char *)v162];
        }
        v72 = v71 + 16;
        if ( v162 )
        {
          v163 = (char *)v66;
          operator delete(v67, m128i_i8 - (char *)v67);
          v66 = (__m128i *)v163;
        }
        v194[0] = v66;
        v194[1] = v72;
        m128i_i8 = v66[v65].m128i_i8;
      }
      else
      {
        v39[-1] = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v40);
        v194[1] = (char *)v194[1] + 16;
      }
      v42 = v196;
      v187 = 0u;
      v185 = v196;
      v186 = 0;
      if ( !v198.m128i_i64[0] )
      {
        v44 = v194[1];
        v45 = v194[0];
LABEL_81:
        v188 = v42;
        v190 = 0u;
        v189 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0])(v11, &v197, 2);
      v42 = v185;
      v43 = _mm_load_si128(&v198);
      v193 = 0u;
      v44 = v194[1];
      v187 = v43;
      v45 = v194[0];
      v191 = v185;
      v192 = 0;
      if ( !v198.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0])(&v192, v11, 2);
      v46 = _mm_loadu_si128(&v187);
      v190 = 0u;
      v193 = v46;
      v188 = v191;
      v189 = 0;
      if ( v187.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v187.m128i_i64[0])(&v189, &v192, 2);
        v47 = _mm_loadu_si128(&v193);
        v190 = v47;
        if ( v47.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v47.m128i_i64[0])(&v192, &v192, 3);
      }
LABEL_48:
      sub_2D4420((__int64)v45, ((v44 - v45) >> 4) - 1, 0, *((_QWORD *)v44 - 2), *((_QWORD *)v44 - 1), (__int64)&v188);
      if ( v190.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v190.m128i_i64[0])(&v189, &v189, 3);
      if ( v187.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(v11, v11, 3);
      v29 = (__int64 *)v194[0];
      if ( v194[0] == v194[1] )
        break;
LABEL_28:
      v25 = v29[1];
      v26 = *v29;
      v27 = 4 * v25;
      if ( !v183 )
        std::__throw_bad_function_call();
    }
    while ( !v184(v182, v181[3 * *v29 + 2] + 88 * v25, v28 + v181[v151 + 2]) );
    if ( a3 )
    {
      v103 = (void *)a1[12];
      LODWORD(v173) = 0;
      v154 = v103;
      sub_2C88D0(a1 + 11, (int *)&v173);
      v104 = (char *)dest;
      v105 = (char *)dest + 16 * v170;
      if ( dest == v105 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *(_QWORD *)v104 + 2] + 88LL * *((_QWORD *)v104 + 1) + 80) = v154;
        v106 = (_DWORD *)(4LL * (_QWORD)v154 + a1[11]);
        v107 = 1 << *(_QWORD *)v104;
        if ( (*v106 & v107) != 0 )
          break;
        v104 += 16;
        *v106 |= v107;
        if ( v105 == v104 )
          goto LABEL_55;
      }
      switch_dbctx(*(int *)(*a1 + 4LL * *(_QWORD *)v104 + 16));
      v108 = 0;
      v109 = v154;
      v110 = a1[3 * *(_QWORD *)v104 + 3];
      if ( v110 )
      {
        v147 = 2LL * *(_QWORD *)v104;
        v143 = *(_QWORD *)v104;
        v108 = qalloc_or_throw(88 * v110);
        v118 = 0;
        v109 = v154;
        v119 = v108 + 24;
        v148 = &a1[v147 + v143];
        do
        {
          v145 = v109;
          v144 = (__m128i *)v119;
          v120 = v148[2];
          *(_QWORD *)(v119 - 24) = off_4B4BF8;
          v121 = -24 - v108 + v119 + v120;
          v122 = _mm_loadu_si128((const __m128i *)(v121 + 8));
          *(_QWORD *)v119 = 0;
          *(_OWORD *)(v119 + 8) = 0;
          *(__m128i *)(v119 - 16) = v122;
          sub_2A8F60((_QWORD *)v119, v121 + 24);
          ++v118;
          v109 = v145;
          v144[1].m128i_i8[8] = *(_BYTE *)(v121 + 48);
          v123 = _mm_loadu_si128((const __m128i *)(v121 + 56));
          v119 = (__int64)&v144[5].m128i_i64[1];
          v124 = *(_DWORD *)(v121 + 72);
          v144[-2].m128i_i64[1] = (__int64)off_4B6560;
          v144[2] = v123;
          v144[3].m128i_i32[0] = v124;
          v144[3].m128i_i64[1] = *(_QWORD *)(v121 + 80);
        }
        while ( v110 != v118 );
      }
      v111 = (char *)dest;
      v112 = (char *)dest + 16 * v170;
      if ( v112 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v111 == *(_QWORD *)v104 )
          {
            v113 = *((_QWORD *)v111 + 1);
            v114 = *((_QWORD *)v104 + 1);
            if ( v113 != v114 && *(void **)(v108 + 88 * v113 + 80) == v109 )
              break;
          }
          v111 += 16;
          if ( v112 == v111 )
            goto LABEL_152;
        }
        sub_7CDC0((__int64)&v173, (const char *)&unk_3F5793);
        v115 = s1;
        if ( *((_QWORD *)&v173 + 1) )
          v115 = (const char *)v173;
        v116 = *((_QWORD *)v111 + 1);
        sub_7CDC0((__int64)&v171, (const char *)&unk_3F5793);
        v117 = s1;
        if ( v172 )
          v117 = v171;
        sub_68620((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *(_QWORD *)v104, v117, v116, v115, v114);
        if ( v171 )
        {
          v172 = 0;
          qfree(v171);
        }
        if ( (_QWORD)v173 )
        {
          *((_QWORD *)&v173 + 1) = 0;
          qfree(v173);
        }
      }
LABEL_152:
      if ( !under_debugger )
        sub_37CFE0(2171);
LABEL_182:
      BUG();
    }
    v48 = v170;
    if ( (unsigned __int64)v170 <= 1 )
      goto LABEL_55;
    v73 = (__int64 *)dest;
    DWORD2(v173) = 0;
    v175 = (__int128 *)((char *)&v173 + 8);
    v174 = nullptr;
    v176 = (char *)&v173 + 8;
    v177 = 0;
    v152 = (char *)dest + 16 * v170;
    if ( v152 != dest )
    {
      v74 = (char *)dest;
      do
      {
        v171 = *(const char **)(a1[3 * *(_QWORD *)v74 + 2] + 88LL * *((_QWORD *)v74 + 1) + 80);
        v75 = sub_2C8980(&v173, (unsigned __int64 *)&v171);
        v76 = *(_QWORD *)v74;
        v74 += 16;
        *(_DWORD *)v75 |= 1 << v76;
      }
      while ( v152 != v74 );
      if ( v175 != (__int128 *)((char *)&v173 + 8) )
      {
        v153 = v11;
        v77 = (__int64)v175;
        do
        {
          v78 = v77;
          v79 = *(_DWORD *)(v77 + 40);
          v80 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v77 + 32));
          v77 = std::_Rb_tree_increment(v77);
          if ( v80 != v79 )
          {
            v81 = (void *)std::_Rb_tree_rebalance_for_erase(v78, (char *)&v173 + 8);
            operator delete(v81, 0x30u);
            --v177;
          }
        }
        while ( (__int128 *)v77 != (__int128 *)((char *)&v173 + 8) );
        v11 = v153;
      }
      v48 = v170;
      v73 = (__int64 *)dest;
      v82 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v170 != dest )
      {
        do
        {
          while ( 1 )
          {
            v84 = v82 + 2;
            if ( (_QWORD *)((char *)&v173 + 8) == sub_2A8E40(
                                                    (__int64)&v173,
                                                    *(_QWORD *)(a1[3 * *v82 + 2] + 88 * v82[1] + 80)) )
              break;
            v48 = v170;
            v82 += 2;
            if ( v84 == &v73[2 * (_QWORD)v170] )
              goto LABEL_112;
          }
          v85 = v83 - (_QWORD)v82;
          if ( (v85 >> 4) - 2 >= 0 )
          {
            memmove(v82, v84, v85 - 16);
            v73 = (__int64 *)dest;
          }
          *(_QWORD *)&v170 = v170 - 1;
          v48 = v170;
        }
        while ( v82 != &v73[2 * (_QWORD)v170] );
      }
      goto LABEL_112;
    }
    while ( 2 )
    {
      v86 = 16 * v48;
      v87 = *v73;
      v88 = v73[1];
      v89 = v73;
      if ( (v86 >> 4) - 2 >= 0 )
      {
        memmove(v73, v73 + 2, v86 - 16);
        v73 = (__int64 *)dest;
        v89 = (__int64 *)dest;
      }
      v90 = a1[1];
      v48 = v170 - 1;
      v91 = a1[3 * v87 + 2] + 88 * v88;
      *(_QWORD *)&v170 = v170 - 1;
      v92 = *(_QWORD *)(v91 + 80);
      if ( v90 )
      {
        v93 = 0;
        v94 = *(_DWORD *)(a1[11] + 4 * v92);
        do
        {
          v95 = -1;
          if ( (v94 & (1 << v93)) != 0 )
            v95 = v92;
          *(&v191 + v93++) = v95;
        }
        while ( v93 != v90 );
      }
      if ( 16 * v48 )
      {
        do
        {
          v98 = *v89;
          v99 = a1[3 * *v89 + 2] + 88 * v89[1];
          v100 = *(_QWORD *)(v99 + 80);
          if ( *(&v191 + *v89) == -1 )
          {
            v101 = a1[11];
            *(&v191 + v98) = v100;
            *(_DWORD *)(v101 + 4 * v100) &= ~(1 << v98);
            if ( !*(_DWORD *)(a1[11] + 4 * v100) )
              ++a1[14];
            *(_QWORD *)(v99 + 80) = v92;
            *(_DWORD *)(4 * v92 + a1[11]) |= 1 << *v89;
            v97 = v89 + 2;
            v73 = (__int64 *)dest;
            v48 = v170;
            if ( v92 == *(_QWORD *)(v99 + 80) )
            {
LABEL_129:
              if ( (((char *)&v73[2 * v48] - (char *)v89) >> 4) - 2 >= 0 )
              {
                v102 = (__int64 *)memmove(v89, v97, (char *)&v73[2 * v48] - (char *)v89 - 16);
                v73 = (__int64 *)dest;
                v89 = v102;
                v48 = v170;
              }
              *(_QWORD *)&v170 = --v48;
              continue;
            }
          }
          else
          {
            v96 = v92 == v100;
            v97 = v89 + 2;
            v48 = v170;
            if ( v96 )
              goto LABEL_129;
          }
          v89 = (__int64 *)v97;
        }
        while ( v89 != &v73[2 * v48] );
      }
LABEL_112:
      if ( v48 )
        continue;
      break;
    }
    sub_2A8EA0((void **)v174);
LABEL_55:
    v24 = (__int64 *)v194[0];
  }
  while ( v194[1] != v194[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v170 = 0;
    qfree(dest);
  }
  sub_621D0((__int64)&v197);
  if ( v194[0] )
    operator delete(v194[0], m128i_i8 - (char *)v194[0]);
  sub_621D0((__int64)v182);
  sub_621D0((__int64)v180);
  sub_621D0((__int64)v178);
  return v199 - __readfsqword(0x28u);
}
