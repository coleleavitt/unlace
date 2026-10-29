__int64 __fastcall rangeset_t_sub(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // r12d
  __int64 v5; // rdx
  char v8; // al
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rcx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  __int32 v16; // r15d
  __m128i v17; // xmm0
  unsigned __int64 v18; // rax
  __int32 v19; // r13d
  unsigned __int64 v20; // r12
  __int32 v21; // r10d
  __m128i *v22; // r11
  unsigned __int64 v23; // rdx
  __int64 v24; // r9
  __int64 *v25; // rax
  __int64 v26; // r14
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  char *v29; // r12
  __m128i v30; // xmm0
  __int64 v31; // r14
  unsigned __int64 v32; // rdx
  __m128i *v33; // rax
  __m128i v34; // xmm0
  __m128i *v35; // rax
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rsi
  __m128i *v39; // rdi
  __int64 v40; // r11
  __int64 v41; // rdx
  __m128i v42; // xmm0
  bool v43; // cf
  __int64 v44; // rax
  __m128i v45; // xmm0
  char *v46; // r12
  __int64 v47; // r13
  unsigned __int64 v48; // rsi
  __m128 *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rsi
  __m128i *v52; // rdi
  __m128i v53; // xmm0
  __int64 v54; // rdx
  __int64 v55; // r11
  __m128i v56; // xmm1
  __int64 v57; // rax
  char *v58; // rbp
  __int64 v59; // r13
  __m128i v60; // xmm0
  __int64 v61; // rax
  unsigned __int64 v62; // rsi
  __m128i *v63; // rax
  __int64 v64; // rax
  char *v65; // rcx
  __int64 v66; // r13
  unsigned __int64 v67; // rsi
  char *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  char *v71; // r13
  __int64 v72; // r14
  unsigned __int64 v73; // rsi
  __m128i *v74; // rax
  __m128i v75; // xmm0
  __int64 v76; // rax
  char *v77; // r12
  __m128i v78; // xmm0
  __int64 v79; // r14
  unsigned __int64 v80; // rsi
  __m128i *v81; // rax
  __int64 v82; // rax
  char *v83; // r14
  unsigned __int64 v84; // rsi
  __m128i *v85; // rax
  __m128i v86; // xmm0
  __m128i *v87; // rax
  __m128i v88; // xmm0
  __m128i *v89; // rax
  __m128i v90; // xmm0
  __m128i *v91; // rax
  __m128i v92; // xmm0
  __m128i *v93; // rax
  __m128i v94; // xmm0
  __m128i *v95; // rax
  __m128i v96; // xmm0
  __m128i *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rsi
  __m128i *v100; // rdi
  __int64 v101; // rdx
  __m128i v102; // xmm0
  __int64 v103; // rax
  __int64 v104; // rsi
  __m128i *v105; // rdi
  __int64 v106; // rdx
  __m128i v107; // xmm0
  __int64 v108; // rax
  void *v109; // rdi
  __m128i *v110; // rcx
  __int64 v111; // r14
  __int64 v112; // r9
  __int64 v113; // rsi
  __int32 v114; // r10d
  const __m128i *v115; // rdx
  __m128i v116; // xmm0
  __int64 v117; // rax
  void *v118; // rdi
  __int64 v119; // r14
  __int32 v120; // r10d
  __int64 v121; // rcx
  const __m128i *v122; // rdx
  __m128i v123; // xmm0
  __int64 v124; // rax
  void *v125; // rdi
  __int64 v126; // r8
  const __m128i *v127; // rdx
  __int64 v128; // rcx
  __m128i v129; // xmm0
  __int64 v130; // rax
  void *v131; // rdi
  __int64 v132; // r14
  const __m128i *v133; // rdx
  __int64 v134; // rcx
  __m128i v135; // xmm0
  __int64 v136; // rax
  void *v137; // rdi
  __int64 v138; // r8
  __m128i v139; // xmm0
  __int64 v140; // rcx
  const __m128i *v141; // rdx
  __m128i v142; // xmm1
  __int64 v143; // rax
  void *v144; // rdi
  __int64 v145; // r9
  __int64 v146; // rcx
  __m128i v147; // xmm0
  const __m128i *v148; // rdx
  __m128i v149; // xmm1
  __int64 v150; // rax
  void *v151; // rdi
  char *v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // r8
  __int64 v155; // r11
  __int64 v156; // r9
  int v157; // r10d
  const __m128i *v158; // rsi
  __m128i v159; // xmm0
  __int64 v160; // rax
  void *v161; // rdi
  __int64 v162; // r14
  __m128i v163; // xmm0
  __int64 v164; // rcx
  __int32 v165; // r10d
  const __m128i *v166; // rdx
  __m128i v167; // xmm1
  __int64 v168; // rax
  void *v169; // rdi
  __int64 v170; // r14
  __m128i v171; // xmm0
  __int64 v172; // rcx
  const __m128i *v173; // rdx
  __m128i v174; // xmm1
  __int64 v175; // rax
  void *v176; // rdi
  __int64 v177; // r8
  __m128i v178; // xmm0
  __int64 v179; // rcx
  const __m128i *v180; // rdx
  __m128i v181; // xmm1
  __m128i v182; // [rsp+0h] [rbp-188h] BYREF
  __m128i v183; // [rsp+10h] [rbp-178h] BYREF
  __int64 *p_ptr; // [rsp+20h] [rbp-168h]
  __m128i *v185; // [rsp+28h] [rbp-160h]
  char *v186; // [rsp+30h] [rbp-158h]
  __int64 v187; // [rsp+38h] [rbp-150h]
  __m128i v188; // [rsp+40h] [rbp-148h] BYREF
  __int64 v189; // [rsp+50h] [rbp-138h]
  __m128i v190; // [rsp+60h] [rbp-128h] BYREF
  __int64 v191; // [rsp+70h] [rbp-118h]
  __m128i v192; // [rsp+80h] [rbp-108h] BYREF
  __int64 v193; // [rsp+90h] [rbp-F8h]
  __m128i v194; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v195; // [rsp+B0h] [rbp-D8h]
  __m128i v196; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v197; // [rsp+D0h] [rbp-B8h]
  __m128i v198; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v199; // [rsp+F0h] [rbp-98h]
  __m128i v200; // [rsp+100h] [rbp-88h] BYREF
  __int64 v201; // [rsp+110h] [rbp-78h]
  void *ptr; // [rsp+120h] [rbp-68h] BYREF
  __int128 v203; // [rsp+128h] [rbp-60h]
  int v204; // [rsp+138h] [rbp-50h]
  char v205; // [rsp+13Ch] [rbp-4Ch]
  unsigned __int64 v206; // [rsp+148h] [rbp-40h]

  v2 = a2[1];
  v206 = __readfsqword(0x28u);
  v3 = 0;
  if ( *a2 >= v2 )
    return v3;
  v5 = *(unsigned int *)(a1 + 32);
  ptr = nullptr;
  v8 = 0;
  v204 = v5;
  v203 = 0;
  if ( (_DWORD)v5 != -1 )
    v8 = must_journal(a1, a2, v5);
  v9 = *(_QWORD *)(a1 + 8);
  v205 = v8;
  if ( v9 )
  {
    v10 = *a2;
    v11 = *(_QWORD *)a1;
    v12 = 0;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 8);
      if ( v10 < v13 )
        break;
      ++v12;
      v11 += 16;
      if ( v12 == v9 )
        goto LABEL_27;
    }
    v14 = *(_QWORD *)v11;
    v15 = a2[1];
    if ( *(_QWORD *)v11 < v15 )
    {
      v16 = v12;
      v17 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v13);
      if ( v14 >= v10 )
      {
        if ( v15 >= v13 )
        {
          v19 = v12;
          v16 = v12 - 1;
          p_ptr = (__int64 *)&ptr;
          goto LABEL_14;
        }
        p_ptr = (__int64 *)&ptr;
        if ( v8 )
        {
          v70 = v203;
          v71 = (char *)ptr;
          LOBYTE(v189) = 1;
          v72 = *((_QWORD *)&v203 + 1);
          v188 = v17;
          v73 = v203 + 1;
          if ( &v188 < ptr || &v188 >= (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v203 + 1)) )
          {
            p_ptr = (__int64 *)&ptr;
            if ( *((_QWORD *)&v203 + 1) < v73 )
            {
              v124 = qvector_reserve(p_ptr, 0, v203 + 1, 24);
              v125 = ptr;
              v71 = (char *)v124;
              v126 = *((_QWORD *)&v203 + 1);
              *((_QWORD *)&v203 + 1) = v72;
              v127 = (const __m128i *)ptr;
              v128 = v203 - 1;
              if ( (__int64)v203 - 1 >= 0 )
              {
                do
                {
                  v129 = _mm_loadu_si128(v127);
                  v124 += 24;
                  v127 = (const __m128i *)((char *)v127 + 24);
                  *(__m128i *)(v124 - 24) = v129;
                  *(_QWORD *)(v124 - 8) = v127[-1].m128i_i64[1];
                  v43 = v128-- == 0;
                }
                while ( !v43 );
                v125 = ptr;
              }
              v182.m128i_i64[0] = v126;
              qfree(v125);
              ptr = v71;
              v70 = v203;
              *((_QWORD *)&v203 + 1) = v182.m128i_i64[0];
            }
            v96 = _mm_load_si128(&v188);
            v97 = (__m128i *)&v71[24 * v70];
            v97[1].m128i_i64[0] = v189;
            *v97 = v96;
          }
          else
          {
            if ( *((_QWORD *)&v203 + 1) < v73 )
            {
              v182 = v17;
              v175 = qvector_reserve(p_ptr, 0, v203 + 1, 24);
              v176 = ptr;
              v71 = (char *)v175;
              v177 = *((_QWORD *)&v203 + 1);
              v178 = _mm_load_si128(&v182);
              *((_QWORD *)&v203 + 1) = v72;
              v179 = v203 - 1;
              v180 = (const __m128i *)ptr;
              if ( (__int64)v203 - 1 >= 0 )
              {
                do
                {
                  v181 = _mm_loadu_si128(v180);
                  v175 += 24;
                  v180 = (const __m128i *)((char *)v180 + 24);
                  *(__m128i *)(v175 - 24) = v181;
                  *(_QWORD *)(v175 - 8) = v180[-1].m128i_i64[1];
                  v43 = v179-- == 0;
                }
                while ( !v43 );
                v176 = ptr;
              }
              v182.m128i_i64[0] = v177;
              v183 = v178;
              qfree(v176);
              ptr = v71;
              v17 = _mm_load_si128(&v183);
              v70 = v203;
              *((_QWORD *)&v203 + 1) = v182.m128i_i64[0];
            }
            v74 = (__m128i *)&v71[24 * v70];
            v74[1].m128i_i8[0] = 1;
            *v74 = v17;
          }
          *(_QWORD *)&v203 = v203 + 1;
          v15 = a2[1];
        }
        *(_QWORD *)v11 = v15;
        if ( v205 )
        {
          v44 = v203;
          LOBYTE(v191) = 0;
          v45 = (__m128i)_mm_loadh_ps((const double *)(v11 + 8));
          v46 = (char *)ptr;
          v47 = *((_QWORD *)&v203 + 1);
          v190 = v45;
          v48 = v203 + 1;
          if ( &v190 < ptr || &v190 >= (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v203 + 1)) )
          {
            if ( *((_QWORD *)&v203 + 1) < v48 )
            {
              v130 = qvector_reserve(p_ptr, 0, v203 + 1, 24);
              v131 = ptr;
              v46 = (char *)v130;
              v132 = *((_QWORD *)&v203 + 1);
              *((_QWORD *)&v203 + 1) = v47;
              v133 = (const __m128i *)ptr;
              v134 = v203 - 1;
              if ( (__int64)v203 - 1 >= 0 )
              {
                do
                {
                  v135 = _mm_loadu_si128(v133);
                  v130 += 24;
                  v133 = (const __m128i *)((char *)v133 + 24);
                  *(__m128i *)(v130 - 24) = v135;
                  *(_QWORD *)(v130 - 8) = v133[-1].m128i_i64[1];
                  v43 = v134-- == 0;
                }
                while ( !v43 );
                v131 = ptr;
              }
              qfree(v131);
              ptr = v46;
              v44 = v203;
              *((_QWORD *)&v203 + 1) = v132;
            }
            v94 = _mm_load_si128(&v190);
            v95 = (__m128i *)&v46[24 * v44];
            v95[1].m128i_i64[0] = v191;
            *v95 = v94;
          }
          else
          {
            if ( *((_QWORD *)&v203 + 1) < v48 )
            {
              v182 = v45;
              v168 = qvector_reserve(p_ptr, 0, v203 + 1, 24);
              v169 = ptr;
              v46 = (char *)v168;
              v170 = *((_QWORD *)&v203 + 1);
              v171 = _mm_load_si128(&v182);
              *((_QWORD *)&v203 + 1) = v47;
              v172 = v203 - 1;
              v173 = (const __m128i *)ptr;
              if ( (__int64)v203 - 1 >= 0 )
              {
                do
                {
                  v174 = _mm_loadu_si128(v173);
                  v168 += 24;
                  v173 = (const __m128i *)((char *)v173 + 24);
                  *(__m128i *)(v168 - 24) = v174;
                  *(_QWORD *)(v168 - 8) = v173[-1].m128i_i64[1];
                  v43 = v172-- == 0;
                }
                while ( !v43 );
                v169 = ptr;
              }
              v182 = v171;
              qfree(v169);
              ptr = v46;
              v45 = _mm_load_si128(&v182);
              *((_QWORD *)&v203 + 1) = v170;
              v44 = v203;
            }
            v49 = (__m128 *)&v46[24 * v44];
            v49[1].m128_i8[0] = 0;
            *v49 = (__m128)v45;
          }
          *(_QWORD *)&v203 = v203 + 1;
        }
      }
      else
      {
        p_ptr = (__int64 *)&ptr;
        if ( v8 )
        {
          v82 = v203;
          v83 = (char *)ptr;
          LOBYTE(v193) = 1;
          v192 = v17;
          v84 = v203 + 1;
          if ( &v192 < ptr || &v192 >= (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v203 + 1)) )
          {
            p_ptr = (__int64 *)&ptr;
            if ( *((_QWORD *)&v203 + 1) < v84 )
            {
              v182.m128i_i64[0] = *((_QWORD *)&v203 + 1);
              v98 = qvector_reserve(p_ptr, 0, v203 + 1, 24);
              v83 = (char *)v98;
              v99 = *((_QWORD *)&v203 + 1);
              v100 = (__m128i *)ptr;
              *((_QWORD *)&v203 + 1) = v182.m128i_i64[0];
              v101 = v203 - 1;
              if ( (__int64)v203 - 1 >= 0 )
              {
                do
                {
                  v102 = _mm_loadu_si128(v100);
                  v98 += 24;
                  v100 = (__m128i *)((char *)v100 + 24);
                  *(__m128i *)(v98 - 24) = v102;
                  *(_QWORD *)(v98 - 8) = v100[-1].m128i_i64[1];
                  v43 = v101-- == 0;
                }
                while ( !v43 );
                v100 = (__m128i *)ptr;
              }
              v182.m128i_i64[0] = v99;
              qfree(v100);
              ptr = v83;
              v82 = v203;
              *((_QWORD *)&v203 + 1) = v99;
            }
            v88 = _mm_load_si128(&v192);
            v89 = (__m128i *)&v83[24 * v82];
            v89[1].m128i_i64[0] = v193;
            *v89 = v88;
          }
          else
          {
            if ( *((_QWORD *)&v203 + 1) < v84 )
            {
              v183.m128i_i64[0] = *((_QWORD *)&v203 + 1);
              v182 = v17;
              v143 = qvector_reserve(p_ptr, 0, v203 + 1, 24);
              v83 = (char *)v143;
              v144 = ptr;
              v145 = *((_QWORD *)&v203 + 1);
              v146 = v203 - 1;
              *((_QWORD *)&v203 + 1) = v183.m128i_i64[0];
              v147 = _mm_load_si128(&v182);
              v148 = (const __m128i *)ptr;
              if ( (__int64)v203 - 1 >= 0 )
              {
                do
                {
                  v149 = _mm_loadu_si128(v148);
                  v143 += 24;
                  v148 = (const __m128i *)((char *)v148 + 24);
                  *(__m128i *)(v143 - 24) = v149;
                  *(_QWORD *)(v143 - 8) = v148[-1].m128i_i64[1];
                  v43 = v146-- == 0;
                }
                while ( !v43 );
                v144 = ptr;
              }
              v182.m128i_i64[0] = v145;
              v183 = v147;
              qfree(v144);
              ptr = v83;
              v17 = _mm_load_si128(&v183);
              v82 = v203;
              *((_QWORD *)&v203 + 1) = v182.m128i_i64[0];
            }
            v85 = (__m128i *)&v83[24 * v82];
            v85[1].m128i_i8[0] = 1;
            *v85 = v17;
          }
          *(_QWORD *)&v203 = v203 + 1;
          v10 = *a2;
        }
        *(_QWORD *)(v11 + 8) = v10;
        if ( v205 )
        {
          v75 = _mm_loadl_epi64((const __m128i *)v11);
          v76 = v203;
          v77 = (char *)ptr;
          LOBYTE(v195) = 0;
          v78 = _mm_unpacklo_epi64(v75, (__m128i)v10);
          v79 = *((_QWORD *)&v203 + 1);
          v80 = v203 + 1;
          v194 = v78;
          if ( &v194 < ptr || &v194 >= (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v203 + 1)) )
          {
            if ( *((_QWORD *)&v203 + 1) < v80 )
            {
              v103 = qvector_reserve(p_ptr, 0, v203 + 1, 24);
              v104 = *((_QWORD *)&v203 + 1);
              v77 = (char *)v103;
              *((_QWORD *)&v203 + 1) = v79;
              v105 = (__m128i *)ptr;
              v106 = v203 - 1;
              if ( (__int64)v203 - 1 >= 0 )
              {
                do
                {
                  v107 = _mm_loadu_si128(v105);
                  v103 += 24;
                  v105 = (__m128i *)((char *)v105 + 24);
                  *(__m128i *)(v103 - 24) = v107;
                  *(_QWORD *)(v103 - 8) = v105[-1].m128i_i64[1];
                  v43 = v106-- == 0;
                }
                while ( !v43 );
                v105 = (__m128i *)ptr;
              }
              v182.m128i_i64[0] = v104;
              qfree(v105);
              ptr = v77;
              v76 = v203;
              *((_QWORD *)&v203 + 1) = v182.m128i_i64[0];
            }
            v86 = _mm_load_si128(&v194);
            v87 = (__m128i *)&v77[24 * v76];
            v87[1].m128i_i64[0] = v195;
            *v87 = v86;
          }
          else
          {
            if ( *((_QWORD *)&v203 + 1) < v80 )
            {
              v182 = v78;
              v136 = qvector_reserve(p_ptr, 0, v203 + 1, 24);
              v137 = ptr;
              v77 = (char *)v136;
              v138 = *((_QWORD *)&v203 + 1);
              v139 = _mm_load_si128(&v182);
              *((_QWORD *)&v203 + 1) = v79;
              v140 = v203 - 1;
              v141 = (const __m128i *)ptr;
              if ( (__int64)v203 - 1 >= 0 )
              {
                do
                {
                  v142 = _mm_loadu_si128(v141);
                  v136 += 24;
                  v141 = (const __m128i *)((char *)v141 + 24);
                  *(__m128i *)(v136 - 24) = v142;
                  *(_QWORD *)(v136 - 8) = v141[-1].m128i_i64[1];
                  v43 = v140-- == 0;
                }
                while ( !v43 );
                v137 = ptr;
              }
              v182.m128i_i64[0] = v138;
              v183 = v139;
              qfree(v137);
              ptr = v77;
              v78 = _mm_load_si128(&v183);
              v76 = v203;
              *((_QWORD *)&v203 + 1) = v182.m128i_i64[0];
            }
            v81 = (__m128i *)&v77[24 * v76];
            v81[1].m128i_i8[0] = 0;
            *v81 = v78;
          }
          *(_QWORD *)&v203 = v203 + 1;
        }
        v18 = a2[1];
        if ( v18 < v13 )
        {
          v200 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v13);
          sub_844EA0((__int64 *)a1, &v200, (__int64)p_ptr);
          v19 = v16 + 2;
          v9 = *(_QWORD *)(a1 + 8);
          ++v16;
          goto LABEL_14;
        }
      }
      v9 = *(_QWORD *)(a1 + 8);
      v19 = v16 + 1;
LABEL_14:
      v20 = v19;
      v21 = v16;
      v22 = &v200;
      if ( v19 < v9 )
      {
        while ( 1 )
        {
          v23 = a2[1];
          v24 = 16 * v20;
          v25 = (__int64 *)(16 * v20 + *(_QWORD *)a1);
          v26 = *v25;
          if ( *v25 >= v23 )
            break;
          v27 = v25[1];
          if ( v23 < v27 )
          {
            if ( v205 )
            {
              v64 = v203;
              v65 = (char *)ptr;
              v196.m128i_i64[0] = v26;
              v196.m128i_i64[1] = v27;
              v66 = *((_QWORD *)&v203 + 1);
              LOBYTE(v197) = 1;
              v67 = v203 + 1;
              if ( &v196 < ptr || &v196 >= (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v203 + 1)) )
              {
                if ( *((_QWORD *)&v203 + 1) < v67 )
                {
                  v183.m128i_i32[0] = v21;
                  v182.m128i_i64[0] = 16 * v20;
                  v108 = qvector_reserve(p_ptr, 0, v203 + 1, 24);
                  v109 = ptr;
                  v110 = (__m128i *)v108;
                  v111 = *((_QWORD *)&v203 + 1);
                  v112 = v182.m128i_i64[0];
                  *((_QWORD *)&v203 + 1) = v66;
                  v113 = v203 - 1;
                  v114 = v183.m128i_i32[0];
                  v115 = (const __m128i *)ptr;
                  if ( (__int64)v203 - 1 >= 0 )
                  {
                    do
                    {
                      v116 = _mm_loadu_si128(v115);
                      v108 += 24;
                      v115 = (const __m128i *)((char *)v115 + 24);
                      *(__m128i *)(v108 - 24) = v116;
                      *(_QWORD *)(v108 - 8) = v115[-1].m128i_i64[1];
                      v43 = v113-- == 0;
                    }
                    while ( !v43 );
                    v109 = ptr;
                  }
                  v185 = v110;
                  v183.m128i_i32[0] = v114;
                  v182.m128i_i64[0] = v112;
                  qfree(v109);
                  v65 = (char *)v185;
                  *((_QWORD *)&v203 + 1) = v111;
                  v24 = v182.m128i_i64[0];
                  v21 = v183.m128i_i32[0];
                  ptr = v185;
                  v64 = v203;
                }
                v92 = _mm_load_si128(&v196);
                v93 = (__m128i *)&v65[24 * v64];
                v93[1].m128i_i64[0] = v197;
                *v93 = v92;
              }
              else
              {
                if ( *((_QWORD *)&v203 + 1) < v67 )
                {
                  v182.m128i_i64[0] = v27;
                  LODWORD(v185) = v21;
                  v183.m128i_i64[0] = 16 * v20;
                  v150 = qvector_reserve(p_ptr, 0, v203 + 1, 24);
                  v151 = ptr;
                  v152 = (char *)v150;
                  v153 = *((_QWORD *)&v203 + 1);
                  v154 = v182.m128i_i64[0];
                  *((_QWORD *)&v203 + 1) = v66;
                  v155 = v203 - 1;
                  v156 = v183.m128i_i64[0];
                  v157 = (int)v185;
                  v158 = (const __m128i *)ptr;
                  if ( (__int64)v203 - 1 >= 0 )
                  {
                    do
                    {
                      v159 = _mm_loadu_si128(v158);
                      v150 += 24;
                      v158 = (const __m128i *)((char *)v158 + 24);
                      *(__m128i *)(v150 - 24) = v159;
                      *(_QWORD *)(v150 - 8) = v158[-1].m128i_i64[1];
                      v43 = v155-- == 0;
                    }
                    while ( !v43 );
                    v151 = ptr;
                  }
                  v187 = v153;
                  v186 = v152;
                  LODWORD(v185) = v157;
                  v183.m128i_i64[0] = v156;
                  v182.m128i_i64[0] = v154;
                  qfree(v151);
                  v65 = v186;
                  v27 = v182.m128i_i64[0];
                  v24 = v183.m128i_i64[0];
                  ptr = v186;
                  v21 = (int)v185;
                  *((_QWORD *)&v203 + 1) = v187;
                  v64 = v203;
                }
                v68 = &v65[24 * v64];
                *(_QWORD *)v68 = v26;
                *((_QWORD *)v68 + 1) = v27;
                v68[16] = 1;
              }
              v69 = *(_QWORD *)a1;
              v23 = a2[1];
              *(_QWORD *)&v203 = v203 + 1;
              v25 = (__int64 *)(v24 + v69);
            }
            *v25 = v23;
            if ( v205 )
            {
              v57 = *(_QWORD *)a1;
              v58 = (char *)ptr;
              LOBYTE(v199) = 0;
              v59 = *((_QWORD *)&v203 + 1);
              v60 = _mm_loadu_si128((const __m128i *)(v57 + v24));
              v61 = v203;
              v198 = v60;
              v62 = v203 + 1;
              if ( &v198 < ptr || &v198 >= (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v203 + 1)) )
              {
                if ( *((_QWORD *)&v203 + 1) < v62 )
                {
                  v182.m128i_i32[0] = v21;
                  v117 = qvector_reserve(p_ptr, 0, v203 + 1, 24);
                  v118 = ptr;
                  v58 = (char *)v117;
                  v119 = *((_QWORD *)&v203 + 1);
                  v120 = v182.m128i_i32[0];
                  *((_QWORD *)&v203 + 1) = v59;
                  v121 = v203 - 1;
                  v122 = (const __m128i *)ptr;
                  if ( (__int64)v203 - 1 >= 0 )
                  {
                    do
                    {
                      v123 = _mm_loadu_si128(v122);
                      v117 += 24;
                      v122 = (const __m128i *)((char *)v122 + 24);
                      *(__m128i *)(v117 - 24) = v123;
                      *(_QWORD *)(v117 - 8) = v122[-1].m128i_i64[1];
                      v43 = v121-- == 0;
                    }
                    while ( !v43 );
                    v118 = ptr;
                  }
                  v182.m128i_i32[0] = v120;
                  qfree(v118);
                  ptr = v58;
                  v21 = v182.m128i_i32[0];
                  *((_QWORD *)&v203 + 1) = v119;
                  v61 = v203;
                }
                v90 = _mm_load_si128(&v198);
                v91 = (__m128i *)&v58[24 * v61];
                v91[1].m128i_i64[0] = v199;
                *v91 = v90;
              }
              else
              {
                if ( *((_QWORD *)&v203 + 1) < v62 )
                {
                  v183.m128i_i32[0] = v21;
                  v182 = v60;
                  v160 = qvector_reserve(p_ptr, 0, v203 + 1, 24);
                  v161 = ptr;
                  v58 = (char *)v160;
                  v162 = *((_QWORD *)&v203 + 1);
                  v163 = _mm_load_si128(&v182);
                  *((_QWORD *)&v203 + 1) = v59;
                  v164 = v203 - 1;
                  v165 = v183.m128i_i32[0];
                  v166 = (const __m128i *)ptr;
                  if ( (__int64)v203 - 1 >= 0 )
                  {
                    do
                    {
                      v167 = _mm_loadu_si128(v166);
                      v160 += 24;
                      v166 = (const __m128i *)((char *)v166 + 24);
                      *(__m128i *)(v160 - 24) = v167;
                      *(_QWORD *)(v160 - 8) = v166[-1].m128i_i64[1];
                      v43 = v164-- == 0;
                    }
                    while ( !v43 );
                    v161 = ptr;
                  }
                  v183.m128i_i32[0] = v165;
                  v182 = v163;
                  qfree(v161);
                  ptr = v58;
                  v60 = _mm_load_si128(&v182);
                  *((_QWORD *)&v203 + 1) = v162;
                  v21 = v183.m128i_i32[0];
                  v61 = v203;
                }
                v63 = (__m128i *)&v58[24 * v61];
                v63[1].m128i_i8[0] = 0;
                *v63 = v60;
              }
              *(_QWORD *)&v203 = v203 + 1;
            }
            break;
          }
          if ( v205 )
          {
            v28 = v203;
            v29 = (char *)ptr;
            v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)v27);
            LOBYTE(v201) = 1;
            v31 = *((_QWORD *)&v203 + 1);
            v200 = v30;
            v32 = v203 + 1;
            if ( v22 < ptr || v22 >= (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v203 + 1)) )
            {
              if ( *((_QWORD *)&v203 + 1) < v32 )
              {
                v182.m128i_i64[0] = (__int64)v22;
                v37 = qvector_reserve(p_ptr, 0, v32, 24);
                v38 = *((_QWORD *)&v203 + 1);
                v29 = (char *)v37;
                *((_QWORD *)&v203 + 1) = v31;
                v39 = (__m128i *)ptr;
                v40 = v182.m128i_i64[0];
                v41 = v203 - 1;
                if ( (__int64)v203 - 1 >= 0 )
                {
                  do
                  {
                    v42 = _mm_loadu_si128(v39);
                    v37 += 24;
                    v39 = (__m128i *)((char *)v39 + 24);
                    *(__m128i *)(v37 - 24) = v42;
                    *(_QWORD *)(v37 - 8) = v39[-1].m128i_i64[1];
                    v43 = v41-- == 0;
                  }
                  while ( !v43 );
                  v39 = (__m128i *)ptr;
                }
                v183.m128i_i64[0] = v40;
                v182.m128i_i64[0] = v38;
                qfree(v39);
                ptr = v29;
                v28 = v203;
                v22 = (__m128i *)v183.m128i_i64[0];
                *((_QWORD *)&v203 + 1) = v182.m128i_i64[0];
              }
              v34 = _mm_load_si128(&v200);
              v35 = (__m128i *)&v29[24 * v28];
              v35[1].m128i_i64[0] = v201;
              *v35 = v34;
            }
            else
            {
              if ( *((_QWORD *)&v203 + 1) < v32 )
              {
                v182 = v30;
                v183.m128i_i64[0] = (__int64)v22;
                v50 = qvector_reserve(p_ptr, 0, v32, 24);
                v51 = *((_QWORD *)&v203 + 1);
                v29 = (char *)v50;
                *((_QWORD *)&v203 + 1) = v31;
                v52 = (__m128i *)ptr;
                v53 = _mm_load_si128(&v182);
                v54 = v203 - 1;
                v55 = v183.m128i_i64[0];
                if ( (__int64)v203 - 1 >= 0 )
                {
                  do
                  {
                    v56 = _mm_loadu_si128(v52);
                    v50 += 24;
                    v52 = (__m128i *)((char *)v52 + 24);
                    *(__m128i *)(v50 - 24) = v56;
                    *(_QWORD *)(v50 - 8) = v52[-1].m128i_i64[1];
                    v43 = v54-- == 0;
                  }
                  while ( !v43 );
                  v52 = (__m128i *)ptr;
                }
                v185 = (__m128i *)v55;
                v183.m128i_i64[0] = v51;
                v182 = v53;
                qfree(v52);
                ptr = v29;
                v28 = v203;
                v22 = v185;
                *((_QWORD *)&v203 + 1) = v183.m128i_i64[0];
                v30 = _mm_load_si128(&v182);
              }
              v33 = (__m128i *)&v29[24 * v28];
              v33[1].m128i_i8[0] = 1;
              *v33 = v30;
            }
            *(_QWORD *)&v203 = v203 + 1;
          }
          v21 = v19;
          v20 = v19 + 1;
          if ( v20 >= *(_QWORD *)(a1 + 8) )
            goto LABEL_37;
          ++v19;
        }
        v19 = v21;
LABEL_37:
        if ( v16 != v19 )
        {
          v36 = v16 + 1LL;
          memmove(
            (void *)(16 * v36 + *(_QWORD *)a1),
            (const void *)(*(_QWORD *)a1 + 16 * v20),
            16 * (*(_QWORD *)(a1 + 8) - v20));
          *(_QWORD *)(a1 + 8) -= v20 - v36;
        }
      }
      *(_QWORD *)(a1 + 24) = 0;
      sub_844C90(p_ptr);
      v3 = 1;
      goto LABEL_28;
    }
  }
LABEL_27:
  v3 = 0;
LABEL_28:
  if ( ptr )
  {
    *(_QWORD *)&v203 = 0;
    qfree(ptr);
  }
  return v3;
}
