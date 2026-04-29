unsigned __int64 __fastcall sub_2E9DE0(_QWORD *a1, const __m128i *a2, char a3)
{
  unsigned __int64 v4; // r13
  __int64 *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __m128i *v10; // rbp
  __m128i *v11; // r12
  _BYTE *v12; // r13
  _BYTE *v13; // r14
  __int64 v14; // r13
  __int64 i; // r13
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  const __m128i *v20; // r14
  _BYTE *v21; // r13
  _BYTE *v22; // r14
  __int64 *v23; // rax
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __m128i *v29; // r15
  char *m128i_i8; // rax
  const __m128i *v31; // r15
  unsigned __int64 v32; // r14
  __int64 v33; // r13
  __m128i *v34; // rcx
  void (__fastcall *v35)(__m128i *, __m128i *, __int64); // rax
  __m128i *v36; // rax
  unsigned __int64 v37; // r13
  const __m128i *v38; // rdx
  _QWORD *v39; // rax
  __m128i v40; // xmm0
  _BYTE *v41; // r14
  _BYTE *v42; // r13
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  __int64 v45; // rax
  _QWORD *v47; // rdx
  unsigned __int64 v48; // r10
  __m128i *v49; // r9
  unsigned __int64 v50; // r8
  void *v51; // rcx
  const __m128i *v52; // rdi
  __int64 v53; // rax
  __m128i *v54; // rdx
  __m128i v55; // xmm0
  bool v56; // cf
  __m128i v57; // xmm0
  __m128i v58; // xmm0
  __int64 v59; // r15
  __int64 v60; // rax
  unsigned __int64 v61; // r15
  unsigned __int64 v62; // r15
  __m128i *v63; // rax
  __m128i *v64; // rcx
  __m128i *v65; // rdi
  const __m128i *v66; // rsi
  __m128i v67; // xmm0
  char *v68; // r13
  void *v69; // r13
  __int64 *v70; // r9
  char *v71; // r14
  char *v72; // r15
  _QWORD *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r14
  __int64 v76; // rbp
  int v77; // r12d
  int v78; // r15d
  void *v79; // rax
  __int64 *v80; // r14
  __int64 v81; // r10
  __int64 *v82; // rsi
  __int64 v83; // r10
  __int64 v84; // rax
  __int64 v85; // r14
  __int64 v86; // r13
  __int64 *v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // r14
  __int64 v90; // rcx
  int v91; // r11d
  __int64 v92; // rdx
  void *v93; // rsi
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rdx
  __int64 *v99; // rax
  __int64 v100; // r14
  char *v101; // r13
  char *v102; // rsi
  _DWORD *v103; // rdi
  int v104; // eax
  __int64 v105; // rsi
  __int64 v106; // rbp
  void *v107; // r12
  char *v108; // rbx
  char *v109; // rdx
  __int64 v110; // rax
  __int64 v111; // r15
  const char *v112; // r14
  __int64 v113; // rbx
  const char *v114; // rdx
  __int64 v115; // r15
  void *v116; // rcx
  __int128 v117; // xmm0
  _QWORD *v118; // r10
  int v119; // eax
  __int64 v120; // rbx
  __int64 v121; // rax
  __int64 v122; // r8
  void *v123; // rax
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
  size_t na; // [rsp+8h] [rbp-260h]
  __int64 nb; // [rsp+8h] [rbp-260h]
  unsigned __int64 v146; // [rsp+10h] [rbp-258h]
  __int64 v147; // [rsp+10h] [rbp-258h]
  void *v148; // [rsp+18h] [rbp-250h]
  __int64 v149; // [rsp+18h] [rbp-250h]
  __int64 v150; // [rsp+18h] [rbp-250h]
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
  __m128i *v162; // [rsp+30h] [rbp-238h]
  _QWORD *v163; // [rsp+30h] [rbp-238h]
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
  _QWORD *v185; // [rsp+150h] [rbp-118h] BYREF
  __m128i v186; // [rsp+158h] [rbp-110h] BYREF
  __m128i v187; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v188; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v189; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v190; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v191; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v192; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v193; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v194[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *v195; // [rsp+1F0h] [rbp-78h]
  _QWORD *v196; // [rsp+1F8h] [rbp-70h]
  __m128i v197; // [rsp+200h] [rbp-68h] BYREF
  __m128i v198; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v199; // [rsp+228h] [rbp-40h]

  v199 = __readfsqword(0x28u);
  sub_2C94D0((__int64)v178, a2);
  v179 = a1;
  sub_2C94D0((__int64)v180, a2);
  v181 = a1;
  sub_2C94D0((__int64)v182, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx(*(int *)(*a1 + 4 * v4 + 16));
    sub_2C94D0((__int64)&v185, v178);
    v6 = *v5;
    v7 = v5[1] << 6;
    v148 = (void *)(*v5 + v7);
    sub_2C94D0((__int64)&v188, (const __m128i *)&v185);
    sub_2C94D0((__int64)v194, (const __m128i *)&v188);
    sub_2C94D0((__int64)&v191, (const __m128i *)v194);
    sub_628D0((__int64)v194);
    if ( v148 != (void *)v6 )
    {
      sub_2C94D0((__int64)v194, (const __m128i *)&v191);
      v8 = v7 >> 6;
      v9 = -2;
      if ( v8 )
      {
        _BitScanReverse64(&v8, v8);
        v9 = 2LL * (int)v8;
      }
      sub_2E9820(v6, (__int64)v148, v9, (const __m128i *)v194);
      sub_628D0((__int64)v194);
      sub_2C94D0((__int64)v194, (const __m128i *)&v191);
      sub_2D9810(v6, (__int64)v148, (const __m128i *)v194);
      sub_628D0((__int64)v194);
    }
    ++v4;
    v5 += 3;
    sub_628D0((__int64)&v191);
    sub_628D0((__int64)&v188);
    sub_628D0((__int64)&v185);
  }
  v174 = nullptr;
  v195 = nullptr;
  v196 = v179;
  v173 = 0;
  *(_OWORD *)v194 = 0;
  sub_2C94D0((__int64)&v197, v180);
  v10 = &v186;
  v185 = v196;
  sub_2C94D0((__int64)&v186, &v197);
  v11 = &v192;
  v12 = v194[1];
  v13 = v194[0];
  v191 = v185;
  sub_2C94D0((__int64)&v192, &v186);
  v188 = v191;
  sub_2C94D0((__int64)&v189, &v192);
  v14 = v12 - v13;
  sub_628D0((__int64)&v192);
  if ( v14 > 16 )
  {
    v149 = v14 >> 4;
    for ( i = ((v14 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v13[16 * i];
      v17 = *(_QWORD *)&v13[16 * i + 8];
      v193 = 0u;
      v192 = 0;
      v191 = v188;
      if ( v190.m128i_i64[0] )
      {
        v146 = v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v190.m128i_i64[0])(&v192, &v189, 2);
        v17 = v146;
        v193 = _mm_loadu_si128(&v190);
      }
      sub_2D5C20((__int64)v13, i, v149, v16, v17, (__int64)&v191);
      if ( v193.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v192, &v192, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_628D0((__int64)&v189);
  sub_628D0((__int64)&v186);
  if ( a1[1] )
  {
    do
    {
      while ( !a1[3 * v18 + 3] )
      {
        v19 = a1[1];
        if ( ++v18 >= v19 )
          goto LABEL_22;
      }
      v20 = (const __m128i *)v194[1];
      if ( v194[1] == v195 )
      {
        v124 = ((char *)v194[1] - (char *)v194[0]) >> 4;
        if ( v124 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v125 = 1;
        if ( v124 )
          v125 = ((char *)v194[1] - (char *)v194[0]) >> 4;
        v56 = __CFADD__(v125, v124);
        v126 = v125 + v124;
        if ( v56 )
        {
          v127 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v126 > 0x7FFFFFFFFFFFFFFLL )
            v126 = 0x7FFFFFFFFFFFFFFLL;
          v127 = 16 * v126;
        }
        v166 = (char *)v194[1] - (char *)v194[0];
        v153 = (const __m128i *)v194[0];
        v128 = (char *)operator new(v127);
        v129 = (__m128i *)v153;
        v130 = v128;
        v131 = &v128[v166];
        *(_QWORD *)v131 = v18;
        *((_QWORD *)v131 + 1) = 0;
        if ( v20 != v153 )
        {
          v132 = v128;
          v133 = v153;
          v128 += (char *)v20 - (char *)v153;
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
        if ( v153 )
        {
          v154 = v130;
          operator delete(v129, v195 - (char *)v129);
          v130 = v154;
        }
        v194[0] = v130;
        v194[1] = v135;
        v195 = &v130[v127];
      }
      else
      {
        *(_QWORD *)v194[1] = v18;
        v20->m128i_i64[1] = 0;
        v194[1] = (char *)v194[1] + 16;
      }
      v185 = v196;
      sub_2C94D0((__int64)&v186, &v197);
      v21 = v194[1];
      v22 = v194[0];
      v191 = v185;
      sub_2C94D0((__int64)&v192, &v186);
      v188 = v191;
      sub_2C94D0((__int64)&v189, &v192);
      sub_628D0((__int64)&v192);
      sub_2D5AD0((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v188);
      ++v18;
      sub_628D0((__int64)&v189);
      sub_628D0((__int64)&v186);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v170 = 0;
    if ( v19 )
    {
      v136 = (__m128i *)qvector_reserve(&dest, 0, v19, 16);
      v137 = *((_QWORD *)&v170 + 1);
      *((_QWORD *)&v170 + 1) = 0;
      v138 = (const __m128i *)dest;
      v139 = v170 - 1;
      if ( (__int64)v170 - 1 >= 0 )
      {
        v140 = v136;
        do
        {
          v141 = _mm_loadu_si128(v138);
          ++v140;
          ++v138;
          v140[-1] = v141;
          v56 = v139-- == 0;
        }
        while ( !v56 );
        v138 = (const __m128i *)dest;
      }
      qfree(v138);
      dest = v136;
      *((_QWORD *)&v170 + 1) = v137;
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
      sub_37DDE0(1961);
    goto LABEL_183;
  }
  v23 = (__int64 *)v194[0];
  if ( v194[0] == v194[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v170 = 0;
    v24 = v23[1];
    v25 = *v23;
    v147 = v24 << 6;
    v150 = 3 * *v23;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v27 = *(_QWORD *)(a1[3 * v25 + 2] + (v24 << 6) + 56);
      if ( v27 < 0 )
      {
        if ( !under_debugger )
          sub_37DDE0(2170);
        goto LABEL_183;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v27) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v28 = v170;
        if ( *((_QWORD *)&v170 + 1) < (unsigned __int64)(v170 + 1) )
        {
          v157 = *((void **)&v170 + 1);
          v29 = (__m128i *)qvector_reserve(&dest, 0, v170 + 1, 16);
          v51 = *((void **)&v170 + 1);
          v52 = (const __m128i *)dest;
          *((_QWORD *)&v170 + 1) = v157;
          v53 = v170 - 1;
          if ( (__int64)v170 - 1 >= 0 )
          {
            v54 = v29;
            do
            {
              v55 = _mm_loadu_si128(v52);
              ++v54;
              ++v52;
              v54[-1] = v55;
              v56 = v53-- == 0;
            }
            while ( !v56 );
            v52 = (const __m128i *)dest;
          }
          v158 = v51;
          qfree(v52);
          v28 = v170;
          dest = v29;
          *((_QWORD *)&v170 + 1) = v158;
        }
        else
        {
          v29 = (__m128i *)dest;
        }
        m128i_i8 = v29[v28].m128i_i8;
        *(_QWORD *)m128i_i8 = v25;
        *((_QWORD *)m128i_i8 + 1) = v24;
        *(_QWORD *)&v170 = v170 + 1;
      }
      v31 = (const __m128i *)v194[0];
      v32 = *(_QWORD *)v194[0];
      v33 = *((_QWORD *)v194[0] + 1);
      v185 = v196;
      v187 = 0u;
      v186 = 0;
      if ( !v198.m128i_i64[0] )
      {
        v34 = (__m128i *)v194[1];
        if ( (char *)v194[1] - (char *)v194[0] <= 16 )
          goto LABEL_40;
        v47 = v196;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0])(v10, &v197, 2);
      v34 = (__m128i *)v194[1];
      v31 = (const __m128i *)v194[0];
      v35 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0];
      v187 = _mm_load_si128(&v198);
      if ( (char *)v194[1] - (char *)v194[0] > 16 )
      {
        v47 = v185;
        v193 = 0u;
        v191 = v185;
        v192 = 0;
        if ( v198.m128i_i64[0] )
        {
          v159 = (__m128i *)v194[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0])(v11, v10, 2);
          v57 = _mm_loadu_si128(&v187);
          v190 = 0u;
          v34 = v159;
          v193 = v57;
          v188 = v191;
          v189 = 0;
          if ( v187.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v187.m128i_i64[0])(&v189, v11, 2);
            v58 = _mm_loadu_si128(&v193);
            v34 = v159;
            v190 = v58;
            if ( v58.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v58.m128i_i64[0])(v11, v11, 3);
              v34 = v159;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v188 = v47;
        v190 = 0u;
        v189 = 0;
LABEL_64:
        v48 = v34[-1].m128i_u64[0];
        v49 = v34 - 1;
        v50 = v34[-1].m128i_u64[1];
        v34[-1] = _mm_loadu_si128(v31);
        v193 = 0u;
        v191 = v188;
        v192 = 0;
        if ( v190.m128i_i64[0] )
        {
          v167 = v50;
          v164 = v48;
          v156 = v34 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v190.m128i_i64[0])(v11, &v189, 2);
          v50 = v167;
          v48 = v164;
          v49 = v156;
          v193 = _mm_loadu_si128(&v190);
        }
        sub_2D5C20((__int64)v31, 0, v49 - v31, v48, v50, (__int64)&v191);
        if ( v193.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(v11, v11, 3);
        if ( v190.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v190.m128i_i64[0])(&v189, &v189, 3);
        v35 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0];
      }
      if ( v35 )
        v35(v10, v10, 3);
LABEL_40:
      v36 = (__m128i *)v194[1];
      v37 = v33 + 1;
      v38 = (const __m128i *)((char *)v194[1] - 16);
      v194[1] = (char *)v194[1] - 16;
      if ( v37 >= a1[3 * v32 + 3] )
      {
        v26 = (__int64 *)v194[0];
        if ( v194[0] == v38 )
          break;
        goto LABEL_28;
      }
      if ( v38 == (const __m128i *)v195 )
      {
        v59 = ((char *)v38 - (char *)v194[0]) >> 4;
        if ( v59 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v60 = 1;
        if ( v59 )
          v60 = ((char *)v38 - (char *)v194[0]) >> 4;
        v56 = __CFADD__(v60, v59);
        v61 = v60 + v59;
        if ( v56 )
        {
          v62 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v61 > 0x7FFFFFFFFFFFFFFLL )
            v61 = 0x7FFFFFFFFFFFFFFLL;
          v62 = v61;
        }
        v168 = v38;
        v165 = (char *)v38 - (char *)v194[0];
        v160 = (const __m128i *)v194[0];
        v63 = (__m128i *)operator new(v62 * 16);
        v64 = (__m128i *)v160;
        *(__m128i *)((char *)v63 + v165) = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v37);
        if ( v168 == v160 )
        {
          v68 = (char *)v63;
        }
        else
        {
          v65 = v63;
          v66 = v160;
          do
          {
            v67 = _mm_loadu_si128(v66++);
            ++v65;
            v65[-1] = v67;
          }
          while ( v168 != v66 );
          v68 = &v63->m128i_i8[(char *)v168 - (char *)v160];
        }
        v69 = v68 + 16;
        if ( v160 )
        {
          v161 = (char *)v63;
          operator delete(v64, v195 - (char *)v64);
          v63 = (__m128i *)v161;
        }
        v194[0] = v63;
        v194[1] = v69;
        v195 = v63[v62].m128i_i8;
      }
      else
      {
        v36[-1] = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v37);
        v194[1] = (char *)v194[1] + 16;
      }
      v39 = v196;
      v187 = 0u;
      v185 = v196;
      v186 = 0;
      if ( !v198.m128i_i64[0] )
      {
        v41 = v194[1];
        v42 = v194[0];
LABEL_81:
        v188 = v39;
        v190 = 0u;
        v189 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0])(v10, &v197, 2);
      v39 = v185;
      v40 = _mm_load_si128(&v198);
      v193 = 0u;
      v41 = v194[1];
      v187 = v40;
      v42 = v194[0];
      v191 = v185;
      v192 = 0;
      if ( !v198.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0])(v11, v10, 2);
      v43 = _mm_loadu_si128(&v187);
      v190 = 0u;
      v193 = v43;
      v188 = v191;
      v189 = 0;
      if ( v187.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v187.m128i_i64[0])(&v189, v11, 2);
        v44 = _mm_loadu_si128(&v193);
        v190 = v44;
        if ( v44.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v44.m128i_i64[0])(v11, v11, 3);
      }
LABEL_48:
      sub_2D5AD0((__int64)v42, ((v41 - v42) >> 4) - 1, 0, *((_QWORD *)v41 - 2), *((_QWORD *)v41 - 1), (__int64)&v188);
      if ( v190.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v190.m128i_i64[0])(&v189, &v189, 3);
      if ( v187.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(v10, v10, 3);
      v26 = (__int64 *)v194[0];
      if ( v194[0] == v194[1] )
        break;
LABEL_28:
      v25 = *v26;
      v24 = v26[1];
      if ( !v183 )
        std::__throw_bad_function_call();
    }
    while ( !v184(v182, v181[3 * *v26 + 2] + (v24 << 6), v181[v150 + 2] + v147) );
    if ( a3 )
    {
      v100 = a1[12];
      LODWORD(v173) = 0;
      sub_2C9090(a1 + 11, (int *)&v173);
      v101 = (char *)dest;
      v102 = (char *)dest + 16 * v170;
      if ( dest == v102 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *(_QWORD *)v101 + 2] + (*((_QWORD *)v101 + 1) << 6) + 56LL) = v100;
        v103 = (_DWORD *)(4 * v100 + a1[11]);
        v104 = 1 << *(_QWORD *)v101;
        if ( (*v103 & v104) != 0 )
          break;
        v101 += 16;
        *v103 |= v104;
        if ( v102 == v101 )
          goto LABEL_55;
      }
      switch_dbctx(*(int *)(*a1 + 4LL * *(_QWORD *)v101 + 16));
      v105 = *(_QWORD *)v101;
      v106 = 0;
      v107 = (void *)a1[3 * *(_QWORD *)v101 + 3];
      if ( v107 )
      {
        na = 2LL * *(_QWORD *)v101;
        v106 = qalloc_or_throw((_QWORD)v107 << 6);
        v115 = v106;
        v116 = nullptr;
        v117 = 0;
        v118 = &a1[v105 + na];
        do
        {
          v120 = v118[2] + ((_QWORD)v116 << 6);
          *(_QWORD *)v115 = off_4B3E00;
          v121 = *(_QWORD *)(v120 + 8);
          *(_QWORD *)(v115 + 16) = 0;
          *(_OWORD *)(v115 + 24) = v117;
          *(_QWORD *)(v115 + 8) = v121;
          v122 = *(_QWORD *)(v120 + 24);
          if ( v122 )
          {
            v163 = v118;
            v152 = v116;
            v142 = *(_QWORD *)(v120 + 24);
            nb = 4 * v122;
            v123 = (void *)qalloc_or_throw(4 * v122);
            *(_QWORD *)(v115 + 16) = v123;
            *(_QWORD *)(v115 + 32) = v142;
            memcpy(v123, *(const void **)(v120 + 16), nb);
            v117 = 0;
            v118 = v163;
            v116 = v152;
            *(_QWORD *)(v115 + 24) = v142;
          }
          v116 = (char *)v116 + 1;
          v115 += 64;
          *(_QWORD *)(v115 - 24) = *(_QWORD *)(v120 + 40);
          v119 = *(_DWORD *)(v120 + 48);
          *(_QWORD *)(v115 - 64) = off_4B56A0;
          *(_DWORD *)(v115 - 16) = v119;
          *(_QWORD *)(v115 - 8) = *(_QWORD *)(v120 + 56);
        }
        while ( v107 != v116 );
      }
      v108 = (char *)dest;
      v109 = (char *)dest + 16 * v170;
      if ( v109 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v108 == *(_QWORD *)v101 )
          {
            v110 = *((_QWORD *)v108 + 1);
            v111 = *((_QWORD *)v101 + 1);
            if ( v110 != v111 && *(_QWORD *)(v106 + (v110 << 6) + 56) == v100 )
              break;
          }
          v108 += 16;
          if ( v109 == v108 )
            goto LABEL_152;
        }
        sub_7D4C0((__int64)&v173, (const char *)&unk_3F3793);
        v112 = s1;
        if ( *((_QWORD *)&v173 + 1) )
          v112 = (const char *)v173;
        v113 = *((_QWORD *)v108 + 1);
        sub_7D4C0((__int64)&v171, (const char *)&unk_3F3793);
        v114 = s1;
        if ( v172 )
          v114 = v171;
        sub_68D20((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *(_QWORD *)v101, v114, v113, v112, v111);
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
        sub_37DDE0(2171);
LABEL_183:
      BUG();
    }
    v45 = v170;
    if ( (unsigned __int64)v170 <= 1 )
      goto LABEL_55;
    v70 = (__int64 *)dest;
    DWORD2(v173) = 0;
    v175 = (__int128 *)((char *)&v173 + 8);
    v71 = (char *)dest + 16 * v170;
    v174 = nullptr;
    v176 = (char *)&v173 + 8;
    v177 = 0;
    if ( v71 != dest )
    {
      v72 = (char *)dest;
      do
      {
        v171 = *(const char **)(a1[3 * *(_QWORD *)v72 + 2] + (*((_QWORD *)v72 + 1) << 6) + 56LL);
        v73 = sub_2C9140(&v173, (unsigned __int64 *)&v171);
        v74 = *(_QWORD *)v72;
        v72 += 16;
        *(_DWORD *)v73 |= 1 << v74;
      }
      while ( v71 != v72 );
      if ( v175 != (__int128 *)((char *)&v173 + 8) )
      {
        v151 = v10;
        v75 = (__int64)v175;
        v162 = v11;
        do
        {
          v76 = v75;
          v77 = *(_DWORD *)(v75 + 40);
          v78 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v75 + 32));
          v75 = std::_Rb_tree_increment(v75);
          if ( v78 != v77 )
          {
            v79 = (void *)std::_Rb_tree_rebalance_for_erase(v76, (char *)&v173 + 8);
            operator delete(v79, 0x30u);
            --v177;
          }
        }
        while ( (__int128 *)v75 != (__int128 *)((char *)&v173 + 8) );
        v10 = v151;
        v11 = v162;
      }
      v45 = v170;
      v70 = (__int64 *)dest;
      v80 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v170 != dest )
      {
        do
        {
          while ( 1 )
          {
            v82 = v80 + 2;
            if ( (_QWORD *)((char *)&v173 + 8) == sub_2A9600(
                                                    (__int64)&v173,
                                                    *(_QWORD *)(a1[3 * *v80 + 2] + (v80[1] << 6) + 56)) )
              break;
            v45 = v170;
            v80 += 2;
            if ( v82 == &v70[2 * (_QWORD)v170] )
              goto LABEL_112;
          }
          v83 = v81 - (_QWORD)v80;
          if ( (v83 >> 4) - 2 >= 0 )
          {
            memmove(v80, v82, v83 - 16);
            v70 = (__int64 *)dest;
          }
          *(_QWORD *)&v170 = v170 - 1;
          v45 = v170;
        }
        while ( v80 != &v70[2 * (_QWORD)v170] );
      }
      goto LABEL_112;
    }
    while ( 2 )
    {
      v84 = 16 * v45;
      v85 = *v70;
      v86 = v70[1];
      v87 = v70;
      if ( (v84 >> 4) - 2 >= 0 )
      {
        memmove(v70, v70 + 2, v84 - 16);
        v70 = (__int64 *)dest;
        v87 = (__int64 *)dest;
      }
      v88 = a1[1];
      v45 = v170 - 1;
      v89 = *(_QWORD *)(a1[3 * v85 + 2] + (v86 << 6) + 56);
      *(_QWORD *)&v170 = v170 - 1;
      if ( v88 )
      {
        v90 = 0;
        v91 = *(_DWORD *)(a1[11] + 4 * v89);
        do
        {
          v92 = -1;
          if ( (v91 & (1 << v90)) != 0 )
            v92 = v89;
          (&v191)[v90++] = (_QWORD *)v92;
        }
        while ( v90 != v88 );
      }
      if ( 16 * v45 )
      {
        do
        {
          v94 = *v87;
          v95 = a1[3 * *v87 + 2] + (v87[1] << 6);
          v96 = *(_QWORD *)(v95 + 56);
          if ( (&v191)[*v87] == (_QWORD *)-1LL )
          {
            v97 = a1[11];
            (&v191)[v94] = (_QWORD *)v96;
            *(_DWORD *)(v97 + 4 * v96) &= ~(1 << v94);
            if ( !*(_DWORD *)(a1[11] + 4 * v96) )
              ++a1[14];
            *(_QWORD *)(v95 + 56) = v89;
            *(_DWORD *)(4 * v89 + a1[11]) |= 1 << *v87;
            v98 = *(_QWORD *)(v95 + 56);
            v93 = v87 + 2;
            v70 = (__int64 *)dest;
            v45 = v170;
            if ( v89 == v98 )
            {
LABEL_129:
              if ( (((char *)&v70[2 * v45] - (char *)v87) >> 4) - 2 >= 0 )
              {
                v99 = (__int64 *)memmove(v87, v93, (char *)&v70[2 * v45] - (char *)v87 - 16);
                v70 = (__int64 *)dest;
                v87 = v99;
                v45 = v170;
              }
              *(_QWORD *)&v170 = --v45;
              continue;
            }
          }
          else
          {
            v45 = v170;
            v93 = v87 + 2;
            if ( v89 == v96 )
              goto LABEL_129;
          }
          v87 = (__int64 *)v93;
        }
        while ( v87 != &v70[2 * v45] );
      }
LABEL_112:
      if ( v45 )
        continue;
      break;
    }
    sub_2A9660((void **)v174);
LABEL_55:
    v23 = (__int64 *)v194[0];
  }
  while ( v194[1] != v194[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v170 = 0;
    qfree(dest);
  }
  sub_628D0((__int64)&v197);
  if ( v194[0] )
    operator delete(v194[0], v195 - (char *)v194[0]);
  sub_628D0((__int64)v182);
  sub_628D0((__int64)v180);
  sub_628D0((__int64)v178);
  return v199 - __readfsqword(0x28u);
}
