unsigned __int64 __fastcall sub_4994E0(_QWORD *a1, const __m128i *a2, char a3)
{
  unsigned __int64 v4; // r13
  __int64 **v5; // r14
  __int64 v6; // r12
  __int64 *v7; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  __m128i *v11; // r14
  _BYTE *v12; // r15
  _BYTE *v13; // r12
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 i; // rbp
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rdx
  const __m128i *v21; // r12
  _BYTE *v22; // rbp
  _BYTE *v23; // r12
  __int64 *v24; // rax
  __int64 v25; // r12
  __int64 v26; // rbp
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __m128i *v30; // r15
  char *m128i_i8; // rax
  const __m128i *v32; // r15
  unsigned __int64 v33; // r12
  __int64 v34; // rbp
  __m128i *v35; // rcx
  void (__fastcall *v36)(__m128i *, __m128i *, __int64); // rax
  __m128i *v37; // rax
  unsigned __int64 v38; // rsi
  const __m128i *v39; // rdx
  _QWORD *v40; // rax
  __m128i v41; // xmm0
  _BYTE *v42; // r12
  _BYTE *v43; // rbp
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __int64 v46; // rax
  _QWORD *v48; // rdx
  unsigned __int64 v49; // r11
  __m128i *v50; // r9
  unsigned __int64 v51; // r8
  __int64 v52; // rsi
  __m128i *v53; // rdi
  __int64 v54; // rax
  __m128i *v55; // rdx
  __m128i v56; // xmm0
  bool v57; // cf
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  __int64 v60; // rbp
  __int64 v61; // rax
  unsigned __int64 v62; // rbp
  unsigned __int64 v63; // rbp
  __int64 v64; // rax
  char *v65; // r15
  __int64 v66; // rdi
  const __m128i *v67; // rsi
  __m128i v68; // xmm0
  __int64 v69; // r12
  void *v70; // r12
  __int64 *v71; // r8
  char *v72; // rbp
  char *v73; // r12
  _QWORD *j; // rax
  _QWORD *v75; // rsi
  unsigned __int64 v76; // rdi
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  const void *v80; // rsi
  __int64 v81; // rcx
  char *v82; // rax
  char *v83; // rdi
  char *v84; // rcx
  __int64 v85; // rax
  __int64 v86; // r12
  __int64 v87; // rbp
  __int64 *v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // r12
  __int64 v91; // rcx
  int v92; // r11d
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 *v98; // rax
  __int64 v99; // rbp
  int v100; // r14d
  int v101; // r12d
  void *v102; // rax
  unsigned __int64 v103; // r9
  _QWORD *v104; // rax
  _BYTE *v105; // r10
  __int64 v106; // r8
  unsigned __int64 v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rax
  __int64 v110; // rdi
  char *v111; // rdx
  char *v112; // rdi
  char *v113; // r12
  _DWORD *v114; // rdx
  int v115; // eax
  const char *v116; // rsi
  __int64 v117; // rbp
  __int64 v118; // r8
  __int64 v119; // rax
  char *v120; // rbx
  char *v121; // rcx
  __int64 v122; // rax
  __int64 v123; // r15
  __int64 v124; // rbx
  __int64 v125; // r13
  __int64 v126; // r15
  __int64 v127; // r14
  __int64 v128; // rbx
  signed __int64 v129; // rax
  signed __int64 v130; // rsi
  unsigned __int64 v131; // rax
  unsigned __int64 v132; // rbp
  __int64 v133; // rax
  __m128i *v134; // rcx
  char *v135; // r8
  char *v136; // rdx
  const __m128i *v137; // rsi
  __int64 v138; // rdx
  __m128i v139; // xmm0
  void *v140; // r12
  __int64 v141; // rax
  __m128i *v142; // rbp
  __int64 v143; // r12
  __m128i *v144; // rdi
  __int64 v145; // rax
  __m128i *v146; // rdx
  __m128i v147; // xmm0
  __int64 v148; // [rsp+8h] [rbp-280h]
  __int64 v149; // [rsp+8h] [rbp-280h]
  __int64 v151; // [rsp+10h] [rbp-278h]
  unsigned __int64 v152; // [rsp+18h] [rbp-270h]
  __int64 v153; // [rsp+18h] [rbp-270h]
  __m128i *v154; // [rsp+18h] [rbp-270h]
  __int64 v155; // [rsp+18h] [rbp-270h]
  _QWORD *v156; // [rsp+18h] [rbp-270h]
  __int64 v157; // [rsp+18h] [rbp-270h]
  __int64 *v158; // [rsp+20h] [rbp-268h]
  void *v159; // [rsp+20h] [rbp-268h]
  __int64 v160; // [rsp+20h] [rbp-268h]
  const __m128i *v161; // [rsp+20h] [rbp-268h]
  char *v162; // [rsp+20h] [rbp-268h]
  __m128i *v164; // [rsp+38h] [rbp-250h]
  __int64 v165; // [rsp+38h] [rbp-250h]
  __m128i *v166; // [rsp+38h] [rbp-250h]
  void *v167; // [rsp+40h] [rbp-248h]
  __m128i *v168; // [rsp+40h] [rbp-248h]
  char *v169; // [rsp+40h] [rbp-248h]
  unsigned __int64 v170; // [rsp+48h] [rbp-240h]
  signed __int64 v171; // [rsp+48h] [rbp-240h]
  const __m128i *v172; // [rsp+58h] [rbp-230h]
  unsigned __int64 v173; // [rsp+78h] [rbp-210h] BYREF
  void *ptr; // [rsp+80h] [rbp-208h] BYREF
  __int128 v175; // [rsp+88h] [rbp-200h]
  void *v176; // [rsp+A0h] [rbp-1E8h] BYREF
  __int128 v177; // [rsp+A8h] [rbp-1E0h]
  _BYTE dest[24]; // [rsp+C0h] [rbp-1C8h] BYREF
  _BYTE *v179; // [rsp+D8h] [rbp-1B0h]
  _BYTE *v180; // [rsp+E0h] [rbp-1A8h]
  __int64 v181; // [rsp+E8h] [rbp-1A0h]
  __m128i v182[2]; // [rsp+F0h] [rbp-198h] BYREF
  _QWORD *v183; // [rsp+110h] [rbp-178h]
  __m128i v184[2]; // [rsp+118h] [rbp-170h] BYREF
  _QWORD *v185; // [rsp+140h] [rbp-148h]
  _BYTE v186[16]; // [rsp+148h] [rbp-140h] BYREF
  __int64 v187; // [rsp+158h] [rbp-130h]
  unsigned int (__fastcall *v188)(_BYTE *, __int64, __int64); // [rsp+160h] [rbp-128h]
  _QWORD *v189; // [rsp+170h] [rbp-118h] BYREF
  __m128i v190; // [rsp+178h] [rbp-110h] BYREF
  __m128i v191; // [rsp+188h] [rbp-100h] BYREF
  _QWORD *v192; // [rsp+1A0h] [rbp-E8h] BYREF
  __int128 v193; // [rsp+1A8h] [rbp-E0h] BYREF
  __m128i v194; // [rsp+1B8h] [rbp-D0h] BYREF
  _QWORD *v195; // [rsp+1D0h] [rbp-B8h] BYREF
  __m128i v196; // [rsp+1D8h] [rbp-B0h] BYREF
  __m128i v197; // [rsp+1E8h] [rbp-A0h] BYREF
  void *v198[2]; // [rsp+200h] [rbp-88h] BYREF
  char *v199; // [rsp+210h] [rbp-78h]
  _QWORD *v200; // [rsp+218h] [rbp-70h]
  __m128i v201; // [rsp+220h] [rbp-68h] BYREF
  __m128i v202; // [rsp+230h] [rbp-58h] BYREF
  unsigned __int64 v203; // [rsp+248h] [rbp-40h]

  v203 = __readfsqword(0x28u);
  sub_48B040((__int64)v182, a2);
  v183 = a1;
  sub_48B040((__int64)v184, a2);
  v185 = a1;
  sub_48B040((__int64)v186, a2);
  v4 = 0;
  v5 = (__int64 **)(a1 + 2);
  while ( v4 < a1[1] )
  {
    switch_dbctx(*(int *)(*a1 + 4 * v4 + 16));
    sub_48B040((__int64)&v189, v182);
    v6 = 53LL * (_QWORD)v5[1];
    v7 = *v5;
    v158 = &(*v5)[v6];
    sub_48B040((__int64)&v192, (const __m128i *)&v189);
    sub_48B040((__int64)v198, (const __m128i *)&v192);
    sub_48B040((__int64)&v195, (const __m128i *)v198);
    sub_374250((__int64)v198);
    if ( v158 != v7 )
    {
      sub_48B040((__int64)v198, (const __m128i *)&v195);
      v8 = -2;
      v9 = 0x21CFB2B78C13521DLL * ((v6 * 8) >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_4987E0(v7, v158, v8, (const __m128i *)v198);
      sub_374250((__int64)v198);
      sub_48B040((__int64)v198, (const __m128i *)&v195);
      sub_4919F0((__int64)v7, (__int64)v158, (const __m128i *)v198);
      sub_374250((__int64)v198);
    }
    ++v4;
    v5 += 3;
    sub_374250((__int64)&v195);
    sub_374250((__int64)&v192);
    sub_374250((__int64)&v189);
  }
  v199 = nullptr;
  v200 = v183;
  memset(dest, 0, sizeof(dest));
  *(_OWORD *)v198 = 0;
  sub_48B040((__int64)&v201, v184);
  v189 = v200;
  sub_48B040((__int64)&v190, &v201);
  v11 = &v196;
  v12 = v198[1];
  v13 = v198[0];
  v195 = v189;
  sub_48B040((__int64)&v196, &v190);
  v192 = v195;
  sub_48B040((__int64)&v193, &v196);
  v14 = v12 - v13;
  sub_374250((__int64)&v196);
  if ( v14 > 16 )
  {
    v15 = v14 >> 4;
    for ( i = (v15 - 2) / 2; ; --i )
    {
      v17 = *(_QWORD *)&v13[16 * i];
      v18 = *(_QWORD *)&v13[16 * i + 8];
      v197 = 0u;
      v196 = 0;
      v195 = v192;
      if ( v194.m128i_i64[0] )
      {
        v159 = (void *)v18;
        v152 = v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v194.m128i_i64[0])(&v196, &v193, 2);
        v18 = (unsigned __int64)v159;
        v17 = v152;
        v197 = _mm_loadu_si128(&v194);
      }
      sub_490250((__int64)v13, i, v15, v17, v18, (__int64)&v195);
      if ( v197.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v197.m128i_i64[0])(&v196, &v196, 3);
      if ( !i )
        break;
    }
  }
  v19 = 0;
  sub_374250((__int64)&v193);
  sub_374250((__int64)&v190);
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
      v21 = (const __m128i *)v198[1];
      if ( v198[1] == v199 )
      {
        v129 = ((char *)v198[1] - (char *)v198[0]) >> 4;
        if ( v129 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v130 = 1;
        if ( v129 )
          v130 = ((char *)v198[1] - (char *)v198[0]) >> 4;
        v57 = __CFADD__(v130, v129);
        v131 = v130 + v129;
        if ( v57 )
        {
          v132 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v131 > 0x7FFFFFFFFFFFFFFLL )
            v131 = 0x7FFFFFFFFFFFFFFLL;
          v132 = 16 * v131;
        }
        v169 = (char *)((char *)v198[1] - (char *)v198[0]);
        v161 = (const __m128i *)v198[0];
        v133 = operator new(v132);
        v134 = (__m128i *)v161;
        v135 = (char *)v133;
        v136 = &v169[v133];
        *(_QWORD *)v136 = v19;
        *((_QWORD *)v136 + 1) = 0;
        if ( v21 != v161 )
        {
          v137 = v161;
          v138 = v133 + (char *)v21 - (char *)v161;
          do
          {
            v139 = _mm_loadu_si128(v137);
            v133 += 16;
            ++v137;
            *(__m128i *)(v133 - 16) = v139;
          }
          while ( v133 != v138 );
        }
        v140 = (void *)(v133 + 16);
        if ( v161 )
        {
          v162 = v135;
          operator delete(v134, v199 - (char *)v134);
          v135 = v162;
        }
        v198[0] = v135;
        v198[1] = v140;
        v199 = &v135[v132];
      }
      else
      {
        *(_QWORD *)v198[1] = v19;
        v21->m128i_i64[1] = 0;
        v198[1] = (char *)v198[1] + 16;
      }
      v189 = v200;
      sub_48B040((__int64)&v190, &v201);
      v22 = v198[1];
      v23 = v198[0];
      v195 = v189;
      sub_48B040((__int64)&v196, &v190);
      v192 = v195;
      sub_48B040((__int64)&v193, &v196);
      sub_374250((__int64)&v196);
      sub_490100((__int64)v23, ((v22 - v23) >> 4) - 1, 0, *((_QWORD *)v22 - 2), *((_QWORD *)v22 - 1), (__int64)&v192);
      ++v19;
      sub_374250((__int64)&v193);
      sub_374250((__int64)&v190);
      v20 = a1[1];
    }
    while ( v19 < v20 );
LABEL_22:
    ptr = nullptr;
    v175 = 0;
    if ( v20 )
    {
      v142 = (__m128i *)qvector_reserve(&ptr, 0, v20, 16);
      v143 = *((_QWORD *)&v175 + 1);
      *((_QWORD *)&v175 + 1) = 0;
      v144 = (__m128i *)ptr;
      v145 = v175 - 1;
      if ( (__int64)v175 - 1 >= 0 )
      {
        v146 = v142;
        do
        {
          v147 = _mm_loadu_si128(v144);
          ++v146;
          ++v144;
          v146[-1] = v147;
          v57 = v145-- == 0;
        }
        while ( !v57 );
        v144 = (__m128i *)ptr;
      }
      qfree(v144);
      ptr = v142;
      *((_QWORD *)&v175 + 1) = v143;
    }
  }
  else
  {
    ptr = nullptr;
    v175 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      interr(1961);
    goto LABEL_194;
  }
  v24 = (__int64 *)v198[0];
  if ( v198[0] == v198[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v175 = 0;
    v25 = v24[1];
    v26 = *v24;
    v153 = 424 * v25;
    v160 = 3 * *v24;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v28 = *(_QWORD *)(a1[3 * v26 + 2] + 424 * v25 + 416);
      if ( v28 < 0 )
      {
        if ( !under_debugger )
          interr(2170);
        goto LABEL_194;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v28) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v29 = v175;
        if ( *((_QWORD *)&v175 + 1) < (unsigned __int64)(v175 + 1) )
        {
          v165 = *((_QWORD *)&v175 + 1);
          v30 = (__m128i *)qvector_reserve(&ptr, 0, v175 + 1, 16);
          v52 = *((_QWORD *)&v175 + 1);
          v53 = (__m128i *)ptr;
          *((_QWORD *)&v175 + 1) = v165;
          v54 = v175 - 1;
          if ( (__int64)v175 - 1 >= 0 )
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
            v53 = (__m128i *)ptr;
          }
          qfree(v53);
          ptr = v30;
          v29 = v175;
          *((_QWORD *)&v175 + 1) = v52;
        }
        else
        {
          v30 = (__m128i *)ptr;
        }
        m128i_i8 = v30[v29].m128i_i8;
        *(_QWORD *)m128i_i8 = v26;
        *((_QWORD *)m128i_i8 + 1) = v25;
        *(_QWORD *)&v175 = v175 + 1;
      }
      v32 = (const __m128i *)v198[0];
      v33 = *(_QWORD *)v198[0];
      v34 = *((_QWORD *)v198[0] + 1);
      v189 = v200;
      v191 = 0u;
      v190 = 0;
      if ( !v202.m128i_i64[0] )
      {
        v35 = (__m128i *)v198[1];
        if ( (char *)v198[1] - (char *)v198[0] <= 16 )
          goto LABEL_40;
        v48 = v200;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v202.m128i_i64[0])(&v190, &v201, 2);
      v35 = (__m128i *)v198[1];
      v32 = (const __m128i *)v198[0];
      v36 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v202.m128i_i64[0];
      v191 = _mm_load_si128(&v202);
      if ( (char *)v198[1] - (char *)v198[0] > 16 )
      {
        v48 = v189;
        v197 = 0u;
        v195 = v189;
        v196 = 0;
        if ( v202.m128i_i64[0] )
        {
          v166 = (__m128i *)v198[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v202.m128i_i64[0])(v11, &v190, 2);
          v58 = _mm_loadu_si128(&v191);
          v194 = 0u;
          v35 = v166;
          v197 = v58;
          v192 = v195;
          v193 = 0;
          if ( v191.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v191.m128i_i64[0])(&v193, v11, 2);
            v59 = _mm_loadu_si128(&v197);
            v35 = v166;
            v194 = v59;
            if ( v59.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v59.m128i_i64[0])(v11, v11, 3);
              v35 = v166;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v192 = v48;
        v194 = 0u;
        v193 = 0;
LABEL_64:
        v49 = v35[-1].m128i_u64[0];
        v50 = v35 - 1;
        v51 = v35[-1].m128i_u64[1];
        v35[-1] = _mm_loadu_si128(v32);
        v197 = 0u;
        v195 = v192;
        v196 = 0;
        if ( v194.m128i_i64[0] )
        {
          v170 = v51;
          v167 = (void *)v49;
          v164 = v35 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v194.m128i_i64[0])(v11, &v193, 2);
          v51 = v170;
          v49 = (unsigned __int64)v167;
          v50 = v164;
          v197 = _mm_loadu_si128(&v194);
        }
        sub_490250((__int64)v32, 0, v50 - v32, v49, v51, (__int64)&v195);
        if ( v197.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v197.m128i_i64[0])(v11, v11, 3);
        if ( v194.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v194.m128i_i64[0])(&v193, &v193, 3);
        v36 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v191.m128i_i64[0];
      }
      if ( v36 )
        v36(&v190, &v190, 3);
LABEL_40:
      v37 = (__m128i *)v198[1];
      v38 = v34 + 1;
      v39 = (const __m128i *)((char *)v198[1] - 16);
      v198[1] = (char *)v198[1] - 16;
      if ( (unsigned __int64)(v34 + 1) >= a1[3 * v33 + 3] )
      {
        v27 = (__int64 *)v198[0];
        if ( v198[0] == v39 )
          break;
        goto LABEL_28;
      }
      if ( v39 == (const __m128i *)v199 )
      {
        v60 = ((char *)v39 - (char *)v198[0]) >> 4;
        if ( v60 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v61 = 1;
        if ( v60 )
          v61 = ((char *)v39 - (char *)v198[0]) >> 4;
        v57 = __CFADD__(v61, v60);
        v62 = v61 + v60;
        if ( v57 )
        {
          v63 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v62 > 0x7FFFFFFFFFFFFFFLL )
            v62 = 0x7FFFFFFFFFFFFFFLL;
          v63 = 16 * v62;
        }
        v172 = v39;
        v171 = (char *)v39 - (char *)v198[0];
        v168 = (__m128i *)v198[0];
        v64 = operator new(v63);
        v65 = (char *)v64;
        *(__m128i *)(v64 + v171) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v38);
        if ( v172 == v168 )
        {
          v69 = v64;
        }
        else
        {
          v66 = v64;
          v67 = v168;
          do
          {
            v68 = _mm_loadu_si128(v67++);
            v66 += 16;
            *(__m128i *)(v66 - 16) = v68;
          }
          while ( v172 != v67 );
          v69 = v64 + (char *)v172 - (char *)v168;
        }
        v70 = (void *)(v69 + 16);
        if ( v168 )
          operator delete(v168, v199 - (char *)v168);
        v198[0] = v65;
        v198[1] = v70;
        v199 = &v65[v63];
      }
      else
      {
        v37[-1] = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v38);
        v198[1] = (char *)v198[1] + 16;
      }
      v40 = v200;
      v191 = 0u;
      v189 = v200;
      v190 = 0;
      if ( !v202.m128i_i64[0] )
      {
        v42 = v198[1];
        v43 = v198[0];
LABEL_81:
        v192 = v40;
        v194 = 0u;
        v193 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v202.m128i_i64[0])(&v190, &v201, 2);
      v40 = v189;
      v41 = _mm_load_si128(&v202);
      v197 = 0u;
      v42 = v198[1];
      v191 = v41;
      v43 = v198[0];
      v195 = v189;
      v196 = 0;
      if ( !v202.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v202.m128i_i64[0])(v11, &v190, 2);
      v44 = _mm_loadu_si128(&v191);
      v194 = 0u;
      v197 = v44;
      v192 = v195;
      v193 = 0;
      if ( v191.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v191.m128i_i64[0])(&v193, v11, 2);
        v45 = _mm_loadu_si128(&v197);
        v194 = v45;
        if ( v45.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v45.m128i_i64[0])(v11, v11, 3);
      }
LABEL_48:
      sub_490100((__int64)v43, ((v42 - v43) >> 4) - 1, 0, *((_QWORD *)v42 - 2), *((_QWORD *)v42 - 1), (__int64)&v192);
      if ( v194.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v194.m128i_i64[0])(&v193, &v193, 3);
      if ( v191.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v191.m128i_i64[0])(&v190, &v190, 3);
      v27 = (__int64 *)v198[0];
      if ( v198[0] == v198[1] )
        break;
LABEL_28:
      v26 = *v27;
      v25 = v27[1];
      if ( !v187 )
        std::__throw_bad_function_call();
    }
    while ( !v188(v186, v185[3 * *v27 + 2] + 424 * v25, v185[v160 + 2] + v153) );
    if ( a3 )
    {
      v106 = a1[12];
      v107 = a1[13];
      *(_DWORD *)dest = 0;
      v108 = a1[11];
      if ( v107 < v106 + 1 )
      {
        v157 = v106;
        v141 = qvector_reserve(a1 + 11, v108, v106 + 1, 4);
        a1[11] = v141;
        v108 = v141;
        v106 = v157;
        v109 = a1[12];
      }
      else
      {
        v109 = v106;
      }
      *(_DWORD *)(v108 + 4 * v109) = 0;
      v110 = v175;
      v111 = (char *)ptr;
      ++a1[12];
      v112 = &v111[16 * v110];
      v113 = v111;
      if ( v111 == v112 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *(_QWORD *)v113 + 2] + 424LL * *((_QWORD *)v113 + 1) + 416) = v106;
        v114 = (_DWORD *)(4 * v106 + a1[11]);
        v115 = 1 << *(_QWORD *)v113;
        if ( (*v114 & v115) != 0 )
          break;
        v113 += 16;
        *v114 |= v115;
        if ( v112 == v113 )
          goto LABEL_55;
      }
      v148 = v106;
      switch_dbctx(*(int *)(*a1 + 4LL * *(_QWORD *)v113 + 16));
      v116 = *(const char **)v113;
      v117 = 0;
      v118 = v148;
      v119 = a1[3 * *(_QWORD *)v113 + 3];
      v151 = v119;
      if ( v119 )
      {
        v155 = 2LL * *(_QWORD *)v113;
        v117 = qalloc_or_throw(424 * v119, v116);
        v125 = v117;
        v118 = v148;
        v126 = 0;
        v127 = 0;
        v156 = &a1[(_QWORD)&v116[v155]];
        do
        {
          v149 = v118;
          v128 = v126 + v156[2];
          sub_488720(v125, v128);
          ++v127;
          v126 += 424;
          v125 += 424;
          v118 = v149;
          *(_QWORD *)(v125 - 8) = *(_QWORD *)(v128 + 416);
        }
        while ( v151 != v127 );
      }
      v120 = (char *)ptr;
      v121 = (char *)ptr + 16 * v175;
      if ( v121 != ptr )
      {
        do
        {
          if ( *(_QWORD *)v120 == *(_QWORD *)v113 )
          {
            v122 = *((_QWORD *)v120 + 1);
            v123 = *((_QWORD *)v113 + 1);
            if ( v122 != v123 && *(_QWORD *)(v117 + 424 * v122 + 416) == v118 )
            {
              memset(dest, 0, sizeof(dest));
              sub_47E730(dest, v117 + 424 * v123 + 152);
              v124 = *((_QWORD *)v120 + 1);
              v176 = nullptr;
              v177 = 0;
              sub_47E730(&v176, v117 + 424 * v124 + 152);
              sub_365330();
            }
          }
          v120 += 16;
        }
        while ( v121 != v120 );
      }
      if ( !under_debugger )
        interr(2171);
LABEL_194:
      BUG();
    }
    v46 = v175;
    if ( (unsigned __int64)v175 > 1 )
    {
      v71 = (__int64 *)ptr;
      *(_DWORD *)&dest[8] = 0;
      v179 = &dest[8];
      v72 = (char *)ptr + 16 * v175;
      *(_QWORD *)&dest[16] = 0;
      v180 = &dest[8];
      v181 = 0;
      if ( v72 != ptr )
      {
        v73 = (char *)ptr;
        for ( j = nullptr; ; j = *(_QWORD **)&dest[16] )
        {
          v75 = &dest[8];
          v76 = *(_QWORD *)(a1[3 * *(_QWORD *)v73 + 2] + 424LL * *((_QWORD *)v73 + 1) + 416);
          v173 = v76;
          if ( !j )
            goto LABEL_105;
          do
          {
            while ( 1 )
            {
              v77 = j[2];
              v78 = j[3];
              if ( j[4] < v76 )
                break;
              v75 = j;
              j = (_QWORD *)j[2];
              if ( !v77 )
                goto LABEL_103;
            }
            j = (_QWORD *)j[3];
          }
          while ( v78 );
LABEL_103:
          if ( v75 == (_QWORD *)&dest[8] || v76 < v75[4] )
          {
LABEL_105:
            v176 = &v173;
            v75 = sub_47E540(dest, v75, (unsigned __int64 **)&v176);
          }
          v79 = *(_QWORD *)v73;
          v73 += 16;
          *((_DWORD *)v75 + 10) |= 1 << v79;
          if ( v72 == v73 )
          {
            if ( v179 != &dest[8] )
            {
              v154 = v11;
              v99 = (__int64)v179;
              do
              {
                v100 = *(_DWORD *)(v99 + 40);
                v101 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v99 + 32));
                v99 = std::_Rb_tree_increment();
                if ( v101 != v100 )
                {
                  v102 = (void *)std::_Rb_tree_rebalance_for_erase();
                  operator delete(v102, 0x30u);
                  --v181;
                }
              }
              while ( (_BYTE *)v99 != &dest[8] );
              v11 = v154;
            }
            v46 = v175;
            v71 = (__int64 *)ptr;
            v83 = (char *)ptr;
            v84 = (char *)ptr + 16 * v175;
            if ( v84 != ptr )
            {
              do
              {
                v80 = v83 + 16;
                v103 = *(_QWORD *)(a1[3 * *(_QWORD *)v83 + 2] + 424LL * *((_QWORD *)v83 + 1) + 416);
                v104 = *(_QWORD **)&dest[16];
                if ( !*(_QWORD *)&dest[16] )
                  goto LABEL_110;
                v105 = &dest[8];
                do
                {
                  if ( v104[4] >= v103 )
                  {
                    v105 = v104;
                    v104 = (_QWORD *)v104[2];
                  }
                  else
                  {
                    v104 = (_QWORD *)v104[3];
                  }
                }
                while ( v104 );
                v80 = v83 + 16;
                if ( v105 != &dest[8] && v103 >= *((_QWORD *)v105 + 4) )
                {
                  v46 = v175;
                  v83 += 16;
                }
                else
                {
LABEL_110:
                  v81 = v84 - v83;
                  if ( (v81 >> 4) - 2 >= 0 )
                  {
                    v82 = (char *)memmove(v83, v80, v81 - 16);
                    v71 = (__int64 *)ptr;
                    v83 = v82;
                  }
                  v46 = v175 - 1;
                  *(_QWORD *)&v175 = v175 - 1;
                }
                v84 = (char *)&v71[2 * v46];
              }
              while ( v84 != v83 );
            }
            goto LABEL_114;
          }
        }
      }
      do
      {
        v85 = 16 * v46;
        v86 = *v71;
        v87 = v71[1];
        v88 = v71;
        if ( (v85 >> 4) - 2 >= 0 )
        {
          memmove(v71, v71 + 2, v85 - 16);
          v71 = (__int64 *)ptr;
          v88 = (__int64 *)ptr;
        }
        v89 = a1[1];
        v46 = v175 - 1;
        v90 = *(_QWORD *)(a1[3 * v86 + 2] + 424 * v87 + 416);
        *(_QWORD *)&v175 = v175 - 1;
        if ( v89 )
        {
          v91 = 0;
          v92 = *(_DWORD *)(a1[11] + 4 * v90);
          do
          {
            v93 = -1;
            if ( (v92 & (1 << v91)) != 0 )
              v93 = v90;
            (&v195)[v91++] = (_QWORD *)v93;
          }
          while ( v89 != v91 );
        }
        if ( 16 * v46 )
        {
          do
          {
            v94 = *v88;
            v95 = a1[3 * *v88 + 2] + 424 * v88[1];
            v96 = *(_QWORD *)(v95 + 416);
            if ( (&v195)[*v88] == (_QWORD *)-1LL )
            {
              v97 = a1[11];
              (&v195)[v94] = (_QWORD *)v96;
              *(_DWORD *)(v97 + 4 * v96) &= ~(1 << v94);
              if ( !*(_DWORD *)(a1[11] + 4 * v96) )
                ++a1[14];
              *(_QWORD *)(v95 + 416) = v90;
              *(_DWORD *)(4 * v90 + a1[11]) |= 1 << *v88;
              v96 = *(_QWORD *)(v95 + 416);
              v71 = (__int64 *)ptr;
            }
            v46 = v175;
            if ( v90 == v96 )
            {
              if ( (((char *)&v71[2 * (_QWORD)v175] - (char *)v88) >> 4) - 2 >= 0 )
              {
                v98 = (__int64 *)memmove(v88, v88 + 2, (char *)&v71[2 * v175] - (char *)v88 - 16);
                v71 = (__int64 *)ptr;
                v88 = v98;
                v46 = v175;
              }
              *(_QWORD *)&v175 = --v46;
            }
            else
            {
              v88 += 2;
            }
          }
          while ( v88 != &v71[2 * v46] );
        }
LABEL_114:
        ;
      }
      while ( v46 );
      sub_480090(*(_QWORD **)&dest[16]);
    }
LABEL_55:
    v24 = (__int64 *)v198[0];
  }
  while ( v198[1] != v198[0] );
LABEL_56:
  if ( ptr )
  {
    *(_QWORD *)&v175 = 0;
    qfree(ptr);
  }
  sub_374250((__int64)&v201);
  if ( v198[0] )
    operator delete(v198[0], v199 - (char *)v198[0]);
  sub_374250((__int64)v186);
  sub_374250((__int64)v184);
  sub_374250((__int64)v182);
  return v203 - __readfsqword(0x28u);
}

