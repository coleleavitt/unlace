unsigned __int64 __fastcall sub_2EFD80(_QWORD *a1, const __m128i *a2, char a3)
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
  __int64 v27; // r12
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __m128i *v31; // r15
  char *v32; // rax
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
  __int64 v77; // rbp
  int v78; // r15d
  int v79; // r14d
  void *v80; // rax
  __int64 *v81; // r14
  __int64 v82; // r10
  __int64 *v83; // rsi
  __int64 v84; // r10
  __int64 v85; // rax
  __int64 v86; // r13
  __int64 v87; // r12
  __int64 *v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // r13
  __int64 v92; // rcx
  int v93; // r11d
  __int64 v94; // rdx
  void *v95; // rsi
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rsi
  __int64 v100; // rdx
  __int64 *v101; // rax
  __int64 v102; // r13
  char *v103; // r14
  char *v104; // rdi
  _DWORD *v105; // rdx
  int v106; // eax
  __int64 v107; // rsi
  __int64 v108; // r12
  __int64 v109; // rax
  char *v110; // rbx
  char *v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rbp
  const char *v114; // r13
  __int64 v115; // rbx
  const char *v116; // rax
  __int64 v117; // rbp
  __int64 v118; // rbx
  __m128i v119; // xmm0
  __m128i v120; // xmm0
  int v121; // ecx
  signed __int64 v122; // rax
  signed __int64 v123; // rsi
  unsigned __int64 v124; // rax
  unsigned __int64 v125; // r13
  __m128i *v126; // rax
  __m128i *v127; // rcx
  __m128i *v128; // r8
  char *v129; // rdx
  const __m128i *v130; // rsi
  char *v131; // rdx
  __m128i v132; // xmm0
  __m128i *v133; // r14
  __m128i *v134; // r13
  __int64 v135; // r14
  const __m128i *v136; // rdi
  __int64 v137; // rax
  __m128i *v138; // rdx
  __m128i v139; // xmm0
  __int64 v140; // [rsp+0h] [rbp-268h]
  __int64 v141; // [rsp+8h] [rbp-260h]
  _QWORD *v143; // [rsp+10h] [rbp-258h]
  void *v144; // [rsp+18h] [rbp-250h]
  void *v145; // [rsp+18h] [rbp-250h]
  __int64 v146; // [rsp+18h] [rbp-250h]
  char *v147; // [rsp+18h] [rbp-250h]
  __m128i *v148; // [rsp+18h] [rbp-250h]
  __int64 v149; // [rsp+18h] [rbp-250h]
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
  sub_2C8E30((__int64)v173, a2);
  v174 = a1;
  sub_2C8E30((__int64)v175, a2);
  v176 = a1;
  sub_2C8E30((__int64)v177, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx(*(int *)(*a1 + 4 * v4 + 16));
    sub_2C8E30((__int64)&v180, v173);
    v6 = *v5;
    v7 = 272 * v5[1];
    v144 = (void *)(*v5 + v7);
    sub_2C8E30((__int64)&v183, (const __m128i *)&v180);
    sub_2C8E30((__int64)v189, (const __m128i *)&v183);
    sub_2C8E30((__int64)&v186, (const __m128i *)v189);
    sub_621D0((__int64)v189);
    if ( v144 != (void *)v6 )
    {
      sub_2C8E30((__int64)v189, (const __m128i *)&v186);
      v8 = -2;
      v9 = 0xF0F0F0F0F0F0F0F1LL * (v7 >> 4);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2EFAB0(v6, (__int64)v144, v8, (const __m128i *)v189);
      sub_621D0((__int64)v189);
      sub_2C8E30((__int64)v189, (const __m128i *)&v186);
      sub_2DA2B0(v6, (__int64)v144, (const __m128i *)v189);
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
  sub_2C8E30((__int64)&v192, v175);
  v11 = &v181;
  v180 = v191;
  sub_2C8E30((__int64)&v181, &v192);
  v12 = v189[1];
  v13 = v189[0];
  v186 = v180;
  sub_2C8E30((__int64)&v187, &v181);
  v183 = v186;
  sub_2C8E30((__int64)&v184, &v187);
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
        v145 = (void *)v18;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v185.m128i_i64[0])(&v187, &v184, 2);
        v18 = (unsigned __int64)v145;
        v188 = _mm_loadu_si128(&v185);
      }
      sub_2D5BC0((__int64)v13, i, v15, v17, v18, (__int64)&v186);
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
        v122 = ((char *)v189[1] - (char *)v189[0]) >> 4;
        if ( v122 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v123 = 1;
        if ( v122 )
          v123 = ((char *)v189[1] - (char *)v189[0]) >> 4;
        v58 = __CFADD__(v123, v122);
        v124 = v123 + v122;
        if ( v58 )
        {
          v125 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v124 > 0x7FFFFFFFFFFFFFFLL )
            v124 = 0x7FFFFFFFFFFFFFFLL;
          v125 = v124;
        }
        v161 = (char *)v189[1] - (char *)v189[0];
        v150 = (const __m128i *)v189[0];
        v126 = (__m128i *)operator new(v125 * 16);
        v127 = (__m128i *)v150;
        v128 = v126;
        v129 = &v126->m128i_i8[v161];
        *(_QWORD *)v129 = v19;
        *((_QWORD *)v129 + 1) = 0;
        if ( v21 != v150 )
        {
          v130 = v150;
          v131 = &v126->m128i_i8[(char *)v21 - (char *)v150];
          do
          {
            v132 = _mm_loadu_si128(v130);
            ++v126;
            ++v130;
            v126[-1] = v132;
          }
          while ( v126 != (__m128i *)v131 );
        }
        v133 = v126 + 1;
        if ( v150 )
        {
          v151 = (char *)v128;
          operator delete(v127, m128i_i8 - (char *)v127);
          v128 = (__m128i *)v151;
        }
        v189[0] = v128;
        v189[1] = v133;
        m128i_i8 = v128[v125].m128i_i8;
      }
      else
      {
        *(_QWORD *)v189[1] = v19;
        v21->m128i_i64[1] = 0;
        v189[1] = (char *)v189[1] + 16;
      }
      v180 = v191;
      sub_2C8E30((__int64)&v181, &v192);
      v22 = v189[1];
      v23 = v189[0];
      v186 = v180;
      sub_2C8E30((__int64)&v187, &v181);
      v183 = v186;
      sub_2C8E30((__int64)&v184, &v187);
      sub_621D0((__int64)&v187);
      sub_2D5A70((__int64)v23, ((v22 - v23) >> 4) - 1, 0, *((_QWORD *)v22 - 2), *((_QWORD *)v22 - 1), (__int64)&v183);
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
      v134 = (__m128i *)qvector_reserve(&dest, 0, v20, 16);
      v135 = *((_QWORD *)&v165 + 1);
      *((_QWORD *)&v165 + 1) = 0;
      v136 = (const __m128i *)dest;
      v137 = v165 - 1;
      if ( (__int64)v165 - 1 >= 0 )
      {
        v138 = v134;
        do
        {
          v139 = _mm_loadu_si128(v136);
          ++v138;
          ++v136;
          v138[-1] = v139;
          v58 = v137-- == 0;
        }
        while ( !v58 );
        v136 = (const __m128i *)dest;
      }
      qfree(v136);
      dest = v134;
      *((_QWORD *)&v165 + 1) = v135;
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
    v146 = 3 * *v24;
    v27 = 272 * v25;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v29 = *(_QWORD *)(a1[3 * v26 + 2] + 272 * v25 + 264);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          sub_37CFE0(2170);
        goto LABEL_182;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v30 = v165;
        if ( *((_QWORD *)&v165 + 1) < (unsigned __int64)(v165 + 1) )
        {
          v154 = *((void **)&v165 + 1);
          v31 = (__m128i *)qvector_reserve(&dest, 0, v165 + 1, 16);
          v53 = *((void **)&v165 + 1);
          v54 = (const __m128i *)dest;
          *((_QWORD *)&v165 + 1) = v154;
          v55 = v165 - 1;
          if ( (__int64)v165 - 1 >= 0 )
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
          v155 = v53;
          qfree(v54);
          v30 = v165;
          dest = v31;
          *((_QWORD *)&v165 + 1) = v155;
        }
        else
        {
          v31 = (__m128i *)dest;
        }
        v32 = v31[v30].m128i_i8;
        *(_QWORD *)v32 = v26;
        *((_QWORD *)v32 + 1) = v25;
        *(_QWORD *)&v165 = v165 + 1;
      }
      v33 = (const __m128i *)v189[0];
      v34 = *(_QWORD *)v189[0];
      v35 = *((_QWORD *)v189[0] + 1);
      v180 = v191;
      v182 = 0u;
      v181 = 0;
      if ( !v193.m128i_i64[0] )
      {
        v36 = (__m128i *)v189[1];
        if ( (char *)v189[1] - (char *)v189[0] <= 16 )
          goto LABEL_40;
        v49 = v191;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(v11, &v192, 2);
      v36 = (__m128i *)v189[1];
      v33 = (const __m128i *)v189[0];
      v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0];
      v182 = _mm_load_si128(&v193);
      if ( (char *)v189[1] - (char *)v189[0] > 16 )
      {
        v49 = v180;
        v188 = 0u;
        v186 = v180;
        v187 = 0;
        if ( v193.m128i_i64[0] )
        {
          v156 = (__m128i *)v189[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v187, v11, 2);
          v59 = _mm_loadu_si128(&v182);
          v185 = 0u;
          v36 = v156;
          v188 = v59;
          v183 = v186;
          v184 = 0;
          if ( v182.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v182.m128i_i64[0])(&v184, &v187, 2);
            v60 = _mm_loadu_si128(&v188);
            v36 = v156;
            v185 = v60;
            if ( v60.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v60.m128i_i64[0])(&v187, &v187, 3);
              v36 = v156;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v183 = v49;
        v185 = 0u;
        v184 = 0;
LABEL_64:
        v50 = v36[-1].m128i_u64[0];
        v51 = v36 - 1;
        v52 = v36[-1].m128i_u64[1];
        v36[-1] = _mm_loadu_si128(v33);
        v188 = 0u;
        v186 = v183;
        v187 = 0;
        if ( v185.m128i_i64[0] )
        {
          v162 = v52;
          v159 = v50;
          v153 = v36 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v185.m128i_i64[0])(&v187, &v184, 2);
          v52 = v162;
          v50 = v159;
          v51 = v153;
          v188 = _mm_loadu_si128(&v185);
        }
        sub_2D5BC0((__int64)v33, 0, v51 - v33, v50, v52, (__int64)&v186);
        if ( v188.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v188.m128i_i64[0])(&v187, &v187, 3);
        if ( v185.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v185.m128i_i64[0])(&v184, &v184, 3);
        v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v182.m128i_i64[0];
      }
      if ( v37 )
        v37(v11, v11, 3);
LABEL_40:
      v38 = (__m128i *)v189[1];
      v39 = v35 + 1;
      v40 = (const __m128i *)((char *)v189[1] - 16);
      v189[1] = (char *)v189[1] - 16;
      if ( v39 >= a1[3 * v34 + 3] )
      {
        v28 = (__int64 *)v189[0];
        if ( v189[0] == v40 )
          break;
        goto LABEL_28;
      }
      if ( v40 == (const __m128i *)m128i_i8 )
      {
        v61 = ((char *)v40 - (char *)v189[0]) >> 4;
        if ( v61 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v62 = 1;
        if ( v61 )
          v62 = ((char *)v40 - (char *)v189[0]) >> 4;
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
        v163 = v40;
        v160 = (char *)v40 - (char *)v189[0];
        v157 = (const __m128i *)v189[0];
        v65 = (__m128i *)operator new(v64 * 16);
        v66 = (__m128i *)v157;
        *(__m128i *)((char *)v65 + v160) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        if ( v163 == v157 )
        {
          v70 = (char *)v65;
        }
        else
        {
          v67 = v65;
          v68 = v157;
          do
          {
            v69 = _mm_loadu_si128(v68++);
            ++v67;
            v67[-1] = v69;
          }
          while ( v163 != v68 );
          v70 = &v65->m128i_i8[(char *)v163 - (char *)v157];
        }
        v71 = v70 + 16;
        if ( v157 )
        {
          v158 = (char *)v65;
          operator delete(v66, m128i_i8 - (char *)v66);
          v65 = (__m128i *)v158;
        }
        v189[0] = v65;
        v189[1] = v71;
        m128i_i8 = v65[v64].m128i_i8;
      }
      else
      {
        v38[-1] = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        v189[1] = (char *)v189[1] + 16;
      }
      v41 = v191;
      v182 = 0u;
      v180 = v191;
      v181 = 0;
      if ( !v193.m128i_i64[0] )
      {
        v43 = v189[1];
        v44 = v189[0];
LABEL_81:
        v183 = v41;
        v185 = 0u;
        v184 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(v11, &v192, 2);
      v41 = v180;
      v42 = _mm_load_si128(&v193);
      v188 = 0u;
      v43 = v189[1];
      v182 = v42;
      v44 = v189[0];
      v186 = v180;
      v187 = 0;
      if ( !v193.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v187, v11, 2);
      v45 = _mm_loadu_si128(&v182);
      v185 = 0u;
      v188 = v45;
      v183 = v186;
      v184 = 0;
      if ( v182.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v182.m128i_i64[0])(&v184, &v187, 2);
        v46 = _mm_loadu_si128(&v188);
        v185 = v46;
        if ( v46.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v46.m128i_i64[0])(&v187, &v187, 3);
      }
LABEL_48:
      sub_2D5A70((__int64)v44, ((v43 - v44) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)&v183);
      if ( v185.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v185.m128i_i64[0])(&v184, &v184, 3);
      if ( v182.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v182.m128i_i64[0])(v11, v11, 3);
      v28 = (__int64 *)v189[0];
      if ( v189[0] == v189[1] )
        break;
LABEL_28:
      v25 = v28[1];
      v26 = *v28;
      if ( !v178 )
        std::__throw_bad_function_call();
    }
    while ( !v179(v177, v176[3 * *v28 + 2] + 272 * v25, v27 + v176[v146 + 2]) );
    if ( a3 )
    {
      v102 = a1[12];
      LODWORD(v168) = 0;
      sub_2C88D0(a1 + 11, (int *)&v168);
      v103 = (char *)dest;
      v104 = (char *)dest + 16 * v165;
      if ( dest == v104 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *(_QWORD *)v103 + 2] + 272LL * *((_QWORD *)v103 + 1) + 264) = v102;
        v105 = (_DWORD *)(4 * v102 + a1[11]);
        v106 = 1 << *(_QWORD *)v103;
        if ( (*v105 & v106) != 0 )
          break;
        v103 += 16;
        *v105 |= v106;
        if ( v104 == v103 )
          goto LABEL_55;
      }
      switch_dbctx(*(int *)(*a1 + 4LL * *(_QWORD *)v103 + 16));
      v107 = *(_QWORD *)v103;
      v108 = 0;
      v109 = a1[3 * *(_QWORD *)v103 + 3];
      v141 = v109;
      if ( v109 )
      {
        v149 = 2LL * *(_QWORD *)v103;
        v108 = qalloc_or_throw(272 * v109);
        v117 = v108 + 32;
        v140 = 0;
        v143 = &a1[v107 + v149];
        do
        {
          v118 = v143[2] + v117 + -32 - v108;
          *(_QWORD *)(v117 - 32) = off_4B4E00;
          v119 = _mm_loadu_si128((const __m128i *)(v118 + 8));
          *(_QWORD *)(v117 - 8) = *(_QWORD *)(v118 + 24);
          *(__m128i *)(v117 - 24) = v119;
          sub_2B0830(v117, v118 + 32);
          *(_DWORD *)(v117 + 80) = *(_DWORD *)(v118 + 112);
          *(_DWORD *)(v117 + 88) = *(_DWORD *)(v118 + 120);
          *(_BYTE *)(v117 + 96) = *(_BYTE *)(v118 + 128);
          v120 = _mm_loadu_si128((const __m128i *)(v118 + 136));
          *(_QWORD *)(v117 + 120) = *(_QWORD *)(v118 + 152);
          *(__m128i *)(v117 + 104) = v120;
          sub_2B0830(v117 + 128, v118 + 160);
          ++v140;
          v117 += 272;
          *(_DWORD *)(v117 - 64) = *(_DWORD *)(v118 + 240);
          *(_DWORD *)(v117 - 56) = *(_DWORD *)(v118 + 248);
          v121 = *(_DWORD *)(v118 + 256);
          *(_QWORD *)(v117 - 304) = off_4B6650;
          *(_DWORD *)(v117 - 48) = v121;
          *(_QWORD *)(v117 - 40) = *(_QWORD *)(v118 + 264);
        }
        while ( v141 != v140 );
      }
      v110 = (char *)dest;
      v111 = (char *)dest + 16 * v165;
      if ( v111 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v110 == *(_QWORD *)v103 )
          {
            v112 = *((_QWORD *)v110 + 1);
            v113 = *((_QWORD *)v103 + 1);
            if ( v112 != v113 && *(_QWORD *)(v108 + 272 * v112 + 264) == v102 )
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
        sub_68620((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *(_QWORD *)v103, v116, v115, v114, v113);
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
    v47 = v165;
    if ( (unsigned __int64)v165 <= 1 )
      goto LABEL_55;
    v72 = (__int64 *)dest;
    DWORD2(v168) = 0;
    v170 = (__int128 *)((char *)&v168 + 8);
    v169 = nullptr;
    v171 = (char *)&v168 + 8;
    v172 = 0;
    v147 = (char *)dest + 16 * v165;
    if ( v147 != dest )
    {
      v73 = (char *)dest;
      do
      {
        v166 = *(const char **)(a1[3 * *(_QWORD *)v73 + 2] + 272LL * *((_QWORD *)v73 + 1) + 264);
        v74 = sub_2C8980(&v168, (unsigned __int64 *)&v166);
        v75 = *(_QWORD *)v73;
        v73 += 16;
        *(_DWORD *)v74 |= 1 << v75;
      }
      while ( v147 != v73 );
      if ( v170 != (__int128 *)((char *)&v168 + 8) )
      {
        v148 = v11;
        v76 = (__int64)v170;
        do
        {
          v77 = v76;
          v78 = *(_DWORD *)(v76 + 40);
          v79 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v76 + 32));
          v76 = std::_Rb_tree_increment(v76);
          if ( v79 != v78 )
          {
            v80 = (void *)std::_Rb_tree_rebalance_for_erase(v77, (char *)&v168 + 8);
            operator delete(v80, 0x30u);
            --v172;
          }
        }
        while ( (__int128 *)v76 != (__int128 *)((char *)&v168 + 8) );
        v11 = v148;
      }
      v47 = v165;
      v72 = (__int64 *)dest;
      v81 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v165 != dest )
      {
        do
        {
          while ( 1 )
          {
            v83 = v81 + 2;
            if ( (_QWORD *)((char *)&v168 + 8) == sub_2A8E40(
                                                    (__int64)&v168,
                                                    *(_QWORD *)(a1[3 * *v81 + 2] + 272 * v81[1] + 264)) )
              break;
            v47 = v165;
            v81 += 2;
            if ( v83 == &v72[2 * (_QWORD)v165] )
              goto LABEL_112;
          }
          v84 = v82 - (_QWORD)v81;
          if ( (v84 >> 4) - 2 >= 0 )
          {
            memmove(v81, v83, v84 - 16);
            v72 = (__int64 *)dest;
          }
          *(_QWORD *)&v165 = v165 - 1;
          v47 = v165;
        }
        while ( v81 != &v72[2 * (_QWORD)v165] );
      }
      goto LABEL_112;
    }
    while ( 2 )
    {
      v85 = 16 * v47;
      v86 = *v72;
      v87 = v72[1];
      v88 = v72;
      if ( (v85 >> 4) - 2 >= 0 )
      {
        memmove(v72, v72 + 2, v85 - 16);
        v72 = (__int64 *)dest;
        v88 = (__int64 *)dest;
      }
      v89 = a1[1];
      v47 = v165 - 1;
      v90 = a1[3 * v86 + 2] + 272 * v87;
      *(_QWORD *)&v165 = v165 - 1;
      v91 = *(_QWORD *)(v90 + 264);
      if ( v89 )
      {
        v92 = 0;
        v93 = *(_DWORD *)(a1[11] + 4 * v91);
        do
        {
          v94 = -1;
          if ( (v93 & (1 << v92)) != 0 )
            v94 = v91;
          (&v186)[v92++] = (_QWORD *)v94;
        }
        while ( v92 != v89 );
      }
      if ( 16 * v47 )
      {
        do
        {
          v96 = *v88;
          v97 = a1[3 * *v88 + 2] + 272 * v88[1];
          v98 = *(_QWORD *)(v97 + 264);
          if ( (&v186)[*v88] == (_QWORD *)-1LL )
          {
            v99 = a1[11];
            (&v186)[v96] = (_QWORD *)v98;
            *(_DWORD *)(v99 + 4 * v98) &= ~(1 << v96);
            if ( !*(_DWORD *)(a1[11] + 4 * v98) )
              ++a1[14];
            *(_QWORD *)(v97 + 264) = v91;
            *(_DWORD *)(4 * v91 + a1[11]) |= 1 << *v88;
            v100 = *(_QWORD *)(v97 + 264);
            v95 = v88 + 2;
            v72 = (__int64 *)dest;
            v47 = v165;
            if ( v91 == v100 )
            {
LABEL_129:
              if ( (((char *)&v72[2 * v47] - (char *)v88) >> 4) - 2 >= 0 )
              {
                v101 = (__int64 *)memmove(v88, v95, (char *)&v72[2 * v47] - (char *)v88 - 16);
                v72 = (__int64 *)dest;
                v88 = v101;
                v47 = v165;
              }
              *(_QWORD *)&v165 = --v47;
              continue;
            }
          }
          else
          {
            v47 = v165;
            v95 = v88 + 2;
            if ( v91 == v98 )
              goto LABEL_129;
          }
          v88 = (__int64 *)v95;
        }
        while ( v88 != &v72[2 * v47] );
      }
LABEL_112:
      if ( v47 )
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
