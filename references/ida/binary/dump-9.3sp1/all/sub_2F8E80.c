unsigned __int64 __fastcall sub_2F8E80(_QWORD *a1, const __m128i *a2, char a3)
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
  __int64 v89; // rdx
  __int64 v90; // r13
  __int64 v91; // rcx
  int v92; // r11d
  __int64 v93; // rdx
  bool v94; // zf
  void *v95; // rsi
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rsi
  __int64 *v100; // rax
  __int64 v101; // r14
  __int64 v102; // rsi
  __int64 *v103; // r13
  __int64 *v104; // rdi
  _DWORD *v105; // rdx
  int v106; // eax
  __int64 v107; // rbp
  __int64 v108; // rax
  char *v109; // rbx
  char *v110; // rcx
  __int64 v111; // rax
  __int64 v112; // r12
  const char *v113; // r15
  __int64 v114; // rbx
  const char *v115; // rax
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // r12
  __int64 v119; // rbx
  char *v120; // rbx
  __int64 v121; // rsi
  signed __int64 v122; // rax
  signed __int64 v123; // rsi
  unsigned __int64 v124; // rax
  unsigned __int64 v125; // r13
  __int64 v126; // rax
  __m128i *v127; // rcx
  char *v128; // r8
  unsigned __int64 *v129; // rdx
  const __m128i *v130; // rsi
  __int64 v131; // rdx
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
  __int64 v143; // [rsp+10h] [rbp-258h]
  void *v144; // [rsp+18h] [rbp-250h]
  void *v145; // [rsp+18h] [rbp-250h]
  __int64 v146; // [rsp+18h] [rbp-250h]
  char *v147; // [rsp+18h] [rbp-250h]
  __int64 v148; // [rsp+18h] [rbp-250h]
  _QWORD *v149; // [rsp+18h] [rbp-250h]
  const __m128i *v150; // [rsp+18h] [rbp-250h]
  char *v151; // [rsp+18h] [rbp-250h]
  __m128i *v153; // [rsp+30h] [rbp-238h]
  void *v154; // [rsp+30h] [rbp-238h]
  void *v155; // [rsp+30h] [rbp-238h]
  __m128i *v156; // [rsp+30h] [rbp-238h]
  const __m128i *v157; // [rsp+30h] [rbp-238h]
  char *v158; // [rsp+30h] [rbp-238h]
  char *v159; // [rsp+30h] [rbp-238h]
  unsigned __int64 v160; // [rsp+38h] [rbp-230h]
  signed __int64 v161; // [rsp+38h] [rbp-230h]
  signed __int64 v162; // [rsp+38h] [rbp-230h]
  unsigned __int64 v163; // [rsp+40h] [rbp-228h]
  const __m128i *v164; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v166; // [rsp+68h] [rbp-200h]
  __int64 v167; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v168; // [rsp+88h] [rbp-1E0h]
  __int128 v169; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v170; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v171; // [rsp+B8h] [rbp-1B0h]
  char *v172; // [rsp+C0h] [rbp-1A8h]
  __int64 v173; // [rsp+C8h] [rbp-1A0h]
  __m128i v174[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v175; // [rsp+F0h] [rbp-178h]
  __m128i v176[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v177; // [rsp+120h] [rbp-148h]
  _BYTE v178[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v179; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v180)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v181; // [rsp+150h] [rbp-118h] BYREF
  __m128i v182; // [rsp+158h] [rbp-110h] BYREF
  __m128i v183; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v184; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v185; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v186; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v187; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v188; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v189; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v190[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *v191; // [rsp+1F0h] [rbp-78h]
  _QWORD *v192; // [rsp+1F8h] [rbp-70h]
  __m128i v193; // [rsp+200h] [rbp-68h] BYREF
  __m128i v194; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v195; // [rsp+228h] [rbp-40h]

  v195 = __readfsqword(0x28u);
  sub_2CE280((__int64)v174, a2);
  v175 = a1;
  sub_2CE280((__int64)v176, a2);
  v177 = a1;
  sub_2CE280((__int64)v178, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2CE280((__int64)&v181, v174);
    v6 = *v5;
    v7 = 72 * v5[1];
    v144 = (void *)(*v5 + v7);
    sub_2CE280((__int64)&v184, (const __m128i *)&v181);
    sub_2CE280((__int64)v190, (const __m128i *)&v184);
    sub_2CE280((__int64)&v187, (const __m128i *)v190);
    sub_66C50((__int64)v190);
    if ( v144 != (void *)v6 )
    {
      sub_2CE280((__int64)v190, (const __m128i *)&v187);
      v8 = -2;
      v9 = 0x8E38E38E38E38E39LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2F89A0(v6, (__int64)v144, v8, (const __m128i *)v190);
      sub_66C50((__int64)v190);
      sub_2CE280((__int64)v190, (const __m128i *)&v187);
      sub_2DFF00(v6, (__int64)v144, (const __m128i *)v190);
      sub_66C50((__int64)v190);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v187);
    sub_66C50((__int64)&v184);
    sub_66C50((__int64)&v181);
  }
  v170 = nullptr;
  v191 = nullptr;
  v192 = v175;
  v169 = 0;
  *(_OWORD *)v190 = 0;
  sub_2CE280((__int64)&v193, v176);
  v181 = v192;
  sub_2CE280((__int64)&v182, &v193);
  v11 = v190[1];
  v12 = v190[0];
  v187 = v181;
  sub_2CE280((__int64)&v188, &v182);
  v184 = v187;
  sub_2CE280((__int64)&v185, &v188);
  v13 = v11 - v12;
  sub_66C50((__int64)&v188);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v189 = 0u;
      v188 = 0;
      v187 = v184;
      if ( v186.m128i_i64[0] )
      {
        v145 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v186.m128i_i64[0])(&v188, &v185, 2);
        v17 = (unsigned __int64)v145;
        v189 = _mm_loadu_si128(&v186);
      }
      sub_2DB340((__int64)v12, i, v14, v16, v17, (__int64)&v187);
      if ( v189.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v189.m128i_i64[0])(&v188, &v188, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_66C50((__int64)&v185);
  sub_66C50((__int64)&v182);
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
      v20 = (const __m128i *)v190[1];
      if ( v190[1] == v191 )
      {
        v122 = ((char *)v190[1] - (char *)v190[0]) >> 4;
        if ( v122 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v123 = 1;
        if ( v122 )
          v123 = ((char *)v190[1] - (char *)v190[0]) >> 4;
        v58 = __CFADD__(v123, v122);
        v124 = v123 + v122;
        if ( v58 )
        {
          v125 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v124 > 0x7FFFFFFFFFFFFFFLL )
            v124 = 0x7FFFFFFFFFFFFFFLL;
          v125 = 16 * v124;
        }
        v162 = (char *)v190[1] - (char *)v190[0];
        v150 = (const __m128i *)v190[0];
        v126 = operator new(v125);
        v127 = (__m128i *)v150;
        v128 = (char *)v126;
        v129 = (unsigned __int64 *)(v126 + v162);
        *v129 = v18;
        v129[1] = 0;
        if ( v20 != v150 )
        {
          v130 = v150;
          v131 = v126 + (char *)v20 - (char *)v150;
          do
          {
            v132 = _mm_loadu_si128(v130);
            v126 += 16;
            ++v130;
            *(__m128i *)(v126 - 16) = v132;
          }
          while ( v126 != v131 );
        }
        v133 = (void *)(v126 + 16);
        if ( v150 )
        {
          v151 = v128;
          operator delete(v127, v191 - (char *)v127);
          v128 = v151;
        }
        v190[0] = v128;
        v190[1] = v133;
        v191 = &v128[v125];
      }
      else
      {
        *(_QWORD *)v190[1] = v18;
        v20->m128i_i64[1] = 0;
        v190[1] = (char *)v190[1] + 16;
      }
      v181 = v192;
      sub_2CE280((__int64)&v182, &v193);
      v21 = v190[1];
      v22 = v190[0];
      v187 = v181;
      sub_2CE280((__int64)&v188, &v182);
      v184 = v187;
      sub_2CE280((__int64)&v185, &v188);
      sub_66C50((__int64)&v188);
      sub_2DB1F0((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v184);
      ++v18;
      sub_66C50((__int64)&v185);
      sub_66C50((__int64)&v182);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v166 = 0;
    if ( v19 )
    {
      v134 = (__m128i *)qvector_reserve((__int64)&dest, 0, v19, 16);
      v135 = *((_QWORD *)&v166 + 1);
      *((_QWORD *)&v166 + 1) = 0;
      v136 = (const __m128i *)dest;
      v137 = v166 - 1;
      if ( (__int64)v166 - 1 >= 0 )
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
      qfree((__int64)v136);
      dest = v134;
      *((_QWORD *)&v166 + 1) = v135;
    }
  }
  else
  {
    dest = nullptr;
    v166 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_383060(1961);
    goto LABEL_181;
  }
  v23 = (__int64 *)v190[0];
  if ( v190[0] == v190[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v166 = 0;
    v24 = v23[1];
    v25 = *v23;
    v26 = 8 * v24;
    v146 = 3 * *v23;
    v27 = 72 * v24;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v29 = *(_QWORD *)(a1[3 * v25 + 2] + 8 * (v24 + v26) + 64);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          sub_383060(2170);
        goto LABEL_181;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v30 = v166;
        if ( *((_QWORD *)&v166 + 1) < (unsigned __int64)(v166 + 1) )
        {
          v154 = *((void **)&v166 + 1);
          v31 = (__m128i *)qvector_reserve((__int64)&dest, 0, v166 + 1, 16);
          v53 = *((void **)&v166 + 1);
          v54 = (const __m128i *)dest;
          *((_QWORD *)&v166 + 1) = v154;
          v55 = v166 - 1;
          if ( (__int64)v166 - 1 >= 0 )
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
          qfree((__int64)v54);
          v30 = v166;
          dest = v31;
          *((_QWORD *)&v166 + 1) = v155;
        }
        else
        {
          v31 = (__m128i *)dest;
        }
        m128i_i8 = v31[v30].m128i_i8;
        *(_QWORD *)m128i_i8 = v25;
        *((_QWORD *)m128i_i8 + 1) = v24;
        *(_QWORD *)&v166 = v166 + 1;
      }
      v33 = (const __m128i *)v190[0];
      v34 = *(_QWORD *)v190[0];
      v35 = *((_QWORD *)v190[0] + 1);
      v181 = v192;
      v183 = 0u;
      v182 = 0;
      if ( !v194.m128i_i64[0] )
      {
        v36 = (__m128i *)v190[1];
        if ( (char *)v190[1] - (char *)v190[0] <= 16 )
          goto LABEL_40;
        v49 = v192;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v194.m128i_i64[0])(&v182, &v193, 2);
      v36 = (__m128i *)v190[1];
      v33 = (const __m128i *)v190[0];
      v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v194.m128i_i64[0];
      v183 = _mm_load_si128(&v194);
      if ( (char *)v190[1] - (char *)v190[0] > 16 )
      {
        v49 = v181;
        v189 = 0u;
        v187 = v181;
        v188 = 0;
        if ( v194.m128i_i64[0] )
        {
          v156 = (__m128i *)v190[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v194.m128i_i64[0])(&v188, &v182, 2);
          v59 = _mm_loadu_si128(&v183);
          v186 = 0u;
          v36 = v156;
          v189 = v59;
          v184 = v187;
          v185 = 0;
          if ( v183.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v183.m128i_i64[0])(&v185, &v188, 2);
            v60 = _mm_loadu_si128(&v189);
            v36 = v156;
            v186 = v60;
            if ( v60.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v60.m128i_i64[0])(&v188, &v188, 3);
              v36 = v156;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v184 = v49;
        v186 = 0u;
        v185 = 0;
LABEL_64:
        v50 = v36[-1].m128i_u64[0];
        v51 = v36 - 1;
        v52 = v36[-1].m128i_u64[1];
        v36[-1] = _mm_loadu_si128(v33);
        v189 = 0u;
        v187 = v184;
        v188 = 0;
        if ( v186.m128i_i64[0] )
        {
          v163 = v52;
          v160 = v50;
          v153 = v36 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v186.m128i_i64[0])(&v188, &v185, 2);
          v52 = v163;
          v50 = v160;
          v51 = v153;
          v189 = _mm_loadu_si128(&v186);
        }
        sub_2DB340((__int64)v33, 0, v51 - v33, v50, v52, (__int64)&v187);
        if ( v189.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v189.m128i_i64[0])(&v188, &v188, 3);
        if ( v186.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v186.m128i_i64[0])(&v185, &v185, 3);
        v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v183.m128i_i64[0];
      }
      if ( v37 )
        v37(&v182, &v182, 3);
LABEL_40:
      v38 = (__m128i *)v190[1];
      v39 = v35 + 1;
      v40 = (const __m128i *)((char *)v190[1] - 16);
      v190[1] = (char *)v190[1] - 16;
      if ( v39 >= a1[3 * v34 + 3] )
      {
        v28 = (__int64 *)v190[0];
        if ( v190[0] == v40 )
          break;
        goto LABEL_28;
      }
      if ( v40 == (const __m128i *)v191 )
      {
        v61 = ((char *)v40 - (char *)v190[0]) >> 4;
        if ( v61 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v62 = 1;
        if ( v61 )
          v62 = ((char *)v40 - (char *)v190[0]) >> 4;
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
        v164 = v40;
        v161 = (char *)v40 - (char *)v190[0];
        v157 = (const __m128i *)v190[0];
        v65 = (__m128i *)operator new(v64 * 16);
        v66 = (__m128i *)v157;
        *(__m128i *)((char *)v65 + v161) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        if ( v164 == v157 )
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
          while ( v164 != v68 );
          v70 = &v65->m128i_i8[(char *)v164 - (char *)v157];
        }
        v71 = v70 + 16;
        if ( v157 )
        {
          v158 = (char *)v65;
          operator delete(v66, v191 - (char *)v66);
          v65 = (__m128i *)v158;
        }
        v190[0] = v65;
        v190[1] = v71;
        v191 = v65[v64].m128i_i8;
      }
      else
      {
        v38[-1] = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        v190[1] = (char *)v190[1] + 16;
      }
      v41 = v192;
      v183 = 0u;
      v181 = v192;
      v182 = 0;
      if ( !v194.m128i_i64[0] )
      {
        v43 = v190[1];
        v44 = v190[0];
LABEL_81:
        v184 = v41;
        v186 = 0u;
        v185 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v194.m128i_i64[0])(&v182, &v193, 2);
      v41 = v181;
      v42 = _mm_load_si128(&v194);
      v189 = 0u;
      v43 = v190[1];
      v183 = v42;
      v44 = v190[0];
      v187 = v181;
      v188 = 0;
      if ( !v194.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v194.m128i_i64[0])(&v188, &v182, 2);
      v45 = _mm_loadu_si128(&v183);
      v186 = 0u;
      v189 = v45;
      v184 = v187;
      v185 = 0;
      if ( v183.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v183.m128i_i64[0])(&v185, &v188, 2);
        v46 = _mm_loadu_si128(&v189);
        v186 = v46;
        if ( v46.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v46.m128i_i64[0])(&v188, &v188, 3);
      }
LABEL_48:
      sub_2DB1F0((__int64)v44, ((v43 - v44) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)&v184);
      if ( v186.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v186.m128i_i64[0])(&v185, &v185, 3);
      if ( v183.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v183.m128i_i64[0])(&v182, &v182, 3);
      v28 = (__int64 *)v190[0];
      if ( v190[0] == v190[1] )
        break;
LABEL_28:
      v24 = v28[1];
      v25 = *v28;
      v26 = 8 * v24;
      if ( !v179 )
        std::__throw_bad_function_call();
    }
    while ( !v180(v178, v177[3 * *v28 + 2] + 72 * v24, v27 + v177[v146 + 2]) );
    if ( a3 )
    {
      v101 = a1[12];
      LODWORD(v169) = 0;
      sub_2CDC90(a1 + 11, (int *)&v169);
      v102 = 4 * v101;
      v103 = (__int64 *)dest;
      v104 = (__int64 *)((char *)dest + 16 * v166);
      if ( dest == v104 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v103 + 2] + 72 * v103[1] + 64) = v101;
        v105 = (_DWORD *)(v102 + a1[11]);
        v106 = 1 << *v103;
        if ( (*v105 & v106) != 0 )
          break;
        v103 += 2;
        *v105 |= v106;
        if ( v104 == v103 )
          goto LABEL_55;
      }
      switch_dbctx();
      v107 = 0;
      v108 = a1[3 * *v103 + 3];
      v141 = v108;
      if ( v108 )
      {
        v148 = 2 * *v103;
        v143 = *v103;
        v116 = qalloc_or_throw(72 * v108, v102, v148, *v103);
        v117 = v148;
        v107 = v116;
        v118 = v116 + 16;
        v140 = 0;
        v149 = &a1[v148 + v143];
        v159 = (char *)(-16 - v116);
        do
        {
          v119 = v149[2];
          *(_QWORD *)(v118 - 16) = off_4E14B0;
          v120 = &v159[v118 + v119];
          v121 = *((_QWORD *)v120 + 1);
          *(_QWORD *)v118 = 0;
          *(_OWORD *)(v118 + 8) = 0;
          *(_QWORD *)(v118 - 8) = v121;
          sub_2AE320((_QWORD *)v118, (__int64)(v120 + 16), v117, (__int64)&v159[v118]);
          *(_QWORD *)(v118 + 24) = 0;
          copy_tinfo_t();
          ++v140;
          v118 += 72;
          *(_QWORD *)(v118 - 40) = *((_QWORD *)v120 + 6);
          LODWORD(v121) = *((_DWORD *)v120 + 14);
          *(_QWORD *)(v118 - 88) = off_4E2CD8;
          *(_DWORD *)(v118 - 32) = v121;
          *(_QWORD *)(v118 - 24) = *((_QWORD *)v120 + 8);
        }
        while ( v141 != v140 );
      }
      v109 = (char *)dest;
      v110 = (char *)dest + 16 * v166;
      if ( v110 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v109 == *v103 )
          {
            v111 = *((_QWORD *)v109 + 1);
            v112 = v103[1];
            if ( v111 != v112 && *(_QWORD *)(v107 + 72 * v111 + 64) == v101 )
              break;
          }
          v109 += 16;
          if ( v110 == v109 )
            goto LABEL_151;
        }
        sub_81980((__int64)&v169, (const char *)&unk_418793);
        v113 = s1;
        if ( *((_QWORD *)&v169 + 1) )
          v113 = (const char *)v169;
        v114 = *((_QWORD *)v109 + 1);
        sub_81980((__int64)&v167, (const char *)&unk_418793);
        v115 = s1;
        if ( v168 )
          v115 = (const char *)v167;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v103, v115, v114, v113, v112);
        if ( v167 )
        {
          v168 = 0;
          qfree(v167);
        }
        if ( (_QWORD)v169 )
        {
          *((_QWORD *)&v169 + 1) = 0;
          qfree(v169);
        }
      }
LABEL_151:
      if ( !under_debugger )
        sub_383060(2171);
LABEL_181:
      BUG();
    }
    v47 = v166;
    if ( (unsigned __int64)v166 <= 1 )
      goto LABEL_55;
    v72 = (__int64 *)dest;
    DWORD2(v169) = 0;
    v171 = (__int128 *)((char *)&v169 + 8);
    v170 = nullptr;
    v172 = (char *)&v169 + 8;
    v173 = 0;
    v147 = (char *)dest + 16 * v166;
    if ( v147 != dest )
    {
      v73 = (char *)dest;
      do
      {
        v167 = *(_QWORD *)(a1[3 * *(_QWORD *)v73 + 2] + 72LL * *((_QWORD *)v73 + 1) + 64);
        v74 = sub_2CDD40(&v169, (unsigned __int64 *)&v167);
        v75 = *(_QWORD *)v73;
        v73 += 16;
        *(_DWORD *)v74 |= 1 << v75;
      }
      while ( v147 != v73 );
      if ( v171 != (__int128 *)((char *)&v169 + 8) )
      {
        v76 = (__int64)v171;
        do
        {
          v77 = *(_DWORD *)(v76 + 40);
          v78 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v76 + 32));
          v76 = std::_Rb_tree_increment();
          if ( v78 != v77 )
          {
            v79 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v79, 0x30u);
            --v173;
          }
        }
        while ( (__int128 *)v76 != (__int128 *)((char *)&v169 + 8) );
      }
      v47 = v166;
      v72 = (__int64 *)dest;
      v80 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v166 != dest )
      {
        do
        {
          while ( 1 )
          {
            v82 = v80 + 2;
            if ( (_QWORD *)((char *)&v169 + 8) == sub_2AE200(
                                                    (__int64)&v169,
                                                    *(_QWORD *)(a1[3 * *v80 + 2] + 72 * v80[1] + 64)) )
              break;
            v47 = v166;
            v80 += 2;
            if ( v82 == &v72[2 * (_QWORD)v166] )
              goto LABEL_111;
          }
          v83 = v81 - (_QWORD)v80;
          if ( (v83 >> 4) - 2 >= 0 )
          {
            memmove(v80, v82, v83 - 16);
            v72 = (__int64 *)dest;
          }
          *(_QWORD *)&v166 = v166 - 1;
          v47 = v166;
        }
        while ( v80 != &v72[2 * (_QWORD)v166] );
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
      v47 = v166 - 1;
      v89 = a1[3 * v85 + 2] + 72 * v86;
      *(_QWORD *)&v166 = v166 - 1;
      v90 = *(_QWORD *)(v89 + 64);
      if ( v88 )
      {
        v91 = 0;
        v92 = *(_DWORD *)(a1[11] + 4 * v90);
        do
        {
          v93 = -1;
          if ( (v92 & (1 << v91)) != 0 )
            v93 = v90;
          (&v187)[v91++] = (_QWORD *)v93;
        }
        while ( v91 != v88 );
      }
      if ( 16 * v47 )
      {
        do
        {
          v96 = *v87;
          v97 = a1[3 * *v87 + 2] + 72 * v87[1];
          v98 = *(_QWORD *)(v97 + 64);
          if ( (&v187)[*v87] == (_QWORD *)-1LL )
          {
            v99 = a1[11];
            (&v187)[v96] = (_QWORD *)v98;
            *(_DWORD *)(v99 + 4 * v98) &= ~(1 << v96);
            if ( !*(_DWORD *)(a1[11] + 4 * v98) )
              ++a1[14];
            *(_QWORD *)(v97 + 64) = v90;
            *(_DWORD *)(4 * v90 + a1[11]) |= 1 << *v87;
            v95 = v87 + 2;
            v72 = (__int64 *)dest;
            v47 = v166;
            if ( v90 == *(_QWORD *)(v97 + 64) )
            {
LABEL_128:
              if ( (((char *)&v72[2 * v47] - (char *)v87) >> 4) - 2 >= 0 )
              {
                v100 = (__int64 *)memmove(v87, v95, (char *)&v72[2 * v47] - (char *)v87 - 16);
                v72 = (__int64 *)dest;
                v87 = v100;
                v47 = v166;
              }
              *(_QWORD *)&v166 = --v47;
              continue;
            }
          }
          else
          {
            v94 = v90 == v98;
            v95 = v87 + 2;
            v47 = v166;
            if ( v94 )
              goto LABEL_128;
          }
          v87 = (__int64 *)v95;
        }
        while ( v87 != &v72[2 * v47] );
      }
LABEL_111:
      if ( v47 )
        continue;
      break;
    }
    sub_2AE260((void **)v170);
LABEL_55:
    v23 = (__int64 *)v190[0];
  }
  while ( v190[1] != v190[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v166 = 0;
    qfree((__int64)dest);
  }
  sub_66C50((__int64)&v193);
  if ( v190[0] )
    operator delete(v190[0], v191 - (char *)v190[0]);
  sub_66C50((__int64)v178);
  sub_66C50((__int64)v176);
  sub_66C50((__int64)v174);
  return v195 - __readfsqword(0x28u);
}
