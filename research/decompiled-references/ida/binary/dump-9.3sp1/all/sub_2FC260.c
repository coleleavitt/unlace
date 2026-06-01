unsigned __int64 __fastcall sub_2FC260(_QWORD *a1, const __m128i *a2, char a3)
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
  __int64 v24; // r14
  __int64 v25; // r13
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
  _QWORD *v41; // rax
  __m128i v42; // xmm0
  _BYTE *v43; // r14
  _BYTE *v44; // r13
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __int64 v47; // rax
  _QWORD *v49; // rdx
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
  __int64 v101; // r13
  __int64 *v102; // r14
  __int64 *v103; // rsi
  _DWORD *v104; // rdi
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
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
  _QWORD *v143; // [rsp+0h] [rbp-268h]
  __int64 v144; // [rsp+8h] [rbp-260h]
  __int64 v146; // [rsp+10h] [rbp-258h]
  const __m128i *v147; // [rsp+18h] [rbp-250h]
  void *v148; // [rsp+18h] [rbp-250h]
  __int64 v149; // [rsp+18h] [rbp-250h]
  char *v150; // [rsp+18h] [rbp-250h]
  void *v151; // [rsp+18h] [rbp-250h]
  const __m128i *v152; // [rsp+18h] [rbp-250h]
  char *v153; // [rsp+18h] [rbp-250h]
  __m128i *v155; // [rsp+30h] [rbp-238h]
  void *v156; // [rsp+30h] [rbp-238h]
  void *v157; // [rsp+30h] [rbp-238h]
  __m128i *v158; // [rsp+30h] [rbp-238h]
  const __m128i *v159; // [rsp+30h] [rbp-238h]
  char *v160; // [rsp+30h] [rbp-238h]
  unsigned __int64 v161; // [rsp+38h] [rbp-230h]
  signed __int64 v162; // [rsp+38h] [rbp-230h]
  signed __int64 v163; // [rsp+38h] [rbp-230h]
  unsigned __int64 v164; // [rsp+40h] [rbp-228h]
  const __m128i *v165; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v167; // [rsp+68h] [rbp-200h]
  __int64 v168; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v169; // [rsp+88h] [rbp-1E0h]
  __int128 v170; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v171; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v172; // [rsp+B8h] [rbp-1B0h]
  char *v173; // [rsp+C0h] [rbp-1A8h]
  __int64 v174; // [rsp+C8h] [rbp-1A0h]
  __m128i v175[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v176; // [rsp+F0h] [rbp-178h]
  __m128i v177[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v178; // [rsp+120h] [rbp-148h]
  _BYTE v179[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v180; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v181)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v182; // [rsp+150h] [rbp-118h] BYREF
  __m128i v183; // [rsp+158h] [rbp-110h] BYREF
  __m128i v184; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v185; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v186; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v187; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v188; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v189; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v190; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v191[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *v192; // [rsp+1F0h] [rbp-78h]
  _QWORD *v193; // [rsp+1F8h] [rbp-70h]
  __m128i v194; // [rsp+200h] [rbp-68h] BYREF
  __m128i v195; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v196; // [rsp+228h] [rbp-40h]

  v196 = __readfsqword(0x28u);
  sub_2CE490((__int64)v175, a2);
  v176 = a1;
  sub_2CE490((__int64)v177, a2);
  v178 = a1;
  sub_2CE490((__int64)v179, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2CE490((__int64)&v182, v175);
    v6 = *v5;
    v7 = 200 * v5[1];
    v147 = (const __m128i *)(*v5 + v7);
    sub_2CE490((__int64)&v185, (const __m128i *)&v182);
    sub_2CE490((__int64)v191, (const __m128i *)&v185);
    sub_2CE490((__int64)&v188, (const __m128i *)v191);
    sub_66C50((__int64)v191);
    if ( v147 != (const __m128i *)v6 )
    {
      sub_2CE490((__int64)v191, (const __m128i *)&v188);
      v8 = -2;
      v9 = 0x8F5C28F5C28F5C29LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2FBA00(v6, v147, v8, (const __m128i *)v191);
      sub_66C50((__int64)v191);
      sub_2CE490((__int64)v191, (const __m128i *)&v188);
      sub_2E0550(v6, (__int64)v147, (const __m128i *)v191);
      sub_66C50((__int64)v191);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v188);
    sub_66C50((__int64)&v185);
    sub_66C50((__int64)&v182);
  }
  v171 = nullptr;
  v192 = nullptr;
  v193 = v176;
  v170 = 0;
  *(_OWORD *)v191 = 0;
  sub_2CE490((__int64)&v194, v177);
  v182 = v193;
  sub_2CE490((__int64)&v183, &v194);
  v11 = v191[1];
  v12 = v191[0];
  v188 = v182;
  sub_2CE490((__int64)&v189, &v183);
  v185 = v188;
  sub_2CE490((__int64)&v186, &v189);
  v13 = v11 - v12;
  sub_66C50((__int64)&v189);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v190 = 0u;
      v189 = 0;
      v188 = v185;
      if ( v187.m128i_i64[0] )
      {
        v148 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v187.m128i_i64[0])(&v189, &v186, 2);
        v17 = (unsigned __int64)v148;
        v190 = _mm_loadu_si128(&v187);
      }
      sub_2DB710((__int64)v12, i, v14, v16, v17, (__int64)&v188);
      if ( v190.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0])(&v189, &v189, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_66C50((__int64)&v186);
  sub_66C50((__int64)&v183);
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
      v20 = (const __m128i *)v191[1];
      if ( v191[1] == v192 )
      {
        v125 = ((char *)v191[1] - (char *)v191[0]) >> 4;
        if ( v125 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v126 = 1;
        if ( v125 )
          v126 = ((char *)v191[1] - (char *)v191[0]) >> 4;
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
        v163 = (char *)v191[1] - (char *)v191[0];
        v152 = (const __m128i *)v191[0];
        v129 = operator new(v128);
        v130 = (__m128i *)v152;
        v131 = (char *)v129;
        v132 = (unsigned __int64 *)(v129 + v163);
        *v132 = v18;
        v132[1] = 0;
        if ( v20 != v152 )
        {
          v133 = v152;
          v134 = v129 + (char *)v20 - (char *)v152;
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
        if ( v152 )
        {
          v153 = v131;
          operator delete(v130, v192 - (char *)v130);
          v131 = v153;
        }
        v191[0] = v131;
        v191[1] = v136;
        v192 = &v131[v128];
      }
      else
      {
        *(_QWORD *)v191[1] = v18;
        v20->m128i_i64[1] = 0;
        v191[1] = (char *)v191[1] + 16;
      }
      v182 = v193;
      sub_2CE490((__int64)&v183, &v194);
      v21 = v191[1];
      v22 = v191[0];
      v188 = v182;
      sub_2CE490((__int64)&v189, &v183);
      v185 = v188;
      sub_2CE490((__int64)&v186, &v189);
      sub_66C50((__int64)&v189);
      sub_2DB5B0((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v185);
      ++v18;
      sub_66C50((__int64)&v186);
      sub_66C50((__int64)&v183);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v167 = 0;
    if ( v19 )
    {
      v137 = (__m128i *)qvector_reserve((__int64)&dest, 0, v19, 16);
      v138 = *((_QWORD *)&v167 + 1);
      *((_QWORD *)&v167 + 1) = 0;
      v139 = (const __m128i *)dest;
      v140 = v167 - 1;
      if ( (__int64)v167 - 1 >= 0 )
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
      *((_QWORD *)&v167 + 1) = v138;
    }
  }
  else
  {
    dest = nullptr;
    v167 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_383060(1961);
    goto LABEL_181;
  }
  v23 = (__int64 *)v191[0];
  if ( v191[0] == v191[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v167 = 0;
    v24 = v23[1];
    v25 = *v23;
    v26 = 4 * v24;
    v149 = 3 * *v23;
    v27 = 200 * v24;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v29 = *(_QWORD *)(a1[3 * v25 + 2] + 40 * (v24 + v26) + 192);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          sub_383060(2170);
        goto LABEL_181;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v30 = v167;
        if ( *((_QWORD *)&v167 + 1) < (unsigned __int64)(v167 + 1) )
        {
          v156 = *((void **)&v167 + 1);
          v31 = (__m128i *)qvector_reserve((__int64)&dest, 0, v167 + 1, 16);
          v53 = *((void **)&v167 + 1);
          v54 = (const __m128i *)dest;
          *((_QWORD *)&v167 + 1) = v156;
          v55 = v167 - 1;
          if ( (__int64)v167 - 1 >= 0 )
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
          v157 = v53;
          qfree((__int64)v54);
          v30 = v167;
          dest = v31;
          *((_QWORD *)&v167 + 1) = v157;
        }
        else
        {
          v31 = (__m128i *)dest;
        }
        m128i_i8 = v31[v30].m128i_i8;
        *(_QWORD *)m128i_i8 = v25;
        *((_QWORD *)m128i_i8 + 1) = v24;
        *(_QWORD *)&v167 = v167 + 1;
      }
      v33 = (const __m128i *)v191[0];
      v34 = *(_QWORD *)v191[0];
      v35 = *((_QWORD *)v191[0] + 1);
      v182 = v193;
      v184 = 0u;
      v183 = 0;
      if ( !v195.m128i_i64[0] )
      {
        v36 = (__m128i *)v191[1];
        if ( (char *)v191[1] - (char *)v191[0] <= 16 )
          goto LABEL_40;
        v49 = v193;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v195.m128i_i64[0])(&v183, &v194, 2);
      v36 = (__m128i *)v191[1];
      v33 = (const __m128i *)v191[0];
      v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v195.m128i_i64[0];
      v184 = _mm_load_si128(&v195);
      if ( (char *)v191[1] - (char *)v191[0] > 16 )
      {
        v49 = v182;
        v190 = 0u;
        v188 = v182;
        v189 = 0;
        if ( v195.m128i_i64[0] )
        {
          v158 = (__m128i *)v191[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v195.m128i_i64[0])(&v189, &v183, 2);
          v59 = _mm_loadu_si128(&v184);
          v187 = 0u;
          v36 = v158;
          v190 = v59;
          v185 = v188;
          v186 = 0;
          if ( v184.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v184.m128i_i64[0])(&v186, &v189, 2);
            v60 = _mm_loadu_si128(&v190);
            v36 = v158;
            v187 = v60;
            if ( v60.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v60.m128i_i64[0])(&v189, &v189, 3);
              v36 = v158;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v185 = v49;
        v187 = 0u;
        v186 = 0;
LABEL_64:
        v50 = v36[-1].m128i_u64[0];
        v51 = v36 - 1;
        v52 = v36[-1].m128i_u64[1];
        v36[-1] = _mm_loadu_si128(v33);
        v190 = 0u;
        v188 = v185;
        v189 = 0;
        if ( v187.m128i_i64[0] )
        {
          v164 = v52;
          v161 = v50;
          v155 = v36 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v187.m128i_i64[0])(&v189, &v186, 2);
          v52 = v164;
          v50 = v161;
          v51 = v155;
          v190 = _mm_loadu_si128(&v187);
        }
        sub_2DB710((__int64)v33, 0, v51 - v33, v50, v52, (__int64)&v188);
        if ( v190.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0])(&v189, &v189, 3);
        if ( v187.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v187.m128i_i64[0])(&v186, &v186, 3);
        v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v184.m128i_i64[0];
      }
      if ( v37 )
        v37(&v183, &v183, 3);
LABEL_40:
      v38 = (__m128i *)v191[1];
      v39 = v35 + 1;
      v40 = (const __m128i *)((char *)v191[1] - 16);
      v191[1] = (char *)v191[1] - 16;
      if ( v39 >= a1[3 * v34 + 3] )
      {
        v28 = (__int64 *)v191[0];
        if ( v191[0] == v40 )
          break;
        goto LABEL_28;
      }
      if ( v40 == (const __m128i *)v192 )
      {
        v61 = ((char *)v40 - (char *)v191[0]) >> 4;
        if ( v61 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v62 = 1;
        if ( v61 )
          v62 = ((char *)v40 - (char *)v191[0]) >> 4;
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
        v165 = v40;
        v162 = (char *)v40 - (char *)v191[0];
        v159 = (const __m128i *)v191[0];
        v65 = (__m128i *)operator new(v64 * 16);
        v66 = (__m128i *)v159;
        *(__m128i *)((char *)v65 + v162) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        if ( v165 == v159 )
        {
          v70 = (char *)v65;
        }
        else
        {
          v67 = v65;
          v68 = v159;
          do
          {
            v69 = _mm_loadu_si128(v68++);
            ++v67;
            v67[-1] = v69;
          }
          while ( v165 != v68 );
          v70 = &v65->m128i_i8[(char *)v165 - (char *)v159];
        }
        v71 = v70 + 16;
        if ( v159 )
        {
          v160 = (char *)v65;
          operator delete(v66, v192 - (char *)v66);
          v65 = (__m128i *)v160;
        }
        v191[0] = v65;
        v191[1] = v71;
        v192 = v65[v64].m128i_i8;
      }
      else
      {
        v38[-1] = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        v191[1] = (char *)v191[1] + 16;
      }
      v41 = v193;
      v184 = 0u;
      v182 = v193;
      v183 = 0;
      if ( !v195.m128i_i64[0] )
      {
        v43 = v191[1];
        v44 = v191[0];
LABEL_81:
        v185 = v41;
        v187 = 0u;
        v186 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v195.m128i_i64[0])(&v183, &v194, 2);
      v41 = v182;
      v42 = _mm_load_si128(&v195);
      v190 = 0u;
      v43 = v191[1];
      v184 = v42;
      v44 = v191[0];
      v188 = v182;
      v189 = 0;
      if ( !v195.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v195.m128i_i64[0])(&v189, &v183, 2);
      v45 = _mm_loadu_si128(&v184);
      v187 = 0u;
      v190 = v45;
      v185 = v188;
      v186 = 0;
      if ( v184.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v184.m128i_i64[0])(&v186, &v189, 2);
        v46 = _mm_loadu_si128(&v190);
        v187 = v46;
        if ( v46.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v46.m128i_i64[0])(&v189, &v189, 3);
      }
LABEL_48:
      sub_2DB5B0((__int64)v44, ((v43 - v44) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)&v185);
      if ( v187.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v187.m128i_i64[0])(&v186, &v186, 3);
      if ( v184.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v184.m128i_i64[0])(&v183, &v183, 3);
      v28 = (__int64 *)v191[0];
      if ( v191[0] == v191[1] )
        break;
LABEL_28:
      v24 = v28[1];
      v25 = *v28;
      v26 = 4 * v24;
      if ( !v180 )
        std::__throw_bad_function_call();
    }
    while ( !v181(v179, v178[3 * *v28 + 2] + 200 * v24, v27 + v178[v149 + 2]) );
    if ( a3 )
    {
      v101 = a1[12];
      LODWORD(v170) = 0;
      sub_2CDC90(a1 + 11, (int *)&v170);
      v102 = (__int64 *)dest;
      v103 = (__int64 *)((char *)dest + 16 * v167);
      if ( dest == v103 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v102 + 2] + 200 * v102[1] + 192) = v101;
        v104 = (_DWORD *)(4 * v101 + a1[11]);
        v105 = 1 << *v102;
        if ( (*v104 & v105) != 0 )
          break;
        v102 += 2;
        *v104 |= v105;
        if ( v103 == v102 )
          goto LABEL_55;
      }
      switch_dbctx();
      v108 = *v102;
      v109 = 0;
      v110 = 2 * *v102;
      v111 = (void *)a1[3 * *v102 + 3];
      v151 = v111;
      if ( v111 )
      {
        v119 = qalloc_or_throw(200LL * (_QWORD)v111, v108, v106, v107);
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
          sub_2CE520(v119, v123);
          v124 = *(_QWORD *)(v123 + 192);
          *v143 = off_4E2D00;
          v119 = (__int64)(v143 + 25);
          v143[24] = v124;
          v121 = v146 + 1;
          v120 = v144 + 200;
        }
        while ( v151 != (void *)(v146 + 1) );
      }
      v112 = (char *)dest;
      v113 = (char *)dest + 16 * v167;
      if ( v113 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v112 == *v102 )
          {
            v114 = *((_QWORD *)v112 + 1);
            v115 = v102[1];
            if ( v114 != v115 && *(_QWORD *)(v109 + 200 * v114 + 192) == v101 )
              break;
          }
          v112 += 16;
          if ( v113 == v112 )
            goto LABEL_151;
        }
        sub_81980((__int64)&v170, (const char *)&unk_418793);
        v116 = s1;
        if ( *((_QWORD *)&v170 + 1) )
          v116 = (const char *)v170;
        v117 = *((_QWORD *)v112 + 1);
        sub_81980((__int64)&v168, (const char *)&unk_418793);
        v118 = s1;
        if ( v169 )
          v118 = (const char *)v168;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v102, v118, v117, v116, v115);
        if ( v168 )
        {
          v169 = 0;
          qfree(v168);
        }
        if ( (_QWORD)v170 )
        {
          *((_QWORD *)&v170 + 1) = 0;
          qfree(v170);
        }
      }
LABEL_151:
      if ( !under_debugger )
        sub_383060(2171);
LABEL_181:
      BUG();
    }
    v47 = v167;
    if ( (unsigned __int64)v167 <= 1 )
      goto LABEL_55;
    v72 = (__int64 *)dest;
    DWORD2(v170) = 0;
    v172 = (__int128 *)((char *)&v170 + 8);
    v171 = nullptr;
    v173 = (char *)&v170 + 8;
    v174 = 0;
    v150 = (char *)dest + 16 * v167;
    if ( v150 != dest )
    {
      v73 = (char *)dest;
      do
      {
        v168 = *(_QWORD *)(a1[3 * *(_QWORD *)v73 + 2] + 200LL * *((_QWORD *)v73 + 1) + 192);
        v74 = sub_2CDD40(&v170, (unsigned __int64 *)&v168);
        v75 = *(_QWORD *)v73;
        v73 += 16;
        *(_DWORD *)v74 |= 1 << v75;
      }
      while ( v150 != v73 );
      if ( v172 != (__int128 *)((char *)&v170 + 8) )
      {
        v76 = (__int64)v172;
        do
        {
          v77 = *(_DWORD *)(v76 + 40);
          v78 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v76 + 32));
          v76 = std::_Rb_tree_increment();
          if ( v78 != v77 )
          {
            v79 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v79, 0x30u);
            --v174;
          }
        }
        while ( (__int128 *)v76 != (__int128 *)((char *)&v170 + 8) );
      }
      v47 = v167;
      v72 = (__int64 *)dest;
      v80 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v167 != dest )
      {
        do
        {
          while ( 1 )
          {
            v82 = v80 + 2;
            if ( (_QWORD *)((char *)&v170 + 8) == sub_2AE200(
                                                    (__int64)&v170,
                                                    *(_QWORD *)(a1[3 * *v80 + 2] + 200 * v80[1] + 192)) )
              break;
            v47 = v167;
            v80 += 2;
            if ( v82 == &v72[2 * (_QWORD)v167] )
              goto LABEL_111;
          }
          v83 = v81 - (_QWORD)v80;
          if ( (v83 >> 4) - 2 >= 0 )
          {
            memmove(v80, v82, v83 - 16);
            v72 = (__int64 *)dest;
          }
          *(_QWORD *)&v167 = v167 - 1;
          v47 = v167;
        }
        while ( v80 != &v72[2 * (_QWORD)v167] );
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
      v47 = v167 - 1;
      v89 = a1[3 * v85 + 2] + 200 * v86;
      *(_QWORD *)&v167 = v167 - 1;
      v90 = *(_QWORD *)(v89 + 192);
      if ( v88 )
      {
        v91 = 0;
        v92 = *(_DWORD *)(a1[11] + 4 * v90);
        do
        {
          v93 = -1;
          if ( (v92 & (1 << v91)) != 0 )
            v93 = v90;
          (&v188)[v91++] = (_QWORD *)v93;
        }
        while ( v91 != v88 );
      }
      if ( 16 * v47 )
      {
        do
        {
          v96 = *v87;
          v97 = a1[3 * *v87 + 2] + 200 * v87[1];
          v98 = *(_QWORD *)(v97 + 192);
          if ( (&v188)[*v87] == (_QWORD *)-1LL )
          {
            v99 = a1[11];
            (&v188)[v96] = (_QWORD *)v98;
            *(_DWORD *)(v99 + 4 * v98) &= ~(1 << v96);
            if ( !*(_DWORD *)(a1[11] + 4 * v98) )
              ++a1[14];
            *(_QWORD *)(v97 + 192) = v90;
            *(_DWORD *)(4 * v90 + a1[11]) |= 1 << *v87;
            v95 = v87 + 2;
            v72 = (__int64 *)dest;
            v47 = v167;
            if ( v90 == *(_QWORD *)(v97 + 192) )
            {
LABEL_128:
              if ( (((char *)&v72[2 * v47] - (char *)v87) >> 4) - 2 >= 0 )
              {
                v100 = (__int64 *)memmove(v87, v95, (char *)&v72[2 * v47] - (char *)v87 - 16);
                v72 = (__int64 *)dest;
                v87 = v100;
                v47 = v167;
              }
              *(_QWORD *)&v167 = --v47;
              continue;
            }
          }
          else
          {
            v94 = v90 == v98;
            v95 = v87 + 2;
            v47 = v167;
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
    sub_2AE260((void **)v171);
LABEL_55:
    v23 = (__int64 *)v191[0];
  }
  while ( v191[1] != v191[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v167 = 0;
    qfree((__int64)dest);
  }
  sub_66C50((__int64)&v194);
  if ( v191[0] )
    operator delete(v191[0], v192 - (char *)v191[0]);
  sub_66C50((__int64)v179);
  sub_66C50((__int64)v177);
  sub_66C50((__int64)v175);
  return v196 - __readfsqword(0x28u);
}
