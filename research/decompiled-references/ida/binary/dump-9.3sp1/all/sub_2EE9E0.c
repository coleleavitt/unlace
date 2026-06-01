unsigned __int64 __fastcall sub_2EE9E0(_QWORD *a1, const __m128i *a2, char a3)
{
  unsigned __int64 v4; // r13
  __int64 *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __m128i *v10; // r12
  _BYTE *v11; // r13
  _BYTE *v12; // r14
  __int64 v13; // r13
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
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i *v28; // r15
  char *m128i_i8; // rax
  const __m128i *v30; // r15
  unsigned __int64 v31; // r14
  __int64 v32; // r13
  __m128i *v33; // rcx
  void (__fastcall *v34)(__m128i *, __m128i *, __int64); // rax
  __m128i *v35; // rax
  unsigned __int64 v36; // r13
  const __m128i *v37; // rdx
  _QWORD *v38; // rax
  __m128i v39; // xmm0
  _BYTE *v40; // r14
  _BYTE *v41; // r13
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __int64 v44; // rax
  _QWORD *v46; // rdx
  unsigned __int64 v47; // r10
  __m128i *v48; // r9
  unsigned __int64 v49; // r8
  void *v50; // rcx
  const __m128i *v51; // rdi
  __int64 v52; // rax
  __m128i *v53; // rdx
  __m128i v54; // xmm0
  bool v55; // cf
  __m128i v56; // xmm0
  __m128i v57; // xmm0
  __int64 v58; // r15
  __int64 v59; // rax
  unsigned __int64 v60; // r15
  unsigned __int64 v61; // r15
  __m128i *v62; // rax
  __m128i *v63; // rcx
  __m128i *v64; // rdi
  const __m128i *v65; // rsi
  __m128i v66; // xmm0
  char *v67; // r13
  void *v68; // r13
  __int64 *v69; // r9
  char *v70; // r14
  char *v71; // r15
  _QWORD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r14
  int v75; // r12d
  int v76; // r15d
  void *v77; // rax
  __int64 *v78; // r14
  __int64 v79; // r10
  __int64 *v80; // rsi
  __int64 v81; // r10
  __int64 v82; // rax
  __int64 v83; // r14
  __int64 v84; // r13
  __int64 *v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // r14
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
  char *v100; // rsi
  _DWORD *v101; // rdi
  int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // rsi
  __int64 v105; // rbp
  __int64 v106; // r12
  char *v107; // rbx
  char *v108; // rdx
  __int64 v109; // rax
  __int64 v110; // r15
  const char *v111; // r14
  __int64 v112; // rbx
  const char *v113; // rdx
  __int64 v114; // r15
  __int64 v115; // rcx
  __int128 v116; // xmm0
  _QWORD *v117; // r10
  int v118; // eax
  __int64 v119; // rbx
  __int64 v120; // rax
  __int64 v121; // r8
  void *v122; // rax
  signed __int64 v123; // rax
  signed __int64 v124; // rcx
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // r13
  __int64 v127; // rax
  __m128i *v128; // rdx
  char *v129; // rcx
  unsigned __int64 *v130; // rsi
  __int64 v131; // rsi
  const __m128i *v132; // rdi
  __m128i v133; // xmm0
  void *v134; // r14
  __m128i *v135; // r13
  __int64 v136; // r14
  const __m128i *v137; // rdi
  __int64 v138; // rax
  __m128i *v139; // rdx
  __m128i v140; // xmm0
  __int64 v141; // [rsp+0h] [rbp-268h]
  size_t na; // [rsp+8h] [rbp-260h]
  __int64 nb; // [rsp+8h] [rbp-260h]
  unsigned __int64 v145; // [rsp+10h] [rbp-258h]
  __int64 v146; // [rsp+10h] [rbp-258h]
  void *v147; // [rsp+18h] [rbp-250h]
  __int64 v148; // [rsp+18h] [rbp-250h]
  __int64 v149; // [rsp+18h] [rbp-250h]
  void *v150; // [rsp+18h] [rbp-250h]
  const __m128i *v151; // [rsp+18h] [rbp-250h]
  char *v152; // [rsp+18h] [rbp-250h]
  __m128i *v154; // [rsp+30h] [rbp-238h]
  void *v155; // [rsp+30h] [rbp-238h]
  void *v156; // [rsp+30h] [rbp-238h]
  __m128i *v157; // [rsp+30h] [rbp-238h]
  const __m128i *v158; // [rsp+30h] [rbp-238h]
  char *v159; // [rsp+30h] [rbp-238h]
  __m128i *v160; // [rsp+30h] [rbp-238h]
  _QWORD *v161; // [rsp+30h] [rbp-238h]
  unsigned __int64 v162; // [rsp+38h] [rbp-230h]
  signed __int64 v163; // [rsp+38h] [rbp-230h]
  signed __int64 v164; // [rsp+38h] [rbp-230h]
  unsigned __int64 v165; // [rsp+40h] [rbp-228h]
  const __m128i *v166; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v168; // [rsp+68h] [rbp-200h]
  __int64 v169; // [rsp+80h] [rbp-1E8h] BYREF
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
  char *v193; // [rsp+1F0h] [rbp-78h]
  _QWORD *v194; // [rsp+1F8h] [rbp-70h]
  __m128i v195; // [rsp+200h] [rbp-68h] BYREF
  __m128i v196; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v197; // [rsp+228h] [rbp-40h]

  v197 = __readfsqword(0x28u);
  sub_2CE0D0((__int64)v176, a2);
  v177 = a1;
  sub_2CE0D0((__int64)v178, a2);
  v179 = a1;
  sub_2CE0D0((__int64)v180, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2CE0D0((__int64)&v183, v176);
    v6 = *v5;
    v7 = v5[1] << 6;
    v147 = (void *)(*v5 + v7);
    sub_2CE0D0((__int64)&v186, (const __m128i *)&v183);
    sub_2CE0D0((__int64)v192, (const __m128i *)&v186);
    sub_2CE0D0((__int64)&v189, (const __m128i *)v192);
    sub_66C50((__int64)v192);
    if ( v147 != (void *)v6 )
    {
      sub_2CE0D0((__int64)v192, (const __m128i *)&v189);
      v8 = v7 >> 6;
      v9 = -2;
      if ( v8 )
      {
        _BitScanReverse64(&v8, v8);
        v9 = 2LL * (int)v8;
      }
      sub_2EE420(v6, (__int64)v147, v9, (const __m128i *)v192);
      sub_66C50((__int64)v192);
      sub_2CE0D0((__int64)v192, (const __m128i *)&v189);
      sub_2DE410(v6, (__int64)v147, (const __m128i *)v192);
      sub_66C50((__int64)v192);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v189);
    sub_66C50((__int64)&v186);
    sub_66C50((__int64)&v183);
  }
  v172 = nullptr;
  v193 = nullptr;
  v194 = v177;
  v171 = 0;
  *(_OWORD *)v192 = 0;
  sub_2CE0D0((__int64)&v195, v178);
  v183 = v194;
  sub_2CE0D0((__int64)&v184, &v195);
  v10 = &v190;
  v11 = v192[1];
  v12 = v192[0];
  v189 = v183;
  sub_2CE0D0((__int64)&v190, &v184);
  v186 = v189;
  sub_2CE0D0((__int64)&v187, &v190);
  v13 = v11 - v12;
  sub_66C50((__int64)&v190);
  if ( v13 > 16 )
  {
    v148 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v15 = *(_QWORD *)&v12[16 * i];
      v16 = *(_QWORD *)&v12[16 * i + 8];
      v191 = 0u;
      v190 = 0;
      v189 = v186;
      if ( v188.m128i_i64[0] )
      {
        v145 = v16;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v188.m128i_i64[0])(&v190, &v187, 2);
        v16 = v145;
        v191 = _mm_loadu_si128(&v188);
      }
      sub_2DA820((__int64)v12, i, v148, v15, v16, (__int64)&v189);
      if ( v191.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v191.m128i_i64[0])(&v190, &v190, 3);
      if ( !i )
        break;
    }
  }
  v17 = 0;
  sub_66C50((__int64)&v187);
  sub_66C50((__int64)&v184);
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
      v19 = (const __m128i *)v192[1];
      if ( v192[1] == v193 )
      {
        v123 = ((char *)v192[1] - (char *)v192[0]) >> 4;
        if ( v123 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v124 = 1;
        if ( v123 )
          v124 = ((char *)v192[1] - (char *)v192[0]) >> 4;
        v55 = __CFADD__(v124, v123);
        v125 = v124 + v123;
        if ( v55 )
        {
          v126 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v125 > 0x7FFFFFFFFFFFFFFLL )
            v125 = 0x7FFFFFFFFFFFFFFLL;
          v126 = 16 * v125;
        }
        v164 = (char *)v192[1] - (char *)v192[0];
        v151 = (const __m128i *)v192[0];
        v127 = operator new(v126);
        v128 = (__m128i *)v151;
        v129 = (char *)v127;
        v130 = (unsigned __int64 *)(v127 + v164);
        *v130 = v17;
        v130[1] = 0;
        if ( v19 != v151 )
        {
          v131 = v127;
          v132 = v151;
          v127 += (char *)v19 - (char *)v151;
          do
          {
            v133 = _mm_loadu_si128(v132);
            v131 += 16;
            ++v132;
            *(__m128i *)(v131 - 16) = v133;
          }
          while ( v127 != v131 );
        }
        v134 = (void *)(v127 + 16);
        if ( v151 )
        {
          v152 = v129;
          operator delete(v128, v193 - (char *)v128);
          v129 = v152;
        }
        v192[0] = v129;
        v192[1] = v134;
        v193 = &v129[v126];
      }
      else
      {
        *(_QWORD *)v192[1] = v17;
        v19->m128i_i64[1] = 0;
        v192[1] = (char *)v192[1] + 16;
      }
      v183 = v194;
      sub_2CE0D0((__int64)&v184, &v195);
      v20 = v192[1];
      v21 = v192[0];
      v189 = v183;
      sub_2CE0D0((__int64)&v190, &v184);
      v186 = v189;
      sub_2CE0D0((__int64)&v187, &v190);
      sub_66C50((__int64)&v190);
      sub_2DA6D0((__int64)v21, ((v20 - v21) >> 4) - 1, 0, *((_QWORD *)v20 - 2), *((_QWORD *)v20 - 1), (__int64)&v186);
      ++v17;
      sub_66C50((__int64)&v187);
      sub_66C50((__int64)&v184);
      v18 = a1[1];
    }
    while ( v17 < v18 );
LABEL_22:
    dest = nullptr;
    v168 = 0;
    if ( v18 )
    {
      v135 = (__m128i *)qvector_reserve((__int64)&dest, 0, v18, 16);
      v136 = *((_QWORD *)&v168 + 1);
      *((_QWORD *)&v168 + 1) = 0;
      v137 = (const __m128i *)dest;
      v138 = v168 - 1;
      if ( (__int64)v168 - 1 >= 0 )
      {
        v139 = v135;
        do
        {
          v140 = _mm_loadu_si128(v137);
          ++v139;
          ++v137;
          v139[-1] = v140;
          v55 = v138-- == 0;
        }
        while ( !v55 );
        v137 = (const __m128i *)dest;
      }
      qfree((__int64)v137);
      dest = v135;
      *((_QWORD *)&v168 + 1) = v136;
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
      sub_383060(1961);
    goto LABEL_183;
  }
  v22 = (__int64 *)v192[0];
  if ( v192[0] == v192[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v168 = 0;
    v23 = v22[1];
    v24 = *v22;
    v146 = v23 << 6;
    v149 = 3 * *v22;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v26 = *(_QWORD *)(a1[3 * v24 + 2] + (v23 << 6) + 56);
      if ( v26 < 0 )
      {
        if ( !under_debugger )
          sub_383060(2170);
        goto LABEL_183;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v26) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v27 = v168;
        if ( *((_QWORD *)&v168 + 1) < (unsigned __int64)(v168 + 1) )
        {
          v155 = *((void **)&v168 + 1);
          v28 = (__m128i *)qvector_reserve((__int64)&dest, 0, v168 + 1, 16);
          v50 = *((void **)&v168 + 1);
          v51 = (const __m128i *)dest;
          *((_QWORD *)&v168 + 1) = v155;
          v52 = v168 - 1;
          if ( (__int64)v168 - 1 >= 0 )
          {
            v53 = v28;
            do
            {
              v54 = _mm_loadu_si128(v51);
              ++v53;
              ++v51;
              v53[-1] = v54;
              v55 = v52-- == 0;
            }
            while ( !v55 );
            v51 = (const __m128i *)dest;
          }
          v156 = v50;
          qfree((__int64)v51);
          v27 = v168;
          dest = v28;
          *((_QWORD *)&v168 + 1) = v156;
        }
        else
        {
          v28 = (__m128i *)dest;
        }
        m128i_i8 = v28[v27].m128i_i8;
        *(_QWORD *)m128i_i8 = v24;
        *((_QWORD *)m128i_i8 + 1) = v23;
        *(_QWORD *)&v168 = v168 + 1;
      }
      v30 = (const __m128i *)v192[0];
      v31 = *(_QWORD *)v192[0];
      v32 = *((_QWORD *)v192[0] + 1);
      v183 = v194;
      v185 = 0u;
      v184 = 0;
      if ( !v196.m128i_i64[0] )
      {
        v33 = (__m128i *)v192[1];
        if ( (char *)v192[1] - (char *)v192[0] <= 16 )
          goto LABEL_40;
        v46 = v194;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v196.m128i_i64[0])(&v184, &v195, 2);
      v33 = (__m128i *)v192[1];
      v30 = (const __m128i *)v192[0];
      v34 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v196.m128i_i64[0];
      v185 = _mm_load_si128(&v196);
      if ( (char *)v192[1] - (char *)v192[0] > 16 )
      {
        v46 = v183;
        v191 = 0u;
        v189 = v183;
        v190 = 0;
        if ( v196.m128i_i64[0] )
        {
          v157 = (__m128i *)v192[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v196.m128i_i64[0])(v10, &v184, 2);
          v56 = _mm_loadu_si128(&v185);
          v188 = 0u;
          v33 = v157;
          v191 = v56;
          v186 = v189;
          v187 = 0;
          if ( v185.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v185.m128i_i64[0])(&v187, v10, 2);
            v57 = _mm_loadu_si128(&v191);
            v33 = v157;
            v188 = v57;
            if ( v57.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v57.m128i_i64[0])(v10, v10, 3);
              v33 = v157;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v186 = v46;
        v188 = 0u;
        v187 = 0;
LABEL_64:
        v47 = v33[-1].m128i_u64[0];
        v48 = v33 - 1;
        v49 = v33[-1].m128i_u64[1];
        v33[-1] = _mm_loadu_si128(v30);
        v191 = 0u;
        v189 = v186;
        v190 = 0;
        if ( v188.m128i_i64[0] )
        {
          v165 = v49;
          v162 = v47;
          v154 = v33 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v188.m128i_i64[0])(v10, &v187, 2);
          v49 = v165;
          v47 = v162;
          v48 = v154;
          v191 = _mm_loadu_si128(&v188);
        }
        sub_2DA820((__int64)v30, 0, v48 - v30, v47, v49, (__int64)&v189);
        if ( v191.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v191.m128i_i64[0])(v10, v10, 3);
        if ( v188.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v188.m128i_i64[0])(&v187, &v187, 3);
        v34 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v185.m128i_i64[0];
      }
      if ( v34 )
        v34(&v184, &v184, 3);
LABEL_40:
      v35 = (__m128i *)v192[1];
      v36 = v32 + 1;
      v37 = (const __m128i *)((char *)v192[1] - 16);
      v192[1] = (char *)v192[1] - 16;
      if ( v36 >= a1[3 * v31 + 3] )
      {
        v25 = (__int64 *)v192[0];
        if ( v192[0] == v37 )
          break;
        goto LABEL_28;
      }
      if ( v37 == (const __m128i *)v193 )
      {
        v58 = ((char *)v37 - (char *)v192[0]) >> 4;
        if ( v58 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v59 = 1;
        if ( v58 )
          v59 = ((char *)v37 - (char *)v192[0]) >> 4;
        v55 = __CFADD__(v59, v58);
        v60 = v59 + v58;
        if ( v55 )
        {
          v61 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v60 > 0x7FFFFFFFFFFFFFFLL )
            v60 = 0x7FFFFFFFFFFFFFFLL;
          v61 = v60;
        }
        v166 = v37;
        v163 = (char *)v37 - (char *)v192[0];
        v158 = (const __m128i *)v192[0];
        v62 = (__m128i *)operator new(v61 * 16);
        v63 = (__m128i *)v158;
        *(__m128i *)((char *)v62 + v163) = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v36);
        if ( v166 == v158 )
        {
          v67 = (char *)v62;
        }
        else
        {
          v64 = v62;
          v65 = v158;
          do
          {
            v66 = _mm_loadu_si128(v65++);
            ++v64;
            v64[-1] = v66;
          }
          while ( v166 != v65 );
          v67 = &v62->m128i_i8[(char *)v166 - (char *)v158];
        }
        v68 = v67 + 16;
        if ( v158 )
        {
          v159 = (char *)v62;
          operator delete(v63, v193 - (char *)v63);
          v62 = (__m128i *)v159;
        }
        v192[0] = v62;
        v192[1] = v68;
        v193 = v62[v61].m128i_i8;
      }
      else
      {
        v35[-1] = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v36);
        v192[1] = (char *)v192[1] + 16;
      }
      v38 = v194;
      v185 = 0u;
      v183 = v194;
      v184 = 0;
      if ( !v196.m128i_i64[0] )
      {
        v40 = v192[1];
        v41 = v192[0];
LABEL_81:
        v186 = v38;
        v188 = 0u;
        v187 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v196.m128i_i64[0])(&v184, &v195, 2);
      v38 = v183;
      v39 = _mm_load_si128(&v196);
      v191 = 0u;
      v40 = v192[1];
      v185 = v39;
      v41 = v192[0];
      v189 = v183;
      v190 = 0;
      if ( !v196.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v196.m128i_i64[0])(v10, &v184, 2);
      v42 = _mm_loadu_si128(&v185);
      v188 = 0u;
      v191 = v42;
      v186 = v189;
      v187 = 0;
      if ( v185.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v185.m128i_i64[0])(&v187, v10, 2);
        v43 = _mm_loadu_si128(&v191);
        v188 = v43;
        if ( v43.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v43.m128i_i64[0])(v10, v10, 3);
      }
LABEL_48:
      sub_2DA6D0((__int64)v41, ((v40 - v41) >> 4) - 1, 0, *((_QWORD *)v40 - 2), *((_QWORD *)v40 - 1), (__int64)&v186);
      if ( v188.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v188.m128i_i64[0])(&v187, &v187, 3);
      if ( v185.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v185.m128i_i64[0])(&v184, &v184, 3);
      v25 = (__int64 *)v192[0];
      if ( v192[0] == v192[1] )
        break;
LABEL_28:
      v24 = *v25;
      v23 = v25[1];
      if ( !v181 )
        std::__throw_bad_function_call();
    }
    while ( !v182(v180, v179[3 * *v25 + 2] + (v23 << 6), v179[v149 + 2] + v146) );
    if ( a3 )
    {
      v98 = a1[12];
      LODWORD(v171) = 0;
      sub_2CDC90(a1 + 11, (int *)&v171);
      v99 = (__int64 *)dest;
      v100 = (char *)dest + 16 * v168;
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
        if ( v100 == (char *)v99 )
          goto LABEL_55;
      }
      switch_dbctx();
      v104 = *v99;
      v105 = 0;
      v106 = a1[3 * *v99 + 3];
      if ( v106 )
      {
        na = 2 * *v99;
        v105 = qalloc_or_throw(v106 << 6, v104, na, v103);
        v114 = v105;
        v115 = 0;
        v116 = 0;
        v117 = &a1[v104 + na];
        do
        {
          v119 = v117[2] + (v115 << 6);
          *(_QWORD *)v114 = off_4E13C0;
          v120 = *(_QWORD *)(v119 + 8);
          *(_QWORD *)(v114 + 16) = 0;
          *(_OWORD *)(v114 + 24) = v116;
          *(_QWORD *)(v114 + 8) = v120;
          v121 = *(_QWORD *)(v119 + 24);
          if ( v121 )
          {
            v161 = v117;
            v150 = (void *)v115;
            v141 = *(_QWORD *)(v119 + 24);
            nb = 4 * v121;
            v122 = (void *)qalloc_or_throw(4 * v121, v104, 4 * v121, v115);
            *(_QWORD *)(v114 + 16) = v122;
            *(_QWORD *)(v114 + 32) = v141;
            v104 = *(_QWORD *)(v119 + 16);
            memcpy(v122, (const void *)v104, nb);
            v116 = 0;
            v117 = v161;
            v115 = (__int64)v150;
            *(_QWORD *)(v114 + 24) = v141;
          }
          ++v115;
          v114 += 64;
          *(_QWORD *)(v114 - 24) = *(_QWORD *)(v119 + 40);
          v118 = *(_DWORD *)(v119 + 48);
          *(_QWORD *)(v114 - 64) = off_4E2C60;
          *(_DWORD *)(v114 - 16) = v118;
          *(_QWORD *)(v114 - 8) = *(_QWORD *)(v119 + 56);
        }
        while ( v106 != v115 );
      }
      v107 = (char *)dest;
      v108 = (char *)dest + 16 * v168;
      if ( v108 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v107 == *v99 )
          {
            v109 = *((_QWORD *)v107 + 1);
            v110 = v99[1];
            if ( v109 != v110 && *(_QWORD *)(v105 + (v109 << 6) + 56) == v98 )
              break;
          }
          v107 += 16;
          if ( v108 == v107 )
            goto LABEL_152;
        }
        sub_81980((__int64)&v171, (const char *)&unk_418793);
        v111 = s1;
        if ( *((_QWORD *)&v171 + 1) )
          v111 = (const char *)v171;
        v112 = *((_QWORD *)v107 + 1);
        sub_81980((__int64)&v169, (const char *)&unk_418793);
        v113 = s1;
        if ( v170 )
          v113 = (const char *)v169;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v99, v113, v112, v111, v110);
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
        sub_383060(2171);
LABEL_183:
      BUG();
    }
    v44 = v168;
    if ( (unsigned __int64)v168 <= 1 )
      goto LABEL_55;
    v69 = (__int64 *)dest;
    DWORD2(v171) = 0;
    v173 = (__int128 *)((char *)&v171 + 8);
    v70 = (char *)dest + 16 * v168;
    v172 = nullptr;
    v174 = (char *)&v171 + 8;
    v175 = 0;
    if ( v70 != dest )
    {
      v71 = (char *)dest;
      do
      {
        v169 = *(_QWORD *)(a1[3 * *(_QWORD *)v71 + 2] + (*((_QWORD *)v71 + 1) << 6) + 56LL);
        v72 = sub_2CDD40(&v171, (unsigned __int64 *)&v169);
        v73 = *(_QWORD *)v71;
        v71 += 16;
        *(_DWORD *)v72 |= 1 << v73;
      }
      while ( v70 != v71 );
      if ( v173 != (__int128 *)((char *)&v171 + 8) )
      {
        v74 = (__int64)v173;
        v160 = v10;
        do
        {
          v75 = *(_DWORD *)(v74 + 40);
          v76 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v74 + 32));
          v74 = std::_Rb_tree_increment();
          if ( v76 != v75 )
          {
            v77 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v77, 0x30u);
            --v175;
          }
        }
        while ( (__int128 *)v74 != (__int128 *)((char *)&v171 + 8) );
        v10 = v160;
      }
      v44 = v168;
      v69 = (__int64 *)dest;
      v78 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v168 != dest )
      {
        do
        {
          while ( 1 )
          {
            v80 = v78 + 2;
            if ( (_QWORD *)((char *)&v171 + 8) == sub_2AE200(
                                                    (__int64)&v171,
                                                    *(_QWORD *)(a1[3 * *v78 + 2] + (v78[1] << 6) + 56)) )
              break;
            v44 = v168;
            v78 += 2;
            if ( v80 == &v69[2 * (_QWORD)v168] )
              goto LABEL_112;
          }
          v81 = v79 - (_QWORD)v78;
          if ( (v81 >> 4) - 2 >= 0 )
          {
            memmove(v78, v80, v81 - 16);
            v69 = (__int64 *)dest;
          }
          *(_QWORD *)&v168 = v168 - 1;
          v44 = v168;
        }
        while ( v78 != &v69[2 * (_QWORD)v168] );
      }
      goto LABEL_112;
    }
    while ( 2 )
    {
      v82 = 16 * v44;
      v83 = *v69;
      v84 = v69[1];
      v85 = v69;
      if ( (v82 >> 4) - 2 >= 0 )
      {
        memmove(v69, v69 + 2, v82 - 16);
        v69 = (__int64 *)dest;
        v85 = (__int64 *)dest;
      }
      v86 = a1[1];
      v44 = v168 - 1;
      v87 = *(_QWORD *)(a1[3 * v83 + 2] + (v84 << 6) + 56);
      *(_QWORD *)&v168 = v168 - 1;
      if ( v86 )
      {
        v88 = 0;
        v89 = *(_DWORD *)(a1[11] + 4 * v87);
        do
        {
          v90 = -1;
          if ( (v89 & (1 << v88)) != 0 )
            v90 = v87;
          (&v189)[v88++] = (_QWORD *)v90;
        }
        while ( v88 != v86 );
      }
      if ( 16 * v44 )
      {
        do
        {
          v92 = *v85;
          v93 = a1[3 * *v85 + 2] + (v85[1] << 6);
          v94 = *(_QWORD *)(v93 + 56);
          if ( (&v189)[*v85] == (_QWORD *)-1LL )
          {
            v95 = a1[11];
            (&v189)[v92] = (_QWORD *)v94;
            *(_DWORD *)(v95 + 4 * v94) &= ~(1 << v92);
            if ( !*(_DWORD *)(a1[11] + 4 * v94) )
              ++a1[14];
            *(_QWORD *)(v93 + 56) = v87;
            *(_DWORD *)(4 * v87 + a1[11]) |= 1 << *v85;
            v96 = *(_QWORD *)(v93 + 56);
            v91 = v85 + 2;
            v69 = (__int64 *)dest;
            v44 = v168;
            if ( v87 == v96 )
            {
LABEL_129:
              if ( (((char *)&v69[2 * v44] - (char *)v85) >> 4) - 2 >= 0 )
              {
                v97 = (__int64 *)memmove(v85, v91, (char *)&v69[2 * v44] - (char *)v85 - 16);
                v69 = (__int64 *)dest;
                v85 = v97;
                v44 = v168;
              }
              *(_QWORD *)&v168 = --v44;
              continue;
            }
          }
          else
          {
            v44 = v168;
            v91 = v85 + 2;
            if ( v87 == v94 )
              goto LABEL_129;
          }
          v85 = (__int64 *)v91;
        }
        while ( v85 != &v69[2 * v44] );
      }
LABEL_112:
      if ( v44 )
        continue;
      break;
    }
    sub_2AE260((void **)v172);
LABEL_55:
    v22 = (__int64 *)v192[0];
  }
  while ( v192[1] != v192[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v168 = 0;
    qfree((__int64)dest);
  }
  sub_66C50((__int64)&v195);
  if ( v192[0] )
    operator delete(v192[0], v193 - (char *)v192[0]);
  sub_66C50((__int64)v180);
  sub_66C50((__int64)v178);
  sub_66C50((__int64)v176);
  return v197 - __readfsqword(0x28u);
}
