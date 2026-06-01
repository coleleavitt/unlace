unsigned __int64 __fastcall sub_2F5140(_QWORD *a1, const __m128i *a2, char a3)
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
  int v76; // r15d
  int v77; // r14d
  void *v78; // rax
  __int64 *v79; // r14
  __int64 v80; // r10
  __int64 *v81; // rsi
  __int64 v82; // r10
  __int64 v83; // rax
  __int64 v84; // r13
  __int64 v85; // r12
  __int64 *v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // rdx
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
  __int64 v100; // r13
  __int64 *v101; // r14
  __int64 *v102; // rdi
  _DWORD *v103; // rdx
  int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // r12
  __int64 v108; // rax
  char *v109; // rbx
  char *v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rbp
  const char *v113; // r13
  __int64 v114; // rbx
  const char *v115; // rax
  __int64 v116; // rbp
  __int64 v117; // rbx
  __m128i v118; // xmm0
  __m128i v119; // xmm0
  int v120; // ecx
  signed __int64 v121; // rax
  signed __int64 v122; // rsi
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // r13
  __int64 v125; // rax
  __m128i *v126; // rcx
  char *v127; // r8
  unsigned __int64 *v128; // rdx
  const __m128i *v129; // rsi
  __int64 v130; // rdx
  __m128i v131; // xmm0
  void *v132; // r14
  __m128i *v133; // r13
  __int64 v134; // r14
  const __m128i *v135; // rdi
  __int64 v136; // rax
  __m128i *v137; // rdx
  __m128i v138; // xmm0
  __int64 v139; // [rsp+0h] [rbp-268h]
  __int64 v140; // [rsp+8h] [rbp-260h]
  _QWORD *v142; // [rsp+10h] [rbp-258h]
  void *v143; // [rsp+18h] [rbp-250h]
  void *v144; // [rsp+18h] [rbp-250h]
  __int64 v145; // [rsp+18h] [rbp-250h]
  char *v146; // [rsp+18h] [rbp-250h]
  __int64 v147; // [rsp+18h] [rbp-250h]
  const __m128i *v148; // [rsp+18h] [rbp-250h]
  char *v149; // [rsp+18h] [rbp-250h]
  __m128i *v151; // [rsp+30h] [rbp-238h]
  void *v152; // [rsp+30h] [rbp-238h]
  void *v153; // [rsp+30h] [rbp-238h]
  __m128i *v154; // [rsp+30h] [rbp-238h]
  const __m128i *v155; // [rsp+30h] [rbp-238h]
  char *v156; // [rsp+30h] [rbp-238h]
  unsigned __int64 v157; // [rsp+38h] [rbp-230h]
  signed __int64 v158; // [rsp+38h] [rbp-230h]
  signed __int64 v159; // [rsp+38h] [rbp-230h]
  unsigned __int64 v160; // [rsp+40h] [rbp-228h]
  const __m128i *v161; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v163; // [rsp+68h] [rbp-200h]
  __int64 v164; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v165; // [rsp+88h] [rbp-1E0h]
  __int128 v166; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v167; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v168; // [rsp+B8h] [rbp-1B0h]
  char *v169; // [rsp+C0h] [rbp-1A8h]
  __int64 v170; // [rsp+C8h] [rbp-1A0h]
  __m128i v171[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v172; // [rsp+F0h] [rbp-178h]
  __m128i v173[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v174; // [rsp+120h] [rbp-148h]
  _BYTE v175[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v176; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v177)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v178; // [rsp+150h] [rbp-118h] BYREF
  __m128i v179; // [rsp+158h] [rbp-110h] BYREF
  __m128i v180; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v181; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v182; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v183; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v184; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v185; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v186; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v187[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *v188; // [rsp+1F0h] [rbp-78h]
  _QWORD *v189; // [rsp+1F8h] [rbp-70h]
  __m128i v190; // [rsp+200h] [rbp-68h] BYREF
  __m128i v191; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v192; // [rsp+228h] [rbp-40h]

  v192 = __readfsqword(0x28u);
  sub_2CE1F0((__int64)v171, a2);
  v172 = a1;
  sub_2CE1F0((__int64)v173, a2);
  v174 = a1;
  sub_2CE1F0((__int64)v175, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2CE1F0((__int64)&v178, v171);
    v6 = *v5;
    v7 = 272 * v5[1];
    v143 = (void *)(*v5 + v7);
    sub_2CE1F0((__int64)&v181, (const __m128i *)&v178);
    sub_2CE1F0((__int64)v187, (const __m128i *)&v181);
    sub_2CE1F0((__int64)&v184, (const __m128i *)v187);
    sub_66C50((__int64)v187);
    if ( v143 != (void *)v6 )
    {
      sub_2CE1F0((__int64)v187, (const __m128i *)&v184);
      v8 = -2;
      v9 = 0xF0F0F0F0F0F0F0F1LL * (v7 >> 4);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2F4E70(v6, (__int64)v143, v8, (const __m128i *)v187);
      sub_66C50((__int64)v187);
      sub_2CE1F0((__int64)v187, (const __m128i *)&v184);
      sub_2DF670(v6, (__int64)v143, (const __m128i *)v187);
      sub_66C50((__int64)v187);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v184);
    sub_66C50((__int64)&v181);
    sub_66C50((__int64)&v178);
  }
  v167 = nullptr;
  v188 = nullptr;
  v189 = v172;
  v166 = 0;
  *(_OWORD *)v187 = 0;
  sub_2CE1F0((__int64)&v190, v173);
  v178 = v189;
  sub_2CE1F0((__int64)&v179, &v190);
  v11 = v187[1];
  v12 = v187[0];
  v184 = v178;
  sub_2CE1F0((__int64)&v185, &v179);
  v181 = v184;
  sub_2CE1F0((__int64)&v182, &v185);
  v13 = v11 - v12;
  sub_66C50((__int64)&v185);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v186 = 0u;
      v185 = 0;
      v184 = v181;
      if ( v183.m128i_i64[0] )
      {
        v144 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v183.m128i_i64[0])(&v185, &v182, 2);
        v17 = (unsigned __int64)v144;
        v186 = _mm_loadu_si128(&v183);
      }
      sub_2DAF80((__int64)v12, i, v14, v16, v17, (__int64)&v184);
      if ( v186.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128i_i64[0])(&v185, &v185, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_66C50((__int64)&v182);
  sub_66C50((__int64)&v179);
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
      v20 = (const __m128i *)v187[1];
      if ( v187[1] == v188 )
      {
        v121 = ((char *)v187[1] - (char *)v187[0]) >> 4;
        if ( v121 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v122 = 1;
        if ( v121 )
          v122 = ((char *)v187[1] - (char *)v187[0]) >> 4;
        v57 = __CFADD__(v122, v121);
        v123 = v122 + v121;
        if ( v57 )
        {
          v124 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v123 > 0x7FFFFFFFFFFFFFFLL )
            v123 = 0x7FFFFFFFFFFFFFFLL;
          v124 = 16 * v123;
        }
        v159 = (char *)v187[1] - (char *)v187[0];
        v148 = (const __m128i *)v187[0];
        v125 = operator new(v124);
        v126 = (__m128i *)v148;
        v127 = (char *)v125;
        v128 = (unsigned __int64 *)(v125 + v159);
        *v128 = v18;
        v128[1] = 0;
        if ( v20 != v148 )
        {
          v129 = v148;
          v130 = v125 + (char *)v20 - (char *)v148;
          do
          {
            v131 = _mm_loadu_si128(v129);
            v125 += 16;
            ++v129;
            *(__m128i *)(v125 - 16) = v131;
          }
          while ( v125 != v130 );
        }
        v132 = (void *)(v125 + 16);
        if ( v148 )
        {
          v149 = v127;
          operator delete(v126, v188 - (char *)v126);
          v127 = v149;
        }
        v187[0] = v127;
        v187[1] = v132;
        v188 = &v127[v124];
      }
      else
      {
        *(_QWORD *)v187[1] = v18;
        v20->m128i_i64[1] = 0;
        v187[1] = (char *)v187[1] + 16;
      }
      v178 = v189;
      sub_2CE1F0((__int64)&v179, &v190);
      v21 = v187[1];
      v22 = v187[0];
      v184 = v178;
      sub_2CE1F0((__int64)&v185, &v179);
      v181 = v184;
      sub_2CE1F0((__int64)&v182, &v185);
      sub_66C50((__int64)&v185);
      sub_2DAE30((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v181);
      ++v18;
      sub_66C50((__int64)&v182);
      sub_66C50((__int64)&v179);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v163 = 0;
    if ( v19 )
    {
      v133 = (__m128i *)qvector_reserve((__int64)&dest, 0, v19, 16);
      v134 = *((_QWORD *)&v163 + 1);
      *((_QWORD *)&v163 + 1) = 0;
      v135 = (const __m128i *)dest;
      v136 = v163 - 1;
      if ( (__int64)v163 - 1 >= 0 )
      {
        v137 = v133;
        do
        {
          v138 = _mm_loadu_si128(v135);
          ++v137;
          ++v135;
          v137[-1] = v138;
          v57 = v136-- == 0;
        }
        while ( !v57 );
        v135 = (const __m128i *)dest;
      }
      qfree((__int64)v135);
      dest = v133;
      *((_QWORD *)&v163 + 1) = v134;
    }
  }
  else
  {
    dest = nullptr;
    v163 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_383060(1961);
    goto LABEL_181;
  }
  v23 = (__int64 *)v187[0];
  if ( v187[0] == v187[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v163 = 0;
    v24 = v23[1];
    v25 = *v23;
    v145 = 3 * *v23;
    v26 = 272 * v24;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v28 = *(_QWORD *)(a1[3 * v25 + 2] + 272 * v24 + 264);
      if ( v28 < 0 )
      {
        if ( !under_debugger )
          sub_383060(2170);
        goto LABEL_181;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v28) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v29 = v163;
        if ( *((_QWORD *)&v163 + 1) < (unsigned __int64)(v163 + 1) )
        {
          v152 = *((void **)&v163 + 1);
          v30 = (__m128i *)qvector_reserve((__int64)&dest, 0, v163 + 1, 16);
          v52 = *((void **)&v163 + 1);
          v53 = (const __m128i *)dest;
          *((_QWORD *)&v163 + 1) = v152;
          v54 = v163 - 1;
          if ( (__int64)v163 - 1 >= 0 )
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
          qfree((__int64)v53);
          v29 = v163;
          dest = v30;
          *((_QWORD *)&v163 + 1) = v153;
        }
        else
        {
          v30 = (__m128i *)dest;
        }
        m128i_i8 = v30[v29].m128i_i8;
        *(_QWORD *)m128i_i8 = v25;
        *((_QWORD *)m128i_i8 + 1) = v24;
        *(_QWORD *)&v163 = v163 + 1;
      }
      v32 = (const __m128i *)v187[0];
      v33 = *(_QWORD *)v187[0];
      v34 = *((_QWORD *)v187[0] + 1);
      v178 = v189;
      v180 = 0u;
      v179 = 0;
      if ( !v191.m128i_i64[0] )
      {
        v35 = (__m128i *)v187[1];
        if ( (char *)v187[1] - (char *)v187[0] <= 16 )
          goto LABEL_40;
        v48 = v189;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v191.m128i_i64[0])(&v179, &v190, 2);
      v35 = (__m128i *)v187[1];
      v32 = (const __m128i *)v187[0];
      v36 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v191.m128i_i64[0];
      v180 = _mm_load_si128(&v191);
      if ( (char *)v187[1] - (char *)v187[0] > 16 )
      {
        v48 = v178;
        v186 = 0u;
        v184 = v178;
        v185 = 0;
        if ( v191.m128i_i64[0] )
        {
          v154 = (__m128i *)v187[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v191.m128i_i64[0])(&v185, &v179, 2);
          v58 = _mm_loadu_si128(&v180);
          v183 = 0u;
          v35 = v154;
          v186 = v58;
          v181 = v184;
          v182 = 0;
          if ( v180.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v180.m128i_i64[0])(&v182, &v185, 2);
            v59 = _mm_loadu_si128(&v186);
            v35 = v154;
            v183 = v59;
            if ( v59.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v59.m128i_i64[0])(&v185, &v185, 3);
              v35 = v154;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v181 = v48;
        v183 = 0u;
        v182 = 0;
LABEL_64:
        v49 = v35[-1].m128i_u64[0];
        v50 = v35 - 1;
        v51 = v35[-1].m128i_u64[1];
        v35[-1] = _mm_loadu_si128(v32);
        v186 = 0u;
        v184 = v181;
        v185 = 0;
        if ( v183.m128i_i64[0] )
        {
          v160 = v51;
          v157 = v49;
          v151 = v35 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v183.m128i_i64[0])(&v185, &v182, 2);
          v51 = v160;
          v49 = v157;
          v50 = v151;
          v186 = _mm_loadu_si128(&v183);
        }
        sub_2DAF80((__int64)v32, 0, v50 - v32, v49, v51, (__int64)&v184);
        if ( v186.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128i_i64[0])(&v185, &v185, 3);
        if ( v183.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v183.m128i_i64[0])(&v182, &v182, 3);
        v36 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0];
      }
      if ( v36 )
        v36(&v179, &v179, 3);
LABEL_40:
      v37 = (__m128i *)v187[1];
      v38 = v34 + 1;
      v39 = (const __m128i *)((char *)v187[1] - 16);
      v187[1] = (char *)v187[1] - 16;
      if ( v38 >= a1[3 * v33 + 3] )
      {
        v27 = (__int64 *)v187[0];
        if ( v187[0] == v39 )
          break;
        goto LABEL_28;
      }
      if ( v39 == (const __m128i *)v188 )
      {
        v60 = ((char *)v39 - (char *)v187[0]) >> 4;
        if ( v60 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v61 = 1;
        if ( v60 )
          v61 = ((char *)v39 - (char *)v187[0]) >> 4;
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
        v161 = v39;
        v158 = (char *)v39 - (char *)v187[0];
        v155 = (const __m128i *)v187[0];
        v64 = (__m128i *)operator new(v63 * 16);
        v65 = (__m128i *)v155;
        *(__m128i *)((char *)v64 + v158) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v38);
        if ( v161 == v155 )
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
          while ( v161 != v67 );
          v69 = &v64->m128i_i8[(char *)v161 - (char *)v155];
        }
        v70 = v69 + 16;
        if ( v155 )
        {
          v156 = (char *)v64;
          operator delete(v65, v188 - (char *)v65);
          v64 = (__m128i *)v156;
        }
        v187[0] = v64;
        v187[1] = v70;
        v188 = v64[v63].m128i_i8;
      }
      else
      {
        v37[-1] = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v38);
        v187[1] = (char *)v187[1] + 16;
      }
      v40 = v189;
      v180 = 0u;
      v178 = v189;
      v179 = 0;
      if ( !v191.m128i_i64[0] )
      {
        v42 = v187[1];
        v43 = v187[0];
LABEL_81:
        v181 = v40;
        v183 = 0u;
        v182 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v191.m128i_i64[0])(&v179, &v190, 2);
      v40 = v178;
      v41 = _mm_load_si128(&v191);
      v186 = 0u;
      v42 = v187[1];
      v180 = v41;
      v43 = v187[0];
      v184 = v178;
      v185 = 0;
      if ( !v191.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v191.m128i_i64[0])(&v185, &v179, 2);
      v44 = _mm_loadu_si128(&v180);
      v183 = 0u;
      v186 = v44;
      v181 = v184;
      v182 = 0;
      if ( v180.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v180.m128i_i64[0])(&v182, &v185, 2);
        v45 = _mm_loadu_si128(&v186);
        v183 = v45;
        if ( v45.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v45.m128i_i64[0])(&v185, &v185, 3);
      }
LABEL_48:
      sub_2DAE30((__int64)v43, ((v42 - v43) >> 4) - 1, 0, *((_QWORD *)v42 - 2), *((_QWORD *)v42 - 1), (__int64)&v181);
      if ( v183.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v183.m128i_i64[0])(&v182, &v182, 3);
      if ( v180.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0])(&v179, &v179, 3);
      v27 = (__int64 *)v187[0];
      if ( v187[0] == v187[1] )
        break;
LABEL_28:
      v24 = v27[1];
      v25 = *v27;
      if ( !v176 )
        std::__throw_bad_function_call();
    }
    while ( !v177(v175, v174[3 * *v27 + 2] + 272 * v24, v26 + v174[v145 + 2]) );
    if ( a3 )
    {
      v100 = a1[12];
      LODWORD(v166) = 0;
      sub_2CDC90(a1 + 11, (int *)&v166);
      v101 = (__int64 *)dest;
      v102 = (__int64 *)((char *)dest + 16 * v163);
      if ( dest == v102 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v101 + 2] + 272 * v101[1] + 264) = v100;
        v103 = (_DWORD *)(4 * v100 + a1[11]);
        v104 = 1 << *v101;
        if ( (*v103 & v104) != 0 )
          break;
        v101 += 2;
        *v103 |= v104;
        if ( v102 == v101 )
          goto LABEL_55;
      }
      switch_dbctx();
      v106 = *v101;
      v107 = 0;
      v108 = a1[3 * *v101 + 3];
      v140 = v108;
      if ( v108 )
      {
        v147 = 2 * *v101;
        v107 = qalloc_or_throw(272 * v108, v106, v105, v147);
        v116 = v107 + 32;
        v139 = 0;
        v142 = &a1[v106 + v147];
        do
        {
          v117 = v142[2] + v116 + -32 - v107;
          *(_QWORD *)(v116 - 32) = off_4E1460;
          v118 = _mm_loadu_si128((const __m128i *)(v117 + 8));
          *(_QWORD *)(v116 - 8) = *(_QWORD *)(v117 + 24);
          *(__m128i *)(v116 - 24) = v118;
          sub_2B5BF0(v116, v117 + 32);
          *(_DWORD *)(v116 + 80) = *(_DWORD *)(v117 + 112);
          *(_DWORD *)(v116 + 88) = *(_DWORD *)(v117 + 120);
          *(_BYTE *)(v116 + 96) = *(_BYTE *)(v117 + 128);
          v119 = _mm_loadu_si128((const __m128i *)(v117 + 136));
          *(_QWORD *)(v116 + 120) = *(_QWORD *)(v117 + 152);
          *(__m128i *)(v116 + 104) = v119;
          sub_2B5BF0(v116 + 128, v117 + 160);
          ++v139;
          v116 += 272;
          *(_DWORD *)(v116 - 64) = *(_DWORD *)(v117 + 240);
          *(_DWORD *)(v116 - 56) = *(_DWORD *)(v117 + 248);
          v120 = *(_DWORD *)(v117 + 256);
          *(_QWORD *)(v116 - 304) = off_4E2CB0;
          *(_DWORD *)(v116 - 48) = v120;
          *(_QWORD *)(v116 - 40) = *(_QWORD *)(v117 + 264);
        }
        while ( v140 != v139 );
      }
      v109 = (char *)dest;
      v110 = (char *)dest + 16 * v163;
      if ( v110 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v109 == *v101 )
          {
            v111 = *((_QWORD *)v109 + 1);
            v112 = v101[1];
            if ( v111 != v112 && *(_QWORD *)(v107 + 272 * v111 + 264) == v100 )
              break;
          }
          v109 += 16;
          if ( v110 == v109 )
            goto LABEL_151;
        }
        sub_81980((__int64)&v166, (const char *)&unk_418793);
        v113 = s1;
        if ( *((_QWORD *)&v166 + 1) )
          v113 = (const char *)v166;
        v114 = *((_QWORD *)v109 + 1);
        sub_81980((__int64)&v164, (const char *)&unk_418793);
        v115 = s1;
        if ( v165 )
          v115 = (const char *)v164;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v101, v115, v114, v113, v112);
        if ( v164 )
        {
          v165 = 0;
          qfree(v164);
        }
        if ( (_QWORD)v166 )
        {
          *((_QWORD *)&v166 + 1) = 0;
          qfree(v166);
        }
      }
LABEL_151:
      if ( !under_debugger )
        sub_383060(2171);
LABEL_181:
      BUG();
    }
    v46 = v163;
    if ( (unsigned __int64)v163 <= 1 )
      goto LABEL_55;
    v71 = (__int64 *)dest;
    DWORD2(v166) = 0;
    v168 = (__int128 *)((char *)&v166 + 8);
    v167 = nullptr;
    v169 = (char *)&v166 + 8;
    v170 = 0;
    v146 = (char *)dest + 16 * v163;
    if ( v146 != dest )
    {
      v72 = (char *)dest;
      do
      {
        v164 = *(_QWORD *)(a1[3 * *(_QWORD *)v72 + 2] + 272LL * *((_QWORD *)v72 + 1) + 264);
        v73 = sub_2CDD40(&v166, (unsigned __int64 *)&v164);
        v74 = *(_QWORD *)v72;
        v72 += 16;
        *(_DWORD *)v73 |= 1 << v74;
      }
      while ( v146 != v72 );
      if ( v168 != (__int128 *)((char *)&v166 + 8) )
      {
        v75 = (__int64)v168;
        do
        {
          v76 = *(_DWORD *)(v75 + 40);
          v77 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v75 + 32));
          v75 = std::_Rb_tree_increment();
          if ( v77 != v76 )
          {
            v78 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v78, 0x30u);
            --v170;
          }
        }
        while ( (__int128 *)v75 != (__int128 *)((char *)&v166 + 8) );
      }
      v46 = v163;
      v71 = (__int64 *)dest;
      v79 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v163 != dest )
      {
        do
        {
          while ( 1 )
          {
            v81 = v79 + 2;
            if ( (_QWORD *)((char *)&v166 + 8) == sub_2AE200(
                                                    (__int64)&v166,
                                                    *(_QWORD *)(a1[3 * *v79 + 2] + 272 * v79[1] + 264)) )
              break;
            v46 = v163;
            v79 += 2;
            if ( v81 == &v71[2 * (_QWORD)v163] )
              goto LABEL_111;
          }
          v82 = v80 - (_QWORD)v79;
          if ( (v82 >> 4) - 2 >= 0 )
          {
            memmove(v79, v81, v82 - 16);
            v71 = (__int64 *)dest;
          }
          *(_QWORD *)&v163 = v163 - 1;
          v46 = v163;
        }
        while ( v79 != &v71[2 * (_QWORD)v163] );
      }
      goto LABEL_111;
    }
    while ( 2 )
    {
      v83 = 16 * v46;
      v84 = *v71;
      v85 = v71[1];
      v86 = v71;
      if ( (v83 >> 4) - 2 >= 0 )
      {
        memmove(v71, v71 + 2, v83 - 16);
        v71 = (__int64 *)dest;
        v86 = (__int64 *)dest;
      }
      v87 = a1[1];
      v46 = v163 - 1;
      v88 = a1[3 * v84 + 2] + 272 * v85;
      *(_QWORD *)&v163 = v163 - 1;
      v89 = *(_QWORD *)(v88 + 264);
      if ( v87 )
      {
        v90 = 0;
        v91 = *(_DWORD *)(a1[11] + 4 * v89);
        do
        {
          v92 = -1;
          if ( (v91 & (1 << v90)) != 0 )
            v92 = v89;
          (&v184)[v90++] = (_QWORD *)v92;
        }
        while ( v90 != v87 );
      }
      if ( 16 * v46 )
      {
        do
        {
          v94 = *v86;
          v95 = a1[3 * *v86 + 2] + 272 * v86[1];
          v96 = *(_QWORD *)(v95 + 264);
          if ( (&v184)[*v86] == (_QWORD *)-1LL )
          {
            v97 = a1[11];
            (&v184)[v94] = (_QWORD *)v96;
            *(_DWORD *)(v97 + 4 * v96) &= ~(1 << v94);
            if ( !*(_DWORD *)(a1[11] + 4 * v96) )
              ++a1[14];
            *(_QWORD *)(v95 + 264) = v89;
            *(_DWORD *)(4 * v89 + a1[11]) |= 1 << *v86;
            v98 = *(_QWORD *)(v95 + 264);
            v93 = v86 + 2;
            v71 = (__int64 *)dest;
            v46 = v163;
            if ( v89 == v98 )
            {
LABEL_128:
              if ( (((char *)&v71[2 * v46] - (char *)v86) >> 4) - 2 >= 0 )
              {
                v99 = (__int64 *)memmove(v86, v93, (char *)&v71[2 * v46] - (char *)v86 - 16);
                v71 = (__int64 *)dest;
                v86 = v99;
                v46 = v163;
              }
              *(_QWORD *)&v163 = --v46;
              continue;
            }
          }
          else
          {
            v46 = v163;
            v93 = v86 + 2;
            if ( v89 == v96 )
              goto LABEL_128;
          }
          v86 = (__int64 *)v93;
        }
        while ( v86 != &v71[2 * v46] );
      }
LABEL_111:
      if ( v46 )
        continue;
      break;
    }
    sub_2AE260((void **)v167);
LABEL_55:
    v23 = (__int64 *)v187[0];
  }
  while ( v187[1] != v187[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v163 = 0;
    qfree((__int64)dest);
  }
  sub_66C50((__int64)&v190);
  if ( v187[0] )
    operator delete(v187[0], v188 - (char *)v187[0]);
  sub_66C50((__int64)v175);
  sub_66C50((__int64)v173);
  sub_66C50((__int64)v171);
  return v192 - __readfsqword(0x28u);
}
