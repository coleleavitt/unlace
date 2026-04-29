unsigned __int64 __fastcall sub_2E6B80(_QWORD *a1, const __m128i *a2, char a3)
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
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // r12
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __m128i *v32; // r15
  char *m128i_i8; // rax
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
  int v122; // esi
  __int64 v123; // rcx
  signed __int64 v124; // rax
  signed __int64 v125; // rcx
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // r13
  char *v128; // rax
  __m128i *v129; // rdx
  char *v130; // rcx
  char *v131; // rsi
  char *v132; // rsi
  const __m128i *v133; // rdi
  __m128i v134; // xmm0
  void *v135; // r14
  __m128i *v136; // r13
  __int64 v137; // r14
  const __m128i *v138; // rdi
  __int64 v139; // rax
  __m128i *v140; // rdx
  __m128i v141; // xmm0
  __int64 v142; // [rsp+0h] [rbp-268h]
  __int64 v143; // [rsp+0h] [rbp-268h]
  void *v144; // [rsp+8h] [rbp-260h]
  __int64 v146; // [rsp+10h] [rbp-258h]
  _QWORD *v147; // [rsp+10h] [rbp-258h]
  void *v148; // [rsp+18h] [rbp-250h]
  void *v149; // [rsp+18h] [rbp-250h]
  __int64 v150; // [rsp+18h] [rbp-250h]
  char *v151; // [rsp+18h] [rbp-250h]
  __m128i *v152; // [rsp+18h] [rbp-250h]
  void *v153; // [rsp+18h] [rbp-250h]
  const __m128i *v154; // [rsp+18h] [rbp-250h]
  char *v155; // [rsp+18h] [rbp-250h]
  __m128i *v157; // [rsp+30h] [rbp-238h]
  void *v158; // [rsp+30h] [rbp-238h]
  void *v159; // [rsp+30h] [rbp-238h]
  __m128i *v160; // [rsp+30h] [rbp-238h]
  const __m128i *v161; // [rsp+30h] [rbp-238h]
  char *v162; // [rsp+30h] [rbp-238h]
  unsigned __int64 v163; // [rsp+38h] [rbp-230h]
  signed __int64 v164; // [rsp+38h] [rbp-230h]
  signed __int64 v165; // [rsp+38h] [rbp-230h]
  unsigned __int64 v166; // [rsp+40h] [rbp-228h]
  const __m128i *v167; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v169; // [rsp+68h] [rbp-200h]
  const char *v170; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v171; // [rsp+88h] [rbp-1E0h]
  __int128 v172; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v173; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v174; // [rsp+B8h] [rbp-1B0h]
  char *v175; // [rsp+C0h] [rbp-1A8h]
  __int64 v176; // [rsp+C8h] [rbp-1A0h]
  __m128i v177[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v178; // [rsp+F0h] [rbp-178h]
  __m128i v179[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v180; // [rsp+120h] [rbp-148h]
  _BYTE v181[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v182; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v183)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  __int64 v184; // [rsp+150h] [rbp-118h] BYREF
  __m128i v185; // [rsp+158h] [rbp-110h] BYREF
  __m128i v186; // [rsp+168h] [rbp-100h] BYREF
  __int64 v187; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v188; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v189; // [rsp+198h] [rbp-D0h] BYREF
  __int64 v190; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v191; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v192; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v193[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *v194; // [rsp+1F0h] [rbp-78h]
  __int64 v195; // [rsp+1F8h] [rbp-70h]
  __m128i v196; // [rsp+200h] [rbp-68h] BYREF
  __m128i v197; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v198; // [rsp+228h] [rbp-40h]

  v198 = __readfsqword(0x28u);
  sub_2C9440((__int64)v177, a2);
  v178 = a1;
  sub_2C9440((__int64)v179, a2);
  v180 = a1;
  sub_2C9440((__int64)v181, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx(*(int *)(*a1 + 4 * v4 + 16));
    sub_2C9440((__int64)&v184, v177);
    v6 = *v5;
    v7 = 56 * v5[1];
    v148 = (void *)(*v5 + v7);
    sub_2C9440((__int64)&v187, (const __m128i *)&v184);
    sub_2C9440((__int64)v193, (const __m128i *)&v187);
    sub_2C9440((__int64)&v190, (const __m128i *)v193);
    sub_628D0((__int64)v193);
    if ( v148 != (void *)v6 )
    {
      sub_2C9440((__int64)v193, (const __m128i *)&v190);
      v8 = -2;
      v9 = 0x6DB6DB6DB6DB6DB7LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2E65D0(v6, (__int64)v148, v8, (const __m128i *)v193);
      sub_628D0((__int64)v193);
      sub_2C9440((__int64)v193, (const __m128i *)&v190);
      sub_2D90A0(v6, (__int64)v148, (const __m128i *)v193);
      sub_628D0((__int64)v193);
    }
    ++v4;
    v5 += 3;
    sub_628D0((__int64)&v190);
    sub_628D0((__int64)&v187);
    sub_628D0((__int64)&v184);
  }
  v173 = nullptr;
  v194 = nullptr;
  v195 = (__int64)v178;
  v172 = 0;
  *(_OWORD *)v193 = 0;
  sub_2C9440((__int64)&v196, v179);
  v11 = &v185;
  v184 = v195;
  sub_2C9440((__int64)&v185, &v196);
  v12 = v193[1];
  v13 = v193[0];
  v190 = v184;
  sub_2C9440((__int64)&v191, &v185);
  v187 = v190;
  sub_2C9440((__int64)&v188, &v191);
  v14 = v12 - v13;
  sub_628D0((__int64)&v191);
  if ( v14 > 16 )
  {
    v15 = v14 >> 4;
    for ( i = ((v14 >> 4) - 2) / 2; ; --i )
    {
      v17 = *(_QWORD *)&v13[16 * i];
      v18 = *(_QWORD *)&v13[16 * i + 8];
      v192 = 0u;
      v191 = 0;
      v190 = v187;
      if ( v189.m128i_i64[0] )
      {
        v149 = (void *)v18;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v189.m128i_i64[0])(&v191, &v188, 2);
        v18 = (unsigned __int64)v149;
        v192 = _mm_loadu_si128(&v189);
      }
      sub_2D5860((__int64)v13, i, v15, v17, v18, &v190);
      if ( v192.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v191, &v191, 3);
      if ( !i )
        break;
    }
  }
  v19 = 0;
  sub_628D0((__int64)&v188);
  sub_628D0((__int64)&v185);
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
      v21 = (const __m128i *)v193[1];
      if ( v193[1] == v194 )
      {
        v124 = ((char *)v193[1] - (char *)v193[0]) >> 4;
        if ( v124 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v125 = 1;
        if ( v124 )
          v125 = ((char *)v193[1] - (char *)v193[0]) >> 4;
        v59 = __CFADD__(v125, v124);
        v126 = v125 + v124;
        if ( v59 )
        {
          v127 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v126 > 0x7FFFFFFFFFFFFFFLL )
            v126 = 0x7FFFFFFFFFFFFFFLL;
          v127 = 16 * v126;
        }
        v165 = (char *)v193[1] - (char *)v193[0];
        v154 = (const __m128i *)v193[0];
        v128 = (char *)operator new(v127);
        v129 = (__m128i *)v154;
        v130 = v128;
        v131 = &v128[v165];
        *(_QWORD *)v131 = v19;
        *((_QWORD *)v131 + 1) = 0;
        if ( v21 != v154 )
        {
          v132 = v128;
          v133 = v154;
          v128 += (char *)v21 - (char *)v154;
          do
          {
            v134 = _mm_loadu_si128(v133);
            v132 += 16;
            ++v133;
            *((__m128i *)v132 - 1) = v134;
          }
          while ( v128 != v132 );
        }
        v135 = v128 + 16;
        if ( v154 )
        {
          v155 = v130;
          operator delete(v129, v194 - (char *)v129);
          v130 = v155;
        }
        v193[0] = v130;
        v193[1] = v135;
        v194 = &v130[v127];
      }
      else
      {
        *(_QWORD *)v193[1] = v19;
        v21->m128i_i64[1] = 0;
        v193[1] = (char *)v193[1] + 16;
      }
      v184 = v195;
      sub_2C9440((__int64)&v185, &v196);
      v22 = v193[1];
      v23 = v193[0];
      v190 = v184;
      sub_2C9440((__int64)&v191, &v185);
      v187 = v190;
      sub_2C9440((__int64)&v188, &v191);
      sub_628D0((__int64)&v191);
      sub_2D5700((__int64)v23, ((v22 - v23) >> 4) - 1, 0, *((_QWORD *)v22 - 2), *((_QWORD *)v22 - 1), (__int64)&v187);
      ++v19;
      sub_628D0((__int64)&v188);
      sub_628D0((__int64)&v185);
      v20 = a1[1];
    }
    while ( v19 < v20 );
LABEL_22:
    dest = nullptr;
    v169 = 0;
    if ( v20 )
    {
      v136 = (__m128i *)qvector_reserve(&dest, 0, v20, 16);
      v137 = *((_QWORD *)&v169 + 1);
      *((_QWORD *)&v169 + 1) = 0;
      v138 = (const __m128i *)dest;
      v139 = v169 - 1;
      if ( (__int64)v169 - 1 >= 0 )
      {
        v140 = v136;
        do
        {
          v141 = _mm_loadu_si128(v138);
          ++v140;
          ++v138;
          v140[-1] = v141;
          v59 = v139-- == 0;
        }
        while ( !v59 );
        v138 = (const __m128i *)dest;
      }
      qfree(v138);
      dest = v136;
      *((_QWORD *)&v169 + 1) = v137;
    }
  }
  else
  {
    dest = nullptr;
    v169 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_37DDE0(1961);
    goto LABEL_182;
  }
  v24 = (__int64 *)v193[0];
  if ( v193[0] == v193[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v169 = 0;
    v25 = v24[1];
    v26 = *v24;
    v27 = 8 * v25;
    v150 = 3 * *v24;
    v28 = 56 * v25;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v30 = *(_QWORD *)(a1[3 * v26 + 2] + 8 * (v27 - v25) + 48);
      if ( v30 < 0 )
      {
        if ( !under_debugger )
          sub_37DDE0(2170);
        goto LABEL_182;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v30) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v31 = v169;
        if ( *((_QWORD *)&v169 + 1) < (unsigned __int64)(v169 + 1) )
        {
          v158 = *((void **)&v169 + 1);
          v32 = (__m128i *)qvector_reserve(&dest, 0, v169 + 1, 16);
          v54 = *((void **)&v169 + 1);
          v55 = (const __m128i *)dest;
          *((_QWORD *)&v169 + 1) = v158;
          v56 = v169 - 1;
          if ( (__int64)v169 - 1 >= 0 )
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
          v159 = v54;
          qfree(v55);
          v31 = v169;
          dest = v32;
          *((_QWORD *)&v169 + 1) = v159;
        }
        else
        {
          v32 = (__m128i *)dest;
        }
        m128i_i8 = v32[v31].m128i_i8;
        *(_QWORD *)m128i_i8 = v26;
        *((_QWORD *)m128i_i8 + 1) = v25;
        *(_QWORD *)&v169 = v169 + 1;
      }
      v34 = (const __m128i *)v193[0];
      v35 = *(_QWORD *)v193[0];
      v36 = *((_QWORD *)v193[0] + 1);
      v184 = v195;
      v186 = 0u;
      v185 = 0;
      if ( !v197.m128i_i64[0] )
      {
        v37 = (__m128i *)v193[1];
        if ( (char *)v193[1] - (char *)v193[0] <= 16 )
          goto LABEL_40;
        v50 = v195;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v197.m128i_i64[0])(v11, &v196, 2);
      v37 = (__m128i *)v193[1];
      v34 = (const __m128i *)v193[0];
      v38 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v197.m128i_i64[0];
      v186 = _mm_load_si128(&v197);
      if ( (char *)v193[1] - (char *)v193[0] > 16 )
      {
        v50 = v184;
        v192 = 0u;
        v190 = v184;
        v191 = 0;
        if ( v197.m128i_i64[0] )
        {
          v160 = (__m128i *)v193[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v197.m128i_i64[0])(&v191, v11, 2);
          v60 = _mm_loadu_si128(&v186);
          v189 = 0u;
          v37 = v160;
          v192 = v60;
          v187 = v190;
          v188 = 0;
          if ( v186.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v186.m128i_i64[0])(&v188, &v191, 2);
            v61 = _mm_loadu_si128(&v192);
            v37 = v160;
            v189 = v61;
            if ( v61.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v61.m128i_i64[0])(&v191, &v191, 3);
              v37 = v160;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v187 = v50;
        v189 = 0u;
        v188 = 0;
LABEL_64:
        v51 = v37[-1].m128i_u64[0];
        v52 = v37 - 1;
        v53 = v37[-1].m128i_u64[1];
        v37[-1] = _mm_loadu_si128(v34);
        v192 = 0u;
        v190 = v187;
        v191 = 0;
        if ( v189.m128i_i64[0] )
        {
          v166 = v53;
          v163 = v51;
          v157 = v37 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v189.m128i_i64[0])(&v191, &v188, 2);
          v53 = v166;
          v51 = v163;
          v52 = v157;
          v192 = _mm_loadu_si128(&v189);
        }
        sub_2D5860((__int64)v34, 0, v52 - v34, v51, v53, &v190);
        if ( v192.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v191, &v191, 3);
        if ( v189.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v189.m128i_i64[0])(&v188, &v188, 3);
        v38 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128i_i64[0];
      }
      if ( v38 )
        v38(v11, v11, 3);
LABEL_40:
      v39 = (__m128i *)v193[1];
      v40 = v36 + 1;
      v41 = (const __m128i *)((char *)v193[1] - 16);
      v193[1] = (char *)v193[1] - 16;
      if ( v40 >= a1[3 * v35 + 3] )
      {
        v29 = (__int64 *)v193[0];
        if ( v193[0] == v41 )
          break;
        goto LABEL_28;
      }
      if ( v41 == (const __m128i *)v194 )
      {
        v62 = ((char *)v41 - (char *)v193[0]) >> 4;
        if ( v62 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v63 = 1;
        if ( v62 )
          v63 = ((char *)v41 - (char *)v193[0]) >> 4;
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
        v167 = v41;
        v164 = (char *)v41 - (char *)v193[0];
        v161 = (const __m128i *)v193[0];
        v66 = (__m128i *)operator new(v65 * 16);
        v67 = (__m128i *)v161;
        *(__m128i *)((char *)v66 + v164) = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v40);
        if ( v167 == v161 )
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
          while ( v167 != v69 );
          v71 = &v66->m128i_i8[(char *)v167 - (char *)v161];
        }
        v72 = v71 + 16;
        if ( v161 )
        {
          v162 = (char *)v66;
          operator delete(v67, v194 - (char *)v67);
          v66 = (__m128i *)v162;
        }
        v193[0] = v66;
        v193[1] = v72;
        v194 = v66[v65].m128i_i8;
      }
      else
      {
        v39[-1] = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v40);
        v193[1] = (char *)v193[1] + 16;
      }
      v42 = v195;
      v186 = 0u;
      v184 = v195;
      v185 = 0;
      if ( !v197.m128i_i64[0] )
      {
        v44 = v193[1];
        v45 = v193[0];
LABEL_81:
        v187 = v42;
        v189 = 0u;
        v188 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v197.m128i_i64[0])(v11, &v196, 2);
      v42 = v184;
      v43 = _mm_load_si128(&v197);
      v192 = 0u;
      v44 = v193[1];
      v186 = v43;
      v45 = v193[0];
      v190 = v184;
      v191 = 0;
      if ( !v197.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v197.m128i_i64[0])(&v191, v11, 2);
      v46 = _mm_loadu_si128(&v186);
      v189 = 0u;
      v192 = v46;
      v187 = v190;
      v188 = 0;
      if ( v186.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v186.m128i_i64[0])(&v188, &v191, 2);
        v47 = _mm_loadu_si128(&v192);
        v189 = v47;
        if ( v47.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v47.m128i_i64[0])(&v191, &v191, 3);
      }
LABEL_48:
      sub_2D5700((__int64)v45, ((v44 - v45) >> 4) - 1, 0, *((_QWORD *)v44 - 2), *((_QWORD *)v44 - 1), (__int64)&v187);
      if ( v189.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v189.m128i_i64[0])(&v188, &v188, 3);
      if ( v186.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128i_i64[0])(v11, v11, 3);
      v29 = (__int64 *)v193[0];
      if ( v193[0] == v193[1] )
        break;
LABEL_28:
      v25 = v29[1];
      v26 = *v29;
      v27 = 8 * v25;
      if ( !v182 )
        std::__throw_bad_function_call();
    }
    while ( !v183(v181, v180[3 * *v29 + 2] + 56 * v25, v28 + v180[v150 + 2]) );
    if ( a3 )
    {
      v103 = (void *)a1[12];
      LODWORD(v172) = 0;
      v153 = v103;
      sub_2C9090(a1 + 11, (int *)&v172);
      v104 = (char *)dest;
      v105 = (char *)dest + 16 * v169;
      if ( dest == v105 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *(_QWORD *)v104 + 2] + 56LL * *((_QWORD *)v104 + 1) + 48) = v153;
        v106 = (_DWORD *)(4LL * (_QWORD)v153 + a1[11]);
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
      v109 = v153;
      v110 = a1[3 * *(_QWORD *)v104 + 3];
      if ( v110 )
      {
        v146 = 2LL * *(_QWORD *)v104;
        v142 = *(_QWORD *)v104;
        v108 = qalloc_or_throw(56 * v110);
        v118 = 0;
        v109 = v153;
        v119 = v108 + 16;
        v147 = &a1[v146 + v142];
        do
        {
          v144 = v109;
          v143 = v119;
          v120 = v147[2];
          *(_QWORD *)(v119 - 16) = off_4B3DB0;
          v121 = -16 - v108 + v119 + v120;
          v122 = *(_DWORD *)(v121 + 8);
          *(_QWORD *)v119 = 0;
          *(_OWORD *)(v119 + 8) = 0;
          *(_DWORD *)(v119 - 8) = v122;
          sub_2A9720((_QWORD *)v119, v121 + 16);
          ++v118;
          v109 = v144;
          *(_QWORD *)(v143 + 24) = *(_QWORD *)(v121 + 40);
          v123 = *(_QWORD *)(v121 + 48);
          v119 = v143 + 56;
          *(_QWORD *)(v143 - 16) = off_4B5678;
          *(_QWORD *)(v143 + 32) = v123;
        }
        while ( v110 != v118 );
      }
      v111 = (char *)dest;
      v112 = (char *)dest + 16 * v169;
      if ( v112 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v111 == *(_QWORD *)v104 )
          {
            v113 = *((_QWORD *)v111 + 1);
            v114 = *((_QWORD *)v104 + 1);
            if ( v113 != v114 && *(void **)(v108 + 56 * v113 + 48) == v109 )
              break;
          }
          v111 += 16;
          if ( v112 == v111 )
            goto LABEL_152;
        }
        sub_7D4C0((__int64)&v172, (const char *)&unk_3F3793);
        v115 = s1;
        if ( *((_QWORD *)&v172 + 1) )
          v115 = (const char *)v172;
        v116 = *((_QWORD *)v111 + 1);
        sub_7D4C0((__int64)&v170, (const char *)&unk_3F3793);
        v117 = s1;
        if ( v171 )
          v117 = v170;
        sub_68D20((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *(_QWORD *)v104, v117, v116, v115, v114);
        if ( v170 )
        {
          v171 = 0;
          qfree(v170);
        }
        if ( (_QWORD)v172 )
        {
          *((_QWORD *)&v172 + 1) = 0;
          qfree(v172);
        }
      }
LABEL_152:
      if ( !under_debugger )
        sub_37DDE0(2171);
LABEL_182:
      BUG();
    }
    v48 = v169;
    if ( (unsigned __int64)v169 <= 1 )
      goto LABEL_55;
    v73 = (__int64 *)dest;
    DWORD2(v172) = 0;
    v174 = (__int128 *)((char *)&v172 + 8);
    v173 = nullptr;
    v175 = (char *)&v172 + 8;
    v176 = 0;
    v151 = (char *)dest + 16 * v169;
    if ( v151 != dest )
    {
      v74 = (char *)dest;
      do
      {
        v170 = *(const char **)(a1[3 * *(_QWORD *)v74 + 2] + 56LL * *((_QWORD *)v74 + 1) + 48);
        v75 = sub_2C9140(&v172, (unsigned __int64 *)&v170);
        v76 = *(_QWORD *)v74;
        v74 += 16;
        *(_DWORD *)v75 |= 1 << v76;
      }
      while ( v151 != v74 );
      if ( v174 != (__int128 *)((char *)&v172 + 8) )
      {
        v152 = v11;
        v77 = (__int64)v174;
        do
        {
          v78 = v77;
          v79 = *(_DWORD *)(v77 + 40);
          v80 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v77 + 32));
          v77 = std::_Rb_tree_increment(v77);
          if ( v80 != v79 )
          {
            v81 = (void *)std::_Rb_tree_rebalance_for_erase(v78, (char *)&v172 + 8);
            operator delete(v81, 0x30u);
            --v176;
          }
        }
        while ( (__int128 *)v77 != (__int128 *)((char *)&v172 + 8) );
        v11 = v152;
      }
      v48 = v169;
      v73 = (__int64 *)dest;
      v82 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v169 != dest )
      {
        do
        {
          while ( 1 )
          {
            v84 = v82 + 2;
            if ( (_QWORD *)((char *)&v172 + 8) == sub_2A9600(
                                                    (__int64)&v172,
                                                    *(_QWORD *)(a1[3 * *v82 + 2] + 56 * v82[1] + 48)) )
              break;
            v48 = v169;
            v82 += 2;
            if ( v84 == &v73[2 * (_QWORD)v169] )
              goto LABEL_112;
          }
          v85 = v83 - (_QWORD)v82;
          if ( (v85 >> 4) - 2 >= 0 )
          {
            memmove(v82, v84, v85 - 16);
            v73 = (__int64 *)dest;
          }
          *(_QWORD *)&v169 = v169 - 1;
          v48 = v169;
        }
        while ( v82 != &v73[2 * (_QWORD)v169] );
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
      v48 = v169 - 1;
      v91 = a1[3 * v87 + 2] + 56 * v88;
      *(_QWORD *)&v169 = v169 - 1;
      v92 = *(_QWORD *)(v91 + 48);
      if ( v90 )
      {
        v93 = 0;
        v94 = *(_DWORD *)(a1[11] + 4 * v92);
        do
        {
          v95 = -1;
          if ( (v94 & (1 << v93)) != 0 )
            v95 = v92;
          *(&v190 + v93++) = v95;
        }
        while ( v93 != v90 );
      }
      if ( 16 * v48 )
      {
        do
        {
          v98 = *v89;
          v99 = a1[3 * *v89 + 2] + 56 * v89[1];
          v100 = *(_QWORD *)(v99 + 48);
          if ( *(&v190 + *v89) == -1 )
          {
            v101 = a1[11];
            *(&v190 + v98) = v100;
            *(_DWORD *)(v101 + 4 * v100) &= ~(1 << v98);
            if ( !*(_DWORD *)(a1[11] + 4 * v100) )
              ++a1[14];
            *(_QWORD *)(v99 + 48) = v92;
            *(_DWORD *)(4 * v92 + a1[11]) |= 1 << *v89;
            v97 = v89 + 2;
            v73 = (__int64 *)dest;
            v48 = v169;
            if ( v92 == *(_QWORD *)(v99 + 48) )
            {
LABEL_129:
              if ( (((char *)&v73[2 * v48] - (char *)v89) >> 4) - 2 >= 0 )
              {
                v102 = (__int64 *)memmove(v89, v97, (char *)&v73[2 * v48] - (char *)v89 - 16);
                v73 = (__int64 *)dest;
                v89 = v102;
                v48 = v169;
              }
              *(_QWORD *)&v169 = --v48;
              continue;
            }
          }
          else
          {
            v96 = v92 == v100;
            v97 = v89 + 2;
            v48 = v169;
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
    sub_2A9660((void **)v173);
LABEL_55:
    v24 = (__int64 *)v193[0];
  }
  while ( v193[1] != v193[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v169 = 0;
    qfree(dest);
  }
  sub_628D0((__int64)&v196);
  if ( v193[0] )
    operator delete(v193[0], v194 - (char *)v193[0]);
  sub_628D0((__int64)v181);
  sub_628D0((__int64)v179);
  sub_628D0((__int64)v177);
  return v198 - __readfsqword(0x28u);
}
