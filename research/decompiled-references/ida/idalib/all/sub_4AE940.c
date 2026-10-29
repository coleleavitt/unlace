unsigned __int64 __fastcall sub_4AE940(_QWORD *a1, const __m128i *a2, char a3)
{
  unsigned __int64 v4; // r12
  __int64 **v5; // r13
  __int64 *v6; // r14
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
  __int64 v81; // rdx
  __int64 v82; // r12
  __int64 v83; // rcx
  int v84; // r10d
  __int64 v85; // rdx
  void *v86; // rsi
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rsi
  __int64 v91; // rdx
  __int64 *v92; // rax
  __int64 v93; // r14
  __int64 v94; // rdx
  __int64 v95; // rbp
  int v96; // r15d
  int v97; // r12d
  void *v98; // rax
  unsigned __int64 v99; // r8
  _QWORD *v100; // rax
  _BYTE *v101; // r9
  __int64 v102; // r13
  unsigned __int64 v103; // rax
  __int64 v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rsi
  __int64 *v107; // r15
  __int64 *v108; // rsi
  _DWORD *v109; // rdi
  int v110; // eax
  __int64 v111; // rsi
  __int64 v112; // rbp
  __int64 v113; // r12
  char *v114; // rbx
  char *v115; // rdx
  __int64 v116; // rax
  __int64 v117; // r9
  __int64 v118; // rbx
  __int64 v119; // r14
  __int64 v120; // rdx
  __int64 v121; // rax
  const __m128i *v122; // rbx
  __m128i *v123; // r13
  __int64 v124; // rax
  __int64 v125; // rcx
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // rbp
  __int64 v128; // rax
  __int64 v129; // r14
  _QWORD *v130; // rdx
  __int64 v131; // rdx
  const __m128i *v132; // rax
  __m128i v133; // xmm0
  __int64 v134; // r12
  __int64 v135; // r12
  __int64 v136; // rax
  __m128i *v137; // rbp
  __int64 v138; // r12
  __m128i *v139; // rdi
  __int64 v140; // rax
  __m128i *v141; // rdx
  __m128i v142; // xmm0
  __int64 *v143; // [rsp+0h] [rbp-278h]
  __int64 v144; // [rsp+0h] [rbp-278h]
  __int64 v145; // [rsp+0h] [rbp-278h]
  __int64 v146; // [rsp+0h] [rbp-278h]
  __int64 v147; // [rsp+0h] [rbp-278h]
  __int64 v148; // [rsp+0h] [rbp-278h]
  __int64 v149; // [rsp+0h] [rbp-278h]
  __int64 v150; // [rsp+0h] [rbp-278h]
  __int64 v152; // [rsp+8h] [rbp-270h]
  __int64 v153; // [rsp+8h] [rbp-270h]
  __int64 v154; // [rsp+10h] [rbp-268h]
  __int64 v155; // [rsp+10h] [rbp-268h]
  _QWORD *v156; // [rsp+10h] [rbp-268h]
  __int64 v157; // [rsp+10h] [rbp-268h]
  __int64 v158; // [rsp+18h] [rbp-260h]
  const __m128i *v160; // [rsp+28h] [rbp-250h]
  __m128i v161; // [rsp+28h] [rbp-250h]
  __int64 v162; // [rsp+30h] [rbp-248h]
  unsigned __int64 v163; // [rsp+68h] [rbp-210h] BYREF
  void *ptr; // [rsp+70h] [rbp-208h] BYREF
  __int128 v165; // [rsp+78h] [rbp-200h]
  void *v166; // [rsp+90h] [rbp-1E8h] BYREF
  __int128 v167; // [rsp+98h] [rbp-1E0h]
  _BYTE v168[24]; // [rsp+B0h] [rbp-1C8h] BYREF
  _BYTE *v169; // [rsp+C8h] [rbp-1B0h]
  _BYTE *v170; // [rsp+D0h] [rbp-1A8h]
  __int64 v171; // [rsp+D8h] [rbp-1A0h]
  __m128i v172[2]; // [rsp+E0h] [rbp-198h] BYREF
  _QWORD *v173; // [rsp+100h] [rbp-178h] BYREF
  _BYTE v174[40]; // [rsp+108h] [rbp-170h] BYREF
  _QWORD *v175; // [rsp+130h] [rbp-148h]
  _BYTE v176[16]; // [rsp+138h] [rbp-140h] BYREF
  __int64 v177; // [rsp+148h] [rbp-130h]
  unsigned int (__fastcall *v178)(_BYTE *, __int64, __int64); // [rsp+150h] [rbp-128h]
  __int64 v179; // [rsp+160h] [rbp-118h] BYREF
  __m128i v180; // [rsp+168h] [rbp-110h] BYREF
  __m128i v181; // [rsp+178h] [rbp-100h] BYREF
  __int64 v182; // [rsp+190h] [rbp-E8h] BYREF
  __int128 v183; // [rsp+198h] [rbp-E0h] BYREF
  __m128i v184; // [rsp+1A8h] [rbp-D0h] BYREF
  __int64 v185; // [rsp+1C0h] [rbp-B8h] BYREF
  __m128i v186; // [rsp+1C8h] [rbp-B0h] BYREF
  __m128i v187; // [rsp+1D8h] [rbp-A0h] BYREF
  __m128i v188; // [rsp+1F0h] [rbp-88h] BYREF
  unsigned __int64 v189; // [rsp+200h] [rbp-78h]
  __int64 v190; // [rsp+208h] [rbp-70h]
  __m128i v191; // [rsp+210h] [rbp-68h] BYREF
  __m128i v192; // [rsp+220h] [rbp-58h] BYREF
  unsigned __int64 v193; // [rsp+238h] [rbp-40h]

  v193 = __readfsqword(0x28u);
  sub_49FE20((__int64)v172, a2);
  v173 = a1;
  sub_49FE20((__int64)v174, a2);
  v175 = a1;
  sub_49FE20((__int64)v176, a2);
  v4 = 0;
  v5 = (__int64 **)(a1 + 2);
  while ( v4 < a1[1] )
  {
    switch_dbctx(*(int *)(*a1 + 4 * v4 + 16));
    sub_49FE20((__int64)&v179, v172);
    v6 = *v5;
    v7 = 54LL * (_QWORD)v5[1];
    v143 = &(*v5)[v7];
    sub_49FE20((__int64)&v182, (const __m128i *)&v179);
    sub_49FE20((__int64)&v188, (const __m128i *)&v182);
    sub_49FE20((__int64)&v185, &v188);
    sub_377BA0((__int64)&v188);
    if ( v143 != v6 )
    {
      sub_49FE20((__int64)&v188, (const __m128i *)&v185);
      v8 = -2;
      v9 = 0x84BDA12F684BDA13LL * ((v7 * 8) >> 4);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_4ADC30(v6, v143, v8, &v188);
      sub_377BA0((__int64)&v188);
      sub_49FE20((__int64)&v188, (const __m128i *)&v185);
      sub_4A6B30((__int64)v6, (__int64)v143, &v188);
      sub_377BA0((__int64)&v188);
    }
    ++v4;
    v5 += 3;
    sub_377BA0((__int64)&v185);
    sub_377BA0((__int64)&v182);
    sub_377BA0((__int64)&v179);
  }
  memset(v168, 0, sizeof(v168));
  sub_4A5300(&v188, (__int64)&v173, (const __m128i *)v168);
  if ( *(_QWORD *)v168 )
    operator delete(*(void **)v168, *(_QWORD *)&v168[16] - *(_QWORD *)v168);
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
      v13 = v188.m128i_i64[1];
      if ( v188.m128i_i64[1] == v189 )
      {
        v123 = (__m128i *)v188.m128i_i64[0];
        v124 = (v188.m128i_i64[1] - v188.m128i_i64[0]) >> 4;
        if ( v124 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v125 = 1;
        if ( v124 )
          v125 = (v188.m128i_i64[1] - v188.m128i_i64[0]) >> 4;
        v49 = __CFADD__(v125, v124);
        v126 = v125 + v124;
        if ( v49 )
        {
          v127 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v126 > 0x7FFFFFFFFFFFFFFLL )
            v126 = 0x7FFFFFFFFFFFFFFLL;
          v127 = 16 * v126;
        }
        v157 = v188.m128i_i64[1] - v188.m128i_i64[0];
        v150 = v11;
        v128 = operator new(v127);
        v11 = v150;
        v129 = v128;
        v130 = (_QWORD *)(v128 + v157);
        *v130 = v150;
        v130[1] = 0;
        if ( (__m128i *)v13 == v123 )
        {
          v134 = v128;
        }
        else
        {
          v131 = v128;
          v132 = v123;
          do
          {
            v133 = _mm_loadu_si128(v132++);
            v131 += 16;
            *(__m128i *)(v131 - 16) = v133;
          }
          while ( (const __m128i *)v13 != v132 );
          v134 = v129 + v13 - (_QWORD)v123;
        }
        v135 = v134 + 16;
        if ( v123 )
        {
          operator delete(v123, v189 - (_QWORD)v123);
          v11 = v150;
        }
        v188.m128i_i64[0] = v129;
        v188.m128i_i64[1] = v135;
        v189 = v127 + v129;
      }
      else
      {
        *(_QWORD *)v188.m128i_i64[1] = v11;
        *(_QWORD *)(v13 + 8) = 0;
        v188.m128i_i64[1] += 16;
      }
      v154 = v11;
      v179 = v190;
      sub_49FE20((__int64)&v180, &v191);
      v14 = v188.m128i_i64[1];
      v144 = v188.m128i_i64[0];
      v185 = v179;
      sub_49FE20((__int64)&v186, &v180);
      v182 = v185;
      sub_49FE20((__int64)&v183, &v186);
      sub_377BA0((__int64)&v186);
      sub_4A4F40(v144, ((v14 - v144) >> 4) - 1, 0, *(_QWORD *)(v14 - 16), *(_QWORD *)(v14 - 8), (__int64)&v182);
      sub_377BA0((__int64)&v183);
      sub_377BA0((__int64)&v180);
      v12 = a1[1];
      v11 = v154 + 1;
    }
    while ( v154 + 1 < v12 );
LABEL_16:
    ptr = nullptr;
    v165 = 0;
    if ( v12 )
    {
      v137 = (__m128i *)qvector_reserve(&ptr, 0, v12, 16);
      v138 = *((_QWORD *)&v165 + 1);
      *((_QWORD *)&v165 + 1) = 0;
      v139 = (__m128i *)ptr;
      v140 = v165 - 1;
      if ( (__int64)v165 - 1 >= 0 )
      {
        v141 = v137;
        do
        {
          v142 = _mm_loadu_si128(v139);
          ++v141;
          ++v139;
          v141[-1] = v142;
          v49 = v140-- == 0;
        }
        while ( !v49 );
        v139 = (__m128i *)ptr;
      }
      qfree(v139);
      ptr = v137;
      *((_QWORD *)&v165 + 1) = v138;
    }
  }
  else
  {
    ptr = nullptr;
    v165 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      interr(1961);
    goto LABEL_193;
  }
  v15 = (__int64 *)v188.m128i_i64[0];
  if ( v188.m128i_i64[0] == v188.m128i_i64[1] )
    goto LABEL_50;
  do
  {
    *(_QWORD *)&v165 = 0;
    v16 = v15[1];
    v17 = *v15;
    v18 = 2 * v16;
    v158 = 3 * *v15;
    v155 = 432 * v16;
    do
    {
      if ( a3 )
        goto LABEL_27;
      v20 = *(_QWORD *)(a1[3 * v17 + 2] + 144 * (v16 + v18) + 424);
      if ( v20 < 0 )
      {
        if ( !under_debugger )
          interr(2170);
        goto LABEL_193;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v20) != (1 << a1[1]) - 1 )
      {
LABEL_27:
        v22 = *((_QWORD *)&v165 + 1);
        v21 = v165;
        if ( *((_QWORD *)&v165 + 1) < (unsigned __int64)(v165 + 1) )
        {
          v23 = (__m128i *)qvector_reserve(&ptr, 0, v165 + 1, 16);
          v44 = *((_QWORD *)&v165 + 1);
          *((_QWORD *)&v165 + 1) = v22;
          v45 = (__m128i *)ptr;
          v46 = v165 - 1;
          if ( (__int64)v165 - 1 >= 0 )
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
          v21 = v165;
          *((_QWORD *)&v165 + 1) = v44;
        }
        else
        {
          v23 = (__m128i *)ptr;
        }
        m128i_i8 = v23[v21].m128i_i8;
        *(_QWORD *)m128i_i8 = v17;
        *((_QWORD *)m128i_i8 + 1) = v16;
        *(_QWORD *)&v165 = v165 + 1;
      }
      v25 = (const __m128i *)v188.m128i_i64[0];
      v26 = *(_QWORD *)(v188.m128i_i64[0] + 8);
      v27 = *(_QWORD *)v188.m128i_i64[0];
      v180 = 0;
      v181 = 0u;
      v145 = v26;
      v179 = v190;
      if ( !v192.m128i_i64[0] )
      {
        v28 = v188.m128i_i64[1];
        if ( v188.m128i_i64[1] - v188.m128i_i64[0] <= 16 )
          goto LABEL_34;
        v40 = v190;
        goto LABEL_57;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v180, &v191, 2);
      v28 = v188.m128i_i64[1];
      v25 = (const __m128i *)v188.m128i_i64[0];
      v29 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0];
      v181 = _mm_load_si128(&v192);
      if ( v188.m128i_i64[1] - v188.m128i_i64[0] > 16 )
      {
        v40 = v179;
        v187 = 0u;
        v185 = v179;
        v186 = 0;
        if ( v192.m128i_i64[0] )
        {
          v161 = v188;
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v186, &v180, 2);
          v50 = _mm_loadu_si128(&v181);
          v184 = 0u;
          v25 = (const __m128i *)v161.m128i_i64[0];
          v187 = v50;
          v28 = v161.m128i_i64[1];
          v182 = v185;
          v183 = 0;
          if ( v181.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v181.m128i_i64[0])(&v183, &v186, 2);
            v51 = _mm_loadu_si128(&v187);
            v28 = v161.m128i_i64[1];
            v25 = (const __m128i *)v161.m128i_i64[0];
            v184 = v51;
            if ( v51.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v51.m128i_i64[0])(&v186, &v186, 3);
              v28 = v161.m128i_i64[1];
              v25 = (const __m128i *)v161.m128i_i64[0];
            }
          }
          goto LABEL_58;
        }
LABEL_57:
        v182 = v40;
        v184 = 0u;
        v183 = 0;
LABEL_58:
        v41 = *(_QWORD *)(v28 - 16);
        v42 = v28 - 16;
        v43 = *(_QWORD *)(v28 - 8);
        *(__m128i *)(v28 - 16) = _mm_loadu_si128(v25);
        v187 = 0u;
        v185 = v182;
        v186 = 0;
        if ( v184.m128i_i64[0] )
        {
          v162 = v28 - 16;
          v160 = v25;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v184.m128i_i64[0])(&v186, &v183, 2);
          v42 = v162;
          v25 = v160;
          v187 = _mm_loadu_si128(&v184);
        }
        sub_4A5090((__int64)v25, 0, (v42 - (__int64)v25) >> 4, v41, v43, (__int64)&v185);
        if ( v187.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(&v186, &v186, 3);
        if ( v184.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v184.m128i_i64[0])(&v183, &v183, 3);
        v29 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v181.m128i_i64[0];
      }
      if ( v29 )
        v29(&v180, &v180, 3);
LABEL_34:
      v30 = v188.m128i_i64[1];
      v31 = v188.m128i_i64[1] - 16;
      v32 = v145 + 1;
      v188.m128i_i64[1] -= 16;
      if ( (unsigned __int64)(v145 + 1) >= a1[3 * v27 + 3] )
      {
        v19 = (__int64 *)v188.m128i_i64[0];
        if ( v188.m128i_i64[0] == v31 )
          break;
        goto LABEL_22;
      }
      if ( v31 == v189 )
      {
        v52 = (__m128i *)v188.m128i_i64[0];
        v53 = (v31 - v188.m128i_i64[0]) >> 4;
        if ( v53 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v54 = 1;
        if ( v53 )
          v54 = (v31 - v188.m128i_i64[0]) >> 4;
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
        v147 = v31 - v188.m128i_i64[0];
        v57 = operator new(v56);
        *(__m128i *)(v57 + v147) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v32);
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
          v148 = v57;
          operator delete(v52, v189 - (_QWORD)v52);
          v57 = v148;
        }
        v188.m128i_i64[0] = v57;
        v188.m128i_i64[1] = v62;
        v189 = v56 + v57;
      }
      else
      {
        *(__m128i *)(v30 - 16) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v32);
        v188.m128i_i64[1] += 16;
      }
      v33 = v190;
      v181 = 0u;
      v179 = v190;
      v180 = 0;
      if ( !v192.m128i_i64[0] )
      {
        v34 = v188.m128i_i64[1];
        v146 = v188.m128i_i64[0];
LABEL_75:
        v182 = v33;
        v184 = 0u;
        v183 = 0;
        goto LABEL_42;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v180, &v191, 2);
      v33 = v179;
      v187 = 0u;
      v34 = v188.m128i_i64[1];
      v35 = _mm_load_si128(&v192);
      v146 = v188.m128i_i64[0];
      v185 = v179;
      v181 = v35;
      v186 = 0;
      if ( !v192.m128i_i64[0] )
        goto LABEL_75;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v186, &v180, 2);
      v36 = _mm_loadu_si128(&v181);
      v184 = 0u;
      v187 = v36;
      v182 = v185;
      v183 = 0;
      if ( v181.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v181.m128i_i64[0])(&v183, &v186, 2);
        v37 = _mm_loadu_si128(&v187);
        v184 = v37;
        if ( v37.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v37.m128i_i64[0])(&v186, &v186, 3);
      }
LABEL_42:
      sub_4A4F40(v146, ((v34 - v146) >> 4) - 1, 0, *(_QWORD *)(v34 - 16), *(_QWORD *)(v34 - 8), (__int64)&v182);
      if ( v184.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v184.m128i_i64[0])(&v183, &v183, 3);
      if ( v181.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v181.m128i_i64[0])(&v180, &v180, 3);
      v19 = (__int64 *)v188.m128i_i64[0];
      if ( v188.m128i_i64[0] == v188.m128i_i64[1] )
        break;
LABEL_22:
      v16 = v19[1];
      v17 = *v19;
      v18 = 2 * v16;
      if ( !v177 )
        std::__throw_bad_function_call();
    }
    while ( !v178(v176, v175[3 * *v19 + 2] + 432 * v16, v175[v158 + 2] + v155) );
    if ( a3 )
    {
      v102 = a1[12];
      v103 = a1[13];
      *(_DWORD *)v168 = 0;
      v104 = a1[11];
      if ( v103 < v102 + 1 )
      {
        v136 = qvector_reserve(a1 + 11, v104, v102 + 1, 4);
        a1[11] = v136;
        v104 = v136;
        v105 = a1[12];
      }
      else
      {
        v105 = v102;
      }
      *(_DWORD *)(v104 + 4 * v105) = 0;
      v106 = v165;
      v107 = (__int64 *)ptr;
      ++a1[12];
      v108 = &v107[2 * v106];
      if ( v107 == v108 )
        goto LABEL_49;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v107 + 2] + 432 * v107[1] + 424) = v102;
        v109 = (_DWORD *)(4 * v102 + a1[11]);
        v110 = 1 << *v107;
        if ( (*v109 & v110) != 0 )
          break;
        v107 += 2;
        *v109 |= v110;
        if ( v108 == v107 )
          goto LABEL_49;
      }
      switch_dbctx(*(int *)(*a1 + 4 * *v107 + 16));
      v111 = *v107;
      v112 = 0;
      v113 = a1[3 * *v107 + 3];
      if ( v113 )
      {
        v152 = 2 * *v107;
        v112 = qalloc_or_throw(432 * v113);
        v119 = v112;
        v120 = 0;
        v121 = 0;
        v156 = &a1[v111 + v152];
        do
        {
          v153 = v121;
          v149 = v120;
          v122 = (const __m128i *)(v156[2] + v120);
          sub_49D3B0(v119, v122);
          v119 += 432;
          v121 = v153 + 1;
          *(_QWORD *)(v119 - 8) = v122[26].m128i_i64[1];
          v120 = v149 + 432;
        }
        while ( v113 != v153 + 1 );
      }
      v114 = (char *)ptr;
      v115 = (char *)ptr + 16 * v165;
      if ( v115 != ptr )
      {
        do
        {
          if ( *(_QWORD *)v114 == *v107 )
          {
            v116 = *((_QWORD *)v114 + 1);
            v117 = v107[1];
            if ( v116 != v117 && *(_QWORD *)(v112 + 432 * v116 + 424) == v102 )
            {
              memset(v168, 0, sizeof(v168));
              sub_493230(v168, v112 + 432 * v117 + 152);
              v118 = *((_QWORD *)v114 + 1);
              v167 = 0;
              v166 = nullptr;
              sub_493230(&v166, v112 + 432 * v118 + 152);
              sub_368890();
            }
          }
          v114 += 16;
        }
        while ( v115 != v114 );
      }
      if ( !under_debugger )
        interr(2171);
LABEL_193:
      BUG();
    }
    v38 = v165;
    if ( (unsigned __int64)v165 <= 1 )
      goto LABEL_49;
    v63 = (char *)ptr;
    *(_DWORD *)&v168[8] = 0;
    v169 = &v168[8];
    v64 = (char *)ptr + 16 * v165;
    *(_QWORD *)&v168[16] = 0;
    v170 = &v168[8];
    v171 = 0;
    if ( v64 != ptr )
    {
      for ( i = nullptr; ; i = *(_QWORD **)&v168[16] )
      {
        v66 = &v168[8];
        v67 = *(_QWORD *)(a1[3 * *(_QWORD *)v63 + 2] + 432LL * *((_QWORD *)v63 + 1) + 424);
        v163 = v67;
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
        if ( v66 == (_QWORD *)&v168[8] || v67 < v66[4] )
        {
LABEL_99:
          v166 = &v163;
          v66 = sub_493040(v168, v66, (unsigned __int64 **)&v166);
        }
        v70 = *(_QWORD *)v63;
        v63 += 16;
        *((_DWORD *)v66 + 10) |= 1 << v70;
        if ( v64 == v63 )
        {
          v93 = (__int64)v169;
          while ( (_BYTE *)v93 != &v168[8] )
          {
            v94 = *(_QWORD *)(v93 + 32);
            v95 = v93;
            v96 = *(_DWORD *)(v93 + 40);
            v97 = *(_DWORD *)(a1[11] + 4 * v94);
            v93 = std::_Rb_tree_increment(v93, v66, v94, v70);
            if ( v97 != v96 )
            {
              v98 = (void *)std::_Rb_tree_rebalance_for_erase(v95, &v168[8]);
              v66 = (_QWORD *)&dword_30;
              operator delete(v98, 0x30u);
              --v171;
            }
          }
          v38 = v165;
          v63 = (char *)ptr;
          v74 = (char *)ptr;
          v75 = (char *)ptr + 16 * v165;
          if ( v75 != ptr )
          {
            do
            {
              v71 = v74 + 16;
              v99 = *(_QWORD *)(a1[3 * *(_QWORD *)v74 + 2] + 432LL * *((_QWORD *)v74 + 1) + 424);
              v100 = *(_QWORD **)&v168[16];
              if ( !*(_QWORD *)&v168[16] )
                goto LABEL_104;
              v101 = &v168[8];
              do
              {
                if ( v100[4] >= v99 )
                {
                  v101 = v100;
                  v100 = (_QWORD *)v100[2];
                }
                else
                {
                  v100 = (_QWORD *)v100[3];
                }
              }
              while ( v100 );
              v71 = v74 + 16;
              if ( v101 != &v168[8] && v99 >= *((_QWORD *)v101 + 4) )
              {
                v38 = v165;
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
                v38 = v165 - 1;
                *(_QWORD *)&v165 = v165 - 1;
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
      v38 = v165 - 1;
      v81 = a1[3 * v77 + 2] + 432 * v78;
      *(_QWORD *)&v165 = v165 - 1;
      v82 = *(_QWORD *)(v81 + 424);
      if ( v80 )
      {
        v83 = 0;
        v84 = *(_DWORD *)(a1[11] + 4 * v82);
        do
        {
          v85 = -1;
          if ( (v84 & (1 << v83)) != 0 )
            v85 = v82;
          *(&v185 + v83++) = v85;
        }
        while ( v83 != v80 );
      }
      if ( 16 * v38 )
      {
        do
        {
          v87 = *v79;
          v88 = a1[3 * *v79 + 2] + 432 * v79[1];
          v89 = *(_QWORD *)(v88 + 424);
          if ( *(&v185 + *v79) == -1 )
          {
            v90 = a1[11];
            *(&v185 + v87) = v89;
            *(_DWORD *)(v90 + 4 * v89) &= ~(1 << v87);
            if ( !*(_DWORD *)(a1[11] + 4 * v89) )
              ++a1[14];
            *(_QWORD *)(v88 + 424) = v82;
            *(_DWORD *)(4 * v82 + a1[11]) |= 1 << *v79;
            v91 = *(_QWORD *)(v88 + 424);
            v86 = v79 + 2;
            v63 = (char *)ptr;
            v38 = v165;
            if ( v82 == v91 )
            {
LABEL_125:
              if ( ((&v63[16 * v38] - (char *)v79) >> 4) - 2 >= 0 )
              {
                v92 = (__int64 *)memmove(v79, v86, &v63[16 * v38] - (char *)v79 - 16);
                v63 = (char *)ptr;
                v79 = v92;
                v38 = v165;
              }
              *(_QWORD *)&v165 = --v38;
              continue;
            }
          }
          else
          {
            v38 = v165;
            v86 = v79 + 2;
            if ( v82 == v89 )
              goto LABEL_125;
          }
          v79 = (__int64 *)v86;
        }
        while ( v79 != (__int64 *)&v63[16 * v38] );
      }
LABEL_108:
      if ( v38 )
        continue;
      break;
    }
    sub_494BF0(*(_QWORD **)&v168[16]);
LABEL_49:
    v15 = (__int64 *)v188.m128i_i64[0];
  }
  while ( v188.m128i_i64[1] != v188.m128i_i64[0] );
LABEL_50:
  if ( ptr )
  {
    *(_QWORD *)&v165 = 0;
    qfree(ptr);
  }
  sub_377BA0((__int64)&v191);
  if ( v188.m128i_i64[0] )
    operator delete((void *)v188.m128i_i64[0], v189 - v188.m128i_i64[0]);
  sub_377BA0((__int64)v176);
  sub_377BA0((__int64)v174);
  sub_377BA0((__int64)v172);
  return v193 - __readfsqword(0x28u);
}
