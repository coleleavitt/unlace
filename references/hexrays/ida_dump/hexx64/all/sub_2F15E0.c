unsigned __int64 __fastcall sub_2F15E0(_QWORD *a1, const __m128i *a2, char a3)
{
  unsigned __int64 v4; // r13
  __int64 *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __m128i *v10; // rbp
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
  __int64 v26; // r12
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __m128i *v30; // r15
  char *m128i_i8; // rax
  const __m128i *v32; // r15
  unsigned __int64 v33; // r14
  __int64 v34; // r13
  __m128i *v35; // rcx
  void (__fastcall *v36)(__m128i *, __m128i *, __int64); // rax
  __m128i *v37; // rax
  unsigned __int64 v38; // r13
  const __m128i *v39; // rdx
  _QWORD *v40; // rax
  __m128i v41; // xmm0
  _BYTE *v42; // r14
  _BYTE *v43; // r13
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __int64 v46; // rax
  _QWORD *v48; // rdx
  unsigned __int64 v49; // r10
  __m128i *v50; // r9
  unsigned __int64 v51; // r8
  void *v52; // rcx
  const __m128i *v53; // rdi
  __int64 v54; // rax
  __m128i *v55; // rdx
  __m128i v56; // xmm0
  bool v57; // cf
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  __int64 v60; // r15
  __int64 v61; // rax
  unsigned __int64 v62; // r15
  unsigned __int64 v63; // r15
  __m128i *v64; // rax
  __m128i *v65; // rcx
  __m128i *v66; // rdi
  const __m128i *v67; // rsi
  __m128i v68; // xmm0
  char *v69; // r13
  void *v70; // r13
  __int64 *v71; // r9
  char *v72; // r14
  _QWORD *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r12
  __int64 v76; // rbp
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
  __int64 v89; // r13
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
  __int64 v105; // rbp
  __int64 v106; // r12
  __int64 v107; // rax
  char *v108; // rbx
  char *v109; // rdx
  __int64 v110; // rax
  __int64 v111; // r12
  const char *v112; // r14
  __int64 v113; // rbx
  const char *v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rsi
  __int64 v118; // rdx
  int v119; // r9d
  __m128i v120; // xmm0
  int v121; // r9d
  __int64 v122; // rdx
  signed __int64 v123; // rax
  signed __int64 v124; // rcx
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // r13
  char *v127; // rax
  __m128i *v128; // rdx
  char *v129; // rcx
  char *v130; // rsi
  char *v131; // rsi
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
  __int64 v142; // [rsp+8h] [rbp-260h]
  const __m128i *v144; // [rsp+18h] [rbp-250h]
  void *v145; // [rsp+18h] [rbp-250h]
  __int64 v146; // [rsp+18h] [rbp-250h]
  char *v147; // [rsp+18h] [rbp-250h]
  const __m128i *v148; // [rsp+18h] [rbp-250h]
  char *v149; // [rsp+18h] [rbp-250h]
  __m128i *v151; // [rsp+30h] [rbp-238h]
  void *v152; // [rsp+30h] [rbp-238h]
  void *v153; // [rsp+30h] [rbp-238h]
  __m128i *v154; // [rsp+30h] [rbp-238h]
  const __m128i *v155; // [rsp+30h] [rbp-238h]
  char *v156; // [rsp+30h] [rbp-238h]
  __m128i *v157; // [rsp+30h] [rbp-238h]
  unsigned __int64 v158; // [rsp+38h] [rbp-230h]
  signed __int64 v159; // [rsp+38h] [rbp-230h]
  signed __int64 v160; // [rsp+38h] [rbp-230h]
  unsigned __int64 v161; // [rsp+40h] [rbp-228h]
  const __m128i *v162; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v164; // [rsp+68h] [rbp-200h]
  const char *v165; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v166; // [rsp+88h] [rbp-1E0h]
  __int128 v167; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v168; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v169; // [rsp+B8h] [rbp-1B0h]
  char *v170; // [rsp+C0h] [rbp-1A8h]
  __int64 v171; // [rsp+C8h] [rbp-1A0h]
  __m128i v172[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v173; // [rsp+F0h] [rbp-178h]
  __m128i v174[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v175; // [rsp+120h] [rbp-148h]
  _BYTE v176[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v177; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v178)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v179; // [rsp+150h] [rbp-118h] BYREF
  __m128i v180; // [rsp+158h] [rbp-110h] BYREF
  __m128i v181; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v182; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v183; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v184; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v185; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v186; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v187; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v188[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *v189; // [rsp+1F0h] [rbp-78h]
  _QWORD *v190; // [rsp+1F8h] [rbp-70h]
  __m128i v191; // [rsp+200h] [rbp-68h] BYREF
  __m128i v192; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v193; // [rsp+228h] [rbp-40h]

  v193 = __readfsqword(0x28u);
  sub_2CE160((__int64)v172, a2);
  v173 = a1;
  sub_2CE160((__int64)v174, a2);
  v175 = a1;
  sub_2CE160((__int64)v176, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx(*(int *)(*a1 + 4 * v4 + 16));
    sub_2CE160((__int64)&v179, v172);
    v6 = *v5;
    v7 = v5[1] << 6;
    v144 = (const __m128i *)(*v5 + v7);
    sub_2CE160((__int64)&v182, (const __m128i *)&v179);
    sub_2CE160((__int64)v188, (const __m128i *)&v182);
    sub_2CE160((__int64)&v185, (const __m128i *)v188);
    sub_66C50((__int64)v188);
    if ( v144 != (const __m128i *)v6 )
    {
      sub_2CE160((__int64)v188, (const __m128i *)&v185);
      v8 = v7 >> 6;
      v9 = -2;
      if ( v8 )
      {
        _BitScanReverse64(&v8, v8);
        v9 = 2LL * (int)v8;
      }
      sub_2F11D0(v6, v144, v9, (const __m128i *)v188);
      sub_66C50((__int64)v188);
      sub_2CE160((__int64)v188, (const __m128i *)&v185);
      sub_2DEA30(v6, (__int64)v144, (const __m128i *)v188);
      sub_66C50((__int64)v188);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v185);
    sub_66C50((__int64)&v182);
    sub_66C50((__int64)&v179);
  }
  v168 = nullptr;
  v189 = nullptr;
  v190 = v173;
  v167 = 0;
  *(_OWORD *)v188 = 0;
  sub_2CE160((__int64)&v191, v174);
  v10 = &v180;
  v179 = v190;
  sub_2CE160((__int64)&v180, &v191);
  v11 = v188[1];
  v12 = v188[0];
  v185 = v179;
  sub_2CE160((__int64)&v186, &v180);
  v182 = v185;
  sub_2CE160((__int64)&v183, &v186);
  v13 = v11 - v12;
  sub_66C50((__int64)&v186);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v187 = 0u;
      v186 = 0;
      v185 = v182;
      if ( v184.m128i_i64[0] )
      {
        v145 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v184.m128i_i64[0])(&v186, &v183, 2);
        v17 = (unsigned __int64)v145;
        v187 = _mm_loadu_si128(&v184);
      }
      sub_2DABD0((__int64)v12, i, v14, v16, v17, (__int64)&v185);
      if ( v187.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(&v186, &v186, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_66C50((__int64)&v183);
  sub_66C50((__int64)&v180);
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
      v20 = (const __m128i *)v188[1];
      if ( v188[1] == v189 )
      {
        v123 = ((char *)v188[1] - (char *)v188[0]) >> 4;
        if ( v123 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v124 = 1;
        if ( v123 )
          v124 = ((char *)v188[1] - (char *)v188[0]) >> 4;
        v57 = __CFADD__(v124, v123);
        v125 = v124 + v123;
        if ( v57 )
        {
          v126 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v125 > 0x7FFFFFFFFFFFFFFLL )
            v125 = 0x7FFFFFFFFFFFFFFLL;
          v126 = 16 * v125;
        }
        v160 = (char *)v188[1] - (char *)v188[0];
        v148 = (const __m128i *)v188[0];
        v127 = (char *)operator new(v126);
        v128 = (__m128i *)v148;
        v129 = v127;
        v130 = &v127[v160];
        *(_QWORD *)v130 = v18;
        *((_QWORD *)v130 + 1) = 0;
        if ( v20 != v148 )
        {
          v131 = v127;
          v132 = v148;
          v127 += (char *)v20 - (char *)v148;
          do
          {
            v133 = _mm_loadu_si128(v132);
            v131 += 16;
            ++v132;
            *((__m128i *)v131 - 1) = v133;
          }
          while ( v127 != v131 );
        }
        v134 = v127 + 16;
        if ( v148 )
        {
          v149 = v129;
          operator delete(v128, v189 - (char *)v128);
          v129 = v149;
        }
        v188[0] = v129;
        v188[1] = v134;
        v189 = &v129[v126];
      }
      else
      {
        *(_QWORD *)v188[1] = v18;
        v20->m128i_i64[1] = 0;
        v188[1] = (char *)v188[1] + 16;
      }
      v179 = v190;
      sub_2CE160((__int64)&v180, &v191);
      v21 = v188[1];
      v22 = v188[0];
      v185 = v179;
      sub_2CE160((__int64)&v186, &v180);
      v182 = v185;
      sub_2CE160((__int64)&v183, &v186);
      sub_66C50((__int64)&v186);
      sub_2DAA80((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v182);
      ++v18;
      sub_66C50((__int64)&v183);
      sub_66C50((__int64)&v180);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v164 = 0;
    if ( v19 )
    {
      v135 = (__m128i *)qvector_reserve(&dest, 0, v19, 16);
      v136 = *((_QWORD *)&v164 + 1);
      *((_QWORD *)&v164 + 1) = 0;
      v137 = (const __m128i *)dest;
      v138 = v164 - 1;
      if ( (__int64)v164 - 1 >= 0 )
      {
        v139 = v135;
        do
        {
          v140 = _mm_loadu_si128(v137);
          ++v139;
          ++v137;
          v139[-1] = v140;
          v57 = v138-- == 0;
        }
        while ( !v57 );
        v137 = (const __m128i *)dest;
      }
      qfree(v137);
      dest = v135;
      *((_QWORD *)&v164 + 1) = v136;
    }
  }
  else
  {
    dest = nullptr;
    v164 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_383060(1961);
    goto LABEL_182;
  }
  v23 = (__int64 *)v188[0];
  if ( v188[0] == v188[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v164 = 0;
    v24 = v23[1];
    v25 = *v23;
    v26 = v24 << 6;
    v146 = 3 * *v23;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v28 = *(_QWORD *)(a1[3 * v25 + 2] + (v24 << 6) + 56);
      if ( v28 < 0 )
      {
        if ( !under_debugger )
          sub_383060(2170);
        goto LABEL_182;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v28) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v29 = v164;
        if ( *((_QWORD *)&v164 + 1) < (unsigned __int64)(v164 + 1) )
        {
          v152 = *((void **)&v164 + 1);
          v30 = (__m128i *)qvector_reserve(&dest, 0, v164 + 1, 16);
          v52 = *((void **)&v164 + 1);
          v53 = (const __m128i *)dest;
          *((_QWORD *)&v164 + 1) = v152;
          v54 = v164 - 1;
          if ( (__int64)v164 - 1 >= 0 )
          {
            v55 = v30;
            do
            {
              v56 = _mm_loadu_si128(v53);
              ++v55;
              ++v53;
              v55[-1] = v56;
              v57 = v54-- == 0;
            }
            while ( !v57 );
            v53 = (const __m128i *)dest;
          }
          v153 = v52;
          qfree(v53);
          v29 = v164;
          dest = v30;
          *((_QWORD *)&v164 + 1) = v153;
        }
        else
        {
          v30 = (__m128i *)dest;
        }
        m128i_i8 = v30[v29].m128i_i8;
        *(_QWORD *)m128i_i8 = v25;
        *((_QWORD *)m128i_i8 + 1) = v24;
        *(_QWORD *)&v164 = v164 + 1;
      }
      v32 = (const __m128i *)v188[0];
      v33 = *(_QWORD *)v188[0];
      v34 = *((_QWORD *)v188[0] + 1);
      v179 = v190;
      v181 = 0u;
      v180 = 0;
      if ( !v192.m128i_i64[0] )
      {
        v35 = (__m128i *)v188[1];
        if ( (char *)v188[1] - (char *)v188[0] <= 16 )
          goto LABEL_40;
        v48 = v190;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(v10, &v191, 2);
      v35 = (__m128i *)v188[1];
      v32 = (const __m128i *)v188[0];
      v36 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0];
      v181 = _mm_load_si128(&v192);
      if ( (char *)v188[1] - (char *)v188[0] > 16 )
      {
        v48 = v179;
        v187 = 0u;
        v185 = v179;
        v186 = 0;
        if ( v192.m128i_i64[0] )
        {
          v154 = (__m128i *)v188[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v186, v10, 2);
          v58 = _mm_loadu_si128(&v181);
          v184 = 0u;
          v35 = v154;
          v187 = v58;
          v182 = v185;
          v183 = 0;
          if ( v181.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v181.m128i_i64[0])(&v183, &v186, 2);
            v59 = _mm_loadu_si128(&v187);
            v35 = v154;
            v184 = v59;
            if ( v59.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v59.m128i_i64[0])(&v186, &v186, 3);
              v35 = v154;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v182 = v48;
        v184 = 0u;
        v183 = 0;
LABEL_64:
        v49 = v35[-1].m128i_u64[0];
        v50 = v35 - 1;
        v51 = v35[-1].m128i_u64[1];
        v35[-1] = _mm_loadu_si128(v32);
        v187 = 0u;
        v185 = v182;
        v186 = 0;
        if ( v184.m128i_i64[0] )
        {
          v161 = v51;
          v158 = v49;
          v151 = v35 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v184.m128i_i64[0])(&v186, &v183, 2);
          v51 = v161;
          v49 = v158;
          v50 = v151;
          v187 = _mm_loadu_si128(&v184);
        }
        sub_2DABD0((__int64)v32, 0, v50 - v32, v49, v51, (__int64)&v185);
        if ( v187.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(&v186, &v186, 3);
        if ( v184.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v184.m128i_i64[0])(&v183, &v183, 3);
        v36 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v181.m128i_i64[0];
      }
      if ( v36 )
        v36(v10, v10, 3);
LABEL_40:
      v37 = (__m128i *)v188[1];
      v38 = v34 + 1;
      v39 = (const __m128i *)((char *)v188[1] - 16);
      v188[1] = (char *)v188[1] - 16;
      if ( v38 >= a1[3 * v33 + 3] )
      {
        v27 = (__int64 *)v188[0];
        if ( v188[0] == v39 )
          break;
        goto LABEL_28;
      }
      if ( v39 == (const __m128i *)v189 )
      {
        v60 = ((char *)v39 - (char *)v188[0]) >> 4;
        if ( v60 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v61 = 1;
        if ( v60 )
          v61 = ((char *)v39 - (char *)v188[0]) >> 4;
        v57 = __CFADD__(v61, v60);
        v62 = v61 + v60;
        if ( v57 )
        {
          v63 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v62 > 0x7FFFFFFFFFFFFFFLL )
            v62 = 0x7FFFFFFFFFFFFFFLL;
          v63 = v62;
        }
        v162 = v39;
        v159 = (char *)v39 - (char *)v188[0];
        v155 = (const __m128i *)v188[0];
        v64 = (__m128i *)operator new(v63 * 16);
        v65 = (__m128i *)v155;
        *(__m128i *)((char *)v64 + v159) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v38);
        if ( v162 == v155 )
        {
          v69 = (char *)v64;
        }
        else
        {
          v66 = v64;
          v67 = v155;
          do
          {
            v68 = _mm_loadu_si128(v67++);
            ++v66;
            v66[-1] = v68;
          }
          while ( v162 != v67 );
          v69 = &v64->m128i_i8[(char *)v162 - (char *)v155];
        }
        v70 = v69 + 16;
        if ( v155 )
        {
          v156 = (char *)v64;
          operator delete(v65, v189 - (char *)v65);
          v64 = (__m128i *)v156;
        }
        v188[0] = v64;
        v188[1] = v70;
        v189 = v64[v63].m128i_i8;
      }
      else
      {
        v37[-1] = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v38);
        v188[1] = (char *)v188[1] + 16;
      }
      v40 = v190;
      v181 = 0u;
      v179 = v190;
      v180 = 0;
      if ( !v192.m128i_i64[0] )
      {
        v42 = v188[1];
        v43 = v188[0];
LABEL_81:
        v182 = v40;
        v184 = 0u;
        v183 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(v10, &v191, 2);
      v40 = v179;
      v41 = _mm_load_si128(&v192);
      v187 = 0u;
      v42 = v188[1];
      v181 = v41;
      v43 = v188[0];
      v185 = v179;
      v186 = 0;
      if ( !v192.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v186, v10, 2);
      v44 = _mm_loadu_si128(&v181);
      v184 = 0u;
      v187 = v44;
      v182 = v185;
      v183 = 0;
      if ( v181.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v181.m128i_i64[0])(&v183, &v186, 2);
        v45 = _mm_loadu_si128(&v187);
        v184 = v45;
        if ( v45.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v45.m128i_i64[0])(&v186, &v186, 3);
      }
LABEL_48:
      sub_2DAA80((__int64)v43, ((v42 - v43) >> 4) - 1, 0, *((_QWORD *)v42 - 2), *((_QWORD *)v42 - 1), (__int64)&v182);
      if ( v184.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v184.m128i_i64[0])(&v183, &v183, 3);
      if ( v181.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v181.m128i_i64[0])(v10, v10, 3);
      v27 = (__int64 *)v188[0];
      if ( v188[0] == v188[1] )
        break;
LABEL_28:
      v25 = *v27;
      v24 = v27[1];
      if ( !v177 )
        std::__throw_bad_function_call();
    }
    while ( !v178(v176, v175[3 * *v27 + 2] + (v24 << 6), v26 + v175[v146 + 2]) );
    if ( a3 )
    {
      v100 = a1[12];
      LODWORD(v167) = 0;
      sub_2CDC90(a1 + 11, (int *)&v167);
      v101 = (char *)dest;
      v102 = (char *)dest + 16 * v164;
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
      v105 = 0;
      v106 = 2LL * *(_QWORD *)v101;
      v107 = a1[3 * *(_QWORD *)v101 + 3];
      if ( v107 )
      {
        v142 = *(_QWORD *)v101;
        v141 = v107 << 6;
        v115 = qalloc_or_throw(v107 << 6);
        v105 = v115;
        v116 = 0;
        v117 = v115 + v141;
        do
        {
          v115 += 64;
          v118 = v116 + a1[v142 + 2 + v106];
          v116 += 64;
          v119 = *(_DWORD *)(v118 + 24);
          *(__m128i *)(v115 - 56) = _mm_loadu_si128((const __m128i *)(v118 + 8));
          v120 = _mm_loadu_si128((const __m128i *)(v118 + 32));
          *(_DWORD *)(v115 - 40) = v119;
          v121 = *(_DWORD *)(v118 + 48);
          *(__m128i *)(v115 - 32) = v120;
          *(_DWORD *)(v115 - 16) = v121;
          v122 = *(_QWORD *)(v118 + 56);
          *(_QWORD *)(v115 - 64) = off_4E2C88;
          *(_QWORD *)(v115 - 8) = v122;
        }
        while ( v115 != v117 );
      }
      v108 = (char *)dest;
      v109 = (char *)dest + 16 * v164;
      if ( v109 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v108 == *(_QWORD *)v101 )
          {
            v110 = *((_QWORD *)v108 + 1);
            v111 = *((_QWORD *)v101 + 1);
            if ( v110 != v111 && *(_QWORD *)(v105 + (v110 << 6) + 56) == v100 )
              break;
          }
          v108 += 16;
          if ( v109 == v108 )
            goto LABEL_152;
        }
        sub_81980((__int64)&v167, (const char *)&unk_418793);
        v112 = s1;
        if ( *((_QWORD *)&v167 + 1) )
          v112 = (const char *)v167;
        v113 = *((_QWORD *)v108 + 1);
        sub_81980((__int64)&v165, (const char *)&unk_418793);
        v114 = s1;
        if ( v166 )
          v114 = v165;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *(_QWORD *)v101, v114, v113, v112, v111);
        if ( v165 )
        {
          v166 = 0;
          qfree(v165);
        }
        if ( (_QWORD)v167 )
        {
          *((_QWORD *)&v167 + 1) = 0;
          qfree(v167);
        }
      }
LABEL_152:
      if ( !under_debugger )
        sub_383060(2171);
LABEL_182:
      BUG();
    }
    v46 = v164;
    if ( (unsigned __int64)v164 <= 1 )
      goto LABEL_55;
    v71 = (__int64 *)dest;
    DWORD2(v167) = 0;
    v169 = (__int128 *)((char *)&v167 + 8);
    v168 = nullptr;
    v170 = (char *)&v167 + 8;
    v171 = 0;
    v147 = (char *)dest + 16 * v164;
    if ( v147 != dest )
    {
      v72 = (char *)dest;
      do
      {
        v165 = *(const char **)(a1[3 * *(_QWORD *)v72 + 2] + (*((_QWORD *)v72 + 1) << 6) + 56LL);
        v73 = sub_2CDD40(&v167, (unsigned __int64 *)&v165);
        v74 = *(_QWORD *)v72;
        v72 += 16;
        *(_DWORD *)v73 |= 1 << v74;
      }
      while ( v147 != v72 );
      if ( v169 != (__int128 *)((char *)&v167 + 8) )
      {
        v75 = (__int64)v169;
        v157 = v10;
        do
        {
          v76 = v75;
          v77 = *(_DWORD *)(v75 + 40);
          v78 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v75 + 32));
          v75 = std::_Rb_tree_increment(v75);
          if ( v78 != v77 )
          {
            v79 = (void *)std::_Rb_tree_rebalance_for_erase(v76, (char *)&v167 + 8);
            operator delete(v79, 0x30u);
            --v171;
          }
        }
        while ( (__int128 *)v75 != (__int128 *)((char *)&v167 + 8) );
        v10 = v157;
      }
      v46 = v164;
      v71 = (__int64 *)dest;
      v80 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v164 != dest )
      {
        do
        {
          while ( 1 )
          {
            v82 = v80 + 2;
            if ( (_QWORD *)((char *)&v167 + 8) == sub_2AE200(
                                                    (__int64)&v167,
                                                    *(_QWORD *)(a1[3 * *v80 + 2] + (v80[1] << 6) + 56)) )
              break;
            v46 = v164;
            v80 += 2;
            if ( v82 == &v71[2 * (_QWORD)v164] )
              goto LABEL_112;
          }
          v83 = v81 - (_QWORD)v80;
          if ( (v83 >> 4) - 2 >= 0 )
          {
            memmove(v80, v82, v83 - 16);
            v71 = (__int64 *)dest;
          }
          *(_QWORD *)&v164 = v164 - 1;
          v46 = v164;
        }
        while ( v80 != &v71[2 * (_QWORD)v164] );
      }
      goto LABEL_112;
    }
    while ( 2 )
    {
      v84 = 16 * v46;
      v85 = *v71;
      v86 = v71[1];
      v87 = v71;
      if ( (v84 >> 4) - 2 >= 0 )
      {
        memmove(v71, v71 + 2, v84 - 16);
        v71 = (__int64 *)dest;
        v87 = (__int64 *)dest;
      }
      v88 = a1[1];
      v46 = v164 - 1;
      v89 = *(_QWORD *)(a1[3 * v85 + 2] + (v86 << 6) + 56);
      *(_QWORD *)&v164 = v164 - 1;
      if ( v88 )
      {
        v90 = 0;
        v91 = *(_DWORD *)(a1[11] + 4 * v89);
        do
        {
          v92 = -1;
          if ( (v91 & (1 << v90)) != 0 )
            v92 = v89;
          (&v185)[v90++] = (_QWORD *)v92;
        }
        while ( v90 != v88 );
      }
      if ( 16 * v46 )
      {
        do
        {
          v94 = *v87;
          v95 = a1[3 * *v87 + 2] + (v87[1] << 6);
          v96 = *(_QWORD *)(v95 + 56);
          if ( (&v185)[*v87] == (_QWORD *)-1LL )
          {
            v97 = a1[11];
            (&v185)[v94] = (_QWORD *)v96;
            *(_DWORD *)(v97 + 4 * v96) &= ~(1 << v94);
            if ( !*(_DWORD *)(a1[11] + 4 * v96) )
              ++a1[14];
            *(_QWORD *)(v95 + 56) = v89;
            *(_DWORD *)(4 * v89 + a1[11]) |= 1 << *v87;
            v98 = *(_QWORD *)(v95 + 56);
            v93 = v87 + 2;
            v71 = (__int64 *)dest;
            v46 = v164;
            if ( v89 == v98 )
            {
LABEL_129:
              if ( (((char *)&v71[2 * v46] - (char *)v87) >> 4) - 2 >= 0 )
              {
                v99 = (__int64 *)memmove(v87, v93, (char *)&v71[2 * v46] - (char *)v87 - 16);
                v71 = (__int64 *)dest;
                v87 = v99;
                v46 = v164;
              }
              *(_QWORD *)&v164 = --v46;
              continue;
            }
          }
          else
          {
            v46 = v164;
            v93 = v87 + 2;
            if ( v89 == v96 )
              goto LABEL_129;
          }
          v87 = (__int64 *)v93;
        }
        while ( v87 != &v71[2 * v46] );
      }
LABEL_112:
      if ( v46 )
        continue;
      break;
    }
    sub_2AE260((void **)v168);
LABEL_55:
    v23 = (__int64 *)v188[0];
  }
  while ( v188[1] != v188[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v164 = 0;
    qfree(dest);
  }
  sub_66C50((__int64)&v191);
  if ( v188[0] )
    operator delete(v188[0], v189 - (char *)v188[0]);
  sub_66C50((__int64)v176);
  sub_66C50((__int64)v174);
  sub_66C50((__int64)v172);
  return v193 - __readfsqword(0x28u);
}
