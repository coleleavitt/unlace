unsigned __int64 __fastcall sub_4AACE0(_QWORD *a1, const __m128i *a2, char a3)
{
  unsigned __int64 v4; // r12
  __int64 *v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  unsigned __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 *v15; // rax
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // r13
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r14
  __m128i *v23; // r13
  char *m128i_i8; // rax
  const __m128i *v25; // r10
  __int64 v26; // rax
  unsigned __int64 v27; // r12
  __int64 v28; // rcx
  void (__fastcall *v29)(__m128i *, __m128i *, __int64); // rax
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r12
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // r15
  __int64 v42; // r8
  unsigned __int64 v43; // rbp
  __int64 v44; // r15
  __m128i *v45; // rdi
  __int64 v46; // rax
  __m128i *v47; // rdx
  __m128i v48; // xmm0
  bool v49; // cf
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  __m128i *v52; // r15
  __int64 v53; // rbp
  __int64 v54; // rax
  unsigned __int64 v55; // rbp
  unsigned __int64 v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rcx
  const __m128i *v59; // rdx
  __m128i v60; // xmm0
  __int64 v61; // r12
  __int64 v62; // r12
  char *v63; // r14
  char *v64; // rbp
  _QWORD *i; // rax
  _QWORD *v66; // rsi
  unsigned __int64 v67; // rdi
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  const void *v71; // rsi
  __int64 v72; // rcx
  char *v73; // rax
  char *v74; // rdi
  char *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // r12
  __int64 v78; // rbp
  __int64 *v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // r12
  __int64 v82; // rcx
  int v83; // r10d
  __int64 v84; // rdx
  void *v85; // rsi
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 *v91; // rax
  __int64 v92; // r14
  __int64 v93; // rdx
  __int64 v94; // rbp
  int v95; // r15d
  int v96; // r12d
  void *v97; // rax
  unsigned __int64 v98; // r8
  _QWORD *v99; // rax
  _BYTE *v100; // r9
  __int64 v101; // r13
  unsigned __int64 v102; // rax
  __int64 v103; // rsi
  __int64 v104; // rax
  __int64 v105; // rsi
  __int64 *v106; // r15
  __int64 *v107; // rsi
  _DWORD *v108; // rdi
  int v109; // eax
  __int64 v110; // rbp
  __int64 v111; // r14
  __int64 v112; // r12
  char *v113; // rbx
  char *v114; // rdx
  __int64 v115; // rax
  __int64 v116; // r9
  __int64 v117; // rbx
  __int64 v118; // rax
  __int64 v119; // rdx
  _QWORD *v120; // rbx
  __int64 v121; // r14
  __m128i *v122; // r13
  __int64 v123; // rax
  __int64 v124; // rcx
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // rbp
  __int64 v127; // rax
  __int64 v128; // r14
  _QWORD *v129; // rdx
  __int64 v130; // rdx
  const __m128i *v131; // rax
  __m128i v132; // xmm0
  __int64 v133; // r12
  __int64 v134; // r12
  __int64 v135; // rax
  __m128i *v136; // rbp
  __int64 v137; // r12
  __m128i *v138; // rdi
  __int64 v139; // rax
  __m128i *v140; // rdx
  __m128i v141; // xmm0
  __int64 v142; // [rsp+0h] [rbp-278h]
  __int64 v143; // [rsp+0h] [rbp-278h]
  __int64 v144; // [rsp+0h] [rbp-278h]
  __int64 v145; // [rsp+0h] [rbp-278h]
  __int64 v146; // [rsp+0h] [rbp-278h]
  __int64 v147; // [rsp+0h] [rbp-278h]
  __int64 v148; // [rsp+0h] [rbp-278h]
  __int64 v149; // [rsp+0h] [rbp-278h]
  __int64 v150; // [rsp+0h] [rbp-278h]
  __int64 v152; // [rsp+8h] [rbp-270h]
  __int64 v153; // [rsp+10h] [rbp-268h]
  __int64 v154; // [rsp+10h] [rbp-268h]
  __int64 v155; // [rsp+10h] [rbp-268h]
  __int64 v156; // [rsp+18h] [rbp-260h]
  const __m128i *v158; // [rsp+28h] [rbp-250h]
  __m128i v159; // [rsp+28h] [rbp-250h]
  __int64 v160; // [rsp+30h] [rbp-248h]
  unsigned __int64 v161; // [rsp+68h] [rbp-210h] BYREF
  void *ptr; // [rsp+70h] [rbp-208h] BYREF
  __int128 v163; // [rsp+78h] [rbp-200h]
  void *v164; // [rsp+90h] [rbp-1E8h] BYREF
  __int128 v165; // [rsp+98h] [rbp-1E0h]
  _BYTE v166[24]; // [rsp+B0h] [rbp-1C8h] BYREF
  _BYTE *v167; // [rsp+C8h] [rbp-1B0h]
  _BYTE *v168; // [rsp+D0h] [rbp-1A8h]
  __int64 v169; // [rsp+D8h] [rbp-1A0h]
  __m128i v170[2]; // [rsp+E0h] [rbp-198h] BYREF
  _QWORD *v171; // [rsp+100h] [rbp-178h] BYREF
  _BYTE v172[40]; // [rsp+108h] [rbp-170h] BYREF
  _QWORD *v173; // [rsp+130h] [rbp-148h]
  _BYTE v174[16]; // [rsp+138h] [rbp-140h] BYREF
  __int64 v175; // [rsp+148h] [rbp-130h]
  unsigned int (__fastcall *v176)(_BYTE *, __int64, __int64); // [rsp+150h] [rbp-128h]
  __int64 v177; // [rsp+160h] [rbp-118h] BYREF
  __m128i v178; // [rsp+168h] [rbp-110h] BYREF
  __m128i v179; // [rsp+178h] [rbp-100h] BYREF
  __int64 v180; // [rsp+190h] [rbp-E8h] BYREF
  __int128 v181; // [rsp+198h] [rbp-E0h] BYREF
  __m128i v182; // [rsp+1A8h] [rbp-D0h] BYREF
  __int64 v183; // [rsp+1C0h] [rbp-B8h] BYREF
  __m128i v184; // [rsp+1C8h] [rbp-B0h] BYREF
  __m128i v185; // [rsp+1D8h] [rbp-A0h] BYREF
  __m128i v186; // [rsp+1F0h] [rbp-88h] BYREF
  unsigned __int64 v187; // [rsp+200h] [rbp-78h]
  __int64 v188; // [rsp+208h] [rbp-70h]
  __m128i v189; // [rsp+210h] [rbp-68h] BYREF
  __m128i v190; // [rsp+220h] [rbp-58h] BYREF
  unsigned __int64 v191; // [rsp+238h] [rbp-40h]

  v191 = __readfsqword(0x28u);
  sub_49EAB0((__int64)v170, a2);
  v171 = a1;
  sub_49EAB0((__int64)v172, a2);
  v173 = a1;
  sub_49EAB0((__int64)v174, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx(*(int *)(*a1 + 4 * v4 + 16));
    sub_49EAB0((__int64)&v177, v170);
    v6 = *v5;
    v7 = 192 * v5[1];
    v142 = *v5 + v7;
    sub_49EAB0((__int64)&v180, (const __m128i *)&v177);
    sub_49EAB0((__int64)&v186, (const __m128i *)&v180);
    sub_49EAB0((__int64)&v183, &v186);
    sub_377BA0((__int64)&v186);
    if ( v142 != v6 )
    {
      sub_49EAB0((__int64)&v186, (const __m128i *)&v183);
      v8 = -2;
      v9 = 0xAAAAAAAAAAAAAAABLL * (v7 >> 6);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_4A9FF0(v6, v142, v8, &v186);
      sub_377BA0((__int64)&v186);
      sub_49EAB0((__int64)&v186, (const __m128i *)&v183);
      sub_4A6150(v6, v142, &v186);
      sub_377BA0((__int64)&v186);
    }
    ++v4;
    v5 += 3;
    sub_377BA0((__int64)&v183);
    sub_377BA0((__int64)&v180);
    sub_377BA0((__int64)&v177);
  }
  memset(v166, 0, sizeof(v166));
  sub_4A4CC0(&v186, (__int64)&v171, (const __m128i *)v166);
  if ( *(_QWORD *)v166 )
    operator delete(*(void **)v166, *(_QWORD *)&v166[16] - *(_QWORD *)v166);
  if ( a1[1] )
  {
    v11 = 0;
    do
    {
      while ( !a1[3 * v11 + 3] )
      {
        v12 = a1[1];
        if ( ++v11 >= v12 )
          goto LABEL_16;
      }
      v13 = v186.m128i_i64[1];
      if ( v186.m128i_i64[1] == v187 )
      {
        v122 = (__m128i *)v186.m128i_i64[0];
        v123 = (v186.m128i_i64[1] - v186.m128i_i64[0]) >> 4;
        if ( v123 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v124 = 1;
        if ( v123 )
          v124 = (v186.m128i_i64[1] - v186.m128i_i64[0]) >> 4;
        v49 = __CFADD__(v124, v123);
        v125 = v124 + v123;
        if ( v49 )
        {
          v126 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v125 > 0x7FFFFFFFFFFFFFFLL )
            v125 = 0x7FFFFFFFFFFFFFFLL;
          v126 = 16 * v125;
        }
        v155 = v186.m128i_i64[1] - v186.m128i_i64[0];
        v150 = v11;
        v127 = operator new(v126);
        v11 = v150;
        v128 = v127;
        v129 = (_QWORD *)(v127 + v155);
        *v129 = v150;
        v129[1] = 0;
        if ( (__m128i *)v13 == v122 )
        {
          v133 = v127;
        }
        else
        {
          v130 = v127;
          v131 = v122;
          do
          {
            v132 = _mm_loadu_si128(v131++);
            v130 += 16;
            *(__m128i *)(v130 - 16) = v132;
          }
          while ( (const __m128i *)v13 != v131 );
          v133 = v128 + v13 - (_QWORD)v122;
        }
        v134 = v133 + 16;
        if ( v122 )
        {
          operator delete(v122, v187 - (_QWORD)v122);
          v11 = v150;
        }
        v186.m128i_i64[0] = v128;
        v186.m128i_i64[1] = v134;
        v187 = v126 + v128;
      }
      else
      {
        *(_QWORD *)v186.m128i_i64[1] = v11;
        *(_QWORD *)(v13 + 8) = 0;
        v186.m128i_i64[1] += 16;
      }
      v153 = v11;
      v177 = v188;
      sub_49EAB0((__int64)&v178, &v189);
      v14 = v186.m128i_i64[1];
      v143 = v186.m128i_i64[0];
      v183 = v177;
      sub_49EAB0((__int64)&v184, &v178);
      v180 = v183;
      sub_49EAB0((__int64)&v181, &v184);
      sub_377BA0((__int64)&v184);
      sub_4A4910(v143, ((v14 - v143) >> 4) - 1, 0, *(_QWORD *)(v14 - 16), *(_QWORD *)(v14 - 8), (__int64)&v180);
      sub_377BA0((__int64)&v181);
      sub_377BA0((__int64)&v178);
      v12 = a1[1];
      v11 = v153 + 1;
    }
    while ( v153 + 1 < v12 );
LABEL_16:
    ptr = nullptr;
    v163 = 0;
    if ( v12 )
    {
      v136 = (__m128i *)qvector_reserve(&ptr, 0, v12, 16);
      v137 = *((_QWORD *)&v163 + 1);
      *((_QWORD *)&v163 + 1) = 0;
      v138 = (__m128i *)ptr;
      v139 = v163 - 1;
      if ( (__int64)v163 - 1 >= 0 )
      {
        v140 = v136;
        do
        {
          v141 = _mm_loadu_si128(v138);
          ++v140;
          ++v138;
          v140[-1] = v141;
          v49 = v139-- == 0;
        }
        while ( !v49 );
        v138 = (__m128i *)ptr;
      }
      qfree(v138);
      ptr = v136;
      *((_QWORD *)&v163 + 1) = v137;
    }
  }
  else
  {
    ptr = nullptr;
    v163 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      interr(1961);
    goto LABEL_193;
  }
  v15 = (__int64 *)v186.m128i_i64[0];
  if ( v186.m128i_i64[0] == v186.m128i_i64[1] )
    goto LABEL_50;
  do
  {
    *(_QWORD *)&v163 = 0;
    v16 = v15[1];
    v17 = *v15;
    v18 = 2 * v16;
    v154 = 192 * v16;
    v156 = 3 * *v15;
    do
    {
      if ( a3 )
        goto LABEL_27;
      v20 = *(_QWORD *)(a1[3 * v17 + 2] + ((v16 + v18) << 6) + 184);
      if ( v20 < 0 )
      {
        if ( !under_debugger )
          interr(2170);
        goto LABEL_193;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v20) != (1 << a1[1]) - 1 )
      {
LABEL_27:
        v22 = *((_QWORD *)&v163 + 1);
        v21 = v163;
        if ( *((_QWORD *)&v163 + 1) < (unsigned __int64)(v163 + 1) )
        {
          v23 = (__m128i *)qvector_reserve(&ptr, 0, v163 + 1, 16);
          v44 = *((_QWORD *)&v163 + 1);
          *((_QWORD *)&v163 + 1) = v22;
          v45 = (__m128i *)ptr;
          v46 = v163 - 1;
          if ( (__int64)v163 - 1 >= 0 )
          {
            v47 = v23;
            do
            {
              v48 = _mm_loadu_si128(v45);
              ++v47;
              ++v45;
              v47[-1] = v48;
              v49 = v46-- == 0;
            }
            while ( !v49 );
            v45 = (__m128i *)ptr;
          }
          qfree(v45);
          ptr = v23;
          v21 = v163;
          *((_QWORD *)&v163 + 1) = v44;
        }
        else
        {
          v23 = (__m128i *)ptr;
        }
        m128i_i8 = v23[v21].m128i_i8;
        *(_QWORD *)m128i_i8 = v17;
        *((_QWORD *)m128i_i8 + 1) = v16;
        *(_QWORD *)&v163 = v163 + 1;
      }
      v25 = (const __m128i *)v186.m128i_i64[0];
      v26 = *(_QWORD *)(v186.m128i_i64[0] + 8);
      v27 = *(_QWORD *)v186.m128i_i64[0];
      v178 = 0;
      v179 = 0u;
      v144 = v26;
      v177 = v188;
      if ( !v190.m128i_i64[0] )
      {
        v28 = v186.m128i_i64[1];
        if ( v186.m128i_i64[1] - v186.m128i_i64[0] <= 16 )
          goto LABEL_34;
        v40 = v188;
        goto LABEL_57;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0])(&v178, &v189, 2);
      v28 = v186.m128i_i64[1];
      v25 = (const __m128i *)v186.m128i_i64[0];
      v29 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0];
      v179 = _mm_load_si128(&v190);
      if ( v186.m128i_i64[1] - v186.m128i_i64[0] > 16 )
      {
        v40 = v177;
        v185 = 0u;
        v183 = v177;
        v184 = 0;
        if ( v190.m128i_i64[0] )
        {
          v159 = v186;
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0])(&v184, &v178, 2);
          v50 = _mm_loadu_si128(&v179);
          v182 = 0u;
          v25 = (const __m128i *)v159.m128i_i64[0];
          v185 = v50;
          v28 = v159.m128i_i64[1];
          v180 = v183;
          v181 = 0;
          if ( v179.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v179.m128i_i64[0])(&v181, &v184, 2);
            v51 = _mm_loadu_si128(&v185);
            v28 = v159.m128i_i64[1];
            v25 = (const __m128i *)v159.m128i_i64[0];
            v182 = v51;
            if ( v51.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v51.m128i_i64[0])(&v184, &v184, 3);
              v28 = v159.m128i_i64[1];
              v25 = (const __m128i *)v159.m128i_i64[0];
            }
          }
          goto LABEL_58;
        }
LABEL_57:
        v180 = v40;
        v182 = 0u;
        v181 = 0;
LABEL_58:
        v41 = *(_QWORD *)(v28 - 16);
        v42 = v28 - 16;
        v43 = *(_QWORD *)(v28 - 8);
        *(__m128i *)(v28 - 16) = _mm_loadu_si128(v25);
        v185 = 0u;
        v183 = v180;
        v184 = 0;
        if ( v182.m128i_i64[0] )
        {
          v160 = v28 - 16;
          v158 = v25;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v182.m128i_i64[0])(&v184, &v181, 2);
          v42 = v160;
          v25 = v158;
          v185 = _mm_loadu_si128(&v182);
        }
        sub_4A4A50((__int64)v25, 0, (v42 - (__int64)v25) >> 4, v41, v43, (__int64)&v183);
        if ( v185.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v185.m128i_i64[0])(&v184, &v184, 3);
        if ( v182.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v182.m128i_i64[0])(&v181, &v181, 3);
        v29 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v179.m128i_i64[0];
      }
      if ( v29 )
        v29(&v178, &v178, 3);
LABEL_34:
      v30 = v186.m128i_i64[1];
      v31 = v186.m128i_i64[1] - 16;
      v32 = v144 + 1;
      v186.m128i_i64[1] -= 16;
      if ( (unsigned __int64)(v144 + 1) >= a1[3 * v27 + 3] )
      {
        v19 = (__int64 *)v186.m128i_i64[0];
        if ( v186.m128i_i64[0] == v31 )
          break;
        goto LABEL_22;
      }
      if ( v31 == v187 )
      {
        v52 = (__m128i *)v186.m128i_i64[0];
        v53 = (v31 - v186.m128i_i64[0]) >> 4;
        if ( v53 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v54 = 1;
        if ( v53 )
          v54 = (v31 - v186.m128i_i64[0]) >> 4;
        v49 = __CFADD__(v54, v53);
        v55 = v54 + v53;
        if ( v49 )
        {
          v56 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v55 > 0x7FFFFFFFFFFFFFFLL )
            v55 = 0x7FFFFFFFFFFFFFFLL;
          v56 = 16 * v55;
        }
        v146 = v31 - v186.m128i_i64[0];
        v57 = operator new(v56);
        *(__m128i *)(v57 + v146) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v32);
        if ( (__m128i *)v31 == v52 )
        {
          v61 = v57;
        }
        else
        {
          v58 = v57;
          v59 = v52;
          do
          {
            v60 = _mm_loadu_si128(v59++);
            v58 += 16;
            *(__m128i *)(v58 - 16) = v60;
          }
          while ( (const __m128i *)v31 != v59 );
          v61 = v57 + v31 - (_QWORD)v52;
        }
        v62 = v61 + 16;
        if ( v52 )
        {
          v147 = v57;
          operator delete(v52, v187 - (_QWORD)v52);
          v57 = v147;
        }
        v186.m128i_i64[0] = v57;
        v186.m128i_i64[1] = v62;
        v187 = v56 + v57;
      }
      else
      {
        *(__m128i *)(v30 - 16) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v32);
        v186.m128i_i64[1] += 16;
      }
      v33 = v188;
      v179 = 0u;
      v177 = v188;
      v178 = 0;
      if ( !v190.m128i_i64[0] )
      {
        v34 = v186.m128i_i64[1];
        v145 = v186.m128i_i64[0];
LABEL_75:
        v180 = v33;
        v182 = 0u;
        v181 = 0;
        goto LABEL_42;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0])(&v178, &v189, 2);
      v33 = v177;
      v185 = 0u;
      v34 = v186.m128i_i64[1];
      v35 = _mm_load_si128(&v190);
      v145 = v186.m128i_i64[0];
      v183 = v177;
      v179 = v35;
      v184 = 0;
      if ( !v190.m128i_i64[0] )
        goto LABEL_75;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0])(&v184, &v178, 2);
      v36 = _mm_loadu_si128(&v179);
      v182 = 0u;
      v185 = v36;
      v180 = v183;
      v181 = 0;
      if ( v179.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v179.m128i_i64[0])(&v181, &v184, 2);
        v37 = _mm_loadu_si128(&v185);
        v182 = v37;
        if ( v37.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v37.m128i_i64[0])(&v184, &v184, 3);
      }
LABEL_42:
      sub_4A4910(v145, ((v34 - v145) >> 4) - 1, 0, *(_QWORD *)(v34 - 16), *(_QWORD *)(v34 - 8), (__int64)&v180);
      if ( v182.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v182.m128i_i64[0])(&v181, &v181, 3);
      if ( v179.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v179.m128i_i64[0])(&v178, &v178, 3);
      v19 = (__int64 *)v186.m128i_i64[0];
      if ( v186.m128i_i64[0] == v186.m128i_i64[1] )
        break;
LABEL_22:
      v16 = v19[1];
      v17 = *v19;
      v18 = 2 * v16;
      if ( !v175 )
        std::__throw_bad_function_call();
    }
    while ( !v176(v174, v173[3 * *v19 + 2] + 192 * v16, v173[v156 + 2] + v154) );
    if ( a3 )
    {
      v101 = a1[12];
      v102 = a1[13];
      *(_DWORD *)v166 = 0;
      v103 = a1[11];
      if ( v102 < v101 + 1 )
      {
        v135 = qvector_reserve(a1 + 11, v103, v101 + 1, 4);
        a1[11] = v135;
        v103 = v135;
        v104 = a1[12];
      }
      else
      {
        v104 = v101;
      }
      *(_DWORD *)(v103 + 4 * v104) = 0;
      v105 = v163;
      v106 = (__int64 *)ptr;
      ++a1[12];
      v107 = &v106[2 * v105];
      if ( v106 == v107 )
        goto LABEL_49;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v106 + 2] + 192 * v106[1] + 184) = v101;
        v108 = (_DWORD *)(4 * v101 + a1[11]);
        v109 = 1 << *v106;
        if ( (*v108 & v109) != 0 )
          break;
        v106 += 2;
        *v108 |= v109;
        if ( v107 == v106 )
          goto LABEL_49;
      }
      switch_dbctx(*(int *)(*a1 + 4 * *v106 + 16));
      v110 = 0;
      v111 = 2 * *v106;
      v112 = a1[3 * *v106 + 3];
      if ( v112 )
      {
        v148 = *v106;
        v118 = qalloc_or_throw(192 * v112);
        v110 = v118;
        v119 = 0;
        v120 = &a1[v148 + v111];
        do
        {
          v152 = v119;
          v121 = v120[2] + 192 * v119;
          v149 = v118;
          sub_495840(v118, v121);
          *(_QWORD *)(v149 + 144) = *(_QWORD *)(v121 + 144);
          v118 = v149 + 192;
          v119 = v152 + 1;
          *(_QWORD *)(v149 + 152) = *(_QWORD *)(v121 + 152);
          *(_QWORD *)(v149 + 160) = *(_QWORD *)(v121 + 160);
          *(_QWORD *)(v149 + 168) = *(_QWORD *)(v121 + 168);
          *(_BYTE *)(v149 + 176) = *(_BYTE *)(v121 + 176);
          *(_QWORD *)(v149 + 184) = *(_QWORD *)(v121 + 184);
        }
        while ( v112 != v152 + 1 );
      }
      v113 = (char *)ptr;
      v114 = (char *)ptr + 16 * v163;
      if ( v114 != ptr )
      {
        do
        {
          if ( *(_QWORD *)v113 == *v106 )
          {
            v115 = *((_QWORD *)v113 + 1);
            v116 = v106[1];
            if ( v115 != v116 && *(_QWORD *)(v110 + 192 * v115 + 184) == v101 )
            {
              memset(v166, 0, sizeof(v166));
              sub_493230(v166, v110 + 192 * v116 + 16);
              v117 = *((_QWORD *)v113 + 1);
              v165 = 0;
              v164 = nullptr;
              sub_493230(&v164, v110 + 192 * v117 + 16);
              sub_368890();
            }
          }
          v113 += 16;
        }
        while ( v114 != v113 );
      }
      if ( !under_debugger )
        interr(2171);
LABEL_193:
      BUG();
    }
    v38 = v163;
    if ( (unsigned __int64)v163 <= 1 )
      goto LABEL_49;
    v63 = (char *)ptr;
    *(_DWORD *)&v166[8] = 0;
    v167 = &v166[8];
    v64 = (char *)ptr + 16 * v163;
    *(_QWORD *)&v166[16] = 0;
    v168 = &v166[8];
    v169 = 0;
    if ( v64 != ptr )
    {
      for ( i = nullptr; ; i = *(_QWORD **)&v166[16] )
      {
        v66 = &v166[8];
        v67 = *(_QWORD *)(a1[3 * *(_QWORD *)v63 + 2] + 192LL * *((_QWORD *)v63 + 1) + 184);
        v161 = v67;
        if ( !i )
          goto LABEL_99;
        do
        {
          while ( 1 )
          {
            v68 = i[2];
            v69 = i[3];
            if ( i[4] < v67 )
              break;
            v66 = i;
            i = (_QWORD *)i[2];
            if ( !v68 )
              goto LABEL_97;
          }
          i = (_QWORD *)i[3];
        }
        while ( v69 );
LABEL_97:
        if ( v66 == (_QWORD *)&v166[8] || v67 < v66[4] )
        {
LABEL_99:
          v164 = &v161;
          v66 = sub_493040(v166, v66, (unsigned __int64 **)&v164);
        }
        v70 = *(_QWORD *)v63;
        v63 += 16;
        *((_DWORD *)v66 + 10) |= 1 << v70;
        if ( v64 == v63 )
        {
          v92 = (__int64)v167;
          while ( (_BYTE *)v92 != &v166[8] )
          {
            v93 = *(_QWORD *)(v92 + 32);
            v94 = v92;
            v95 = *(_DWORD *)(v92 + 40);
            v96 = *(_DWORD *)(a1[11] + 4 * v93);
            v92 = std::_Rb_tree_increment(v92, v66, v93, v70);
            if ( v96 != v95 )
            {
              v97 = (void *)std::_Rb_tree_rebalance_for_erase(v94, &v166[8]);
              v66 = (_QWORD *)&dword_30;
              operator delete(v97, 0x30u);
              --v169;
            }
          }
          v38 = v163;
          v63 = (char *)ptr;
          v74 = (char *)ptr;
          v75 = (char *)ptr + 16 * v163;
          if ( v75 != ptr )
          {
            do
            {
              v71 = v74 + 16;
              v98 = *(_QWORD *)(a1[3 * *(_QWORD *)v74 + 2] + 192LL * *((_QWORD *)v74 + 1) + 184);
              v99 = *(_QWORD **)&v166[16];
              if ( !*(_QWORD *)&v166[16] )
                goto LABEL_104;
              v100 = &v166[8];
              do
              {
                if ( v99[4] >= v98 )
                {
                  v100 = v99;
                  v99 = (_QWORD *)v99[2];
                }
                else
                {
                  v99 = (_QWORD *)v99[3];
                }
              }
              while ( v99 );
              v71 = v74 + 16;
              if ( v100 != &v166[8] && v98 >= *((_QWORD *)v100 + 4) )
              {
                v38 = v163;
                v74 += 16;
              }
              else
              {
LABEL_104:
                v72 = v75 - v74;
                if ( (v72 >> 4) - 2 >= 0 )
                {
                  v73 = (char *)memmove(v74, v71, v72 - 16);
                  v63 = (char *)ptr;
                  v74 = v73;
                }
                v38 = v163 - 1;
                *(_QWORD *)&v163 = v163 - 1;
              }
              v75 = &v63[16 * v38];
            }
            while ( v75 != v74 );
          }
          goto LABEL_108;
        }
      }
    }
    while ( 2 )
    {
      v76 = 16 * v38;
      v77 = *(_QWORD *)v63;
      v78 = *((_QWORD *)v63 + 1);
      v79 = (__int64 *)v63;
      if ( (v76 >> 4) - 2 >= 0 )
      {
        memmove(v63, v63 + 16, v76 - 16);
        v63 = (char *)ptr;
        v79 = (__int64 *)ptr;
      }
      v80 = a1[1];
      v38 = v163 - 1;
      v81 = *(_QWORD *)(a1[3 * v77 + 2] + 192 * v78 + 184);
      *(_QWORD *)&v163 = v163 - 1;
      if ( v80 )
      {
        v82 = 0;
        v83 = *(_DWORD *)(a1[11] + 4 * v81);
        do
        {
          v84 = -1;
          if ( (v83 & (1 << v82)) != 0 )
            v84 = v81;
          *(&v183 + v82++) = v84;
        }
        while ( v82 != v80 );
      }
      if ( 16 * v38 )
      {
        do
        {
          v86 = *v79;
          v87 = a1[3 * *v79 + 2] + 192 * v79[1];
          v88 = *(_QWORD *)(v87 + 184);
          if ( *(&v183 + *v79) == -1 )
          {
            v89 = a1[11];
            *(&v183 + v86) = v88;
            *(_DWORD *)(v89 + 4 * v88) &= ~(1 << v86);
            if ( !*(_DWORD *)(a1[11] + 4 * v88) )
              ++a1[14];
            *(_QWORD *)(v87 + 184) = v81;
            *(_DWORD *)(4 * v81 + a1[11]) |= 1 << *v79;
            v90 = *(_QWORD *)(v87 + 184);
            v85 = v79 + 2;
            v63 = (char *)ptr;
            v38 = v163;
            if ( v81 == v90 )
            {
LABEL_125:
              if ( ((&v63[16 * v38] - (char *)v79) >> 4) - 2 >= 0 )
              {
                v91 = (__int64 *)memmove(v79, v85, &v63[16 * v38] - (char *)v79 - 16);
                v63 = (char *)ptr;
                v79 = v91;
                v38 = v163;
              }
              *(_QWORD *)&v163 = --v38;
              continue;
            }
          }
          else
          {
            v38 = v163;
            v85 = v79 + 2;
            if ( v81 == v88 )
              goto LABEL_125;
          }
          v79 = (__int64 *)v85;
        }
        while ( v79 != (__int64 *)&v63[16 * v38] );
      }
LABEL_108:
      if ( v38 )
        continue;
      break;
    }
    sub_494BF0(*(_QWORD **)&v166[16]);
LABEL_49:
    v15 = (__int64 *)v186.m128i_i64[0];
  }
  while ( v186.m128i_i64[1] != v186.m128i_i64[0] );
LABEL_50:
  if ( ptr )
  {
    *(_QWORD *)&v163 = 0;
    qfree(ptr);
  }
  sub_377BA0((__int64)&v189);
  if ( v186.m128i_i64[0] )
    operator delete((void *)v186.m128i_i64[0], v187 - v186.m128i_i64[0]);
  sub_377BA0((__int64)v174);
  sub_377BA0((__int64)v172);
  sub_377BA0((__int64)v170);
  return v191 - __readfsqword(0x28u);
}
