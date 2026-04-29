unsigned __int64 __fastcall sub_2FB9A0(_QWORD *a1, const __m128i *a2, char a3)
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
  char *v33; // rax
  const __m128i *v34; // r15
  unsigned __int64 v35; // r14
  __int64 v36; // r13
  __m128i *v37; // rcx
  void (__fastcall *v38)(__m128i *, __m128i *, __int64); // rax
  __m128i *v39; // rax
  unsigned __int64 v40; // r13
  const __m128i *v41; // rdx
  _QWORD *v42; // rax
  __m128i v43; // xmm0
  _BYTE *v44; // r14
  _BYTE *v45; // r13
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  __int64 v48; // rax
  _QWORD *v50; // rdx
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
  __int64 v103; // r13
  char *v104; // r14
  char *v105; // rsi
  _DWORD *v106; // rdi
  int v107; // eax
  __int64 v108; // rsi
  __int64 v109; // rbp
  __int64 v110; // r12
  void *v111; // rax
  char *v112; // rbx
  char *v113; // rdx
  __int64 v114; // rax
  __int64 v115; // r12
  const char *v116; // r15
  __int64 v117; // rbx
  const char *v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rdx
  _QWORD *v122; // r12
  __int64 v123; // rbx
  __int64 v124; // rsi
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
  _QWORD *v143; // [rsp+0h] [rbp-268h]
  __int64 v144; // [rsp+8h] [rbp-260h]
  __int64 v146; // [rsp+10h] [rbp-258h]
  const __m128i *v147; // [rsp+18h] [rbp-250h]
  void *v148; // [rsp+18h] [rbp-250h]
  __int64 v149; // [rsp+18h] [rbp-250h]
  char *v150; // [rsp+18h] [rbp-250h]
  __m128i *v151; // [rsp+18h] [rbp-250h]
  void *v152; // [rsp+18h] [rbp-250h]
  const __m128i *v153; // [rsp+18h] [rbp-250h]
  char *v154; // [rsp+18h] [rbp-250h]
  __m128i *v156; // [rsp+30h] [rbp-238h]
  void *v157; // [rsp+30h] [rbp-238h]
  void *v158; // [rsp+30h] [rbp-238h]
  __m128i *v159; // [rsp+30h] [rbp-238h]
  const __m128i *v160; // [rsp+30h] [rbp-238h]
  char *v161; // [rsp+30h] [rbp-238h]
  unsigned __int64 v162; // [rsp+38h] [rbp-230h]
  signed __int64 v163; // [rsp+38h] [rbp-230h]
  signed __int64 v164; // [rsp+38h] [rbp-230h]
  unsigned __int64 v165; // [rsp+40h] [rbp-228h]
  const __m128i *v166; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v168; // [rsp+68h] [rbp-200h]
  const char *v169; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v170; // [rsp+88h] [rbp-1E0h]
  __int128 v171; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v172; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v173; // [rsp+B8h] [rbp-1B0h]
  char *v174; // [rsp+C0h] [rbp-1A8h]
  __int64 v175; // [rsp+C8h] [rbp-1A0h]
  __m128i v176[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v177; // [rsp+F0h] [rbp-178h]
  __m128i v178[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v179; // [rsp+120h] [rbp-148h]
  _BYTE v180[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v181; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v182)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v183; // [rsp+150h] [rbp-118h] BYREF
  __m128i v184; // [rsp+158h] [rbp-110h] BYREF
  __m128i v185; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v186; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v187; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v188; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v189; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v190; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v191; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v192[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *m128i_i8; // [rsp+1F0h] [rbp-78h]
  _QWORD *v194; // [rsp+1F8h] [rbp-70h]
  __m128i v195; // [rsp+200h] [rbp-68h] BYREF
  __m128i v196; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v197; // [rsp+228h] [rbp-40h]

  v197 = __readfsqword(0x28u);
  sub_2CC720((__int64)v176, a2);
  v177 = a1;
  sub_2CC720((__int64)v178, a2);
  v179 = a1;
  sub_2CC720((__int64)v180, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx(*(int *)(*a1 + 4 * v4 + 16));
    sub_2CC720((__int64)&v183, v176);
    v6 = *v5;
    v7 = 200 * v5[1];
    v147 = (const __m128i *)(*v5 + v7);
    sub_2CC720((__int64)&v186, (const __m128i *)&v183);
    sub_2CC720((__int64)v192, (const __m128i *)&v186);
    sub_2CC720((__int64)&v189, (const __m128i *)v192);
    sub_63210((__int64)v192);
    if ( v147 != (const __m128i *)v6 )
    {
      sub_2CC720((__int64)v192, (const __m128i *)&v189);
      v8 = -2;
      v9 = 0x8F5C28F5C28F5C29LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2FB150(v6, v147, v8, (const __m128i *)v192);
      sub_63210((__int64)v192);
      sub_2CC720((__int64)v192, (const __m128i *)&v189);
      sub_2DCF20(v6, (__int64)v147, (const __m128i *)v192);
      sub_63210((__int64)v192);
    }
    ++v4;
    v5 += 3;
    sub_63210((__int64)&v189);
    sub_63210((__int64)&v186);
    sub_63210((__int64)&v183);
  }
  v172 = nullptr;
  m128i_i8 = nullptr;
  v194 = v177;
  v171 = 0;
  *(_OWORD *)v192 = 0;
  sub_2CC720((__int64)&v195, v178);
  v11 = &v184;
  v183 = v194;
  sub_2CC720((__int64)&v184, &v195);
  v12 = v192[1];
  v13 = v192[0];
  v189 = v183;
  sub_2CC720((__int64)&v190, &v184);
  v186 = v189;
  sub_2CC720((__int64)&v187, &v190);
  v14 = v12 - v13;
  sub_63210((__int64)&v190);
  if ( v14 > 16 )
  {
    v15 = v14 >> 4;
    for ( i = ((v14 >> 4) - 2) / 2; ; --i )
    {
      v17 = *(_QWORD *)&v13[16 * i];
      v18 = *(_QWORD *)&v13[16 * i + 8];
      v191 = 0u;
      v190 = 0;
      v189 = v186;
      if ( v188.m128i_i64[0] )
      {
        v148 = (void *)v18;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v188.m128i_i64[0])(&v190, &v187, 2);
        v18 = (unsigned __int64)v148;
        v191 = _mm_loadu_si128(&v188);
      }
      sub_2D7E60((__int64)v13, i, v15, v17, v18, (__int64)&v189);
      if ( v191.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v191.m128i_i64[0])(&v190, &v190, 3);
      if ( !i )
        break;
    }
  }
  v19 = 0;
  sub_63210((__int64)&v187);
  sub_63210((__int64)&v184);
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
      v21 = (const __m128i *)v192[1];
      if ( v192[1] == m128i_i8 )
      {
        v125 = ((char *)v192[1] - (char *)v192[0]) >> 4;
        if ( v125 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v126 = 1;
        if ( v125 )
          v126 = ((char *)v192[1] - (char *)v192[0]) >> 4;
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
        v164 = (char *)v192[1] - (char *)v192[0];
        v153 = (const __m128i *)v192[0];
        v129 = (__m128i *)operator new(v128 * 16);
        v130 = (__m128i *)v153;
        v131 = v129;
        v132 = &v129->m128i_i8[v164];
        *(_QWORD *)v132 = v19;
        *((_QWORD *)v132 + 1) = 0;
        if ( v21 != v153 )
        {
          v133 = v153;
          v134 = &v129->m128i_i8[(char *)v21 - (char *)v153];
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
        if ( v153 )
        {
          v154 = (char *)v131;
          operator delete(v130, m128i_i8 - (char *)v130);
          v131 = (__m128i *)v154;
        }
        v192[0] = v131;
        v192[1] = v136;
        m128i_i8 = v131[v128].m128i_i8;
      }
      else
      {
        *(_QWORD *)v192[1] = v19;
        v21->m128i_i64[1] = 0;
        v192[1] = (char *)v192[1] + 16;
      }
      v183 = v194;
      sub_2CC720((__int64)&v184, &v195);
      v22 = v192[1];
      v23 = v192[0];
      v189 = v183;
      sub_2CC720((__int64)&v190, &v184);
      v186 = v189;
      sub_2CC720((__int64)&v187, &v190);
      sub_63210((__int64)&v190);
      sub_2D7D00((__int64)v23, ((v22 - v23) >> 4) - 1, 0, *((_QWORD *)v22 - 2), *((_QWORD *)v22 - 1), (__int64)&v186);
      ++v19;
      sub_63210((__int64)&v187);
      sub_63210((__int64)&v184);
      v20 = a1[1];
    }
    while ( v19 < v20 );
LABEL_22:
    dest = nullptr;
    v168 = 0;
    if ( v20 )
    {
      v137 = (__m128i *)qvector_reserve(&dest, 0, v20, 16);
      v138 = *((_QWORD *)&v168 + 1);
      *((_QWORD *)&v168 + 1) = 0;
      v139 = (const __m128i *)dest;
      v140 = v168 - 1;
      if ( (__int64)v168 - 1 >= 0 )
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
      *((_QWORD *)&v168 + 1) = v138;
    }
  }
  else
  {
    dest = nullptr;
    v168 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_37EEE0(1961);
    goto LABEL_182;
  }
  v24 = (__int64 *)v192[0];
  if ( v192[0] == v192[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v168 = 0;
    v25 = v24[1];
    v26 = *v24;
    v27 = 4 * v25;
    v149 = 3 * *v24;
    v28 = 200 * v25;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v30 = *(_QWORD *)(a1[3 * v26 + 2] + 40 * (v25 + v27) + 192);
      if ( v30 < 0 )
      {
        if ( !under_debugger )
          sub_37EEE0(2170);
        goto LABEL_182;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v30) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v31 = v168;
        if ( *((_QWORD *)&v168 + 1) < (unsigned __int64)(v168 + 1) )
        {
          v157 = *((void **)&v168 + 1);
          v32 = (__m128i *)qvector_reserve(&dest, 0, v168 + 1, 16);
          v54 = *((void **)&v168 + 1);
          v55 = (const __m128i *)dest;
          *((_QWORD *)&v168 + 1) = v157;
          v56 = v168 - 1;
          if ( (__int64)v168 - 1 >= 0 )
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
          v158 = v54;
          qfree(v55);
          v31 = v168;
          dest = v32;
          *((_QWORD *)&v168 + 1) = v158;
        }
        else
        {
          v32 = (__m128i *)dest;
        }
        v33 = v32[v31].m128i_i8;
        *(_QWORD *)v33 = v26;
        *((_QWORD *)v33 + 1) = v25;
        *(_QWORD *)&v168 = v168 + 1;
      }
      v34 = (const __m128i *)v192[0];
      v35 = *(_QWORD *)v192[0];
      v36 = *((_QWORD *)v192[0] + 1);
      v183 = v194;
      v185 = 0u;
      v184 = 0;
      if ( !v196.m128i_i64[0] )
      {
        v37 = (__m128i *)v192[1];
        if ( (char *)v192[1] - (char *)v192[0] <= 16 )
          goto LABEL_40;
        v50 = v194;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v196.m128i_i64[0])(v11, &v195, 2);
      v37 = (__m128i *)v192[1];
      v34 = (const __m128i *)v192[0];
      v38 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v196.m128i_i64[0];
      v185 = _mm_load_si128(&v196);
      if ( (char *)v192[1] - (char *)v192[0] > 16 )
      {
        v50 = v183;
        v191 = 0u;
        v189 = v183;
        v190 = 0;
        if ( v196.m128i_i64[0] )
        {
          v159 = (__m128i *)v192[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v196.m128i_i64[0])(&v190, v11, 2);
          v60 = _mm_loadu_si128(&v185);
          v188 = 0u;
          v37 = v159;
          v191 = v60;
          v186 = v189;
          v187 = 0;
          if ( v185.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v185.m128i_i64[0])(&v187, &v190, 2);
            v61 = _mm_loadu_si128(&v191);
            v37 = v159;
            v188 = v61;
            if ( v61.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v61.m128i_i64[0])(&v190, &v190, 3);
              v37 = v159;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v186 = v50;
        v188 = 0u;
        v187 = 0;
LABEL_64:
        v51 = v37[-1].m128i_u64[0];
        v52 = v37 - 1;
        v53 = v37[-1].m128i_u64[1];
        v37[-1] = _mm_loadu_si128(v34);
        v191 = 0u;
        v189 = v186;
        v190 = 0;
        if ( v188.m128i_i64[0] )
        {
          v165 = v53;
          v162 = v51;
          v156 = v37 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v188.m128i_i64[0])(&v190, &v187, 2);
          v53 = v165;
          v51 = v162;
          v52 = v156;
          v191 = _mm_loadu_si128(&v188);
        }
        sub_2D7E60((__int64)v34, 0, v52 - v34, v51, v53, (__int64)&v189);
        if ( v191.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v191.m128i_i64[0])(&v190, &v190, 3);
        if ( v188.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v188.m128i_i64[0])(&v187, &v187, 3);
        v38 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v185.m128i_i64[0];
      }
      if ( v38 )
        v38(v11, v11, 3);
LABEL_40:
      v39 = (__m128i *)v192[1];
      v40 = v36 + 1;
      v41 = (const __m128i *)((char *)v192[1] - 16);
      v192[1] = (char *)v192[1] - 16;
      if ( v40 >= a1[3 * v35 + 3] )
      {
        v29 = (__int64 *)v192[0];
        if ( v192[0] == v41 )
          break;
        goto LABEL_28;
      }
      if ( v41 == (const __m128i *)m128i_i8 )
      {
        v62 = ((char *)v41 - (char *)v192[0]) >> 4;
        if ( v62 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v63 = 1;
        if ( v62 )
          v63 = ((char *)v41 - (char *)v192[0]) >> 4;
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
        v166 = v41;
        v163 = (char *)v41 - (char *)v192[0];
        v160 = (const __m128i *)v192[0];
        v66 = (__m128i *)operator new(v65 * 16);
        v67 = (__m128i *)v160;
        *(__m128i *)((char *)v66 + v163) = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v40);
        if ( v166 == v160 )
        {
          v71 = (char *)v66;
        }
        else
        {
          v68 = v66;
          v69 = v160;
          do
          {
            v70 = _mm_loadu_si128(v69++);
            ++v68;
            v68[-1] = v70;
          }
          while ( v166 != v69 );
          v71 = &v66->m128i_i8[(char *)v166 - (char *)v160];
        }
        v72 = v71 + 16;
        if ( v160 )
        {
          v161 = (char *)v66;
          operator delete(v67, m128i_i8 - (char *)v67);
          v66 = (__m128i *)v161;
        }
        v192[0] = v66;
        v192[1] = v72;
        m128i_i8 = v66[v65].m128i_i8;
      }
      else
      {
        v39[-1] = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v40);
        v192[1] = (char *)v192[1] + 16;
      }
      v42 = v194;
      v185 = 0u;
      v183 = v194;
      v184 = 0;
      if ( !v196.m128i_i64[0] )
      {
        v44 = v192[1];
        v45 = v192[0];
LABEL_81:
        v186 = v42;
        v188 = 0u;
        v187 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v196.m128i_i64[0])(v11, &v195, 2);
      v42 = v183;
      v43 = _mm_load_si128(&v196);
      v191 = 0u;
      v44 = v192[1];
      v185 = v43;
      v45 = v192[0];
      v189 = v183;
      v190 = 0;
      if ( !v196.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v196.m128i_i64[0])(&v190, v11, 2);
      v46 = _mm_loadu_si128(&v185);
      v188 = 0u;
      v191 = v46;
      v186 = v189;
      v187 = 0;
      if ( v185.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v185.m128i_i64[0])(&v187, &v190, 2);
        v47 = _mm_loadu_si128(&v191);
        v188 = v47;
        if ( v47.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v47.m128i_i64[0])(&v190, &v190, 3);
      }
LABEL_48:
      sub_2D7D00((__int64)v45, ((v44 - v45) >> 4) - 1, 0, *((_QWORD *)v44 - 2), *((_QWORD *)v44 - 1), (__int64)&v186);
      if ( v188.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v188.m128i_i64[0])(&v187, &v187, 3);
      if ( v185.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v185.m128i_i64[0])(v11, v11, 3);
      v29 = (__int64 *)v192[0];
      if ( v192[0] == v192[1] )
        break;
LABEL_28:
      v25 = v29[1];
      v26 = *v29;
      v27 = 4 * v25;
      if ( !v181 )
        std::__throw_bad_function_call();
    }
    while ( !v182(v180, v179[3 * *v29 + 2] + 200 * v25, v28 + v179[v149 + 2]) );
    if ( a3 )
    {
      v103 = a1[12];
      LODWORD(v171) = 0;
      sub_2CA010(a1 + 11, (int *)&v171);
      v104 = (char *)dest;
      v105 = (char *)dest + 16 * v168;
      if ( dest == v105 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *(_QWORD *)v104 + 2] + 200LL * *((_QWORD *)v104 + 1) + 192) = v103;
        v106 = (_DWORD *)(4 * v103 + a1[11]);
        v107 = 1 << *(_QWORD *)v104;
        if ( (*v106 & v107) != 0 )
          break;
        v104 += 16;
        *v106 |= v107;
        if ( v105 == v104 )
          goto LABEL_55;
      }
      switch_dbctx(*(int *)(*a1 + 4LL * *(_QWORD *)v104 + 16));
      v108 = *(_QWORD *)v104;
      v109 = 0;
      v110 = 2LL * *(_QWORD *)v104;
      v111 = (void *)a1[3 * *(_QWORD *)v104 + 3];
      v152 = v111;
      if ( v111 )
      {
        v119 = qalloc_or_throw(200LL * (_QWORD)v111);
        v109 = v119;
        v120 = 0;
        v121 = 0;
        v122 = &a1[v108 + v110];
        do
        {
          v123 = v122[2] + v120;
          v146 = v121;
          v144 = v120;
          v143 = (_QWORD *)v119;
          sub_2CA8A0(v119, v123);
          v124 = *(_QWORD *)(v123 + 192);
          *v143 = off_4CFE48;
          v119 = (__int64)(v143 + 25);
          v143[24] = v124;
          v121 = v146 + 1;
          v120 = v144 + 200;
        }
        while ( v152 != (void *)(v146 + 1) );
      }
      v112 = (char *)dest;
      v113 = (char *)dest + 16 * v168;
      if ( v113 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v112 == *(_QWORD *)v104 )
          {
            v114 = *((_QWORD *)v112 + 1);
            v115 = *((_QWORD *)v104 + 1);
            if ( v114 != v115 && *(_QWORD *)(v109 + 200 * v114 + 192) == v103 )
              break;
          }
          v112 += 16;
          if ( v113 == v112 )
            goto LABEL_152;
        }
        sub_7DF40((__int64)&v171, (const char *)&unk_405793);
        v116 = s1;
        if ( *((_QWORD *)&v171 + 1) )
          v116 = (const char *)v171;
        v117 = *((_QWORD *)v112 + 1);
        sub_7DF40((__int64)&v169, (const char *)&unk_405793);
        v118 = s1;
        if ( v170 )
          v118 = v169;
        sub_69660((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *(_QWORD *)v104, v118, v117, v116, v115);
        if ( v169 )
        {
          v170 = 0;
          qfree(v169);
        }
        if ( (_QWORD)v171 )
        {
          *((_QWORD *)&v171 + 1) = 0;
          qfree(v171);
        }
      }
LABEL_152:
      if ( !under_debugger )
        sub_37EEE0(2171);
LABEL_182:
      BUG();
    }
    v48 = v168;
    if ( (unsigned __int64)v168 <= 1 )
      goto LABEL_55;
    v73 = (__int64 *)dest;
    DWORD2(v171) = 0;
    v173 = (__int128 *)((char *)&v171 + 8);
    v172 = nullptr;
    v174 = (char *)&v171 + 8;
    v175 = 0;
    v150 = (char *)dest + 16 * v168;
    if ( v150 != dest )
    {
      v74 = (char *)dest;
      do
      {
        v169 = *(const char **)(a1[3 * *(_QWORD *)v74 + 2] + 200LL * *((_QWORD *)v74 + 1) + 192);
        v75 = sub_2CA0C0(&v171, (unsigned __int64 *)&v169);
        v76 = *(_QWORD *)v74;
        v74 += 16;
        *(_DWORD *)v75 |= 1 << v76;
      }
      while ( v150 != v74 );
      if ( v173 != (__int128 *)((char *)&v171 + 8) )
      {
        v151 = v11;
        v77 = (__int64)v173;
        do
        {
          v78 = v77;
          v79 = *(_DWORD *)(v77 + 40);
          v80 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v77 + 32));
          v77 = std::_Rb_tree_increment(v77);
          if ( v80 != v79 )
          {
            v81 = (void *)std::_Rb_tree_rebalance_for_erase(v78, (char *)&v171 + 8);
            operator delete(v81, 0x30u);
            --v175;
          }
        }
        while ( (__int128 *)v77 != (__int128 *)((char *)&v171 + 8) );
        v11 = v151;
      }
      v48 = v168;
      v73 = (__int64 *)dest;
      v82 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v168 != dest )
      {
        do
        {
          while ( 1 )
          {
            v84 = v82 + 2;
            if ( (_QWORD *)((char *)&v171 + 8) == sub_2AA580(
                                                    (__int64)&v171,
                                                    *(_QWORD *)(a1[3 * *v82 + 2] + 200 * v82[1] + 192)) )
              break;
            v48 = v168;
            v82 += 2;
            if ( v84 == &v73[2 * (_QWORD)v168] )
              goto LABEL_112;
          }
          v85 = v83 - (_QWORD)v82;
          if ( (v85 >> 4) - 2 >= 0 )
          {
            memmove(v82, v84, v85 - 16);
            v73 = (__int64 *)dest;
          }
          *(_QWORD *)&v168 = v168 - 1;
          v48 = v168;
        }
        while ( v82 != &v73[2 * (_QWORD)v168] );
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
      v48 = v168 - 1;
      v91 = a1[3 * v87 + 2] + 200 * v88;
      *(_QWORD *)&v168 = v168 - 1;
      v92 = *(_QWORD *)(v91 + 192);
      if ( v90 )
      {
        v93 = 0;
        v94 = *(_DWORD *)(a1[11] + 4 * v92);
        do
        {
          v95 = -1;
          if ( (v94 & (1 << v93)) != 0 )
            v95 = v92;
          (&v189)[v93++] = (_QWORD *)v95;
        }
        while ( v93 != v90 );
      }
      if ( 16 * v48 )
      {
        do
        {
          v98 = *v89;
          v99 = a1[3 * *v89 + 2] + 200 * v89[1];
          v100 = *(_QWORD *)(v99 + 192);
          if ( (&v189)[*v89] == (_QWORD *)-1LL )
          {
            v101 = a1[11];
            (&v189)[v98] = (_QWORD *)v100;
            *(_DWORD *)(v101 + 4 * v100) &= ~(1 << v98);
            if ( !*(_DWORD *)(a1[11] + 4 * v100) )
              ++a1[14];
            *(_QWORD *)(v99 + 192) = v92;
            *(_DWORD *)(4 * v92 + a1[11]) |= 1 << *v89;
            v97 = v89 + 2;
            v73 = (__int64 *)dest;
            v48 = v168;
            if ( v92 == *(_QWORD *)(v99 + 192) )
            {
LABEL_129:
              if ( (((char *)&v73[2 * v48] - (char *)v89) >> 4) - 2 >= 0 )
              {
                v102 = (__int64 *)memmove(v89, v97, (char *)&v73[2 * v48] - (char *)v89 - 16);
                v73 = (__int64 *)dest;
                v89 = v102;
                v48 = v168;
              }
              *(_QWORD *)&v168 = --v48;
              continue;
            }
          }
          else
          {
            v96 = v92 == v100;
            v97 = v89 + 2;
            v48 = v168;
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
    sub_2AA5E0((void **)v172);
LABEL_55:
    v24 = (__int64 *)v192[0];
  }
  while ( v192[1] != v192[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v168 = 0;
    qfree(dest);
  }
  sub_63210((__int64)&v195);
  if ( v192[0] )
    operator delete(v192[0], m128i_i8 - (char *)v192[0]);
  sub_63210((__int64)v180);
  sub_63210((__int64)v178);
  sub_63210((__int64)v176);
  return v197 - __readfsqword(0x28u);
}
