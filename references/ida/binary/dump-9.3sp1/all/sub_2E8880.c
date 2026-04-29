unsigned __int64 __fastcall sub_2E8880(_QWORD *a1, const __m128i *a2, char a3)
{
  unsigned __int64 v4; // r13
  __int64 *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  _BYTE *v10; // r13
  _BYTE *v11; // r14
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 i; // r13
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  const __m128i *v19; // r14
  _BYTE *v20; // r13
  _BYTE *v21; // r14
  __int64 *v22; // rax
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // r12
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
  _QWORD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r12
  int v75; // r15d
  int v76; // r14d
  void *v77; // rax
  __int64 *v78; // r14
  __int64 v79; // r10
  __int64 *v80; // rsi
  __int64 v81; // r10
  __int64 v82; // rax
  __int64 v83; // r13
  __int64 v84; // r12
  __int64 *v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // r13
  __int64 v88; // rcx
  int v89; // r11d
  __int64 v90; // rdx
  void *v91; // rsi
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rsi
  __int64 v96; // rdx
  __int64 *v97; // rax
  __int64 v98; // r14
  __int64 *v99; // r13
  __int64 *v100; // rsi
  _DWORD *v101; // rdi
  int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // rbp
  __int64 v105; // r12
  __int64 v106; // rax
  char *v107; // rbx
  char *v108; // rdx
  __int64 v109; // rax
  __int64 v110; // r12
  const char *v111; // r14
  __int64 v112; // rbx
  const char *v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rsi
  __int64 v117; // rdx
  int v118; // r9d
  __m128i v119; // xmm0
  int v120; // r9d
  __int64 v121; // rdx
  signed __int64 v122; // rax
  signed __int64 v123; // rcx
  unsigned __int64 v124; // rax
  unsigned __int64 v125; // r13
  __int64 v126; // rax
  __m128i *v127; // rdx
  char *v128; // rcx
  unsigned __int64 *v129; // rsi
  __int64 v130; // rsi
  const __m128i *v131; // rdi
  __m128i v132; // xmm0
  void *v133; // r14
  __m128i *v134; // r13
  __int64 v135; // r14
  const __m128i *v136; // rdi
  __int64 v137; // rax
  __m128i *v138; // rdx
  __m128i v139; // xmm0
  __int64 v140; // [rsp+0h] [rbp-268h]
  __int64 v141; // [rsp+8h] [rbp-260h]
  const __m128i *v143; // [rsp+18h] [rbp-250h]
  void *v144; // [rsp+18h] [rbp-250h]
  __int64 v145; // [rsp+18h] [rbp-250h]
  char *v146; // [rsp+18h] [rbp-250h]
  const __m128i *v147; // [rsp+18h] [rbp-250h]
  char *v148; // [rsp+18h] [rbp-250h]
  __m128i *v150; // [rsp+30h] [rbp-238h]
  void *v151; // [rsp+30h] [rbp-238h]
  void *v152; // [rsp+30h] [rbp-238h]
  __m128i *v153; // [rsp+30h] [rbp-238h]
  const __m128i *v154; // [rsp+30h] [rbp-238h]
  char *v155; // [rsp+30h] [rbp-238h]
  unsigned __int64 v156; // [rsp+38h] [rbp-230h]
  signed __int64 v157; // [rsp+38h] [rbp-230h]
  signed __int64 v158; // [rsp+38h] [rbp-230h]
  unsigned __int64 v159; // [rsp+40h] [rbp-228h]
  const __m128i *v160; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v162; // [rsp+68h] [rbp-200h]
  __int64 v163; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v164; // [rsp+88h] [rbp-1E0h]
  __int128 v165; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v166; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v167; // [rsp+B8h] [rbp-1B0h]
  char *v168; // [rsp+C0h] [rbp-1A8h]
  __int64 v169; // [rsp+C8h] [rbp-1A0h]
  __m128i v170[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v171; // [rsp+F0h] [rbp-178h]
  __m128i v172[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v173; // [rsp+120h] [rbp-148h]
  _BYTE v174[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v175; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v176)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v177; // [rsp+150h] [rbp-118h] BYREF
  __m128i v178; // [rsp+158h] [rbp-110h] BYREF
  __m128i v179; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v180; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v181; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v182; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v183; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v184; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v185; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v186[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *v187; // [rsp+1F0h] [rbp-78h]
  _QWORD *v188; // [rsp+1F8h] [rbp-70h]
  __m128i v189; // [rsp+200h] [rbp-68h] BYREF
  __m128i v190; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v191; // [rsp+228h] [rbp-40h]

  v191 = __readfsqword(0x28u);
  sub_2CDFB0((__int64)v170, a2);
  v171 = a1;
  sub_2CDFB0((__int64)v172, a2);
  v173 = a1;
  sub_2CDFB0((__int64)v174, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2CDFB0((__int64)&v177, v170);
    v6 = *v5;
    v7 = v5[1] << 6;
    v143 = (const __m128i *)(*v5 + v7);
    sub_2CDFB0((__int64)&v180, (const __m128i *)&v177);
    sub_2CDFB0((__int64)v186, (const __m128i *)&v180);
    sub_2CDFB0((__int64)&v183, (const __m128i *)v186);
    sub_66C50((__int64)v186);
    if ( v143 != (const __m128i *)v6 )
    {
      sub_2CDFB0((__int64)v186, (const __m128i *)&v183);
      v8 = v7 >> 6;
      v9 = -2;
      if ( v8 )
      {
        _BitScanReverse64(&v8, v8);
        v9 = 2LL * (int)v8;
      }
      sub_2E8460(v6, v143, v9, (const __m128i *)v186);
      sub_66C50((__int64)v186);
      sub_2CDFB0((__int64)v186, (const __m128i *)&v183);
      sub_2DD570(v6, (__int64)v143, (const __m128i *)v186);
      sub_66C50((__int64)v186);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v183);
    sub_66C50((__int64)&v180);
    sub_66C50((__int64)&v177);
  }
  v166 = nullptr;
  v187 = nullptr;
  v188 = v171;
  v165 = 0;
  *(_OWORD *)v186 = 0;
  sub_2CDFB0((__int64)&v189, v172);
  v177 = v188;
  sub_2CDFB0((__int64)&v178, &v189);
  v10 = v186[1];
  v11 = v186[0];
  v183 = v177;
  sub_2CDFB0((__int64)&v184, &v178);
  v180 = v183;
  sub_2CDFB0((__int64)&v181, &v184);
  v12 = v10 - v11;
  sub_66C50((__int64)&v184);
  if ( v12 > 16 )
  {
    v13 = v12 >> 4;
    for ( i = ((v12 >> 4) - 2) / 2; ; --i )
    {
      v15 = *(_QWORD *)&v11[16 * i];
      v16 = *(_QWORD *)&v11[16 * i + 8];
      v185 = 0u;
      v184 = 0;
      v183 = v180;
      if ( v182.m128i_i64[0] )
      {
        v144 = (void *)v16;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v182.m128i_i64[0])(&v184, &v181, 2);
        v16 = (unsigned __int64)v144;
        v185 = _mm_loadu_si128(&v182);
      }
      sub_2DA0A0((__int64)v11, i, v13, v15, v16, (__int64)&v183);
      if ( v185.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v185.m128i_i64[0])(&v184, &v184, 3);
      if ( !i )
        break;
    }
  }
  v17 = 0;
  sub_66C50((__int64)&v181);
  sub_66C50((__int64)&v178);
  if ( a1[1] )
  {
    do
    {
      while ( !a1[3 * v17 + 3] )
      {
        v18 = a1[1];
        if ( ++v17 >= v18 )
          goto LABEL_22;
      }
      v19 = (const __m128i *)v186[1];
      if ( v186[1] == v187 )
      {
        v122 = ((char *)v186[1] - (char *)v186[0]) >> 4;
        if ( v122 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v123 = 1;
        if ( v122 )
          v123 = ((char *)v186[1] - (char *)v186[0]) >> 4;
        v56 = __CFADD__(v123, v122);
        v124 = v123 + v122;
        if ( v56 )
        {
          v125 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v124 > 0x7FFFFFFFFFFFFFFLL )
            v124 = 0x7FFFFFFFFFFFFFFLL;
          v125 = 16 * v124;
        }
        v158 = (char *)v186[1] - (char *)v186[0];
        v147 = (const __m128i *)v186[0];
        v126 = operator new(v125);
        v127 = (__m128i *)v147;
        v128 = (char *)v126;
        v129 = (unsigned __int64 *)(v126 + v158);
        *v129 = v17;
        v129[1] = 0;
        if ( v19 != v147 )
        {
          v130 = v126;
          v131 = v147;
          v126 += (char *)v19 - (char *)v147;
          do
          {
            v132 = _mm_loadu_si128(v131);
            v130 += 16;
            ++v131;
            *(__m128i *)(v130 - 16) = v132;
          }
          while ( v126 != v130 );
        }
        v133 = (void *)(v126 + 16);
        if ( v147 )
        {
          v148 = v128;
          operator delete(v127, v187 - (char *)v127);
          v128 = v148;
        }
        v186[0] = v128;
        v186[1] = v133;
        v187 = &v128[v125];
      }
      else
      {
        *(_QWORD *)v186[1] = v17;
        v19->m128i_i64[1] = 0;
        v186[1] = (char *)v186[1] + 16;
      }
      v177 = v188;
      sub_2CDFB0((__int64)&v178, &v189);
      v20 = v186[1];
      v21 = v186[0];
      v183 = v177;
      sub_2CDFB0((__int64)&v184, &v178);
      v180 = v183;
      sub_2CDFB0((__int64)&v181, &v184);
      sub_66C50((__int64)&v184);
      sub_2D9F50((__int64)v21, ((v20 - v21) >> 4) - 1, 0, *((_QWORD *)v20 - 2), *((_QWORD *)v20 - 1), (__int64)&v180);
      ++v17;
      sub_66C50((__int64)&v181);
      sub_66C50((__int64)&v178);
      v18 = a1[1];
    }
    while ( v17 < v18 );
LABEL_22:
    dest = nullptr;
    v162 = 0;
    if ( v18 )
    {
      v134 = (__m128i *)qvector_reserve((__int64)&dest, 0, v18, 16);
      v135 = *((_QWORD *)&v162 + 1);
      *((_QWORD *)&v162 + 1) = 0;
      v136 = (const __m128i *)dest;
      v137 = v162 - 1;
      if ( (__int64)v162 - 1 >= 0 )
      {
        v138 = v134;
        do
        {
          v139 = _mm_loadu_si128(v136);
          ++v138;
          ++v136;
          v138[-1] = v139;
          v56 = v137-- == 0;
        }
        while ( !v56 );
        v136 = (const __m128i *)dest;
      }
      qfree((__int64)v136);
      dest = v134;
      *((_QWORD *)&v162 + 1) = v135;
    }
  }
  else
  {
    dest = nullptr;
    v162 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_383060(1961);
    goto LABEL_181;
  }
  v22 = (__int64 *)v186[0];
  if ( v186[0] == v186[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v162 = 0;
    v23 = v22[1];
    v24 = *v22;
    v25 = v23 << 6;
    v145 = 3 * *v22;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v27 = *(_QWORD *)(a1[3 * v24 + 2] + (v23 << 6) + 56);
      if ( v27 < 0 )
      {
        if ( !under_debugger )
          sub_383060(2170);
        goto LABEL_181;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v27) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v28 = v162;
        if ( *((_QWORD *)&v162 + 1) < (unsigned __int64)(v162 + 1) )
        {
          v151 = *((void **)&v162 + 1);
          v29 = (__m128i *)qvector_reserve((__int64)&dest, 0, v162 + 1, 16);
          v51 = *((void **)&v162 + 1);
          v52 = (const __m128i *)dest;
          *((_QWORD *)&v162 + 1) = v151;
          v53 = v162 - 1;
          if ( (__int64)v162 - 1 >= 0 )
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
          v152 = v51;
          qfree((__int64)v52);
          v28 = v162;
          dest = v29;
          *((_QWORD *)&v162 + 1) = v152;
        }
        else
        {
          v29 = (__m128i *)dest;
        }
        m128i_i8 = v29[v28].m128i_i8;
        *(_QWORD *)m128i_i8 = v24;
        *((_QWORD *)m128i_i8 + 1) = v23;
        *(_QWORD *)&v162 = v162 + 1;
      }
      v31 = (const __m128i *)v186[0];
      v32 = *(_QWORD *)v186[0];
      v33 = *((_QWORD *)v186[0] + 1);
      v177 = v188;
      v179 = 0u;
      v178 = 0;
      if ( !v190.m128i_i64[0] )
      {
        v34 = (__m128i *)v186[1];
        if ( (char *)v186[1] - (char *)v186[0] <= 16 )
          goto LABEL_40;
        v47 = v188;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0])(&v178, &v189, 2);
      v34 = (__m128i *)v186[1];
      v31 = (const __m128i *)v186[0];
      v35 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0];
      v179 = _mm_load_si128(&v190);
      if ( (char *)v186[1] - (char *)v186[0] > 16 )
      {
        v47 = v177;
        v185 = 0u;
        v183 = v177;
        v184 = 0;
        if ( v190.m128i_i64[0] )
        {
          v153 = (__m128i *)v186[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0])(&v184, &v178, 2);
          v57 = _mm_loadu_si128(&v179);
          v182 = 0u;
          v34 = v153;
          v185 = v57;
          v180 = v183;
          v181 = 0;
          if ( v179.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v179.m128i_i64[0])(&v181, &v184, 2);
            v58 = _mm_loadu_si128(&v185);
            v34 = v153;
            v182 = v58;
            if ( v58.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v58.m128i_i64[0])(&v184, &v184, 3);
              v34 = v153;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v180 = v47;
        v182 = 0u;
        v181 = 0;
LABEL_64:
        v48 = v34[-1].m128i_u64[0];
        v49 = v34 - 1;
        v50 = v34[-1].m128i_u64[1];
        v34[-1] = _mm_loadu_si128(v31);
        v185 = 0u;
        v183 = v180;
        v184 = 0;
        if ( v182.m128i_i64[0] )
        {
          v159 = v50;
          v156 = v48;
          v150 = v34 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v182.m128i_i64[0])(&v184, &v181, 2);
          v50 = v159;
          v48 = v156;
          v49 = v150;
          v185 = _mm_loadu_si128(&v182);
        }
        sub_2DA0A0((__int64)v31, 0, v49 - v31, v48, v50, (__int64)&v183);
        if ( v185.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v185.m128i_i64[0])(&v184, &v184, 3);
        if ( v182.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v182.m128i_i64[0])(&v181, &v181, 3);
        v35 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v179.m128i_i64[0];
      }
      if ( v35 )
        v35(&v178, &v178, 3);
LABEL_40:
      v36 = (__m128i *)v186[1];
      v37 = v33 + 1;
      v38 = (const __m128i *)((char *)v186[1] - 16);
      v186[1] = (char *)v186[1] - 16;
      if ( v37 >= a1[3 * v32 + 3] )
      {
        v26 = (__int64 *)v186[0];
        if ( v186[0] == v38 )
          break;
        goto LABEL_28;
      }
      if ( v38 == (const __m128i *)v187 )
      {
        v59 = ((char *)v38 - (char *)v186[0]) >> 4;
        if ( v59 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v60 = 1;
        if ( v59 )
          v60 = ((char *)v38 - (char *)v186[0]) >> 4;
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
        v160 = v38;
        v157 = (char *)v38 - (char *)v186[0];
        v154 = (const __m128i *)v186[0];
        v63 = (__m128i *)operator new(v62 * 16);
        v64 = (__m128i *)v154;
        *(__m128i *)((char *)v63 + v157) = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v37);
        if ( v160 == v154 )
        {
          v68 = (char *)v63;
        }
        else
        {
          v65 = v63;
          v66 = v154;
          do
          {
            v67 = _mm_loadu_si128(v66++);
            ++v65;
            v65[-1] = v67;
          }
          while ( v160 != v66 );
          v68 = &v63->m128i_i8[(char *)v160 - (char *)v154];
        }
        v69 = v68 + 16;
        if ( v154 )
        {
          v155 = (char *)v63;
          operator delete(v64, v187 - (char *)v64);
          v63 = (__m128i *)v155;
        }
        v186[0] = v63;
        v186[1] = v69;
        v187 = v63[v62].m128i_i8;
      }
      else
      {
        v36[-1] = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v37);
        v186[1] = (char *)v186[1] + 16;
      }
      v39 = v188;
      v179 = 0u;
      v177 = v188;
      v178 = 0;
      if ( !v190.m128i_i64[0] )
      {
        v41 = v186[1];
        v42 = v186[0];
LABEL_81:
        v180 = v39;
        v182 = 0u;
        v181 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0])(&v178, &v189, 2);
      v39 = v177;
      v40 = _mm_load_si128(&v190);
      v185 = 0u;
      v41 = v186[1];
      v179 = v40;
      v42 = v186[0];
      v183 = v177;
      v184 = 0;
      if ( !v190.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0])(&v184, &v178, 2);
      v43 = _mm_loadu_si128(&v179);
      v182 = 0u;
      v185 = v43;
      v180 = v183;
      v181 = 0;
      if ( v179.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v179.m128i_i64[0])(&v181, &v184, 2);
        v44 = _mm_loadu_si128(&v185);
        v182 = v44;
        if ( v44.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v44.m128i_i64[0])(&v184, &v184, 3);
      }
LABEL_48:
      sub_2D9F50((__int64)v42, ((v41 - v42) >> 4) - 1, 0, *((_QWORD *)v41 - 2), *((_QWORD *)v41 - 1), (__int64)&v180);
      if ( v182.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v182.m128i_i64[0])(&v181, &v181, 3);
      if ( v179.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v179.m128i_i64[0])(&v178, &v178, 3);
      v26 = (__int64 *)v186[0];
      if ( v186[0] == v186[1] )
        break;
LABEL_28:
      v24 = *v26;
      v23 = v26[1];
      if ( !v175 )
        std::__throw_bad_function_call();
    }
    while ( !v176(v174, v173[3 * *v26 + 2] + (v23 << 6), v25 + v173[v145 + 2]) );
    if ( a3 )
    {
      v98 = a1[12];
      LODWORD(v165) = 0;
      sub_2CDC90(a1 + 11, (int *)&v165);
      v99 = (__int64 *)dest;
      v100 = (__int64 *)((char *)dest + 16 * v162);
      if ( dest == v100 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v99 + 2] + (v99[1] << 6) + 56) = v98;
        v101 = (_DWORD *)(4 * v98 + a1[11]);
        v102 = 1 << *v99;
        if ( (*v101 & v102) != 0 )
          break;
        v99 += 2;
        *v101 |= v102;
        if ( v100 == v99 )
          goto LABEL_55;
      }
      switch_dbctx();
      v104 = 0;
      v105 = 2 * *v99;
      v106 = a1[3 * *v99 + 3];
      if ( v106 )
      {
        v141 = *v99;
        v140 = v106 << 6;
        v114 = qalloc_or_throw(v106 << 6, (__int64)v100, *v99, v103);
        v104 = v114;
        v115 = 0;
        v116 = v114 + v140;
        do
        {
          v114 += 64;
          v117 = v115 + a1[v141 + 2 + v105];
          v115 += 64;
          v118 = *(_DWORD *)(v117 + 24);
          *(__m128i *)(v114 - 56) = _mm_loadu_si128((const __m128i *)(v117 + 8));
          v119 = _mm_loadu_si128((const __m128i *)(v117 + 32));
          *(_DWORD *)(v114 - 40) = v118;
          v120 = *(_DWORD *)(v117 + 48);
          *(__m128i *)(v114 - 32) = v119;
          *(_DWORD *)(v114 - 16) = v120;
          v121 = *(_QWORD *)(v117 + 56);
          *(_QWORD *)(v114 - 64) = off_4E2C10;
          *(_QWORD *)(v114 - 8) = v121;
        }
        while ( v114 != v116 );
      }
      v107 = (char *)dest;
      v108 = (char *)dest + 16 * v162;
      if ( v108 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v107 == *v99 )
          {
            v109 = *((_QWORD *)v107 + 1);
            v110 = v99[1];
            if ( v109 != v110 && *(_QWORD *)(v104 + (v109 << 6) + 56) == v98 )
              break;
          }
          v107 += 16;
          if ( v108 == v107 )
            goto LABEL_151;
        }
        sub_81980((__int64)&v165, (const char *)&unk_418793);
        v111 = s1;
        if ( *((_QWORD *)&v165 + 1) )
          v111 = (const char *)v165;
        v112 = *((_QWORD *)v107 + 1);
        sub_81980((__int64)&v163, (const char *)&unk_418793);
        v113 = s1;
        if ( v164 )
          v113 = (const char *)v163;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v99, v113, v112, v111, v110);
        if ( v163 )
        {
          v164 = 0;
          qfree(v163);
        }
        if ( (_QWORD)v165 )
        {
          *((_QWORD *)&v165 + 1) = 0;
          qfree(v165);
        }
      }
LABEL_151:
      if ( !under_debugger )
        sub_383060(2171);
LABEL_181:
      BUG();
    }
    v45 = v162;
    if ( (unsigned __int64)v162 <= 1 )
      goto LABEL_55;
    v70 = (__int64 *)dest;
    DWORD2(v165) = 0;
    v167 = (__int128 *)((char *)&v165 + 8);
    v166 = nullptr;
    v168 = (char *)&v165 + 8;
    v169 = 0;
    v146 = (char *)dest + 16 * v162;
    if ( v146 != dest )
    {
      v71 = (char *)dest;
      do
      {
        v163 = *(_QWORD *)(a1[3 * *(_QWORD *)v71 + 2] + (*((_QWORD *)v71 + 1) << 6) + 56LL);
        v72 = sub_2CDD40(&v165, (unsigned __int64 *)&v163);
        v73 = *(_QWORD *)v71;
        v71 += 16;
        *(_DWORD *)v72 |= 1 << v73;
      }
      while ( v146 != v71 );
      if ( v167 != (__int128 *)((char *)&v165 + 8) )
      {
        v74 = (__int64)v167;
        do
        {
          v75 = *(_DWORD *)(v74 + 40);
          v76 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v74 + 32));
          v74 = std::_Rb_tree_increment();
          if ( v76 != v75 )
          {
            v77 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v77, 0x30u);
            --v169;
          }
        }
        while ( (__int128 *)v74 != (__int128 *)((char *)&v165 + 8) );
      }
      v45 = v162;
      v70 = (__int64 *)dest;
      v78 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v162 != dest )
      {
        do
        {
          while ( 1 )
          {
            v80 = v78 + 2;
            if ( (_QWORD *)((char *)&v165 + 8) == sub_2AE200(
                                                    (__int64)&v165,
                                                    *(_QWORD *)(a1[3 * *v78 + 2] + (v78[1] << 6) + 56)) )
              break;
            v45 = v162;
            v78 += 2;
            if ( v80 == &v70[2 * (_QWORD)v162] )
              goto LABEL_111;
          }
          v81 = v79 - (_QWORD)v78;
          if ( (v81 >> 4) - 2 >= 0 )
          {
            memmove(v78, v80, v81 - 16);
            v70 = (__int64 *)dest;
          }
          *(_QWORD *)&v162 = v162 - 1;
          v45 = v162;
        }
        while ( v78 != &v70[2 * (_QWORD)v162] );
      }
      goto LABEL_111;
    }
    while ( 2 )
    {
      v82 = 16 * v45;
      v83 = *v70;
      v84 = v70[1];
      v85 = v70;
      if ( (v82 >> 4) - 2 >= 0 )
      {
        memmove(v70, v70 + 2, v82 - 16);
        v70 = (__int64 *)dest;
        v85 = (__int64 *)dest;
      }
      v86 = a1[1];
      v45 = v162 - 1;
      v87 = *(_QWORD *)(a1[3 * v83 + 2] + (v84 << 6) + 56);
      *(_QWORD *)&v162 = v162 - 1;
      if ( v86 )
      {
        v88 = 0;
        v89 = *(_DWORD *)(a1[11] + 4 * v87);
        do
        {
          v90 = -1;
          if ( (v89 & (1 << v88)) != 0 )
            v90 = v87;
          (&v183)[v88++] = (_QWORD *)v90;
        }
        while ( v88 != v86 );
      }
      if ( 16 * v45 )
      {
        do
        {
          v92 = *v85;
          v93 = a1[3 * *v85 + 2] + (v85[1] << 6);
          v94 = *(_QWORD *)(v93 + 56);
          if ( (&v183)[*v85] == (_QWORD *)-1LL )
          {
            v95 = a1[11];
            (&v183)[v92] = (_QWORD *)v94;
            *(_DWORD *)(v95 + 4 * v94) &= ~(1 << v92);
            if ( !*(_DWORD *)(a1[11] + 4 * v94) )
              ++a1[14];
            *(_QWORD *)(v93 + 56) = v87;
            *(_DWORD *)(4 * v87 + a1[11]) |= 1 << *v85;
            v96 = *(_QWORD *)(v93 + 56);
            v91 = v85 + 2;
            v70 = (__int64 *)dest;
            v45 = v162;
            if ( v87 == v96 )
            {
LABEL_128:
              if ( (((char *)&v70[2 * v45] - (char *)v85) >> 4) - 2 >= 0 )
              {
                v97 = (__int64 *)memmove(v85, v91, (char *)&v70[2 * v45] - (char *)v85 - 16);
                v70 = (__int64 *)dest;
                v85 = v97;
                v45 = v162;
              }
              *(_QWORD *)&v162 = --v45;
              continue;
            }
          }
          else
          {
            v45 = v162;
            v91 = v85 + 2;
            if ( v87 == v94 )
              goto LABEL_128;
          }
          v85 = (__int64 *)v91;
        }
        while ( v85 != &v70[2 * v45] );
      }
LABEL_111:
      if ( v45 )
        continue;
      break;
    }
    sub_2AE260((void **)v166);
LABEL_55:
    v22 = (__int64 *)v186[0];
  }
  while ( v186[1] != v186[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v162 = 0;
    qfree((__int64)dest);
  }
  sub_66C50((__int64)&v189);
  if ( v186[0] )
    operator delete(v186[0], v187 - (char *)v186[0]);
  sub_66C50((__int64)v174);
  sub_66C50((__int64)v172);
  sub_66C50((__int64)v170);
  return v191 - __readfsqword(0x28u);
}
