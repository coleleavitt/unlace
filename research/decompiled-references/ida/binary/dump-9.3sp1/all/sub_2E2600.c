unsigned __int64 __fastcall sub_2E2600(_QWORD *a1, const __m128i *a2, char a3)
{
  unsigned __int64 v4; // r13
  __int64 *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  _BYTE *v11; // r13
  _BYTE *v12; // r14
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 i; // r13
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  const __m128i *v20; // r14
  _BYTE *v21; // r13
  _BYTE *v22; // r14
  __int64 *v23; // rax
  __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __m128i *v31; // r15
  char *m128i_i8; // rax
  const __m128i *v33; // r15
  unsigned __int64 v34; // r14
  __int64 v35; // r13
  __m128i *v36; // rcx
  void (__fastcall *v37)(__m128i *, __m128i *, __int64); // rax
  __m128i *v38; // rax
  unsigned __int64 v39; // r13
  const __m128i *v40; // rdx
  __int64 v41; // rax
  __m128i v42; // xmm0
  _BYTE *v43; // r14
  _BYTE *v44; // r13
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __int64 v47; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // r10
  __m128i *v51; // r9
  unsigned __int64 v52; // r8
  void *v53; // rcx
  const __m128i *v54; // rdi
  __int64 v55; // rax
  __m128i *v56; // rdx
  __m128i v57; // xmm0
  bool v58; // cf
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  __int64 v61; // r15
  __int64 v62; // rax
  unsigned __int64 v63; // r15
  unsigned __int64 v64; // r15
  __m128i *v65; // rax
  __m128i *v66; // rcx
  __m128i *v67; // rdi
  const __m128i *v68; // rsi
  __m128i v69; // xmm0
  char *v70; // r13
  void *v71; // r13
  __int64 *v72; // r9
  char *v73; // r14
  _QWORD *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r12
  int v77; // r15d
  int v78; // r14d
  void *v79; // rax
  __int64 *v80; // r14
  __int64 v81; // r10
  __int64 *v82; // rsi
  __int64 v83; // r10
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 v86; // r12
  __int64 *v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // r13
  __int64 v91; // rcx
  int v92; // r11d
  __int64 v93; // rdx
  bool v94; // zf
  void *v95; // rsi
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rsi
  __int64 *v100; // rax
  void *v101; // r8
  __int64 *v102; // r14
  __int64 *v103; // rdi
  __int64 v104; // rsi
  _DWORD *v105; // rdx
  int v106; // eax
  __int64 v107; // rbp
  void *v108; // r8
  __int64 v109; // r12
  char *v110; // rbx
  char *v111; // rcx
  __int64 v112; // rax
  __int64 v113; // r13
  const char *v114; // r15
  __int64 v115; // rbx
  const char *v116; // rax
  __int64 v117; // r13
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rbx
  char *v121; // rbx
  __m128i v122; // xmm0
  __m128i v123; // xmm0
  __int32 v124; // esi
  signed __int64 v125; // rax
  signed __int64 v126; // rsi
  unsigned __int64 v127; // rax
  unsigned __int64 v128; // r13
  __int64 v129; // rax
  __m128i *v130; // rcx
  char *v131; // r8
  unsigned __int64 *v132; // rdx
  const __m128i *v133; // rsi
  __int64 v134; // rdx
  __m128i v135; // xmm0
  void *v136; // r14
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
  void *v153; // [rsp+18h] [rbp-250h]
  char *v154; // [rsp+18h] [rbp-250h]
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
  __int64 v171; // [rsp+80h] [rbp-1E8h] BYREF
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
  char *v195; // [rsp+1F0h] [rbp-78h]
  __int64 v196; // [rsp+1F8h] [rbp-70h]
  __m128i v197; // [rsp+200h] [rbp-68h] BYREF
  __m128i v198; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v199; // [rsp+228h] [rbp-40h]

  v199 = __readfsqword(0x28u);
  sub_2CDC00((__int64)v178, a2);
  v179 = a1;
  sub_2CDC00((__int64)v180, a2);
  v181 = a1;
  sub_2CDC00((__int64)v182, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2CDC00((__int64)&v185, v178);
    v6 = *v5;
    v7 = 88 * v5[1];
    v149 = (void *)(*v5 + v7);
    sub_2CDC00((__int64)&v188, (const __m128i *)&v185);
    sub_2CDC00((__int64)v194, (const __m128i *)&v188);
    sub_2CDC00((__int64)&v191, (const __m128i *)v194);
    sub_66C50((__int64)v194);
    if ( v149 != (void *)v6 )
    {
      sub_2CDC00((__int64)v194, (const __m128i *)&v191);
      v8 = -2;
      v9 = 0x2E8BA2E8BA2E8BA3LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2E1FB0(v6, (__int64)v149, v8, (const __m128i *)v194);
      sub_66C50((__int64)v194);
      sub_2CDC00((__int64)v194, (const __m128i *)&v191);
      sub_2DC6C0(v6, (__int64)v149, (const __m128i *)v194);
      sub_66C50((__int64)v194);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v191);
    sub_66C50((__int64)&v188);
    sub_66C50((__int64)&v185);
  }
  v174 = nullptr;
  v195 = nullptr;
  v196 = (__int64)v179;
  v173 = 0;
  *(_OWORD *)v194 = 0;
  sub_2CDC00((__int64)&v197, v180);
  v185 = v196;
  sub_2CDC00((__int64)&v186, &v197);
  v11 = v194[1];
  v12 = v194[0];
  v191 = v185;
  sub_2CDC00((__int64)&v192, &v186);
  v188 = v191;
  sub_2CDC00((__int64)&v189, &v192);
  v13 = v11 - v12;
  sub_66C50((__int64)&v192);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v193 = 0u;
      v192 = 0;
      v191 = v188;
      if ( v190.m128i_i64[0] )
      {
        v150 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v190.m128i_i64[0])(&v192, &v189, 2);
        v17 = (unsigned __int64)v150;
        v193 = _mm_loadu_si128(&v190);
      }
      sub_2D9940((__int64)v12, i, v14, v16, v17, &v191);
      if ( v193.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v192, &v192, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_66C50((__int64)&v189);
  sub_66C50((__int64)&v186);
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
        v125 = ((char *)v194[1] - (char *)v194[0]) >> 4;
        if ( v125 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v126 = 1;
        if ( v125 )
          v126 = ((char *)v194[1] - (char *)v194[0]) >> 4;
        v58 = __CFADD__(v126, v125);
        v127 = v126 + v125;
        if ( v58 )
        {
          v128 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v127 > 0x7FFFFFFFFFFFFFFLL )
            v127 = 0x7FFFFFFFFFFFFFFLL;
          v128 = 16 * v127;
        }
        v166 = (char *)v194[1] - (char *)v194[0];
        v155 = (const __m128i *)v194[0];
        v129 = operator new(v128);
        v130 = (__m128i *)v155;
        v131 = (char *)v129;
        v132 = (unsigned __int64 *)(v129 + v166);
        *v132 = v18;
        v132[1] = 0;
        if ( v20 != v155 )
        {
          v133 = v155;
          v134 = v129 + (char *)v20 - (char *)v155;
          do
          {
            v135 = _mm_loadu_si128(v133);
            v129 += 16;
            ++v133;
            *(__m128i *)(v129 - 16) = v135;
          }
          while ( v129 != v134 );
        }
        v136 = (void *)(v129 + 16);
        if ( v155 )
        {
          v156 = v131;
          operator delete(v130, v195 - (char *)v130);
          v131 = v156;
        }
        v194[0] = v131;
        v194[1] = v136;
        v195 = &v131[v128];
      }
      else
      {
        *(_QWORD *)v194[1] = v18;
        v20->m128i_i64[1] = 0;
        v194[1] = (char *)v194[1] + 16;
      }
      v185 = v196;
      sub_2CDC00((__int64)&v186, &v197);
      v21 = v194[1];
      v22 = v194[0];
      v191 = v185;
      sub_2CDC00((__int64)&v192, &v186);
      v188 = v191;
      sub_2CDC00((__int64)&v189, &v192);
      sub_66C50((__int64)&v192);
      sub_2D97E0((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v188);
      ++v18;
      sub_66C50((__int64)&v189);
      sub_66C50((__int64)&v186);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v170 = 0;
    if ( v19 )
    {
      v137 = (__m128i *)qvector_reserve((__int64)&dest, 0, v19, 16);
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
          v58 = v140-- == 0;
        }
        while ( !v58 );
        v139 = (const __m128i *)dest;
      }
      qfree((__int64)v139);
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
      sub_383060(1961);
    goto LABEL_181;
  }
  v23 = (__int64 *)v194[0];
  if ( v194[0] == v194[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v170 = 0;
    v24 = v23[1];
    v25 = *v23;
    v26 = 4 * v24;
    v151 = 3 * *v23;
    v27 = 88 * v24;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v29 = *(_QWORD *)(a1[3 * v25 + 2] + 8 * (v24 + 2 * (v24 + v26)) + 80);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          sub_383060(2170);
        goto LABEL_181;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v30 = v170;
        if ( *((_QWORD *)&v170 + 1) < (unsigned __int64)(v170 + 1) )
        {
          v159 = *((void **)&v170 + 1);
          v31 = (__m128i *)qvector_reserve((__int64)&dest, 0, v170 + 1, 16);
          v53 = *((void **)&v170 + 1);
          v54 = (const __m128i *)dest;
          *((_QWORD *)&v170 + 1) = v159;
          v55 = v170 - 1;
          if ( (__int64)v170 - 1 >= 0 )
          {
            v56 = v31;
            do
            {
              v57 = _mm_loadu_si128(v54);
              ++v56;
              ++v54;
              v56[-1] = v57;
              v58 = v55-- == 0;
            }
            while ( !v58 );
            v54 = (const __m128i *)dest;
          }
          v160 = v53;
          qfree((__int64)v54);
          v30 = v170;
          dest = v31;
          *((_QWORD *)&v170 + 1) = v160;
        }
        else
        {
          v31 = (__m128i *)dest;
        }
        m128i_i8 = v31[v30].m128i_i8;
        *(_QWORD *)m128i_i8 = v25;
        *((_QWORD *)m128i_i8 + 1) = v24;
        *(_QWORD *)&v170 = v170 + 1;
      }
      v33 = (const __m128i *)v194[0];
      v34 = *(_QWORD *)v194[0];
      v35 = *((_QWORD *)v194[0] + 1);
      v185 = v196;
      v187 = 0u;
      v186 = 0;
      if ( !v198.m128i_i64[0] )
      {
        v36 = (__m128i *)v194[1];
        if ( (char *)v194[1] - (char *)v194[0] <= 16 )
          goto LABEL_40;
        v49 = v196;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0])(&v186, &v197, 2);
      v36 = (__m128i *)v194[1];
      v33 = (const __m128i *)v194[0];
      v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0];
      v187 = _mm_load_si128(&v198);
      if ( (char *)v194[1] - (char *)v194[0] > 16 )
      {
        v49 = v185;
        v193 = 0u;
        v191 = v185;
        v192 = 0;
        if ( v198.m128i_i64[0] )
        {
          v161 = (__m128i *)v194[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0])(&v192, &v186, 2);
          v59 = _mm_loadu_si128(&v187);
          v190 = 0u;
          v36 = v161;
          v193 = v59;
          v188 = v191;
          v189 = 0;
          if ( v187.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v187.m128i_i64[0])(&v189, &v192, 2);
            v60 = _mm_loadu_si128(&v193);
            v36 = v161;
            v190 = v60;
            if ( v60.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v60.m128i_i64[0])(&v192, &v192, 3);
              v36 = v161;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v188 = v49;
        v190 = 0u;
        v189 = 0;
LABEL_64:
        v50 = v36[-1].m128i_u64[0];
        v51 = v36 - 1;
        v52 = v36[-1].m128i_u64[1];
        v36[-1] = _mm_loadu_si128(v33);
        v193 = 0u;
        v191 = v188;
        v192 = 0;
        if ( v190.m128i_i64[0] )
        {
          v167 = v52;
          v164 = v50;
          v158 = v36 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v190.m128i_i64[0])(&v192, &v189, 2);
          v52 = v167;
          v50 = v164;
          v51 = v158;
          v193 = _mm_loadu_si128(&v190);
        }
        sub_2D9940((__int64)v33, 0, v51 - v33, v50, v52, &v191);
        if ( v193.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v192, &v192, 3);
        if ( v190.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v190.m128i_i64[0])(&v189, &v189, 3);
        v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0];
      }
      if ( v37 )
        v37(&v186, &v186, 3);
LABEL_40:
      v38 = (__m128i *)v194[1];
      v39 = v35 + 1;
      v40 = (const __m128i *)((char *)v194[1] - 16);
      v194[1] = (char *)v194[1] - 16;
      if ( v39 >= a1[3 * v34 + 3] )
      {
        v28 = (__int64 *)v194[0];
        if ( v194[0] == v40 )
          break;
        goto LABEL_28;
      }
      if ( v40 == (const __m128i *)v195 )
      {
        v61 = ((char *)v40 - (char *)v194[0]) >> 4;
        if ( v61 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v62 = 1;
        if ( v61 )
          v62 = ((char *)v40 - (char *)v194[0]) >> 4;
        v58 = __CFADD__(v62, v61);
        v63 = v62 + v61;
        if ( v58 )
        {
          v64 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v63 > 0x7FFFFFFFFFFFFFFLL )
            v63 = 0x7FFFFFFFFFFFFFFLL;
          v64 = v63;
        }
        v168 = v40;
        v165 = (char *)v40 - (char *)v194[0];
        v162 = (const __m128i *)v194[0];
        v65 = (__m128i *)operator new(v64 * 16);
        v66 = (__m128i *)v162;
        *(__m128i *)((char *)v65 + v165) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        if ( v168 == v162 )
        {
          v70 = (char *)v65;
        }
        else
        {
          v67 = v65;
          v68 = v162;
          do
          {
            v69 = _mm_loadu_si128(v68++);
            ++v67;
            v67[-1] = v69;
          }
          while ( v168 != v68 );
          v70 = &v65->m128i_i8[(char *)v168 - (char *)v162];
        }
        v71 = v70 + 16;
        if ( v162 )
        {
          v163 = (char *)v65;
          operator delete(v66, v195 - (char *)v66);
          v65 = (__m128i *)v163;
        }
        v194[0] = v65;
        v194[1] = v71;
        v195 = v65[v64].m128i_i8;
      }
      else
      {
        v38[-1] = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        v194[1] = (char *)v194[1] + 16;
      }
      v41 = v196;
      v187 = 0u;
      v185 = v196;
      v186 = 0;
      if ( !v198.m128i_i64[0] )
      {
        v43 = v194[1];
        v44 = v194[0];
LABEL_81:
        v188 = v41;
        v190 = 0u;
        v189 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0])(&v186, &v197, 2);
      v41 = v185;
      v42 = _mm_load_si128(&v198);
      v193 = 0u;
      v43 = v194[1];
      v187 = v42;
      v44 = v194[0];
      v191 = v185;
      v192 = 0;
      if ( !v198.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v198.m128i_i64[0])(&v192, &v186, 2);
      v45 = _mm_loadu_si128(&v187);
      v190 = 0u;
      v193 = v45;
      v188 = v191;
      v189 = 0;
      if ( v187.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v187.m128i_i64[0])(&v189, &v192, 2);
        v46 = _mm_loadu_si128(&v193);
        v190 = v46;
        if ( v46.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v46.m128i_i64[0])(&v192, &v192, 3);
      }
LABEL_48:
      sub_2D97E0((__int64)v44, ((v43 - v44) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)&v188);
      if ( v190.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v190.m128i_i64[0])(&v189, &v189, 3);
      if ( v187.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(&v186, &v186, 3);
      v28 = (__int64 *)v194[0];
      if ( v194[0] == v194[1] )
        break;
LABEL_28:
      v24 = v28[1];
      v25 = *v28;
      v26 = 4 * v24;
      if ( !v183 )
        std::__throw_bad_function_call();
    }
    while ( !v184(v182, v181[3 * *v28 + 2] + 88 * v24, v27 + v181[v151 + 2]) );
    if ( a3 )
    {
      v101 = (void *)a1[12];
      LODWORD(v173) = 0;
      v153 = v101;
      sub_2CDC90(a1 + 11, (int *)&v173);
      v102 = (__int64 *)dest;
      v103 = (__int64 *)((char *)dest + 16 * v170);
      v104 = 4LL * (_QWORD)v153;
      if ( dest == v103 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v102 + 2] + 88 * v102[1] + 80) = v153;
        v105 = (_DWORD *)(v104 + a1[11]);
        v106 = 1 << *v102;
        if ( (*v105 & v106) != 0 )
          break;
        v102 += 2;
        *v105 |= v106;
        if ( v103 == v102 )
          goto LABEL_55;
      }
      switch_dbctx();
      v107 = 0;
      v108 = v153;
      v109 = a1[3 * *v102 + 3];
      if ( v109 )
      {
        v147 = 2 * *v102;
        v143 = *v102;
        v107 = qalloc_or_throw(88 * v109, v104, *v102, v147);
        v117 = 0;
        v108 = v153;
        v118 = v107 + 24;
        v119 = v147 + v143;
        v148 = &a1[v147 + v143];
        v154 = (char *)(-24 - v107);
        do
        {
          v145 = v108;
          v144 = (__m128i *)v118;
          v120 = v148[2];
          *(_QWORD *)(v118 - 24) = off_4E1258;
          v121 = &v154[v118 + v120];
          v122 = _mm_loadu_si128((const __m128i *)(v121 + 8));
          *(_QWORD *)v118 = 0;
          *(_OWORD *)(v118 + 8) = 0;
          *(__m128i *)(v118 - 16) = v122;
          sub_2AE320((_QWORD *)v118, (__int64)(v121 + 24), v119, (__int64)&v154[v118]);
          ++v117;
          v108 = v145;
          v144[1].m128i_i8[8] = v121[48];
          v123 = _mm_loadu_si128((const __m128i *)(v121 + 56));
          v118 = (__int64)&v144[5].m128i_i64[1];
          v124 = *((_DWORD *)v121 + 18);
          v144[-2].m128i_i64[1] = (__int64)off_4E2BC0;
          v144[2] = v123;
          v144[3].m128i_i32[0] = v124;
          v144[3].m128i_i64[1] = *((_QWORD *)v121 + 10);
        }
        while ( v109 != v117 );
      }
      v110 = (char *)dest;
      v111 = (char *)dest + 16 * v170;
      if ( v111 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v110 == *v102 )
          {
            v112 = *((_QWORD *)v110 + 1);
            v113 = v102[1];
            if ( v112 != v113 && *(void **)(v107 + 88 * v112 + 80) == v108 )
              break;
          }
          v110 += 16;
          if ( v111 == v110 )
            goto LABEL_151;
        }
        sub_81980((__int64)&v173, (const char *)&unk_418793);
        v114 = s1;
        if ( *((_QWORD *)&v173 + 1) )
          v114 = (const char *)v173;
        v115 = *((_QWORD *)v110 + 1);
        sub_81980((__int64)&v171, (const char *)&unk_418793);
        v116 = s1;
        if ( v172 )
          v116 = (const char *)v171;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v102, v116, v115, v114, v113);
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
LABEL_151:
      if ( !under_debugger )
        sub_383060(2171);
LABEL_181:
      BUG();
    }
    v47 = v170;
    if ( (unsigned __int64)v170 <= 1 )
      goto LABEL_55;
    v72 = (__int64 *)dest;
    DWORD2(v173) = 0;
    v175 = (__int128 *)((char *)&v173 + 8);
    v174 = nullptr;
    v176 = (char *)&v173 + 8;
    v177 = 0;
    v152 = (char *)dest + 16 * v170;
    if ( v152 != dest )
    {
      v73 = (char *)dest;
      do
      {
        v171 = *(_QWORD *)(a1[3 * *(_QWORD *)v73 + 2] + 88LL * *((_QWORD *)v73 + 1) + 80);
        v74 = sub_2CDD40(&v173, (unsigned __int64 *)&v171);
        v75 = *(_QWORD *)v73;
        v73 += 16;
        *(_DWORD *)v74 |= 1 << v75;
      }
      while ( v152 != v73 );
      if ( v175 != (__int128 *)((char *)&v173 + 8) )
      {
        v76 = (__int64)v175;
        do
        {
          v77 = *(_DWORD *)(v76 + 40);
          v78 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v76 + 32));
          v76 = std::_Rb_tree_increment();
          if ( v78 != v77 )
          {
            v79 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v79, 0x30u);
            --v177;
          }
        }
        while ( (__int128 *)v76 != (__int128 *)((char *)&v173 + 8) );
      }
      v47 = v170;
      v72 = (__int64 *)dest;
      v80 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v170 != dest )
      {
        do
        {
          while ( 1 )
          {
            v82 = v80 + 2;
            if ( (_QWORD *)((char *)&v173 + 8) == sub_2AE200(
                                                    (__int64)&v173,
                                                    *(_QWORD *)(a1[3 * *v80 + 2] + 88 * v80[1] + 80)) )
              break;
            v47 = v170;
            v80 += 2;
            if ( v82 == &v72[2 * (_QWORD)v170] )
              goto LABEL_111;
          }
          v83 = v81 - (_QWORD)v80;
          if ( (v83 >> 4) - 2 >= 0 )
          {
            memmove(v80, v82, v83 - 16);
            v72 = (__int64 *)dest;
          }
          *(_QWORD *)&v170 = v170 - 1;
          v47 = v170;
        }
        while ( v80 != &v72[2 * (_QWORD)v170] );
      }
      goto LABEL_111;
    }
    while ( 2 )
    {
      v84 = 16 * v47;
      v85 = *v72;
      v86 = v72[1];
      v87 = v72;
      if ( (v84 >> 4) - 2 >= 0 )
      {
        memmove(v72, v72 + 2, v84 - 16);
        v72 = (__int64 *)dest;
        v87 = (__int64 *)dest;
      }
      v88 = a1[1];
      v47 = v170 - 1;
      v89 = a1[3 * v85 + 2] + 88 * v86;
      *(_QWORD *)&v170 = v170 - 1;
      v90 = *(_QWORD *)(v89 + 80);
      if ( v88 )
      {
        v91 = 0;
        v92 = *(_DWORD *)(a1[11] + 4 * v90);
        do
        {
          v93 = -1;
          if ( (v92 & (1 << v91)) != 0 )
            v93 = v90;
          *(&v191 + v91++) = v93;
        }
        while ( v91 != v88 );
      }
      if ( 16 * v47 )
      {
        do
        {
          v96 = *v87;
          v97 = a1[3 * *v87 + 2] + 88 * v87[1];
          v98 = *(_QWORD *)(v97 + 80);
          if ( *(&v191 + *v87) == -1 )
          {
            v99 = a1[11];
            *(&v191 + v96) = v98;
            *(_DWORD *)(v99 + 4 * v98) &= ~(1 << v96);
            if ( !*(_DWORD *)(a1[11] + 4 * v98) )
              ++a1[14];
            *(_QWORD *)(v97 + 80) = v90;
            *(_DWORD *)(4 * v90 + a1[11]) |= 1 << *v87;
            v95 = v87 + 2;
            v72 = (__int64 *)dest;
            v47 = v170;
            if ( v90 == *(_QWORD *)(v97 + 80) )
            {
LABEL_128:
              if ( (((char *)&v72[2 * v47] - (char *)v87) >> 4) - 2 >= 0 )
              {
                v100 = (__int64 *)memmove(v87, v95, (char *)&v72[2 * v47] - (char *)v87 - 16);
                v72 = (__int64 *)dest;
                v87 = v100;
                v47 = v170;
              }
              *(_QWORD *)&v170 = --v47;
              continue;
            }
          }
          else
          {
            v94 = v90 == v98;
            v95 = v87 + 2;
            v47 = v170;
            if ( v94 )
              goto LABEL_128;
          }
          v87 = (__int64 *)v95;
        }
        while ( v87 != &v72[2 * v47] );
      }
LABEL_111:
      if ( v47 )
        continue;
      break;
    }
    sub_2AE260((void **)v174);
LABEL_55:
    v23 = (__int64 *)v194[0];
  }
  while ( v194[1] != v194[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v170 = 0;
    qfree((__int64)dest);
  }
  sub_66C50((__int64)&v197);
  if ( v194[0] )
    operator delete(v194[0], v195 - (char *)v194[0]);
  sub_66C50((__int64)v182);
  sub_66C50((__int64)v180);
  sub_66C50((__int64)v178);
  return v199 - __readfsqword(0x28u);
}
