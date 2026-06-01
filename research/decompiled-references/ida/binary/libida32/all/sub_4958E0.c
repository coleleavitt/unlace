unsigned __int64 __fastcall sub_4958E0(_QWORD *a1, const __m128i *a2, char a3)
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
  __int64 v16; // rbp
  __int64 v17; // r12
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
  bool v86; // zf
  void *v87; // rsi
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rsi
  __int64 *v92; // rax
  __int64 v93; // r14
  int v94; // r15d
  int v95; // r12d
  void *v96; // rax
  unsigned __int64 v97; // r8
  _QWORD *v98; // rax
  _BYTE *v99; // r9
  __int64 v100; // r13
  unsigned __int64 v101; // rax
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rsi
  __int64 *v105; // r15
  __int64 *v106; // rsi
  _DWORD *v107; // rdi
  int v108; // eax
  __int64 v109; // rbp
  __int64 v110; // r12
  char *v111; // rbx
  char *v112; // rdx
  __int64 v113; // rax
  __int64 v114; // r9
  __int64 v115; // rbx
  __int64 v116; // r14
  __int64 v117; // rcx
  __int64 v118; // rdx
  const __m128i *v119; // rbx
  __m128i *v120; // r13
  __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // rbp
  __int64 v125; // rax
  __int64 v126; // r14
  _QWORD *v127; // rdx
  __int64 v128; // rdx
  const __m128i *v129; // rax
  __m128i v130; // xmm0
  __int64 v131; // r12
  __int64 v132; // r12
  __int64 v133; // rax
  __m128i *v134; // rbp
  __int64 v135; // r12
  __m128i *v136; // rdi
  __int64 v137; // rax
  __m128i *v138; // rdx
  __m128i v139; // xmm0
  __int64 v140; // [rsp+0h] [rbp-278h]
  __int64 v141; // [rsp+0h] [rbp-278h]
  __int64 v142; // [rsp+0h] [rbp-278h]
  __int64 v143; // [rsp+0h] [rbp-278h]
  __int64 v144; // [rsp+0h] [rbp-278h]
  __int64 v145; // [rsp+0h] [rbp-278h]
  __int64 v146; // [rsp+0h] [rbp-278h]
  __int64 v147; // [rsp+0h] [rbp-278h]
  __int64 v148; // [rsp+0h] [rbp-278h]
  const char *v150; // [rsp+8h] [rbp-270h]
  __int64 v151; // [rsp+8h] [rbp-270h]
  __int64 v152; // [rsp+10h] [rbp-268h]
  __int64 v153; // [rsp+10h] [rbp-268h]
  _QWORD *v154; // [rsp+10h] [rbp-268h]
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
  sub_489E30((__int64)v170, a2);
  v171 = a1;
  sub_489E30((__int64)v172, a2);
  v173 = a1;
  sub_489E30((__int64)v174, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx(*(int *)(*a1 + 4 * v4 + 16));
    sub_489E30((__int64)&v177, v170);
    v6 = *v5;
    v7 = 168 * v5[1];
    v140 = *v5 + v7;
    sub_489E30((__int64)&v180, (const __m128i *)&v177);
    sub_489E30((__int64)&v186, (const __m128i *)&v180);
    sub_489E30((__int64)&v183, &v186);
    sub_374250((__int64)&v186);
    if ( v140 != v6 )
    {
      sub_489E30((__int64)&v186, (const __m128i *)&v183);
      v8 = -2;
      v9 = 0xCF3CF3CF3CF3CF3DLL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_494BE0(v6, v140, v8, &v186);
      sub_374250((__int64)&v186);
      sub_489E30((__int64)&v186, (const __m128i *)&v183);
      sub_491010(v6, v140, &v186);
      sub_374250((__int64)&v186);
    }
    ++v4;
    v5 += 3;
    sub_374250((__int64)&v183);
    sub_374250((__int64)&v180);
    sub_374250((__int64)&v177);
  }
  memset(v166, 0, sizeof(v166));
  sub_48FE90(&v186, (__int64)&v171, (const __m128i *)v166);
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
        v120 = (__m128i *)v186.m128i_i64[0];
        v121 = (v186.m128i_i64[1] - v186.m128i_i64[0]) >> 4;
        if ( v121 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v122 = 1;
        if ( v121 )
          v122 = (v186.m128i_i64[1] - v186.m128i_i64[0]) >> 4;
        v49 = __CFADD__(v122, v121);
        v123 = v122 + v121;
        if ( v49 )
        {
          v124 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v123 > 0x7FFFFFFFFFFFFFFLL )
            v123 = 0x7FFFFFFFFFFFFFFLL;
          v124 = 16 * v123;
        }
        v155 = v186.m128i_i64[1] - v186.m128i_i64[0];
        v148 = v11;
        v125 = operator new(v124);
        v11 = v148;
        v126 = v125;
        v127 = (_QWORD *)(v125 + v155);
        *v127 = v148;
        v127[1] = 0;
        if ( (__m128i *)v13 == v120 )
        {
          v131 = v125;
        }
        else
        {
          v128 = v125;
          v129 = v120;
          do
          {
            v130 = _mm_loadu_si128(v129++);
            v128 += 16;
            *(__m128i *)(v128 - 16) = v130;
          }
          while ( (const __m128i *)v13 != v129 );
          v131 = v126 + v13 - (_QWORD)v120;
        }
        v132 = v131 + 16;
        if ( v120 )
        {
          operator delete(v120, v187 - (_QWORD)v120);
          v11 = v148;
        }
        v186.m128i_i64[0] = v126;
        v186.m128i_i64[1] = v132;
        v187 = v124 + v126;
      }
      else
      {
        *(_QWORD *)v186.m128i_i64[1] = v11;
        *(_QWORD *)(v13 + 8) = 0;
        v186.m128i_i64[1] += 16;
      }
      v152 = v11;
      v177 = v188;
      sub_489E30((__int64)&v178, &v189);
      v14 = v186.m128i_i64[1];
      v141 = v186.m128i_i64[0];
      v183 = v177;
      sub_489E30((__int64)&v184, &v178);
      v180 = v183;
      sub_489E30((__int64)&v181, &v184);
      sub_374250((__int64)&v184);
      sub_48FAB0(v141, ((v14 - v141) >> 4) - 1, 0, *(_QWORD *)(v14 - 16), *(_QWORD *)(v14 - 8), (__int64)&v180);
      sub_374250((__int64)&v181);
      sub_374250((__int64)&v178);
      v12 = a1[1];
      v11 = v152 + 1;
    }
    while ( v152 + 1 < v12 );
LABEL_16:
    ptr = nullptr;
    v163 = 0;
    if ( v12 )
    {
      v134 = (__m128i *)qvector_reserve(&ptr, 0, v12, 16);
      v135 = *((_QWORD *)&v163 + 1);
      *((_QWORD *)&v163 + 1) = 0;
      v136 = (__m128i *)ptr;
      v137 = v163 - 1;
      if ( (__int64)v163 - 1 >= 0 )
      {
        v138 = v134;
        do
        {
          v139 = _mm_loadu_si128(v136);
          ++v138;
          ++v136;
          v138[-1] = v139;
          v49 = v137-- == 0;
        }
        while ( !v49 );
        v136 = (__m128i *)ptr;
      }
      qfree(v136);
      ptr = v134;
      *((_QWORD *)&v163 + 1) = v135;
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
    v18 = 4 * v16;
    v156 = 3 * *v15;
    v153 = 168 * v16;
    do
    {
      if ( a3 )
        goto LABEL_27;
      v20 = *(_QWORD *)(a1[3 * v17 + 2] + 8 * (v16 + 4 * (v16 + v18)) + 160);
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
      v142 = v26;
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
        sub_48FC10((__int64)v25, 0, (v42 - (__int64)v25) >> 4, v41, v43, &v183);
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
      v32 = v142 + 1;
      v186.m128i_i64[1] -= 16;
      if ( (unsigned __int64)(v142 + 1) >= a1[3 * v27 + 3] )
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
        v144 = v31 - v186.m128i_i64[0];
        v57 = operator new(v56);
        *(__m128i *)(v57 + v144) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v32);
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
          v145 = v57;
          operator delete(v52, v187 - (_QWORD)v52);
          v57 = v145;
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
        v143 = v186.m128i_i64[0];
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
      v143 = v186.m128i_i64[0];
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
      sub_48FAB0(v143, ((v34 - v143) >> 4) - 1, 0, *(_QWORD *)(v34 - 16), *(_QWORD *)(v34 - 8), (__int64)&v180);
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
      v18 = 4 * v16;
      if ( !v175 )
        std::__throw_bad_function_call();
    }
    while ( !v176(v174, v173[3 * *v19 + 2] + 168 * v16, v173[v156 + 2] + v153) );
    if ( a3 )
    {
      v100 = a1[12];
      v101 = a1[13];
      *(_DWORD *)v166 = 0;
      v102 = a1[11];
      if ( v101 < v100 + 1 )
      {
        v133 = qvector_reserve(a1 + 11, v102, v100 + 1, 4);
        a1[11] = v133;
        v102 = v133;
        v103 = a1[12];
      }
      else
      {
        v103 = v100;
      }
      *(_DWORD *)(v102 + 4 * v103) = 0;
      v104 = v163;
      v105 = (__int64 *)ptr;
      ++a1[12];
      v106 = &v105[2 * v104];
      if ( v105 == v106 )
        goto LABEL_49;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v105 + 2] + 168 * v105[1] + 160) = v100;
        v107 = (_DWORD *)(4 * v100 + a1[11]);
        v108 = 1 << *v105;
        if ( (*v107 & v108) != 0 )
          break;
        v105 += 2;
        *v107 |= v108;
        if ( v106 == v105 )
          goto LABEL_49;
      }
      switch_dbctx(*(int *)(*a1 + 4 * *v105 + 16));
      v109 = 0;
      v110 = a1[3 * *v105 + 3];
      if ( v110 )
      {
        v150 = (const char *)(2 * *v105);
        v146 = *v105;
        v109 = qalloc_or_throw(168 * v110, v150);
        v116 = v109;
        v117 = 0;
        v118 = 0;
        v154 = &a1[(_QWORD)&v150[v146]];
        do
        {
          v151 = v118;
          v147 = v117;
          v119 = (const __m128i *)(v154[2] + v117);
          sub_480B60(v116, v119);
          v116 += 168;
          *(_DWORD *)(v116 - 40) = v119[8].m128i_i32[0];
          v118 = v151 + 1;
          v117 = v147 + 168;
          *(_QWORD *)(v116 - 32) = v119[8].m128i_i64[1];
          *(_QWORD *)(v116 - 24) = v119[9].m128i_i64[0];
          *(_DWORD *)(v116 - 16) = v119[9].m128i_i32[2];
          *(_BYTE *)(v116 - 12) = v119[9].m128i_i8[12];
          *(_QWORD *)(v116 - 8) = v119[10].m128i_i64[0];
        }
        while ( v110 != v151 + 1 );
      }
      v111 = (char *)ptr;
      v112 = (char *)ptr + 16 * v163;
      if ( v112 != ptr )
      {
        do
        {
          if ( *(_QWORD *)v111 == *v105 )
          {
            v113 = *((_QWORD *)v111 + 1);
            v114 = v105[1];
            if ( v113 != v114 && *(_QWORD *)(v109 + 168 * v113 + 160) == v100 )
            {
              memset(v166, 0, sizeof(v166));
              sub_47E730(v166, v109 + 168 * v114 + 16);
              v115 = *((_QWORD *)v111 + 1);
              v165 = 0;
              v164 = nullptr;
              sub_47E730(&v164, v109 + 168 * v115 + 16);
              sub_365330();
            }
          }
          v111 += 16;
        }
        while ( v112 != v111 );
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
        v67 = *(_QWORD *)(a1[3 * *(_QWORD *)v63 + 2] + 168LL * *((_QWORD *)v63 + 1) + 160);
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
          v66 = sub_47E540(v166, v66, (unsigned __int64 **)&v164);
        }
        v70 = *(_QWORD *)v63;
        v63 += 16;
        *((_DWORD *)v66 + 10) |= 1 << v70;
        if ( v64 == v63 )
        {
          v93 = (__int64)v167;
          while ( (_BYTE *)v93 != &v166[8] )
          {
            v94 = *(_DWORD *)(v93 + 40);
            v95 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v93 + 32));
            v93 = std::_Rb_tree_increment();
            if ( v95 != v94 )
            {
              v96 = (void *)std::_Rb_tree_rebalance_for_erase();
              operator delete(v96, 0x30u);
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
              v97 = *(_QWORD *)(a1[3 * *(_QWORD *)v74 + 2] + 168LL * *((_QWORD *)v74 + 1) + 160);
              v98 = *(_QWORD **)&v166[16];
              if ( !*(_QWORD *)&v166[16] )
                goto LABEL_104;
              v99 = &v166[8];
              do
              {
                if ( v98[4] >= v97 )
                {
                  v99 = v98;
                  v98 = (_QWORD *)v98[2];
                }
                else
                {
                  v98 = (_QWORD *)v98[3];
                }
              }
              while ( v98 );
              v71 = v74 + 16;
              if ( v99 != &v166[8] && v97 >= *((_QWORD *)v99 + 4) )
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
      v81 = a1[3 * v77 + 2] + 168 * v78;
      *(_QWORD *)&v163 = v163 - 1;
      v82 = *(_QWORD *)(v81 + 160);
      if ( v80 )
      {
        v83 = 0;
        v84 = *(_DWORD *)(a1[11] + 4 * v82);
        do
        {
          v85 = -1;
          if ( (v84 & (1 << v83)) != 0 )
            v85 = v82;
          *(&v183 + v83++) = v85;
        }
        while ( v83 != v80 );
      }
      if ( 16 * v38 )
      {
        do
        {
          v88 = *v79;
          v89 = a1[3 * *v79 + 2] + 168 * v79[1];
          v90 = *(_QWORD *)(v89 + 160);
          if ( *(&v183 + *v79) == -1 )
          {
            v91 = a1[11];
            *(&v183 + v88) = v90;
            *(_DWORD *)(v91 + 4 * v90) &= ~(1 << v88);
            if ( !*(_DWORD *)(a1[11] + 4 * v90) )
              ++a1[14];
            *(_QWORD *)(v89 + 160) = v82;
            *(_DWORD *)(4 * v82 + a1[11]) |= 1 << *v79;
            v87 = v79 + 2;
            v63 = (char *)ptr;
            v38 = v163;
            if ( v82 == *(_QWORD *)(v89 + 160) )
            {
LABEL_125:
              if ( ((&v63[16 * v38] - (char *)v79) >> 4) - 2 >= 0 )
              {
                v92 = (__int64 *)memmove(v79, v87, &v63[16 * v38] - (char *)v79 - 16);
                v63 = (char *)ptr;
                v79 = v92;
                v38 = v163;
              }
              *(_QWORD *)&v163 = --v38;
              continue;
            }
          }
          else
          {
            v86 = v82 == v90;
            v87 = v79 + 2;
            v38 = v163;
            if ( v86 )
              goto LABEL_125;
          }
          v79 = (__int64 *)v87;
        }
        while ( v79 != (__int64 *)&v63[16 * v38] );
      }
LABEL_108:
      if ( v38 )
        continue;
      break;
    }
    sub_480090(*(_QWORD **)&v166[16]);
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
  sub_374250((__int64)&v189);
  if ( v186.m128i_i64[0] )
    operator delete((void *)v186.m128i_i64[0], v187 - v186.m128i_i64[0]);
  sub_374250((__int64)v174);
  sub_374250((__int64)v172);
  sub_374250((__int64)v170);
  return v191 - __readfsqword(0x28u);
}

