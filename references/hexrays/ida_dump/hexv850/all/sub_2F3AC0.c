unsigned __int64 __fastcall sub_2F3AC0(_QWORD *a1, const __m128i *a2, char a3)
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
  __int64 v103; // r14
  char *v104; // r13
  char *v105; // rdi
  _DWORD *v106; // rdx
  int v107; // eax
  __int64 v108; // rbp
  __int64 v109; // rax
  char *v110; // rbx
  char *v111; // rcx
  __int64 v112; // rax
  __int64 v113; // r12
  const char *v114; // r15
  __int64 v115; // rbx
  const char *v116; // rax
  __int64 v117; // r12
  __int64 v118; // rbx
  __int64 v119; // rbx
  __int64 v120; // rsi
  signed __int64 v121; // rax
  signed __int64 v122; // rsi
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // r13
  __m128i *v125; // rax
  __m128i *v126; // rcx
  __m128i *v127; // r8
  char *v128; // rdx
  const __m128i *v129; // rsi
  char *v130; // rdx
  __m128i v131; // xmm0
  __m128i *v132; // r14
  __m128i *v133; // r13
  __int64 v134; // r14
  const __m128i *v135; // rdi
  __int64 v136; // rax
  __m128i *v137; // rdx
  __m128i v138; // xmm0
  __int64 v139; // [rsp+0h] [rbp-268h]
  __int64 v140; // [rsp+8h] [rbp-260h]
  __int64 v142; // [rsp+10h] [rbp-258h]
  void *v143; // [rsp+18h] [rbp-250h]
  void *v144; // [rsp+18h] [rbp-250h]
  __int64 v145; // [rsp+18h] [rbp-250h]
  char *v146; // [rsp+18h] [rbp-250h]
  __m128i *v147; // [rsp+18h] [rbp-250h]
  __int64 v148; // [rsp+18h] [rbp-250h]
  _QWORD *v149; // [rsp+18h] [rbp-250h]
  const __m128i *v150; // [rsp+18h] [rbp-250h]
  char *v151; // [rsp+18h] [rbp-250h]
  __m128i *v153; // [rsp+30h] [rbp-238h]
  void *v154; // [rsp+30h] [rbp-238h]
  void *v155; // [rsp+30h] [rbp-238h]
  __m128i *v156; // [rsp+30h] [rbp-238h]
  const __m128i *v157; // [rsp+30h] [rbp-238h]
  char *v158; // [rsp+30h] [rbp-238h]
  unsigned __int64 v159; // [rsp+38h] [rbp-230h]
  signed __int64 v160; // [rsp+38h] [rbp-230h]
  signed __int64 v161; // [rsp+38h] [rbp-230h]
  unsigned __int64 v162; // [rsp+40h] [rbp-228h]
  const __m128i *v163; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v165; // [rsp+68h] [rbp-200h]
  const char *v166; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v167; // [rsp+88h] [rbp-1E0h]
  __int128 v168; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v169; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v170; // [rsp+B8h] [rbp-1B0h]
  char *v171; // [rsp+C0h] [rbp-1A8h]
  __int64 v172; // [rsp+C8h] [rbp-1A0h]
  __m128i v173[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v174; // [rsp+F0h] [rbp-178h]
  __m128i v175[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v176; // [rsp+120h] [rbp-148h]
  _BYTE v177[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v178; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v179)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v180; // [rsp+150h] [rbp-118h] BYREF
  __m128i v181; // [rsp+158h] [rbp-110h] BYREF
  __m128i v182; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v183; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v184; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v185; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v186; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v187; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v188; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v189[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *m128i_i8; // [rsp+1F0h] [rbp-78h]
  _QWORD *v191; // [rsp+1F8h] [rbp-70h]
  __m128i v192; // [rsp+200h] [rbp-68h] BYREF
  __m128i v193; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v194; // [rsp+228h] [rbp-40h]

  v194 = __readfsqword(0x28u);
  sub_2C8EC0((__int64)v173, a2);
  v174 = a1;
  sub_2C8EC0((__int64)v175, a2);
  v176 = a1;
  sub_2C8EC0((__int64)v177, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx(*(int *)(*a1 + 4 * v4 + 16));
    sub_2C8EC0((__int64)&v180, v173);
    v6 = *v5;
    v7 = 72 * v5[1];
    v143 = (void *)(*v5 + v7);
    sub_2C8EC0((__int64)&v183, (const __m128i *)&v180);
    sub_2C8EC0((__int64)v189, (const __m128i *)&v183);
    sub_2C8EC0((__int64)&v186, (const __m128i *)v189);
    sub_621D0((__int64)v189);
    if ( v143 != (void *)v6 )
    {
      sub_2C8EC0((__int64)v189, (const __m128i *)&v186);
      v8 = -2;
      v9 = 0x8E38E38E38E38E39LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2F35E0(v6, (__int64)v143, v8, (const __m128i *)v189);
      sub_621D0((__int64)v189);
      sub_2C8EC0((__int64)v189, (const __m128i *)&v186);
      sub_2DAB40(v6, (__int64)v143, (const __m128i *)v189);
      sub_621D0((__int64)v189);
    }
    ++v4;
    v5 += 3;
    sub_621D0((__int64)&v186);
    sub_621D0((__int64)&v183);
    sub_621D0((__int64)&v180);
  }
  v169 = nullptr;
  m128i_i8 = nullptr;
  v191 = v174;
  v168 = 0;
  *(_OWORD *)v189 = 0;
  sub_2C8EC0((__int64)&v192, v175);
  v11 = &v181;
  v180 = v191;
  sub_2C8EC0((__int64)&v181, &v192);
  v12 = v189[1];
  v13 = v189[0];
  v186 = v180;
  sub_2C8EC0((__int64)&v187, &v181);
  v183 = v186;
  sub_2C8EC0((__int64)&v184, &v187);
  v14 = v12 - v13;
  sub_621D0((__int64)&v187);
  if ( v14 > 16 )
  {
    v15 = v14 >> 4;
    for ( i = ((v14 >> 4) - 2) / 2; ; --i )
    {
      v17 = *(_QWORD *)&v13[16 * i];
      v18 = *(_QWORD *)&v13[16 * i + 8];
      v188 = 0u;
      v187 = 0;
      v186 = v183;
      if ( v185.m128i_i64[0] )
      {
        v144 = (void *)v18;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v185.m128i_i64[0])(&v187, &v184, 2);
        v18 = (unsigned __int64)v144;
        v188 = _mm_loadu_si128(&v185);
      }
      sub_2D5F80((__int64)v13, i, v15, v17, v18, (__int64)&v186);
      if ( v188.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v188.m128i_i64[0])(&v187, &v187, 3);
      if ( !i )
        break;
    }
  }
  v19 = 0;
  sub_621D0((__int64)&v184);
  sub_621D0((__int64)&v181);
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
      v21 = (const __m128i *)v189[1];
      if ( v189[1] == m128i_i8 )
      {
        v121 = ((char *)v189[1] - (char *)v189[0]) >> 4;
        if ( v121 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v122 = 1;
        if ( v121 )
          v122 = ((char *)v189[1] - (char *)v189[0]) >> 4;
        v59 = __CFADD__(v122, v121);
        v123 = v122 + v121;
        if ( v59 )
        {
          v124 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v123 > 0x7FFFFFFFFFFFFFFLL )
            v123 = 0x7FFFFFFFFFFFFFFLL;
          v124 = v123;
        }
        v161 = (char *)v189[1] - (char *)v189[0];
        v150 = (const __m128i *)v189[0];
        v125 = (__m128i *)operator new(v124 * 16);
        v126 = (__m128i *)v150;
        v127 = v125;
        v128 = &v125->m128i_i8[v161];
        *(_QWORD *)v128 = v19;
        *((_QWORD *)v128 + 1) = 0;
        if ( v21 != v150 )
        {
          v129 = v150;
          v130 = &v125->m128i_i8[(char *)v21 - (char *)v150];
          do
          {
            v131 = _mm_loadu_si128(v129);
            ++v125;
            ++v129;
            v125[-1] = v131;
          }
          while ( v125 != (__m128i *)v130 );
        }
        v132 = v125 + 1;
        if ( v150 )
        {
          v151 = (char *)v127;
          operator delete(v126, m128i_i8 - (char *)v126);
          v127 = (__m128i *)v151;
        }
        v189[0] = v127;
        v189[1] = v132;
        m128i_i8 = v127[v124].m128i_i8;
      }
      else
      {
        *(_QWORD *)v189[1] = v19;
        v21->m128i_i64[1] = 0;
        v189[1] = (char *)v189[1] + 16;
      }
      v180 = v191;
      sub_2C8EC0((__int64)&v181, &v192);
      v22 = v189[1];
      v23 = v189[0];
      v186 = v180;
      sub_2C8EC0((__int64)&v187, &v181);
      v183 = v186;
      sub_2C8EC0((__int64)&v184, &v187);
      sub_621D0((__int64)&v187);
      sub_2D5E30((__int64)v23, ((v22 - v23) >> 4) - 1, 0, *((_QWORD *)v22 - 2), *((_QWORD *)v22 - 1), (__int64)&v183);
      ++v19;
      sub_621D0((__int64)&v184);
      sub_621D0((__int64)&v181);
      v20 = a1[1];
    }
    while ( v19 < v20 );
LABEL_22:
    dest = nullptr;
    v165 = 0;
    if ( v20 )
    {
      v133 = (__m128i *)qvector_reserve(&dest, 0, v20, 16);
      v134 = *((_QWORD *)&v165 + 1);
      *((_QWORD *)&v165 + 1) = 0;
      v135 = (const __m128i *)dest;
      v136 = v165 - 1;
      if ( (__int64)v165 - 1 >= 0 )
      {
        v137 = v133;
        do
        {
          v138 = _mm_loadu_si128(v135);
          ++v137;
          ++v135;
          v137[-1] = v138;
          v59 = v136-- == 0;
        }
        while ( !v59 );
        v135 = (const __m128i *)dest;
      }
      qfree(v135);
      dest = v133;
      *((_QWORD *)&v165 + 1) = v134;
    }
  }
  else
  {
    dest = nullptr;
    v165 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_37CFE0(1961);
    goto LABEL_182;
  }
  v24 = (__int64 *)v189[0];
  if ( v189[0] == v189[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v165 = 0;
    v25 = v24[1];
    v26 = *v24;
    v27 = 8 * v25;
    v145 = 3 * *v24;
    v28 = 72 * v25;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v30 = *(_QWORD *)(a1[3 * v26 + 2] + 8 * (v25 + v27) + 64);
      if ( v30 < 0 )
      {
        if ( !under_debugger )
          sub_37CFE0(2170);
        goto LABEL_182;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v30) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v31 = v165;
        if ( *((_QWORD *)&v165 + 1) < (unsigned __int64)(v165 + 1) )
        {
          v154 = *((void **)&v165 + 1);
          v32 = (__m128i *)qvector_reserve(&dest, 0, v165 + 1, 16);
          v54 = *((void **)&v165 + 1);
          v55 = (const __m128i *)dest;
          *((_QWORD *)&v165 + 1) = v154;
          v56 = v165 - 1;
          if ( (__int64)v165 - 1 >= 0 )
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
          v155 = v54;
          qfree(v55);
          v31 = v165;
          dest = v32;
          *((_QWORD *)&v165 + 1) = v155;
        }
        else
        {
          v32 = (__m128i *)dest;
        }
        v33 = v32[v31].m128i_i8;
        *(_QWORD *)v33 = v26;
        *((_QWORD *)v33 + 1) = v25;
        *(_QWORD *)&v165 = v165 + 1;
      }
      v34 = (const __m128i *)v189[0];
      v35 = *(_QWORD *)v189[0];
      v36 = *((_QWORD *)v189[0] + 1);
      v180 = v191;
      v182 = 0u;
      v181 = 0;
      if ( !v193.m128i_i64[0] )
      {
        v37 = (__m128i *)v189[1];
        if ( (char *)v189[1] - (char *)v189[0] <= 16 )
          goto LABEL_40;
        v50 = v191;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(v11, &v192, 2);
      v37 = (__m128i *)v189[1];
      v34 = (const __m128i *)v189[0];
      v38 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0];
      v182 = _mm_load_si128(&v193);
      if ( (char *)v189[1] - (char *)v189[0] > 16 )
      {
        v50 = v180;
        v188 = 0u;
        v186 = v180;
        v187 = 0;
        if ( v193.m128i_i64[0] )
        {
          v156 = (__m128i *)v189[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v187, v11, 2);
          v60 = _mm_loadu_si128(&v182);
          v185 = 0u;
          v37 = v156;
          v188 = v60;
          v183 = v186;
          v184 = 0;
          if ( v182.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v182.m128i_i64[0])(&v184, &v187, 2);
            v61 = _mm_loadu_si128(&v188);
            v37 = v156;
            v185 = v61;
            if ( v61.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v61.m128i_i64[0])(&v187, &v187, 3);
              v37 = v156;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v183 = v50;
        v185 = 0u;
        v184 = 0;
LABEL_64:
        v51 = v37[-1].m128i_u64[0];
        v52 = v37 - 1;
        v53 = v37[-1].m128i_u64[1];
        v37[-1] = _mm_loadu_si128(v34);
        v188 = 0u;
        v186 = v183;
        v187 = 0;
        if ( v185.m128i_i64[0] )
        {
          v162 = v53;
          v159 = v51;
          v153 = v37 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v185.m128i_i64[0])(&v187, &v184, 2);
          v53 = v162;
          v51 = v159;
          v52 = v153;
          v188 = _mm_loadu_si128(&v185);
        }
        sub_2D5F80((__int64)v34, 0, v52 - v34, v51, v53, (__int64)&v186);
        if ( v188.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v188.m128i_i64[0])(&v187, &v187, 3);
        if ( v185.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v185.m128i_i64[0])(&v184, &v184, 3);
        v38 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v182.m128i_i64[0];
      }
      if ( v38 )
        v38(v11, v11, 3);
LABEL_40:
      v39 = (__m128i *)v189[1];
      v40 = v36 + 1;
      v41 = (const __m128i *)((char *)v189[1] - 16);
      v189[1] = (char *)v189[1] - 16;
      if ( v40 >= a1[3 * v35 + 3] )
      {
        v29 = (__int64 *)v189[0];
        if ( v189[0] == v41 )
          break;
        goto LABEL_28;
      }
      if ( v41 == (const __m128i *)m128i_i8 )
      {
        v62 = ((char *)v41 - (char *)v189[0]) >> 4;
        if ( v62 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v63 = 1;
        if ( v62 )
          v63 = ((char *)v41 - (char *)v189[0]) >> 4;
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
        v163 = v41;
        v160 = (char *)v41 - (char *)v189[0];
        v157 = (const __m128i *)v189[0];
        v66 = (__m128i *)operator new(v65 * 16);
        v67 = (__m128i *)v157;
        *(__m128i *)((char *)v66 + v160) = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v40);
        if ( v163 == v157 )
        {
          v71 = (char *)v66;
        }
        else
        {
          v68 = v66;
          v69 = v157;
          do
          {
            v70 = _mm_loadu_si128(v69++);
            ++v68;
            v68[-1] = v70;
          }
          while ( v163 != v69 );
          v71 = &v66->m128i_i8[(char *)v163 - (char *)v157];
        }
        v72 = v71 + 16;
        if ( v157 )
        {
          v158 = (char *)v66;
          operator delete(v67, m128i_i8 - (char *)v67);
          v66 = (__m128i *)v158;
        }
        v189[0] = v66;
        v189[1] = v72;
        m128i_i8 = v66[v65].m128i_i8;
      }
      else
      {
        v39[-1] = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v40);
        v189[1] = (char *)v189[1] + 16;
      }
      v42 = v191;
      v182 = 0u;
      v180 = v191;
      v181 = 0;
      if ( !v193.m128i_i64[0] )
      {
        v44 = v189[1];
        v45 = v189[0];
LABEL_81:
        v183 = v42;
        v185 = 0u;
        v184 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(v11, &v192, 2);
      v42 = v180;
      v43 = _mm_load_si128(&v193);
      v188 = 0u;
      v44 = v189[1];
      v182 = v43;
      v45 = v189[0];
      v186 = v180;
      v187 = 0;
      if ( !v193.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v187, v11, 2);
      v46 = _mm_loadu_si128(&v182);
      v185 = 0u;
      v188 = v46;
      v183 = v186;
      v184 = 0;
      if ( v182.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v182.m128i_i64[0])(&v184, &v187, 2);
        v47 = _mm_loadu_si128(&v188);
        v185 = v47;
        if ( v47.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v47.m128i_i64[0])(&v187, &v187, 3);
      }
LABEL_48:
      sub_2D5E30((__int64)v45, ((v44 - v45) >> 4) - 1, 0, *((_QWORD *)v44 - 2), *((_QWORD *)v44 - 1), (__int64)&v183);
      if ( v185.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v185.m128i_i64[0])(&v184, &v184, 3);
      if ( v182.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v182.m128i_i64[0])(v11, v11, 3);
      v29 = (__int64 *)v189[0];
      if ( v189[0] == v189[1] )
        break;
LABEL_28:
      v25 = v29[1];
      v26 = *v29;
      v27 = 8 * v25;
      if ( !v178 )
        std::__throw_bad_function_call();
    }
    while ( !v179(v177, v176[3 * *v29 + 2] + 72 * v25, v28 + v176[v145 + 2]) );
    if ( a3 )
    {
      v103 = a1[12];
      LODWORD(v168) = 0;
      sub_2C88D0(a1 + 11, (int *)&v168);
      v104 = (char *)dest;
      v105 = (char *)dest + 16 * v165;
      if ( dest == v105 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *(_QWORD *)v104 + 2] + 72LL * *((_QWORD *)v104 + 1) + 64) = v103;
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
      v108 = 0;
      v109 = a1[3 * *(_QWORD *)v104 + 3];
      v140 = v109;
      if ( v109 )
      {
        v148 = 2LL * *(_QWORD *)v104;
        v142 = *(_QWORD *)v104;
        v108 = qalloc_or_throw(72 * v109);
        v117 = v108 + 16;
        v139 = 0;
        v149 = &a1[v148 + v142];
        do
        {
          v118 = v149[2];
          *(_QWORD *)(v117 - 16) = off_4B4E50;
          v119 = -16 - v108 + v117 + v118;
          v120 = *(_QWORD *)(v119 + 8);
          *(_QWORD *)v117 = 0;
          *(_OWORD *)(v117 + 8) = 0;
          *(_QWORD *)(v117 - 8) = v120;
          sub_2A8F60((_QWORD *)v117, v119 + 16);
          *(_QWORD *)(v117 + 24) = 0;
          copy_tinfo_t(v117 + 24, v119 + 40);
          ++v139;
          v117 += 72;
          *(_QWORD *)(v117 - 40) = *(_QWORD *)(v119 + 48);
          LODWORD(v120) = *(_DWORD *)(v119 + 56);
          *(_QWORD *)(v117 - 88) = off_4B6678;
          *(_DWORD *)(v117 - 32) = v120;
          *(_QWORD *)(v117 - 24) = *(_QWORD *)(v119 + 64);
        }
        while ( v140 != v139 );
      }
      v110 = (char *)dest;
      v111 = (char *)dest + 16 * v165;
      if ( v111 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v110 == *(_QWORD *)v104 )
          {
            v112 = *((_QWORD *)v110 + 1);
            v113 = *((_QWORD *)v104 + 1);
            if ( v112 != v113 && *(_QWORD *)(v108 + 72 * v112 + 64) == v103 )
              break;
          }
          v110 += 16;
          if ( v111 == v110 )
            goto LABEL_152;
        }
        sub_7CDC0((__int64)&v168, (const char *)&unk_3F5793);
        v114 = s1;
        if ( *((_QWORD *)&v168 + 1) )
          v114 = (const char *)v168;
        v115 = *((_QWORD *)v110 + 1);
        sub_7CDC0((__int64)&v166, (const char *)&unk_3F5793);
        v116 = s1;
        if ( v167 )
          v116 = v166;
        sub_68620((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *(_QWORD *)v104, v116, v115, v114, v113);
        if ( v166 )
        {
          v167 = 0;
          qfree(v166);
        }
        if ( (_QWORD)v168 )
        {
          *((_QWORD *)&v168 + 1) = 0;
          qfree(v168);
        }
      }
LABEL_152:
      if ( !under_debugger )
        sub_37CFE0(2171);
LABEL_182:
      BUG();
    }
    v48 = v165;
    if ( (unsigned __int64)v165 <= 1 )
      goto LABEL_55;
    v73 = (__int64 *)dest;
    DWORD2(v168) = 0;
    v170 = (__int128 *)((char *)&v168 + 8);
    v169 = nullptr;
    v171 = (char *)&v168 + 8;
    v172 = 0;
    v146 = (char *)dest + 16 * v165;
    if ( v146 != dest )
    {
      v74 = (char *)dest;
      do
      {
        v166 = *(const char **)(a1[3 * *(_QWORD *)v74 + 2] + 72LL * *((_QWORD *)v74 + 1) + 64);
        v75 = sub_2C8980(&v168, (unsigned __int64 *)&v166);
        v76 = *(_QWORD *)v74;
        v74 += 16;
        *(_DWORD *)v75 |= 1 << v76;
      }
      while ( v146 != v74 );
      if ( v170 != (__int128 *)((char *)&v168 + 8) )
      {
        v147 = v11;
        v77 = (__int64)v170;
        do
        {
          v78 = v77;
          v79 = *(_DWORD *)(v77 + 40);
          v80 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v77 + 32));
          v77 = std::_Rb_tree_increment(v77);
          if ( v80 != v79 )
          {
            v81 = (void *)std::_Rb_tree_rebalance_for_erase(v78, (char *)&v168 + 8);
            operator delete(v81, 0x30u);
            --v172;
          }
        }
        while ( (__int128 *)v77 != (__int128 *)((char *)&v168 + 8) );
        v11 = v147;
      }
      v48 = v165;
      v73 = (__int64 *)dest;
      v82 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v165 != dest )
      {
        do
        {
          while ( 1 )
          {
            v84 = v82 + 2;
            if ( (_QWORD *)((char *)&v168 + 8) == sub_2A8E40(
                                                    (__int64)&v168,
                                                    *(_QWORD *)(a1[3 * *v82 + 2] + 72 * v82[1] + 64)) )
              break;
            v48 = v165;
            v82 += 2;
            if ( v84 == &v73[2 * (_QWORD)v165] )
              goto LABEL_112;
          }
          v85 = v83 - (_QWORD)v82;
          if ( (v85 >> 4) - 2 >= 0 )
          {
            memmove(v82, v84, v85 - 16);
            v73 = (__int64 *)dest;
          }
          *(_QWORD *)&v165 = v165 - 1;
          v48 = v165;
        }
        while ( v82 != &v73[2 * (_QWORD)v165] );
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
      v48 = v165 - 1;
      v91 = a1[3 * v87 + 2] + 72 * v88;
      *(_QWORD *)&v165 = v165 - 1;
      v92 = *(_QWORD *)(v91 + 64);
      if ( v90 )
      {
        v93 = 0;
        v94 = *(_DWORD *)(a1[11] + 4 * v92);
        do
        {
          v95 = -1;
          if ( (v94 & (1 << v93)) != 0 )
            v95 = v92;
          (&v186)[v93++] = (_QWORD *)v95;
        }
        while ( v93 != v90 );
      }
      if ( 16 * v48 )
      {
        do
        {
          v98 = *v89;
          v99 = a1[3 * *v89 + 2] + 72 * v89[1];
          v100 = *(_QWORD *)(v99 + 64);
          if ( (&v186)[*v89] == (_QWORD *)-1LL )
          {
            v101 = a1[11];
            (&v186)[v98] = (_QWORD *)v100;
            *(_DWORD *)(v101 + 4 * v100) &= ~(1 << v98);
            if ( !*(_DWORD *)(a1[11] + 4 * v100) )
              ++a1[14];
            *(_QWORD *)(v99 + 64) = v92;
            *(_DWORD *)(4 * v92 + a1[11]) |= 1 << *v89;
            v97 = v89 + 2;
            v73 = (__int64 *)dest;
            v48 = v165;
            if ( v92 == *(_QWORD *)(v99 + 64) )
            {
LABEL_129:
              if ( (((char *)&v73[2 * v48] - (char *)v89) >> 4) - 2 >= 0 )
              {
                v102 = (__int64 *)memmove(v89, v97, (char *)&v73[2 * v48] - (char *)v89 - 16);
                v73 = (__int64 *)dest;
                v89 = v102;
                v48 = v165;
              }
              *(_QWORD *)&v165 = --v48;
              continue;
            }
          }
          else
          {
            v96 = v92 == v100;
            v97 = v89 + 2;
            v48 = v165;
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
    sub_2A8EA0((void **)v169);
LABEL_55:
    v24 = (__int64 *)v189[0];
  }
  while ( v189[1] != v189[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v165 = 0;
    qfree(dest);
  }
  sub_621D0((__int64)&v192);
  if ( v189[0] )
    operator delete(v189[0], m128i_i8 - (char *)v189[0]);
  sub_621D0((__int64)v177);
  sub_621D0((__int64)v175);
  sub_621D0((__int64)v173);
  return v194 - __readfsqword(0x28u);
}
