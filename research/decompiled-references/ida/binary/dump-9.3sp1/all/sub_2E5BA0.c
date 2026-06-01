unsigned __int64 __fastcall sub_2E5BA0(_QWORD *a1, const __m128i *a2, char a3)
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
  void *v100; // r8
  __int64 *v101; // r14
  __int64 *v102; // rdi
  __int64 v103; // rsi
  _DWORD *v104; // rdx
  int v105; // eax
  __int64 v106; // rbp
  void *v107; // r8
  __int64 v108; // r12
  char *v109; // rbx
  char *v110; // rcx
  __int64 v111; // rax
  __int64 v112; // r13
  const char *v113; // r15
  __int64 v114; // rbx
  const char *v115; // rax
  __int64 v116; // r13
  __int64 m128i_i64; // rax
  __int64 v118; // rdx
  __int64 v119; // rbx
  char *v120; // rbx
  char v121; // si
  __m128i v122; // xmm0
  __int32 v123; // esi
  signed __int64 v124; // rax
  signed __int64 v125; // rsi
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // r13
  __int64 v128; // rax
  __m128i *v129; // rcx
  char *v130; // r8
  unsigned __int64 *v131; // rdx
  const __m128i *v132; // rsi
  __int64 v133; // rdx
  __m128i v134; // xmm0
  void *v135; // r14
  __m128i *v136; // r13
  __int64 v137; // r14
  const __m128i *v138; // rdi
  __int64 v139; // rax
  __m128i *v140; // rdx
  __m128i v141; // xmm0
  __int64 v142; // [rsp+0h] [rbp-268h]
  __m128i *v143; // [rsp+0h] [rbp-268h]
  void *v144; // [rsp+8h] [rbp-260h]
  __int64 v146; // [rsp+10h] [rbp-258h]
  _QWORD *v147; // [rsp+10h] [rbp-258h]
  void *v148; // [rsp+18h] [rbp-250h]
  void *v149; // [rsp+18h] [rbp-250h]
  __int64 v150; // [rsp+18h] [rbp-250h]
  char *v151; // [rsp+18h] [rbp-250h]
  void *v152; // [rsp+18h] [rbp-250h]
  char *v153; // [rsp+18h] [rbp-250h]
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
  __int64 v170; // [rsp+80h] [rbp-1E8h] BYREF
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
  _QWORD *v184; // [rsp+150h] [rbp-118h] BYREF
  __m128i v185; // [rsp+158h] [rbp-110h] BYREF
  __m128i v186; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v187; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v188; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v189; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v190; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v191; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v192; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v193[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *v194; // [rsp+1F0h] [rbp-78h]
  _QWORD *v195; // [rsp+1F8h] [rbp-70h]
  __m128i v196; // [rsp+200h] [rbp-68h] BYREF
  __m128i v197; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v198; // [rsp+228h] [rbp-40h]

  v198 = __readfsqword(0x28u);
  sub_2CDF20((__int64)v177, a2);
  v178 = a1;
  sub_2CDF20((__int64)v179, a2);
  v180 = a1;
  sub_2CDF20((__int64)v181, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2CDF20((__int64)&v184, v177);
    v6 = *v5;
    v7 = 96 * v5[1];
    v148 = (void *)(*v5 + v7);
    sub_2CDF20((__int64)&v187, (const __m128i *)&v184);
    sub_2CDF20((__int64)v193, (const __m128i *)&v187);
    sub_2CDF20((__int64)&v190, (const __m128i *)v193);
    sub_66C50((__int64)v193);
    if ( v148 != (void *)v6 )
    {
      sub_2CDF20((__int64)v193, (const __m128i *)&v190);
      v8 = -2;
      v9 = 0xAAAAAAAAAAAAAAABLL * (v7 >> 5);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2E5420(v6, (__int64)v148, v8, (const __m128i *)v193);
      sub_66C50((__int64)v193);
      sub_2CDF20((__int64)v193, (const __m128i *)&v190);
      sub_2DCF60(v6, (__int64)v148, (const __m128i *)v193);
      sub_66C50((__int64)v193);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v190);
    sub_66C50((__int64)&v187);
    sub_66C50((__int64)&v184);
  }
  v173 = nullptr;
  v194 = nullptr;
  v195 = v178;
  v172 = 0;
  *(_OWORD *)v193 = 0;
  sub_2CDF20((__int64)&v196, v179);
  v184 = v195;
  sub_2CDF20((__int64)&v185, &v196);
  v11 = v193[1];
  v12 = v193[0];
  v190 = v184;
  sub_2CDF20((__int64)&v191, &v185);
  v187 = v190;
  sub_2CDF20((__int64)&v188, &v191);
  v13 = v11 - v12;
  sub_66C50((__int64)&v191);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v192 = 0u;
      v191 = 0;
      v190 = v187;
      if ( v189.m128i_i64[0] )
      {
        v149 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v189.m128i_i64[0])(&v191, &v188, 2);
        v17 = (unsigned __int64)v149;
        v192 = _mm_loadu_si128(&v189);
      }
      sub_2D9CF0((__int64)v12, i, v14, v16, v17, (__int64)&v190);
      if ( v192.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v191, &v191, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_66C50((__int64)&v188);
  sub_66C50((__int64)&v185);
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
      v20 = (const __m128i *)v193[1];
      if ( v193[1] == v194 )
      {
        v124 = ((char *)v193[1] - (char *)v193[0]) >> 4;
        if ( v124 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v125 = 1;
        if ( v124 )
          v125 = ((char *)v193[1] - (char *)v193[0]) >> 4;
        v58 = __CFADD__(v125, v124);
        v126 = v125 + v124;
        if ( v58 )
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
        v128 = operator new(v127);
        v129 = (__m128i *)v154;
        v130 = (char *)v128;
        v131 = (unsigned __int64 *)(v128 + v165);
        *v131 = v18;
        v131[1] = 0;
        if ( v20 != v154 )
        {
          v132 = v154;
          v133 = v128 + (char *)v20 - (char *)v154;
          do
          {
            v134 = _mm_loadu_si128(v132);
            v128 += 16;
            ++v132;
            *(__m128i *)(v128 - 16) = v134;
          }
          while ( v128 != v133 );
        }
        v135 = (void *)(v128 + 16);
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
        *(_QWORD *)v193[1] = v18;
        v20->m128i_i64[1] = 0;
        v193[1] = (char *)v193[1] + 16;
      }
      v184 = v195;
      sub_2CDF20((__int64)&v185, &v196);
      v21 = v193[1];
      v22 = v193[0];
      v190 = v184;
      sub_2CDF20((__int64)&v191, &v185);
      v187 = v190;
      sub_2CDF20((__int64)&v188, &v191);
      sub_66C50((__int64)&v191);
      sub_2D9BB0((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v187);
      ++v18;
      sub_66C50((__int64)&v188);
      sub_66C50((__int64)&v185);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v169 = 0;
    if ( v19 )
    {
      v136 = (__m128i *)qvector_reserve((__int64)&dest, 0, v19, 16);
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
          v58 = v139-- == 0;
        }
        while ( !v58 );
        v138 = (const __m128i *)dest;
      }
      qfree((__int64)v138);
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
      sub_383060(1961);
    goto LABEL_181;
  }
  v23 = (__int64 *)v193[0];
  if ( v193[0] == v193[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v169 = 0;
    v24 = v23[1];
    v25 = *v23;
    v26 = 2 * v24;
    v150 = 3 * *v23;
    v27 = 96 * v24;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v29 = *(_QWORD *)(a1[3 * v25 + 2] + 32 * (v24 + v26) + 88);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          sub_383060(2170);
        goto LABEL_181;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v30 = v169;
        if ( *((_QWORD *)&v169 + 1) < (unsigned __int64)(v169 + 1) )
        {
          v158 = *((void **)&v169 + 1);
          v31 = (__m128i *)qvector_reserve((__int64)&dest, 0, v169 + 1, 16);
          v53 = *((void **)&v169 + 1);
          v54 = (const __m128i *)dest;
          *((_QWORD *)&v169 + 1) = v158;
          v55 = v169 - 1;
          if ( (__int64)v169 - 1 >= 0 )
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
          v159 = v53;
          qfree((__int64)v54);
          v30 = v169;
          dest = v31;
          *((_QWORD *)&v169 + 1) = v159;
        }
        else
        {
          v31 = (__m128i *)dest;
        }
        m128i_i8 = v31[v30].m128i_i8;
        *(_QWORD *)m128i_i8 = v25;
        *((_QWORD *)m128i_i8 + 1) = v24;
        *(_QWORD *)&v169 = v169 + 1;
      }
      v33 = (const __m128i *)v193[0];
      v34 = *(_QWORD *)v193[0];
      v35 = *((_QWORD *)v193[0] + 1);
      v184 = v195;
      v186 = 0u;
      v185 = 0;
      if ( !v197.m128i_i64[0] )
      {
        v36 = (__m128i *)v193[1];
        if ( (char *)v193[1] - (char *)v193[0] <= 16 )
          goto LABEL_40;
        v49 = v195;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v197.m128i_i64[0])(&v185, &v196, 2);
      v36 = (__m128i *)v193[1];
      v33 = (const __m128i *)v193[0];
      v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v197.m128i_i64[0];
      v186 = _mm_load_si128(&v197);
      if ( (char *)v193[1] - (char *)v193[0] > 16 )
      {
        v49 = v184;
        v192 = 0u;
        v190 = v184;
        v191 = 0;
        if ( v197.m128i_i64[0] )
        {
          v160 = (__m128i *)v193[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v197.m128i_i64[0])(&v191, &v185, 2);
          v59 = _mm_loadu_si128(&v186);
          v189 = 0u;
          v36 = v160;
          v192 = v59;
          v187 = v190;
          v188 = 0;
          if ( v186.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v186.m128i_i64[0])(&v188, &v191, 2);
            v60 = _mm_loadu_si128(&v192);
            v36 = v160;
            v189 = v60;
            if ( v60.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v60.m128i_i64[0])(&v191, &v191, 3);
              v36 = v160;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v187 = v49;
        v189 = 0u;
        v188 = 0;
LABEL_64:
        v50 = v36[-1].m128i_u64[0];
        v51 = v36 - 1;
        v52 = v36[-1].m128i_u64[1];
        v36[-1] = _mm_loadu_si128(v33);
        v192 = 0u;
        v190 = v187;
        v191 = 0;
        if ( v189.m128i_i64[0] )
        {
          v166 = v52;
          v163 = v50;
          v157 = v36 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v189.m128i_i64[0])(&v191, &v188, 2);
          v52 = v166;
          v50 = v163;
          v51 = v157;
          v192 = _mm_loadu_si128(&v189);
        }
        sub_2D9CF0((__int64)v33, 0, v51 - v33, v50, v52, (__int64)&v190);
        if ( v192.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v191, &v191, 3);
        if ( v189.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v189.m128i_i64[0])(&v188, &v188, 3);
        v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128i_i64[0];
      }
      if ( v37 )
        v37(&v185, &v185, 3);
LABEL_40:
      v38 = (__m128i *)v193[1];
      v39 = v35 + 1;
      v40 = (const __m128i *)((char *)v193[1] - 16);
      v193[1] = (char *)v193[1] - 16;
      if ( v39 >= a1[3 * v34 + 3] )
      {
        v28 = (__int64 *)v193[0];
        if ( v193[0] == v40 )
          break;
        goto LABEL_28;
      }
      if ( v40 == (const __m128i *)v194 )
      {
        v61 = ((char *)v40 - (char *)v193[0]) >> 4;
        if ( v61 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v62 = 1;
        if ( v61 )
          v62 = ((char *)v40 - (char *)v193[0]) >> 4;
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
        v167 = v40;
        v164 = (char *)v40 - (char *)v193[0];
        v161 = (const __m128i *)v193[0];
        v65 = (__m128i *)operator new(v64 * 16);
        v66 = (__m128i *)v161;
        *(__m128i *)((char *)v65 + v164) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        if ( v167 == v161 )
        {
          v70 = (char *)v65;
        }
        else
        {
          v67 = v65;
          v68 = v161;
          do
          {
            v69 = _mm_loadu_si128(v68++);
            ++v67;
            v67[-1] = v69;
          }
          while ( v167 != v68 );
          v70 = &v65->m128i_i8[(char *)v167 - (char *)v161];
        }
        v71 = v70 + 16;
        if ( v161 )
        {
          v162 = (char *)v65;
          operator delete(v66, v194 - (char *)v66);
          v65 = (__m128i *)v162;
        }
        v193[0] = v65;
        v193[1] = v71;
        v194 = v65[v64].m128i_i8;
      }
      else
      {
        v38[-1] = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        v193[1] = (char *)v193[1] + 16;
      }
      v41 = v195;
      v186 = 0u;
      v184 = v195;
      v185 = 0;
      if ( !v197.m128i_i64[0] )
      {
        v43 = v193[1];
        v44 = v193[0];
LABEL_81:
        v187 = v41;
        v189 = 0u;
        v188 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v197.m128i_i64[0])(&v185, &v196, 2);
      v41 = v184;
      v42 = _mm_load_si128(&v197);
      v192 = 0u;
      v43 = v193[1];
      v186 = v42;
      v44 = v193[0];
      v190 = v184;
      v191 = 0;
      if ( !v197.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v197.m128i_i64[0])(&v191, &v185, 2);
      v45 = _mm_loadu_si128(&v186);
      v189 = 0u;
      v192 = v45;
      v187 = v190;
      v188 = 0;
      if ( v186.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v186.m128i_i64[0])(&v188, &v191, 2);
        v46 = _mm_loadu_si128(&v192);
        v189 = v46;
        if ( v46.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v46.m128i_i64[0])(&v191, &v191, 3);
      }
LABEL_48:
      sub_2D9BB0((__int64)v44, ((v43 - v44) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)&v187);
      if ( v189.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v189.m128i_i64[0])(&v188, &v188, 3);
      if ( v186.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128i_i64[0])(&v185, &v185, 3);
      v28 = (__int64 *)v193[0];
      if ( v193[0] == v193[1] )
        break;
LABEL_28:
      v24 = v28[1];
      v25 = *v28;
      v26 = 2 * v24;
      if ( !v182 )
        std::__throw_bad_function_call();
    }
    while ( !v183(v181, v180[3 * *v28 + 2] + 96 * v24, v27 + v180[v150 + 2]) );
    if ( a3 )
    {
      v100 = (void *)a1[12];
      LODWORD(v172) = 0;
      v152 = v100;
      sub_2CDC90(a1 + 11, (int *)&v172);
      v101 = (__int64 *)dest;
      v102 = (__int64 *)((char *)dest + 16 * v169);
      v103 = 4LL * (_QWORD)v152;
      if ( dest == v102 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v101 + 2] + 96 * v101[1] + 88) = v152;
        v104 = (_DWORD *)(v103 + a1[11]);
        v105 = 1 << *v101;
        if ( (*v104 & v105) != 0 )
          break;
        v101 += 2;
        *v104 |= v105;
        if ( v102 == v101 )
          goto LABEL_55;
      }
      switch_dbctx();
      v106 = 0;
      v107 = v152;
      v108 = a1[3 * *v101 + 3];
      if ( v108 )
      {
        v146 = 2 * *v101;
        v142 = *v101;
        v106 = qalloc_or_throw(96 * v108, v103, *v101, v146);
        v116 = 0;
        v107 = v152;
        m128i_i64 = v106 + 32;
        v118 = v146 + v142;
        v147 = &a1[v146 + v142];
        v153 = (char *)(-32 - v106);
        do
        {
          v144 = v107;
          v143 = (__m128i *)m128i_i64;
          v119 = v147[2];
          *(_QWORD *)(m128i_i64 - 32) = off_4E12A8;
          v120 = &v153[m128i_i64 + v119];
          *(__m128i *)(m128i_i64 - 24) = _mm_loadu_si128((const __m128i *)(v120 + 8));
          *(_DWORD *)(m128i_i64 - 8) = *((_DWORD *)v120 + 6);
          *(_WORD *)(m128i_i64 - 4) = *((_WORD *)v120 + 14);
          *(_BYTE *)(m128i_i64 - 2) = v120[30];
          v121 = v120[31];
          *(_QWORD *)m128i_i64 = 0;
          *(_BYTE *)(m128i_i64 - 1) = v121;
          *(_OWORD *)(m128i_i64 + 8) = 0;
          sub_2AE320((_QWORD *)m128i_i64, (__int64)(v120 + 32), v118, (__int64)&v153[m128i_i64]);
          ++v116;
          v107 = v144;
          v143[1].m128i_i64[1] = *((_QWORD *)v120 + 7);
          v122 = _mm_loadu_si128((const __m128i *)v120 + 4);
          m128i_i64 = (__int64)v143[6].m128i_i64;
          v123 = *((_DWORD *)v120 + 20);
          v143[-2].m128i_i64[0] = (__int64)off_4E2BE8;
          v143[2] = v122;
          v143[3].m128i_i32[0] = v123;
          v143[3].m128i_i64[1] = *((_QWORD *)v120 + 11);
        }
        while ( v108 != v116 );
      }
      v109 = (char *)dest;
      v110 = (char *)dest + 16 * v169;
      if ( v110 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v109 == *v101 )
          {
            v111 = *((_QWORD *)v109 + 1);
            v112 = v101[1];
            if ( v111 != v112 && *(void **)(v106 + 96 * v111 + 88) == v107 )
              break;
          }
          v109 += 16;
          if ( v110 == v109 )
            goto LABEL_151;
        }
        sub_81980((__int64)&v172, (const char *)&unk_418793);
        v113 = s1;
        if ( *((_QWORD *)&v172 + 1) )
          v113 = (const char *)v172;
        v114 = *((_QWORD *)v109 + 1);
        sub_81980((__int64)&v170, (const char *)&unk_418793);
        v115 = s1;
        if ( v171 )
          v115 = (const char *)v170;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v101, v115, v114, v113, v112);
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
LABEL_151:
      if ( !under_debugger )
        sub_383060(2171);
LABEL_181:
      BUG();
    }
    v47 = v169;
    if ( (unsigned __int64)v169 <= 1 )
      goto LABEL_55;
    v72 = (__int64 *)dest;
    DWORD2(v172) = 0;
    v174 = (__int128 *)((char *)&v172 + 8);
    v173 = nullptr;
    v175 = (char *)&v172 + 8;
    v176 = 0;
    v151 = (char *)dest + 16 * v169;
    if ( v151 != dest )
    {
      v73 = (char *)dest;
      do
      {
        v170 = *(_QWORD *)(a1[3 * *(_QWORD *)v73 + 2] + 96LL * *((_QWORD *)v73 + 1) + 88);
        v74 = sub_2CDD40(&v172, (unsigned __int64 *)&v170);
        v75 = *(_QWORD *)v73;
        v73 += 16;
        *(_DWORD *)v74 |= 1 << v75;
      }
      while ( v151 != v73 );
      if ( v174 != (__int128 *)((char *)&v172 + 8) )
      {
        v76 = (__int64)v174;
        do
        {
          v77 = *(_DWORD *)(v76 + 40);
          v78 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v76 + 32));
          v76 = std::_Rb_tree_increment();
          if ( v78 != v77 )
          {
            v79 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v79, 0x30u);
            --v176;
          }
        }
        while ( (__int128 *)v76 != (__int128 *)((char *)&v172 + 8) );
      }
      v47 = v169;
      v72 = (__int64 *)dest;
      v80 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v169 != dest )
      {
        do
        {
          while ( 1 )
          {
            v82 = v80 + 2;
            if ( (_QWORD *)((char *)&v172 + 8) == sub_2AE200(
                                                    (__int64)&v172,
                                                    *(_QWORD *)(a1[3 * *v80 + 2] + 96 * v80[1] + 88)) )
              break;
            v47 = v169;
            v80 += 2;
            if ( v82 == &v72[2 * (_QWORD)v169] )
              goto LABEL_111;
          }
          v83 = v81 - (_QWORD)v80;
          if ( (v83 >> 4) - 2 >= 0 )
          {
            memmove(v80, v82, v83 - 16);
            v72 = (__int64 *)dest;
          }
          *(_QWORD *)&v169 = v169 - 1;
          v47 = v169;
        }
        while ( v80 != &v72[2 * (_QWORD)v169] );
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
      v47 = v169 - 1;
      v89 = *(_QWORD *)(a1[3 * v85 + 2] + 96 * v86 + 88);
      *(_QWORD *)&v169 = v169 - 1;
      if ( v88 )
      {
        v90 = 0;
        v91 = *(_DWORD *)(a1[11] + 4 * v89);
        do
        {
          v92 = -1;
          if ( (v91 & (1 << v90)) != 0 )
            v92 = v89;
          (&v190)[v90++] = (_QWORD *)v92;
        }
        while ( v90 != v88 );
      }
      if ( 16 * v47 )
      {
        do
        {
          v94 = *v87;
          v95 = a1[3 * *v87 + 2] + 96 * v87[1];
          v96 = *(_QWORD *)(v95 + 88);
          if ( (&v190)[*v87] == (_QWORD *)-1LL )
          {
            v97 = a1[11];
            (&v190)[v94] = (_QWORD *)v96;
            *(_DWORD *)(v97 + 4 * v96) &= ~(1 << v94);
            if ( !*(_DWORD *)(a1[11] + 4 * v96) )
              ++a1[14];
            *(_QWORD *)(v95 + 88) = v89;
            *(_DWORD *)(4 * v89 + a1[11]) |= 1 << *v87;
            v98 = *(_QWORD *)(v95 + 88);
            v93 = v87 + 2;
            v72 = (__int64 *)dest;
            v47 = v169;
            if ( v89 == v98 )
            {
LABEL_128:
              if ( (((char *)&v72[2 * v47] - (char *)v87) >> 4) - 2 >= 0 )
              {
                v99 = (__int64 *)memmove(v87, v93, (char *)&v72[2 * v47] - (char *)v87 - 16);
                v72 = (__int64 *)dest;
                v87 = v99;
                v47 = v169;
              }
              *(_QWORD *)&v169 = --v47;
              continue;
            }
          }
          else
          {
            v47 = v169;
            v93 = v87 + 2;
            if ( v89 == v96 )
              goto LABEL_128;
          }
          v87 = (__int64 *)v93;
        }
        while ( v87 != &v72[2 * v47] );
      }
LABEL_111:
      if ( v47 )
        continue;
      break;
    }
    sub_2AE260((void **)v173);
LABEL_55:
    v23 = (__int64 *)v193[0];
  }
  while ( v193[1] != v193[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v169 = 0;
    qfree((__int64)dest);
  }
  sub_66C50((__int64)&v196);
  if ( v193[0] )
    operator delete(v193[0], v194 - (char *)v193[0]);
  sub_66C50((__int64)v181);
  sub_66C50((__int64)v179);
  sub_66C50((__int64)v177);
  return v198 - __readfsqword(0x28u);
}
