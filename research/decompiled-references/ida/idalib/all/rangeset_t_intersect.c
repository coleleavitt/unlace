__int64 __fastcall rangeset_t_intersect(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  int v3; // eax
  bool v4; // zf
  _QWORD *m128i_i64; // r10
  __m128i *v7; // r15
  __int64 result; // rax
  char v9; // al
  int v10; // ebp
  __int32 v11; // r9d
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 *v18; // r12
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __m128i *v23; // r9
  __m128i *v24; // r12
  __int64 v25; // rax
  __m128i *v26; // r11
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i *v29; // rax
  __m128i v30; // xmm0
  char *v31; // r15
  unsigned __int64 v32; // rdx
  __m128i v33; // xmm0
  __m128i *v34; // rax
  char v35; // al
  __int64 v36; // rbp
  __m128i *v37; // rbp
  __int64 v38; // rax
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __m128i *v41; // rax
  __m128i v42; // xmm0
  char *v43; // r14
  unsigned __int64 v44; // rdx
  __int64 v45; // r12
  __m128i v46; // xmm0
  __m128i *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rsi
  __m128i *v50; // rdi
  __int64 v51; // rdx
  __m128i v52; // xmm0
  bool v53; // cf
  unsigned __int64 v54; // rbx
  __int64 v55; // rax
  __m128i v56; // xmm0
  __m128i v57; // xmm1
  __m128i *v58; // rax
  __m128i v59; // xmm0
  char *v60; // r12
  unsigned __int64 v61; // rdx
  __m128i v62; // xmm0
  __m128i *v63; // rax
  __int64 v64; // rdx
  __int64 *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rsi
  __m128i *v68; // rdi
  __int64 v69; // rdx
  __m128i v70; // xmm0
  unsigned __int64 v71; // rax
  __m128i v72; // xmm0
  __int64 v73; // rax
  char *v74; // r11
  unsigned __int64 v75; // rsi
  __m128i v76; // xmm0
  __m128i *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdx
  __m128i *v80; // rdi
  __int64 v81; // rcx
  __int64 v82; // r9
  __int64 v83; // r10
  __m128i *v84; // r11
  __m128i v85; // xmm0
  __int64 v86; // rdx
  __int64 v87; // r15
  __int64 v88; // rdx
  unsigned __int64 v89; // r12
  __int64 v90; // rax
  __int64 v91; // xmm0_8
  __int64 v92; // xmm1_8
  __int64 v93; // rsi
  __m128i *v94; // rdi
  __int64 v95; // rdx
  __int64 v96; // xmm3_8
  __m128i v97; // xmm0
  __int64 v98; // rax
  char *v99; // r14
  __m128i v100; // xmm0
  __int64 v101; // r12
  unsigned __int64 v102; // rsi
  __m128i v103; // xmm0
  __m128i *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rsi
  __m128i *v107; // rdi
  __int64 v108; // rdx
  __int64 v109; // xmm0_8
  __int64 v110; // xmm1_8
  __int64 v111; // xmm4_8
  __m128i v112; // xmm0
  __int64 v113; // rax
  __m128i *v114; // rdx
  __m128i *v115; // rdi
  __int64 v116; // rcx
  __int64 v117; // r9
  __int64 v118; // xmm0_8
  __int64 v119; // xmm1_8
  _QWORD *v120; // r10
  __m128i *v121; // r11
  __int64 v122; // xmm5_8
  __m128i v123; // xmm0
  __int64 v124; // r15
  __m128i v125; // xmm0
  __int64 v126; // rax
  char *v127; // r12
  __int64 v128; // r14
  unsigned __int64 v129; // rdx
  __m128i *v130; // rax
  __m128i *v131; // rax
  __m128 *v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // r11
  __int64 v136; // rdx
  __m128i *v137; // rdi
  __int64 v138; // rcx
  __int32 v139; // r9d
  __int64 v140; // r10
  __m128i v141; // xmm0
  __int64 v142; // rax
  __int64 v143; // rsi
  __m128i *v144; // rdi
  __int32 v145; // r9d
  __int64 v146; // rdx
  __int64 v147; // r8
  __int64 v148; // r10
  __m128i v149; // xmm0
  __m128i v150; // xmm0
  __m128i *v151; // rax
  __int64 v152; // rax
  __int64 v153; // r11
  void *v154; // rdi
  __int64 v155; // rsi
  __int64 v156; // rcx
  __int32 v157; // r9d
  __m128i v158; // xmm0
  __int64 v159; // r10
  const __m128i *v160; // rdx
  __m128i v161; // xmm1
  __int64 v162; // rax
  void *v163; // rdi
  __int64 v164; // r11
  __int32 v165; // r9d
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r10
  const __m128i *v169; // rdx
  __m128i v170; // xmm0
  __m128i v171; // xmm1
  __int64 v172; // rax
  void *v173; // rdi
  __int64 v174; // r15
  __int32 v175; // r9d
  __int64 v176; // rcx
  __int64 v177; // r10
  const __m128i *v178; // rdx
  __m128i v179; // xmm0
  __int64 v180; // rax
  void *v181; // rdi
  __int64 v182; // r15
  __int32 v183; // r9d
  __int64 v184; // rcx
  __m128i v185; // xmm0
  __int64 v186; // r10
  const __m128i *v187; // rdx
  __m128i v188; // xmm1
  __m128i v189; // [rsp+0h] [rbp-178h] BYREF
  __m128i v190; // [rsp+10h] [rbp-168h] BYREF
  __m128i v191; // [rsp+20h] [rbp-158h] BYREF
  __m128i v192; // [rsp+30h] [rbp-148h] BYREF
  __m128i v193; // [rsp+40h] [rbp-138h] BYREF
  __m128i *v194; // [rsp+50h] [rbp-128h]
  void **p_ptr; // [rsp+58h] [rbp-120h]
  _QWORD *v196; // [rsp+60h] [rbp-118h]
  __m128i *v197; // [rsp+68h] [rbp-110h]
  __m128i v198; // [rsp+70h] [rbp-108h] BYREF
  __int64 v199; // [rsp+80h] [rbp-F8h]
  __m128i v200; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v201; // [rsp+A0h] [rbp-D8h]
  __m128i v202; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v203; // [rsp+C0h] [rbp-B8h]
  __m128i v204; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v205; // [rsp+E0h] [rbp-98h]
  __m128i v206; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v207; // [rsp+100h] [rbp-78h]
  void *ptr; // [rsp+110h] [rbp-68h] BYREF
  __int128 v209; // [rsp+118h] [rbp-60h]
  int v210; // [rsp+128h] [rbp-50h]
  char v211; // [rsp+12Ch] [rbp-4Ch]
  unsigned __int64 v212; // [rsp+138h] [rbp-40h]

  v212 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a2 + 8) == 0;
  ptr = nullptr;
  m128i_i64 = (_QWORD *)a2;
  v210 = v3;
  v209 = 0;
  if ( v4 )
  {
    if ( v3 == -1 )
    {
      v211 = 0;
      v7 = *(__m128i **)a1;
    }
    else
    {
      v35 = must_journal(a1, a2, v2);
      v7 = *(__m128i **)a1;
      if ( v35 )
      {
        v36 = *(_QWORD *)(a1 + 8);
        v211 = 1;
        v37 = &v7[v36];
        if ( v7 < v37 )
        {
          v38 = v209;
          v193.m128i_i64[0] = (__int64)&ptr;
          do
          {
            v42 = _mm_loadu_si128(v7);
            v43 = (char *)ptr;
            v44 = v38 + 1;
            LOBYTE(v207) = 1;
            v45 = *((_QWORD *)&v209 + 1);
            v206 = v42;
            if ( &v206 < ptr || &v206 >= (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v209 + 1)) )
            {
              if ( *((_QWORD *)&v209 + 1) < v44 )
              {
                v48 = qvector_reserve(v193.m128i_i64[0], 0, v44, 24);
                v49 = *((_QWORD *)&v209 + 1);
                v43 = (char *)v48;
                *((_QWORD *)&v209 + 1) = v45;
                v50 = (__m128i *)ptr;
                v51 = v209 - 1;
                if ( (__int64)v209 - 1 >= 0 )
                {
                  do
                  {
                    v52 = _mm_loadu_si128(v50);
                    v48 += 24;
                    v50 = (__m128i *)((char *)v50 + 24);
                    *(__m128i *)(v48 - 24) = v52;
                    *(_QWORD *)(v48 - 8) = v50[-1].m128i_i64[1];
                    v53 = v51-- == 0;
                  }
                  while ( !v53 );
                  v50 = (__m128i *)ptr;
                }
                v189.m128i_i64[0] = v49;
                qfree(v50);
                ptr = v43;
                v38 = v209;
                *((_QWORD *)&v209 + 1) = v189.m128i_i64[0];
              }
              v46 = _mm_load_si128(&v206);
              v47 = (__m128i *)&v43[24 * v38];
              v47[1].m128i_i64[0] = v207;
              *v47 = v46;
            }
            else
            {
              v39 = _mm_loadl_epi64(&v206);
              v40 = _mm_loadl_epi64((const __m128i *)&v206.m128i_u64[1]);
              if ( *((_QWORD *)&v209 + 1) < v44 )
              {
                v190.m128i_i64[0] = v40.m128i_i64[0];
                v189.m128i_i64[0] = v39.m128i_i64[0];
                v90 = qvector_reserve(v193.m128i_i64[0], 0, v44, 24);
                v91 = v189.m128i_i64[0];
                v92 = v190.m128i_i64[0];
                v43 = (char *)v90;
                v93 = *((_QWORD *)&v209 + 1);
                *((_QWORD *)&v209 + 1) = v45;
                v94 = (__m128i *)ptr;
                v95 = v209 - 1;
                if ( (__int64)v209 - 1 >= 0 )
                {
                  v96 = v189.m128i_i64[0];
                  do
                  {
                    v97 = _mm_loadu_si128(v94);
                    v90 += 24;
                    v94 = (__m128i *)((char *)v94 + 24);
                    *(__m128i *)(v90 - 24) = v97;
                    *(_QWORD *)(v90 - 8) = v94[-1].m128i_i64[1];
                    v53 = v95-- == 0;
                  }
                  while ( !v53 );
                  v94 = (__m128i *)ptr;
                  v91 = v96;
                }
                v191.m128i_i64[0] = v93;
                v190.m128i_i64[0] = v92;
                v189.m128i_i64[0] = v91;
                qfree(v94);
                ptr = v43;
                v38 = v209;
                v40 = _mm_loadl_epi64(&v190);
                *((_QWORD *)&v209 + 1) = v191.m128i_i64[0];
                v39 = _mm_loadl_epi64(&v189);
              }
              v41 = (__m128i *)&v43[24 * v38];
              v41[1].m128i_i8[0] = 1;
              *v41 = _mm_unpacklo_epi64(v39, v40);
            }
            ++v7;
            v38 = v209 + 1;
            *(_QWORD *)&v209 = v209 + 1;
          }
          while ( v7 < v37 );
          v7 = *(__m128i **)a1;
        }
      }
      else
      {
        v211 = 0;
      }
    }
    if ( v7 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v7);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    *(_QWORD *)(a1 + 24) = 0;
    sub_844C90((__int64 *)&ptr);
    if ( ptr )
    {
      *(_QWORD *)&v209 = 0;
      qfree(ptr);
    }
    return 1;
  }
  if ( v3 == -1 )
  {
    v211 = 0;
    v9 = 0;
  }
  else
  {
    v189.m128i_i64[0] = a2;
    v9 = must_journal(a1, a2, v2);
    v2 = *(_QWORD *)(a1 + 8);
    m128i_i64 = (_QWORD *)a2;
    v211 = v9;
    if ( !v2 )
    {
      *(_QWORD *)(a1 + 24) = 0;
      goto LABEL_39;
    }
  }
  v193.m128i_i8[0] = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    v14 = 16 * v12;
    v15 = *(_QWORD *)a1 + v14;
    v16 = *(_QWORD *)v15;
    while ( 1 )
    {
      v17 = 16 * v13;
      v18 = (unsigned __int64 *)(*m128i_i64 + 16 * v13);
      if ( v16 < v18[1] )
        break;
      v13 = ++v10;
      if ( v10 == m128i_i64[1] )
      {
        if ( v9 && (v54 = *(_QWORD *)a1 + 16 * v2, v15 < v54) )
        {
          v55 = v209;
          v189.m128i_i64[0] = (__int64)&ptr;
          do
          {
            v59 = _mm_loadu_si128((const __m128i *)v15);
            v60 = (char *)ptr;
            v61 = v55 + 1;
            LOBYTE(v199) = 1;
            v198 = v59;
            if ( &v198 < ptr || &v198 >= (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v209 + 1)) )
            {
              if ( *((_QWORD *)&v209 + 1) < v61 )
              {
                v193.m128i_i64[0] = *((_QWORD *)&v209 + 1);
                v66 = qvector_reserve(v189.m128i_i64[0], 0, v61, 24);
                v60 = (char *)v66;
                v67 = *((_QWORD *)&v209 + 1);
                v68 = (__m128i *)ptr;
                *((_QWORD *)&v209 + 1) = v193.m128i_i64[0];
                v69 = v209 - 1;
                if ( (__int64)v209 - 1 >= 0 )
                {
                  do
                  {
                    v70 = _mm_loadu_si128(v68);
                    v66 += 24;
                    v68 = (__m128i *)((char *)v68 + 24);
                    *(__m128i *)(v66 - 24) = v70;
                    *(_QWORD *)(v66 - 8) = v68[-1].m128i_i64[1];
                    v53 = v69-- == 0;
                  }
                  while ( !v53 );
                  v68 = (__m128i *)ptr;
                }
                v193.m128i_i64[0] = v67;
                qfree(v68);
                ptr = v60;
                v55 = v209;
                *((_QWORD *)&v209 + 1) = v193.m128i_i64[0];
              }
              v62 = _mm_load_si128(&v198);
              v63 = (__m128i *)&v60[24 * v55];
              v63[1].m128i_i64[0] = v199;
              *v63 = v62;
            }
            else
            {
              v56 = _mm_loadl_epi64(&v198);
              v57 = _mm_loadl_epi64((const __m128i *)&v198.m128i_u64[1]);
              if ( *((_QWORD *)&v209 + 1) < v61 )
              {
                v191.m128i_i64[0] = *((_QWORD *)&v209 + 1);
                v190.m128i_i64[0] = v57.m128i_i64[0];
                v193.m128i_i64[0] = v56.m128i_i64[0];
                v105 = qvector_reserve(v189.m128i_i64[0], 0, v61, 24);
                v60 = (char *)v105;
                v106 = *((_QWORD *)&v209 + 1);
                v107 = (__m128i *)ptr;
                v108 = v209 - 1;
                *((_QWORD *)&v209 + 1) = v191.m128i_i64[0];
                v109 = v193.m128i_i64[0];
                v110 = v190.m128i_i64[0];
                if ( (__int64)v209 - 1 >= 0 )
                {
                  v111 = v193.m128i_i64[0];
                  do
                  {
                    v112 = _mm_loadu_si128(v107);
                    v105 += 24;
                    v107 = (__m128i *)((char *)v107 + 24);
                    *(__m128i *)(v105 - 24) = v112;
                    *(_QWORD *)(v105 - 8) = v107[-1].m128i_i64[1];
                    v53 = v108-- == 0;
                  }
                  while ( !v53 );
                  v107 = (__m128i *)ptr;
                  v109 = v111;
                }
                v191.m128i_i64[0] = v106;
                v190.m128i_i64[0] = v110;
                v193.m128i_i64[0] = v109;
                qfree(v107);
                ptr = v60;
                v55 = v209;
                v57 = _mm_loadl_epi64(&v190);
                *((_QWORD *)&v209 + 1) = v191.m128i_i64[0];
                v56 = _mm_loadl_epi64(&v193);
              }
              v58 = (__m128i *)&v60[24 * v55];
              v58[1].m128i_i8[0] = 1;
              *v58 = _mm_unpacklo_epi64(v56, v57);
            }
            v15 += 16LL;
            v55 = v209 + 1;
            *(_QWORD *)&v209 = v209 + 1;
          }
          while ( v15 < v54 );
        }
        else
        {
          v189.m128i_i64[0] = (__int64)&ptr;
        }
        v64 = *(_QWORD *)(a1 + 8);
        v65 = (__int64 *)v189.m128i_i64[0];
        *(_QWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 8) = v64 - ((16 * v64 - v14) >> 4);
        sub_844C90(v65);
        goto LABEL_66;
      }
    }
    if ( v9 )
    {
      v98 = v209;
      v99 = (char *)ptr;
      v100 = (__m128i)_mm_loadh_ps((const double *)(v15 + 8));
      LOBYTE(v201) = 1;
      v101 = *((_QWORD *)&v209 + 1);
      v200 = v100;
      v102 = v209 + 1;
      if ( &v200 >= ptr && &v200 < (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v209 + 1)) )
      {
        if ( *((_QWORD *)&v209 + 1) < v102 )
        {
          v189.m128i_i32[0] = v11;
          v192.m128i_i64[0] = (__int64)m128i_i64;
          v190.m128i_i64[0] = 16 * v13;
          v191 = v100;
          v162 = qvector_reserve(&ptr, 0, v209 + 1, 24);
          v163 = ptr;
          v99 = (char *)v162;
          v164 = *((_QWORD *)&v209 + 1);
          v165 = v189.m128i_i32[0];
          *((_QWORD *)&v209 + 1) = v101;
          v166 = v209 - 1;
          v167 = v190.m128i_i64[0];
          v168 = v192.m128i_i64[0];
          v169 = (const __m128i *)ptr;
          v170 = _mm_load_si128(&v191);
          if ( (__int64)v209 - 1 >= 0 )
          {
            do
            {
              v171 = _mm_loadu_si128(v169);
              v162 += 24;
              v169 = (const __m128i *)((char *)v169 + 24);
              *(__m128i *)(v162 - 24) = v171;
              *(_QWORD *)(v162 - 8) = v169[-1].m128i_i64[1];
              v53 = v166-- == 0;
            }
            while ( !v53 );
            v163 = ptr;
          }
          v193.m128i_i64[1] = v168;
          v191.m128i_i64[0] = v164;
          v190.m128i_i64[0] = v167;
          v189.m128i_i32[0] = v165;
          v192 = v170;
          qfree(v163);
          ptr = v99;
          v11 = v189.m128i_i32[0];
          v17 = v190.m128i_i64[0];
          *((_QWORD *)&v209 + 1) = v191.m128i_i64[0];
          v100 = _mm_load_si128(&v192);
          m128i_i64 = (_QWORD *)v193.m128i_i64[1];
          v98 = v209;
        }
        v132 = (__m128 *)&v99[24 * v98];
        v132[1].m128_i8[0] = 1;
        *v132 = (__m128)v100;
      }
      else
      {
        if ( *((_QWORD *)&v209 + 1) < v102 )
        {
          v189.m128i_i32[0] = v11;
          v191.m128i_i64[0] = (__int64)m128i_i64;
          v190.m128i_i64[0] = 16 * v13;
          v142 = qvector_reserve(&ptr, 0, v209 + 1, 24);
          v143 = *((_QWORD *)&v209 + 1);
          v99 = (char *)v142;
          *((_QWORD *)&v209 + 1) = v101;
          v144 = (__m128i *)ptr;
          v145 = v189.m128i_i32[0];
          v146 = v209 - 1;
          v147 = v190.m128i_i64[0];
          v148 = v191.m128i_i64[0];
          if ( (__int64)v209 - 1 >= 0 )
          {
            do
            {
              v149 = _mm_loadu_si128(v144);
              v142 += 24;
              v144 = (__m128i *)((char *)v144 + 24);
              *(__m128i *)(v142 - 24) = v149;
              *(_QWORD *)(v142 - 8) = v144[-1].m128i_i64[1];
              v53 = v146-- == 0;
            }
            while ( !v53 );
            v144 = (__m128i *)ptr;
          }
          v192.m128i_i64[0] = v148;
          v191.m128i_i64[0] = v143;
          v190.m128i_i64[0] = v147;
          v189.m128i_i32[0] = v145;
          qfree(v144);
          ptr = v99;
          v98 = v209;
          m128i_i64 = (_QWORD *)v192.m128i_i64[0];
          *((_QWORD *)&v209 + 1) = v191.m128i_i64[0];
          v17 = v190.m128i_i64[0];
          v11 = v189.m128i_i32[0];
        }
        v103 = _mm_load_si128(&v200);
        v104 = (__m128i *)&v99[24 * v98];
        v104[1].m128i_i64[0] = v201;
        *v104 = v103;
      }
      *(_QWORD *)&v209 = v209 + 1;
      v16 = *(_QWORD *)v15;
      v18 = (unsigned __int64 *)(*m128i_i64 + v17);
    }
    v19 = *(_QWORD *)(v15 + 8);
    v189.m128i_i32[0] = v11 + 1;
    v20 = *v18;
    if ( v16 < *v18 )
    {
      if ( v20 >= v19 )
      {
        v189.m128i_i32[0] = v11;
LABEL_20:
        if ( !v211 )
          goto LABEL_21;
        goto LABEL_76;
      }
      *(_QWORD *)v15 = v20;
      v193.m128i_i8[0] = 1;
    }
    v71 = v18[1];
    if ( v71 >= v19 )
      goto LABEL_20;
    *(_QWORD *)(v15 + 8) = v71;
    v193.m128i_i8[0] = 1;
    if ( !v211 )
      goto LABEL_21;
LABEL_76:
    v72 = _mm_loadu_si128((const __m128i *)v15);
    v73 = v209;
    LOBYTE(v203) = 0;
    v74 = (char *)ptr;
    v202 = v72;
    v75 = v209 + 1;
    if ( &v202 >= ptr && &v202 < (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v209 + 1)) )
    {
      if ( *((_QWORD *)&v209 + 1) < v75 )
      {
        v193.m128i_i64[1] = (__int64)m128i_i64;
        v192.m128i_i64[0] = *((_QWORD *)&v209 + 1);
        v190.m128i_i32[0] = v11;
        v191 = v72;
        v152 = qvector_reserve(&ptr, 0, v209 + 1, 24);
        v153 = v152;
        v154 = ptr;
        v155 = *((_QWORD *)&v209 + 1);
        v156 = v209 - 1;
        v157 = v190.m128i_i32[0];
        v158 = _mm_load_si128(&v191);
        *((_QWORD *)&v209 + 1) = v192.m128i_i64[0];
        v159 = v193.m128i_i64[1];
        v160 = (const __m128i *)ptr;
        if ( (__int64)v209 - 1 >= 0 )
        {
          do
          {
            v161 = _mm_loadu_si128(v160);
            v152 += 24;
            v160 = (const __m128i *)((char *)v160 + 24);
            *(__m128i *)(v152 - 24) = v161;
            *(_QWORD *)(v152 - 8) = v160[-1].m128i_i64[1];
            v53 = v156-- == 0;
          }
          while ( !v53 );
          v154 = ptr;
        }
        v194 = (__m128i *)v159;
        v193.m128i_i64[1] = v155;
        v192.m128i_i64[0] = v153;
        v190.m128i_i32[0] = v157;
        v191 = v158;
        qfree(v154);
        v74 = (char *)v192.m128i_i64[0];
        v11 = v190.m128i_i32[0];
        v72 = _mm_load_si128(&v191);
        ptr = (void *)v192.m128i_i64[0];
        m128i_i64 = v194->m128i_i64;
        *((_QWORD *)&v209 + 1) = v193.m128i_i64[1];
        v73 = v209;
      }
      v131 = (__m128i *)&v74[24 * v73];
      v131[1].m128i_i8[0] = 0;
      *v131 = v72;
    }
    else
    {
      if ( *((_QWORD *)&v209 + 1) < v75 )
      {
        v192.m128i_i64[0] = (__int64)m128i_i64;
        v191.m128i_i64[0] = *((_QWORD *)&v209 + 1);
        v190.m128i_i32[0] = v11;
        v134 = qvector_reserve(&ptr, 0, v209 + 1, 24);
        v135 = v134;
        v136 = *((_QWORD *)&v209 + 1);
        v137 = (__m128i *)ptr;
        v138 = v209 - 1;
        v139 = v190.m128i_i32[0];
        v140 = v192.m128i_i64[0];
        *((_QWORD *)&v209 + 1) = v191.m128i_i64[0];
        if ( (__int64)v209 - 1 >= 0 )
        {
          do
          {
            v141 = _mm_loadu_si128(v137);
            v134 += 24;
            v137 = (__m128i *)((char *)v137 + 24);
            *(__m128i *)(v134 - 24) = v141;
            *(_QWORD *)(v134 - 8) = v137[-1].m128i_i64[1];
            v53 = v138-- == 0;
          }
          while ( !v53 );
          v137 = (__m128i *)ptr;
        }
        v193.m128i_i64[1] = v140;
        v192.m128i_i64[0] = v136;
        v191.m128i_i64[0] = v135;
        v190.m128i_i32[0] = v139;
        qfree(v137);
        v74 = (char *)v191.m128i_i64[0];
        v73 = v209;
        m128i_i64 = (_QWORD *)v193.m128i_i64[1];
        ptr = (void *)v191.m128i_i64[0];
        v11 = v190.m128i_i32[0];
        *((_QWORD *)&v209 + 1) = v192.m128i_i64[0];
      }
      v76 = _mm_load_si128(&v202);
      v77 = (__m128i *)&v74[24 * v73];
      v77[1].m128i_i64[0] = v203;
      *v77 = v76;
    }
    *(_QWORD *)&v209 = v209 + 1;
LABEL_21:
    v21 = *(_QWORD *)a1;
    v22 = v11;
    do
    {
      if ( *v18 < *(_QWORD *)(v21 + 16 * v22 + 8) )
        break;
      v22 = ++v11;
    }
    while ( v11 != *(_QWORD *)(a1 + 8) );
    if ( v11 <= v189.m128i_i32[0] )
    {
      v89 = *(_QWORD *)(v15 + 8);
      v2 = *(_QWORD *)(a1 + 8);
      if ( v89 < v19 )
      {
        v124 = 16 * (v22 + 1);
        if ( *(_QWORD *)(a1 + 16) < v2 + 1 )
        {
          v190.m128i_i64[0] = (__int64)m128i_i64;
          v189.m128i_i32[0] = v11;
          v133 = qvector_reserve(a1, v21, v2 + 1, 16);
          v2 = *(_QWORD *)(a1 + 8);
          m128i_i64 = (_QWORD *)v190.m128i_i64[0];
          *(_QWORD *)a1 = v133;
          v21 = v133;
          v11 = v189.m128i_i32[0];
        }
        v191.m128i_i64[0] = (__int64)m128i_i64;
        v190.m128i_i32[0] = v11;
        v189 = _mm_unpacklo_epi64((__m128i)v89, (__m128i)v19);
        memmove((void *)(v21 + v124 + 16), (const void *)(v21 + v124), 16 * v2 - v124);
        v125 = _mm_load_si128(&v189);
        v11 = v190.m128i_i32[0];
        m128i_i64 = (_QWORD *)v191.m128i_i64[0];
        *(__m128i *)(v21 + v124) = v125;
        v4 = v211 == 0;
        v2 = *(_QWORD *)(a1 + 8) + 1LL;
        *(_QWORD *)(a1 + 8) = v2;
        if ( !v4 )
        {
          v126 = v209;
          v127 = (char *)ptr;
          LOBYTE(v207) = 0;
          v128 = *((_QWORD *)&v209 + 1);
          v206 = v125;
          v129 = v209 + 1;
          if ( &v206 < ptr || &v206 >= (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v209 + 1)) )
          {
            if ( *((_QWORD *)&v209 + 1) < v129 )
            {
              v189.m128i_i32[0] = v11;
              v190.m128i_i64[0] = (__int64)m128i_i64;
              v172 = qvector_reserve(&ptr, 0, v129, 24);
              v173 = ptr;
              v127 = (char *)v172;
              v174 = *((_QWORD *)&v209 + 1);
              v175 = v189.m128i_i32[0];
              *((_QWORD *)&v209 + 1) = v128;
              v176 = v209 - 1;
              v177 = v190.m128i_i64[0];
              v178 = (const __m128i *)ptr;
              if ( (__int64)v209 - 1 >= 0 )
              {
                do
                {
                  v179 = _mm_loadu_si128(v178);
                  v172 += 24;
                  v178 = (const __m128i *)((char *)v178 + 24);
                  *(__m128i *)(v172 - 24) = v179;
                  *(_QWORD *)(v172 - 8) = v178[-1].m128i_i64[1];
                  v53 = v176-- == 0;
                }
                while ( !v53 );
                v173 = ptr;
              }
              v190.m128i_i64[0] = v177;
              v189.m128i_i32[0] = v175;
              qfree(v173);
              ptr = v127;
              v11 = v189.m128i_i32[0];
              *((_QWORD *)&v209 + 1) = v174;
              m128i_i64 = (_QWORD *)v190.m128i_i64[0];
              v126 = v209;
            }
            v150 = _mm_load_si128(&v206);
            v151 = (__m128i *)&v127[24 * v126];
            v151[1].m128i_i64[0] = v207;
            *v151 = v150;
          }
          else
          {
            if ( *((_QWORD *)&v209 + 1) < v129 )
            {
              v189.m128i_i32[0] = v11;
              v190 = v125;
              v180 = qvector_reserve(&ptr, 0, v129, 24);
              v181 = ptr;
              v127 = (char *)v180;
              v182 = *((_QWORD *)&v209 + 1);
              v183 = v189.m128i_i32[0];
              *((_QWORD *)&v209 + 1) = v128;
              v184 = v209 - 1;
              v185 = _mm_load_si128(&v190);
              v186 = v191.m128i_i64[0];
              v187 = (const __m128i *)ptr;
              if ( (__int64)v209 - 1 >= 0 )
              {
                do
                {
                  v188 = _mm_loadu_si128(v187);
                  v180 += 24;
                  v187 = (const __m128i *)((char *)v187 + 24);
                  *(__m128i *)(v180 - 24) = v188;
                  *(_QWORD *)(v180 - 8) = v187[-1].m128i_i64[1];
                  v53 = v184-- == 0;
                }
                while ( !v53 );
                v181 = ptr;
              }
              v191.m128i_i64[0] = v186;
              v189.m128i_i32[0] = v183;
              v190 = v185;
              qfree(v181);
              ptr = v127;
              v11 = v189.m128i_i32[0];
              *((_QWORD *)&v209 + 1) = v182;
              v125 = _mm_load_si128(&v190);
              m128i_i64 = (_QWORD *)v191.m128i_i64[0];
              v126 = v209;
            }
            v130 = (__m128i *)&v127[24 * v126];
            v130[1].m128i_i8[0] = 0;
            *v130 = v125;
          }
          *(_QWORD *)&v209 = v209 + 1;
          v2 = *(_QWORD *)(a1 + 8);
        }
      }
      v12 = ++v11;
    }
    else
    {
      v12 = v189.m128i_i32[0];
      v193.m128i_i64[0] = 16 * v22;
      v23 = (__m128i *)(v21 + 16 * v22);
      v190.m128i_i64[0] = 16LL * v189.m128i_i32[0];
      v24 = (__m128i *)(v21 + v190.m128i_i64[0]);
      if ( v211 && v24 < v23 )
      {
        v25 = v209;
        v26 = &v204;
        p_ptr = &ptr;
        do
        {
          v30 = _mm_loadu_si128(v24);
          v31 = (char *)ptr;
          v32 = v25 + 1;
          LOBYTE(v205) = 1;
          v204 = v30;
          if ( v26 < ptr || v26 >= (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v209 + 1)) )
          {
            if ( *((_QWORD *)&v209 + 1) < v32 )
            {
              v194 = v26;
              v193.m128i_i64[1] = (__int64)m128i_i64;
              v192.m128i_i64[0] = *((_QWORD *)&v209 + 1);
              v191.m128i_i64[0] = (__int64)v23;
              v78 = qvector_reserve(p_ptr, 0, v32, 24);
              v31 = (char *)v78;
              v79 = *((_QWORD *)&v209 + 1);
              v80 = (__m128i *)ptr;
              v81 = v209 - 1;
              v82 = v191.m128i_i64[0];
              v83 = v193.m128i_i64[1];
              *((_QWORD *)&v209 + 1) = v192.m128i_i64[0];
              v84 = v194;
              if ( (__int64)v209 - 1 >= 0 )
              {
                do
                {
                  v85 = _mm_loadu_si128(v80);
                  v78 += 24;
                  v80 = (__m128i *)((char *)v80 + 24);
                  *(__m128i *)(v78 - 24) = v85;
                  *(_QWORD *)(v78 - 8) = v80[-1].m128i_i64[1];
                  v53 = v81-- == 0;
                }
                while ( !v53 );
                v80 = (__m128i *)ptr;
              }
              v194 = v84;
              v193.m128i_i64[1] = v83;
              v192.m128i_i64[0] = v79;
              v191.m128i_i64[0] = v82;
              qfree(v80);
              ptr = v31;
              v25 = v209;
              v26 = v194;
              *((_QWORD *)&v209 + 1) = v192.m128i_i64[0];
              m128i_i64 = (_QWORD *)v193.m128i_i64[1];
              v23 = (__m128i *)v191.m128i_i64[0];
            }
            v33 = _mm_load_si128(&v204);
            v34 = (__m128i *)&v31[24 * v25];
            v34[1].m128i_i64[0] = v205;
            *v34 = v33;
          }
          else
          {
            v27 = _mm_loadl_epi64(&v204);
            v28 = _mm_loadl_epi64((const __m128i *)&v204.m128i_u64[1]);
            if ( *((_QWORD *)&v209 + 1) < v32 )
            {
              v197 = v26;
              v196 = m128i_i64;
              v194 = *((__m128i **)&v209 + 1);
              v191.m128i_i64[0] = (__int64)v23;
              v193.m128i_i64[1] = v28.m128i_i64[0];
              v192.m128i_i64[0] = v27.m128i_i64[0];
              v113 = qvector_reserve(&ptr, 0, v32, 24);
              v31 = (char *)v113;
              v114 = *((__m128i **)&v209 + 1);
              v115 = (__m128i *)ptr;
              v116 = v209 - 1;
              *((_QWORD *)&v209 + 1) = v194;
              v117 = v191.m128i_i64[0];
              v118 = v192.m128i_i64[0];
              v119 = v193.m128i_i64[1];
              v120 = v196;
              v121 = v197;
              if ( (__int64)v209 - 1 >= 0 )
              {
                v122 = v192.m128i_i64[0];
                do
                {
                  v123 = _mm_loadu_si128(v115);
                  v113 += 24;
                  v115 = (__m128i *)((char *)v115 + 24);
                  *(__m128i *)(v113 - 24) = v123;
                  *(_QWORD *)(v113 - 8) = v115[-1].m128i_i64[1];
                  v53 = v116-- == 0;
                }
                while ( !v53 );
                v115 = (__m128i *)ptr;
                v118 = v122;
              }
              v197 = v121;
              v196 = v120;
              v194 = v114;
              v191.m128i_i64[0] = v117;
              v193.m128i_i64[1] = v119;
              v192.m128i_i64[0] = v118;
              qfree(v115);
              ptr = v31;
              v25 = v209;
              v26 = v197;
              *((_QWORD *)&v209 + 1) = v194;
              m128i_i64 = v196;
              v28 = _mm_loadl_epi64((const __m128i *)&v193.m128i_u64[1]);
              v27 = _mm_loadl_epi64(&v192);
              v23 = (__m128i *)v191.m128i_i64[0];
            }
            v29 = (__m128i *)&v31[24 * v25];
            v29[1].m128i_i8[0] = 1;
            *v29 = _mm_unpacklo_epi64(v27, v28);
          }
          ++v24;
          v25 = v209 + 1;
          *(_QWORD *)&v209 = v209 + 1;
        }
        while ( v24 < v23 );
        v23 = (__m128i *)(*(_QWORD *)a1 + v193.m128i_i64[0]);
        v24 = (__m128i *)(v190.m128i_i64[0] + *(_QWORD *)a1);
      }
      v86 = *(_QWORD *)(a1 + 8);
      v87 = v193.m128i_i64[0];
      v191.m128i_i64[0] = (__int64)m128i_i64;
      memmove(v24, v23, 16 * v86 - v193.m128i_i64[0]);
      v88 = *(_QWORD *)(a1 + 8);
      v11 = v189.m128i_i32[0];
      m128i_i64 = (_QWORD *)v191.m128i_i64[0];
      v193.m128i_i8[0] = 1;
      v2 = v88 - ((v87 - v190.m128i_i64[0]) >> 4);
      *(_QWORD *)(a1 + 8) = v2;
    }
    if ( v12 >= v2 )
      break;
    v9 = v211;
  }
  v4 = v193.m128i_i8[0] == 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( !v4 )
  {
    sub_844C90((__int64 *)&ptr);
LABEL_66:
    result = 1;
    goto LABEL_67;
  }
LABEL_39:
  result = 0;
LABEL_67:
  if ( ptr )
  {
    v189.m128i_i8[0] = result;
    *(_QWORD *)&v209 = 0;
    qfree(ptr);
    return v189.m128i_u8[0];
  }
  return result;
}
