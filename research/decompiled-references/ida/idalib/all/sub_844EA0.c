__int64 __fastcall sub_844EA0(__int64 *a1, const __m128i *a2, __int64 a3)
{
  __int64 v4; // r8
  __m128 *v5; // rdi
  __int64 v7; // r9
  const __m128i *v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r13
  __m128 *v11; // rdx
  __m128 *v12; // rbx
  __int64 i; // rax
  __m128 *v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  __int64 result; // rax
  __m128 *v18; // r14
  __int64 v19; // rax
  __m128 *v20; // rsi
  char v21; // al
  __int64 v22; // rax
  const __m128i *v23; // r8
  __m128i v24; // xmm1
  __m128i *v25; // rax
  __m128i v26; // xmm0
  __m128i *v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r10
  __m128i v30; // xmm0
  __m128i *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // r14
  __m128i v35; // xmm0
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rdx
  __m128 *v38; // rax
  char *v39; // r10
  __m128i v40; // xmm0
  __int64 v41; // rax
  __m128i *v42; // rbx
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // rsi
  __m128i *v45; // rax
  __int64 v46; // rax
  __m128i v47; // xmm0
  __m128i v48; // xmm4
  unsigned __int64 v49; // r13
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  __m128i *v53; // rdi
  __int64 v54; // r14
  __m128i v55; // xmm0
  __int64 v56; // rcx
  const __m128i *v57; // rdx
  __m128i v58; // xmm1
  bool v59; // cf
  __m128i v60; // xmm0
  unsigned __int64 v61; // r13
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  const __m128i *v66; // rdx
  __m128i v67; // xmm1
  __int64 v68; // rax
  unsigned __int64 v69; // rsi
  __m128i *v70; // rdi
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // r8
  __m128i v74; // xmm0
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // r14
  unsigned __int64 v77; // rsi
  __m128i *v78; // rax
  __int64 v79; // rax
  unsigned __int64 v80; // rsi
  __m128i *v81; // rdi
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // r8
  __m128i v85; // xmm1
  __m128i v86; // xmm0
  unsigned __int64 v87; // rsi
  unsigned __int64 v88; // r8
  __m128i v89; // xmm0
  unsigned __int64 v90; // r13
  unsigned __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rcx
  const __m128i *v95; // rdx
  __m128i v96; // xmm1
  __int8 *v97; // rax
  __int64 v98; // rbx
  __int64 v99; // rax
  __int64 v100; // r9
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // r13
  __m128i *v104; // rdi
  __int64 v105; // rdx
  __m128i v106; // xmm0
  __m128i v107; // xmm0
  __int64 v108; // rax
  __m128i *v109; // r13
  unsigned __int64 v110; // r15
  __m128i v111; // xmm0
  unsigned __int64 v112; // rdx
  __m128i *v113; // rax
  __m128i v114; // xmm0
  __m128i *v115; // rax
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // r14
  __m128i *v119; // rdi
  __int64 v120; // rdx
  __m128i v121; // xmm0
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // r9
  __int64 v125; // rax
  __int64 v126; // rcx
  const __m128i *v127; // rdx
  __int64 v128; // rcx
  __m128i v129; // xmm0
  __m128i v130; // xmm0
  __m128i *v131; // rax
  __int64 v132; // rax
  __int64 v133; // rcx
  const __m128i *v134; // rdx
  __int64 v135; // rcx
  __m128i v136; // xmm0
  __int64 v137; // rax
  __int64 v138; // rcx
  const __m128i *v139; // rdx
  __int64 v140; // rcx
  __m128i v141; // xmm0
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rsi
  __m128i *v145; // rdi
  __int64 v146; // rdx
  __m128i v147; // xmm0
  __int64 v148; // rsi
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rsi
  __m128i *v152; // rdi
  __int64 v153; // rdx
  __m128i v154; // xmm0
  __int64 v155; // rax
  __m128i *v156; // rdi
  __int64 v157; // rcx
  __int64 v158; // r8
  const __m128i *v159; // rdx
  __int64 v160; // rcx
  __m128i v161; // xmm0
  __int64 v162; // r8
  __int64 v163; // rax
  __m128i *v164; // rdi
  __int64 v165; // r9
  __int64 v166; // rcx
  __m128i v167; // xmm0
  const __m128i *v168; // rdx
  __m128i v169; // xmm1
  __int64 v170; // r9
  __int64 v171; // rax
  __int64 v172; // rcx
  __int64 v173; // rcx
  const __m128i *v174; // rdx
  __m128i v175; // xmm1
  __int64 v176; // rax
  __int64 v177; // rcx
  __m128i *v178; // rdi
  __int64 v179; // r8
  __m128i v180; // xmm0
  __int64 v181; // rcx
  const __m128i *v182; // rdx
  __m128i v183; // xmm1
  __int64 v184; // r8
  __m128i v185; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v186; // [rsp+10h] [rbp-98h] BYREF
  __m128i v187; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v188; // [rsp+38h] [rbp-70h]
  __m128i v189; // [rsp+40h] [rbp-68h] BYREF
  __m128i v190; // [rsp+50h] [rbp-58h] BYREF
  __int64 v191; // [rsp+60h] [rbp-48h]
  unsigned __int64 v192; // [rsp+68h] [rbp-40h]

  v4 = a1[1];
  v5 = (__m128 *)*a1;
  v192 = __readfsqword(0x28u);
  v7 = v4;
  if ( v4 )
  {
    v8 = (const __m128i *)&v5[v7 - 1];
    v9 = v8->m128i_u64[1];
    if ( v9 == a2->m128i_i64[0] )
    {
      if ( *(_BYTE *)(a3 + 28) )
      {
        v107 = _mm_loadl_epi64(v8);
        v108 = *(_QWORD *)(a3 + 8);
        v109 = *(__m128i **)a3;
        v110 = *(_QWORD *)(a3 + 16);
        LOBYTE(v191) = 1;
        v111 = _mm_unpacklo_epi64(v107, (__m128i)v9);
        v112 = v108 + 1;
        v190 = v111;
        if ( &v190 < v109 || &v190 >= (__m128i *)((char *)v109 + 24 * v110) )
        {
          if ( v110 < v112 )
          {
            v155 = qvector_reserve(a3, 0, v112, 24);
            v156 = *(__m128i **)a3;
            v157 = *(_QWORD *)(a3 + 8);
            v158 = *(_QWORD *)(a3 + 16);
            v109 = (__m128i *)v155;
            *(_QWORD *)(a3 + 16) = v110;
            v159 = v156;
            v160 = v157 - 1;
            if ( v160 >= 0 )
            {
              do
              {
                v161 = _mm_loadu_si128(v159);
                v155 += 24;
                v159 = (const __m128i *)((char *)v159 + 24);
                *(__m128i *)(v155 - 24) = v161;
                *(_QWORD *)(v155 - 8) = v159[-1].m128i_i64[1];
                v59 = v160-- == 0;
              }
              while ( !v59 );
              v156 = *(__m128i **)a3;
            }
            v185.m128i_i64[0] = v158;
            qfree(v156);
            v162 = v185.m128i_i64[0];
            *(_QWORD *)a3 = v109;
            v108 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v162;
          }
          v130 = _mm_load_si128(&v190);
          v131 = (__m128i *)((char *)v109 + 24 * v108);
          v131[1].m128i_i64[0] = v191;
          *v131 = v130;
        }
        else
        {
          if ( v110 < v112 )
          {
            v185 = v111;
            v176 = qvector_reserve(a3, 0, v112, 24);
            v177 = *(_QWORD *)(a3 + 8);
            v178 = *(__m128i **)a3;
            v179 = *(_QWORD *)(a3 + 16);
            v180 = _mm_load_si128(&v185);
            *(_QWORD *)(a3 + 16) = v110;
            v109 = (__m128i *)v176;
            v181 = v177 - 1;
            v182 = v178;
            if ( v181 >= 0 )
            {
              do
              {
                v183 = _mm_loadu_si128(v182);
                v176 += 24;
                v182 = (const __m128i *)((char *)v182 + 24);
                *(__m128i *)(v176 - 24) = v183;
                *(_QWORD *)(v176 - 8) = v182[-1].m128i_i64[1];
                v59 = v181-- == 0;
              }
              while ( !v59 );
              v178 = *(__m128i **)a3;
            }
            v185.m128i_i64[0] = v179;
            v186 = v180;
            qfree(v178);
            v184 = v185.m128i_i64[0];
            *(_QWORD *)a3 = v109;
            v108 = *(_QWORD *)(a3 + 8);
            v111 = _mm_load_si128(&v186);
            *(_QWORD *)(a3 + 16) = v184;
          }
          v113 = (__m128i *)((char *)v109 + 24 * v108);
          v113[1].m128i_i8[0] = 1;
          *v113 = v111;
        }
        ++*(_QWORD *)(a3 + 8);
      }
      v46 = a2->m128i_i64[1];
      v8->m128i_i64[1] = v46;
      if ( !*(_BYTE *)(a3 + 28) )
        goto LABEL_35;
      v47 = _mm_loadl_epi64(v8);
      v48 = (__m128i)(unsigned __int64)v46;
      v42 = *(__m128i **)a3;
      v41 = *(_QWORD *)(a3 + 8);
      v49 = *(_QWORD *)(a3 + 16);
      LOBYTE(v191) = 0;
      v40 = _mm_unpacklo_epi64(v47, v48);
      v190 = v40;
      v50 = v41 + 1;
      if ( &v190 >= v42 && &v190 < (__m128i *)((char *)v42 + 24 * v49) )
      {
        if ( v49 >= v50 )
          goto LABEL_50;
        v185 = v40;
        v51 = qvector_reserve(a3, 0, v50, 24);
        v52 = *(_QWORD *)(a3 + 8);
        v53 = *(__m128i **)a3;
        v54 = *(_QWORD *)(a3 + 16);
        v55 = _mm_load_si128(&v185);
        *(_QWORD *)(a3 + 16) = v49;
        v42 = (__m128i *)v51;
        v56 = v52 - 1;
        v57 = v53;
        if ( v56 >= 0 )
        {
          do
          {
            v58 = _mm_loadu_si128(v57);
            v51 += 24;
            v57 = (const __m128i *)((char *)v57 + 24);
            *(__m128i *)(v51 - 24) = v58;
            *(_QWORD *)(v51 - 8) = v57[-1].m128i_i64[1];
            v59 = v56-- == 0;
          }
          while ( !v59 );
          goto LABEL_58;
        }
LABEL_59:
        v185 = v55;
        qfree(v53);
        *(_QWORD *)a3 = v42;
        v41 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 16) = v54;
        v40 = _mm_load_si128(&v185);
        goto LABEL_50;
      }
      if ( v49 < v50 )
      {
        v125 = qvector_reserve(a3, 0, v50, 24);
        v119 = *(__m128i **)a3;
        v126 = *(_QWORD *)(a3 + 8);
        v118 = *(_QWORD *)(a3 + 16);
        v42 = (__m128i *)v125;
        *(_QWORD *)(a3 + 16) = v49;
        v127 = v119;
        v128 = v126 - 1;
        if ( v128 < 0 )
          goto LABEL_108;
        do
        {
          v129 = _mm_loadu_si128(v127);
          v125 += 24;
          v127 = (const __m128i *)((char *)v127 + 24);
          *(__m128i *)(v125 - 24) = v129;
          *(_QWORD *)(v125 - 8) = v127[-1].m128i_i64[1];
          v59 = v128-- == 0;
        }
        while ( !v59 );
        goto LABEL_107;
      }
      goto LABEL_76;
    }
    if ( v9 < a2->m128i_i64[0] )
    {
      v60 = (__m128i)_mm_loadh_ps((const double *)&a2->m128i_i64[1]);
      if ( a1[2] < (unsigned __int64)(v4 + 1) )
      {
        v185 = v60;
        v123 = qvector_reserve(a1, v5, v4 + 1, 16);
        v124 = a1[1];
        v60 = _mm_load_si128(&v185);
        *a1 = v123;
        v5 = (__m128 *)v123;
        v7 = v124;
      }
      v5[v7] = (__m128)v60;
      ++a1[1];
      if ( !*(_BYTE *)(a3 + 28) )
        goto LABEL_35;
      v40 = _mm_loadu_si128(a2);
      v41 = *(_QWORD *)(a3 + 8);
      LOBYTE(v191) = 0;
      v42 = *(__m128i **)a3;
      v61 = *(_QWORD *)(a3 + 16);
      v190 = v40;
      v62 = v41 + 1;
      if ( &v190 >= v42 && &v190 < (__m128i *)((char *)v42 + 24 * v61) )
      {
        if ( v61 >= v62 )
          goto LABEL_50;
        v185 = v40;
        v63 = qvector_reserve(a3, 0, v62, 24);
        v64 = *(_QWORD *)(a3 + 8);
        v53 = *(__m128i **)a3;
        v54 = *(_QWORD *)(a3 + 16);
        v55 = _mm_load_si128(&v185);
        *(_QWORD *)(a3 + 16) = v61;
        v42 = (__m128i *)v63;
        v65 = v64 - 1;
        v66 = v53;
        if ( v65 < 0 )
          goto LABEL_59;
        do
        {
          v67 = _mm_loadu_si128(v66);
          v63 += 24;
          v66 = (const __m128i *)((char *)v66 + 24);
          *(__m128i *)(v63 - 24) = v67;
          *(_QWORD *)(v63 - 8) = v66[-1].m128i_i64[1];
          v59 = v65-- == 0;
        }
        while ( !v59 );
        goto LABEL_58;
      }
      if ( v61 < v62 )
      {
        v137 = qvector_reserve(a3, 0, v62, 24);
        v119 = *(__m128i **)a3;
        v138 = *(_QWORD *)(a3 + 8);
        v118 = *(_QWORD *)(a3 + 16);
        v42 = (__m128i *)v137;
        *(_QWORD *)(a3 + 16) = v61;
        v139 = v119;
        v140 = v138 - 1;
        if ( v140 < 0 )
          goto LABEL_108;
        do
        {
          v141 = _mm_loadu_si128(v139);
          v137 += 24;
          v139 = (const __m128i *)((char *)v139 + 24);
          *(__m128i *)(v137 - 24) = v141;
          *(_QWORD *)(v137 - 8) = v139[-1].m128i_i64[1];
          v59 = v140-- == 0;
        }
        while ( !v59 );
        goto LABEL_107;
      }
LABEL_76:
      v78 = (__m128i *)((char *)v42 + 24 * v41);
      *v78 = _mm_load_si128(&v190);
      v78[1].m128i_i64[0] = v191;
      goto LABEL_77;
    }
  }
  v10 = a2->m128i_i64[0];
  v11 = &v5[v7];
  v12 = v5;
  for ( i = (v7 * 16) >> 4; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v14 = &v12[i >> 1];
      if ( v14->m128_u64[1] >= v10 )
        break;
      v12 = v14 + 1;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_8;
    }
  }
LABEL_8:
  if ( v12 == v11 )
  {
    v88 = v4 + 1;
    v89 = (__m128i)_mm_loadh_ps((const double *)&a2->m128i_i64[1]);
    if ( a1[2] < v88 )
    {
      v185 = v89;
      v122 = qvector_reserve(a1, v5, v88, 16);
      v89 = _mm_load_si128(&v185);
      *a1 = v122;
      v11 = (__m128 *)(16 * a1[1] + v122);
    }
    *v11 = (__m128)v89;
    ++a1[1];
    if ( !*(_BYTE *)(a3 + 28) )
      goto LABEL_35;
    v40 = _mm_loadu_si128(a2);
    v41 = *(_QWORD *)(a3 + 8);
    LOBYTE(v191) = 0;
    v42 = *(__m128i **)a3;
    v90 = *(_QWORD *)(a3 + 16);
    v190 = v40;
    v91 = v41 + 1;
    if ( &v190 >= v42 && &v190 < (__m128i *)((char *)v42 + 24 * v90) )
    {
      if ( v90 >= v91 )
        goto LABEL_50;
      v185 = v40;
      v92 = qvector_reserve(a3, 0, v91, 24);
      v93 = *(_QWORD *)(a3 + 8);
      v53 = *(__m128i **)a3;
      v54 = *(_QWORD *)(a3 + 16);
      v55 = _mm_load_si128(&v185);
      *(_QWORD *)(a3 + 16) = v90;
      v42 = (__m128i *)v92;
      v94 = v93 - 1;
      v95 = v53;
      if ( v94 < 0 )
        goto LABEL_59;
      do
      {
        v96 = _mm_loadu_si128(v95);
        v92 += 24;
        v95 = (const __m128i *)((char *)v95 + 24);
        *(__m128i *)(v92 - 24) = v96;
        *(_QWORD *)(v92 - 8) = v95[-1].m128i_i64[1];
        v59 = v94-- == 0;
      }
      while ( !v59 );
      goto LABEL_58;
    }
    if ( v90 < v91 )
    {
      v132 = qvector_reserve(a3, 0, v91, 24);
      v119 = *(__m128i **)a3;
      v133 = *(_QWORD *)(a3 + 8);
      v118 = *(_QWORD *)(a3 + 16);
      v42 = (__m128i *)v132;
      *(_QWORD *)(a3 + 16) = v90;
      v134 = v119;
      v135 = v133 - 1;
      if ( v135 < 0 )
        goto LABEL_108;
      do
      {
        v136 = _mm_loadu_si128(v134);
        v132 += 24;
        v134 = (const __m128i *)((char *)v134 + 24);
        *(__m128i *)(v132 - 24) = v136;
        *(_QWORD *)(v132 - 8) = v134[-1].m128i_i64[1];
        v59 = v135-- == 0;
      }
      while ( !v59 );
      goto LABEL_107;
    }
    goto LABEL_76;
  }
  v15 = v12->m128_u64[0];
  v16 = a2->m128i_u64[1];
  if ( v10 < v12->m128_u64[0] || (result = 0, v12->m128_u64[1] < v16) )
  {
    if ( v16 >= v15 )
    {
      v18 = v12;
      if ( v15 <= v10 )
        v10 = v12->m128_u64[0];
      v19 = v11 - v12;
      v185.m128i_i64[0] = v10;
      while ( v19 > 0 )
      {
        while ( 1 )
        {
          v20 = &v18[v19 >> 1];
          if ( v16 < v20->m128_u64[1] )
            break;
          v18 = v20 + 1;
          v19 = v19 - 1 - (v19 >> 1);
          if ( v19 <= 0 )
            goto LABEL_18;
        }
        v19 >>= 1;
      }
LABEL_18:
      if ( v11 == v18 || v16 < v18->m128_u64[0] )
      {
        v21 = *(_BYTE *)(a3 + 28);
        if ( v12 != v18 )
          goto LABEL_21;
      }
      else
      {
        v16 = v18->m128_u64[1];
        ++v18;
        v21 = *(_BYTE *)(a3 + 28);
        if ( v12 != v18 )
        {
LABEL_21:
          if ( v21 && v12 < v18 )
          {
            v22 = *(_QWORD *)(a3 + 8);
            v23 = (const __m128i *)v12;
            do
            {
              v26 = _mm_loadu_si128(v23);
              v27 = *(__m128i **)a3;
              LOBYTE(v191) = 1;
              v28 = v22 + 1;
              v29 = *(_QWORD *)(a3 + 16);
              v190 = v26;
              if ( &v190 < v27 || &v190 >= (__m128i *)((char *)v27 + 24 * v29) )
              {
                if ( v29 < v28 )
                {
                  v187.m128i_i64[0] = v29;
                  v186.m128i_i64[0] = (__int64)v23;
                  v68 = qvector_reserve(a3, 0, v28, 24);
                  v69 = *(_QWORD *)(a3 + 16);
                  v70 = *(__m128i **)a3;
                  v71 = v68;
                  v72 = *(_QWORD *)(a3 + 8) - 1LL;
                  *(_QWORD *)(a3 + 16) = v187.m128i_i64[0];
                  v73 = v186.m128i_i64[0];
                  if ( v72 >= 0 )
                  {
                    do
                    {
                      v74 = _mm_loadu_si128(v70);
                      v68 += 24;
                      v70 = (__m128i *)((char *)v70 + 24);
                      *(__m128i *)(v68 - 24) = v74;
                      *(_QWORD *)(v68 - 8) = v70[-1].m128i_i64[1];
                      v59 = v72-- == 0;
                    }
                    while ( !v59 );
                    v70 = *(__m128i **)a3;
                  }
                  v188 = v69;
                  v187.m128i_i64[0] = v71;
                  v186.m128i_i64[0] = v73;
                  qfree(v70);
                  v27 = (__m128i *)v187.m128i_i64[0];
                  v75 = v188;
                  v22 = *(_QWORD *)(a3 + 8);
                  v23 = (const __m128i *)v186.m128i_i64[0];
                  *(_QWORD *)a3 = v187.m128i_i64[0];
                  *(_QWORD *)(a3 + 16) = v75;
                }
                v30 = _mm_load_si128(&v190);
                v31 = (__m128i *)((char *)v27 + 24 * v22);
                v31[1].m128i_i64[0] = v191;
                *v31 = v30;
              }
              else
              {
                v24 = _mm_load_si128(&v190);
                if ( v29 < v28 )
                {
                  v188 = v29;
                  v186.m128i_i64[0] = (__int64)v23;
                  v187 = v24;
                  v79 = qvector_reserve(a3, 0, v28, 24);
                  v80 = *(_QWORD *)(a3 + 16);
                  v81 = *(__m128i **)a3;
                  v82 = v79;
                  v83 = *(_QWORD *)(a3 + 8) - 1LL;
                  *(_QWORD *)(a3 + 16) = v188;
                  v84 = v186.m128i_i64[0];
                  v85 = _mm_load_si128(&v187);
                  if ( v83 >= 0 )
                  {
                    do
                    {
                      v86 = _mm_loadu_si128(v81);
                      v79 += 24;
                      v81 = (__m128i *)((char *)v81 + 24);
                      *(__m128i *)(v79 - 24) = v86;
                      *(_QWORD *)(v79 - 8) = v81[-1].m128i_i64[1];
                      v59 = v83-- == 0;
                    }
                    while ( !v59 );
                    v81 = *(__m128i **)a3;
                  }
                  v188 = v80;
                  v187.m128i_i64[0] = v82;
                  v186.m128i_i64[0] = v84;
                  v189 = v85;
                  qfree(v81);
                  v27 = (__m128i *)v187.m128i_i64[0];
                  v87 = v188;
                  v22 = *(_QWORD *)(a3 + 8);
                  v24 = _mm_load_si128(&v189);
                  *(_QWORD *)a3 = v187.m128i_i64[0];
                  v23 = (const __m128i *)v186.m128i_i64[0];
                  *(_QWORD *)(a3 + 16) = v87;
                }
                v25 = (__m128i *)((char *)v27 + 24 * v22);
                v25[1].m128i_i8[0] = 1;
                *v25 = v24;
              }
              ++v23;
              v22 = *(_QWORD *)(a3 + 8) + 1LL;
              *(_QWORD *)(a3 + 8) = v22;
            }
            while ( v23 < (const __m128i *)v18 );
            v11 = (__m128 *)(*a1 + 16 * a1[1]);
          }
          a1[1] -= ((char *)v18 - (_BYTE *)memmove(&v12[1], v18, (char *)v11 - (char *)v18)) >> 4;
LABEL_34:
          v32 = v185.m128i_i64[0];
          v12->m128_u64[1] = v16;
          v12->m128_u64[0] = v32;
          if ( !*(_BYTE *)(a3 + 28) )
          {
LABEL_35:
            a1[3] = 0;
            return 1;
          }
          v190.m128i_i64[0] = v32;
          v42 = *(__m128i **)a3;
          v41 = *(_QWORD *)(a3 + 8);
          v76 = *(_QWORD *)(a3 + 16);
          v190.m128i_i64[1] = v16;
          LOBYTE(v191) = 0;
          v77 = v41 + 1;
          if ( &v190 >= v42 && &v190 < (__m128i *)((char *)v42 + 24 * v76) )
          {
            if ( v76 < v77 )
            {
              v142 = qvector_reserve(a3, 0, v41 + 1, 24);
              v143 = *(_QWORD *)(a3 + 8);
              v144 = *(_QWORD *)(a3 + 16);
              *(_QWORD *)(a3 + 16) = v76;
              v145 = *(__m128i **)a3;
              v42 = (__m128i *)v142;
              v146 = v143 - 1;
              if ( v146 >= 0 )
              {
                do
                {
                  v147 = _mm_loadu_si128(v145);
                  v142 += 24;
                  v145 = (__m128i *)((char *)v145 + 24);
                  *(__m128i *)(v142 - 24) = v147;
                  *(_QWORD *)(v142 - 8) = v145[-1].m128i_i64[1];
                  v59 = v146-- == 0;
                }
                while ( !v59 );
                v145 = *(__m128i **)a3;
              }
              v186.m128i_i64[0] = v144;
              qfree(v145);
              v148 = v186.m128i_i64[0];
              *(_QWORD *)a3 = v42;
              v41 = *(_QWORD *)(a3 + 8);
              *(_QWORD *)(a3 + 16) = v148;
            }
            v97 = &v42->m128i_i8[24 * v41];
            v98 = v185.m128i_i64[0];
            *((_QWORD *)v97 + 1) = v16;
            *(_QWORD *)v97 = v98;
            v97[16] = 0;
            goto LABEL_77;
          }
          if ( v76 < v77 )
          {
            v101 = qvector_reserve(a3, 0, v41 + 1, 24);
            v102 = *(_QWORD *)(a3 + 8);
            v103 = *(_QWORD *)(a3 + 16);
            *(_QWORD *)(a3 + 16) = v76;
            v104 = *(__m128i **)a3;
            v42 = (__m128i *)v101;
            v105 = v102 - 1;
            if ( v105 >= 0 )
            {
              do
              {
                v106 = _mm_loadu_si128(v104);
                v101 += 24;
                v104 = (__m128i *)((char *)v104 + 24);
                *(__m128i *)(v101 - 24) = v106;
                *(_QWORD *)(v101 - 8) = v104[-1].m128i_i64[1];
                v59 = v105-- == 0;
              }
              while ( !v59 );
              v104 = *(__m128i **)a3;
            }
            qfree(v104);
            *(_QWORD *)a3 = v42;
            v41 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v103;
          }
          goto LABEL_76;
        }
      }
      if ( v21 )
      {
        v33 = *(_QWORD *)(a3 + 8);
        v34 = *(_QWORD *)a3;
        v35 = (__m128i)_mm_loadh_ps((const double *)&v12->m128_u64[1]);
        LOBYTE(v191) = 1;
        v36 = *(_QWORD *)(a3 + 16);
        v190 = v35;
        v37 = v33 + 1;
        if ( (unsigned __int64)&v190 < v34 || (unsigned __int64)&v190 >= v34 + 24 * v36 )
        {
          if ( v36 < v37 )
          {
            v186.m128i_i64[0] = v36;
            v149 = qvector_reserve(a3, 0, v37, 24);
            v150 = *(_QWORD *)(a3 + 8);
            v151 = *(_QWORD *)(a3 + 16);
            v152 = *(__m128i **)a3;
            v34 = v149;
            *(_QWORD *)(a3 + 16) = v186.m128i_i64[0];
            v153 = v150 - 1;
            if ( v153 >= 0 )
            {
              do
              {
                v154 = _mm_loadu_si128(v152);
                v149 += 24;
                v152 = (__m128i *)((char *)v152 + 24);
                *(__m128i *)(v149 - 24) = v154;
                *(_QWORD *)(v149 - 8) = v152[-1].m128i_i64[1];
                v59 = v153-- == 0;
              }
              while ( !v59 );
              v152 = *(__m128i **)a3;
            }
            v186.m128i_i64[0] = v151;
            qfree(v152);
            *(_QWORD *)a3 = v34;
            v33 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v151;
          }
          v114 = _mm_load_si128(&v190);
          v115 = (__m128i *)(v34 + 24 * v33);
          v115[1].m128i_i64[0] = v191;
          *v115 = v114;
        }
        else
        {
          if ( v36 < v37 )
          {
            v187.m128i_i64[0] = v36;
            v186 = v35;
            v163 = qvector_reserve(a3, 0, v37, 24);
            v164 = *(__m128i **)a3;
            v165 = *(_QWORD *)(a3 + 16);
            v34 = v163;
            v166 = *(_QWORD *)(a3 + 8) - 1LL;
            *(_QWORD *)(a3 + 16) = v187.m128i_i64[0];
            v167 = _mm_load_si128(&v186);
            v168 = v164;
            if ( v166 >= 0 )
            {
              do
              {
                v169 = _mm_loadu_si128(v168);
                v163 += 24;
                v168 = (const __m128i *)((char *)v168 + 24);
                *(__m128i *)(v163 - 24) = v169;
                *(_QWORD *)(v163 - 8) = v168[-1].m128i_i64[1];
                v59 = v166-- == 0;
              }
              while ( !v59 );
              v164 = *(__m128i **)a3;
            }
            v186.m128i_i64[0] = v165;
            v187 = v167;
            qfree(v164);
            v170 = v186.m128i_i64[0];
            *(_QWORD *)a3 = v34;
            v33 = *(_QWORD *)(a3 + 8);
            v35 = _mm_load_si128(&v187);
            *(_QWORD *)(a3 + 16) = v170;
          }
          v38 = (__m128 *)(v34 + 24 * v33);
          v38[1].m128_i8[0] = 1;
          *v38 = (__m128)v35;
        }
        ++*(_QWORD *)(a3 + 8);
      }
      goto LABEL_34;
    }
    v39 = (char *)((char *)v12 - (char *)v5);
    if ( a1[2] < (unsigned __int64)(v4 + 1) )
    {
      v185.m128i_i64[0] = (char *)v12 - (char *)v5;
      v99 = qvector_reserve(a1, v5, v4 + 1, 16);
      v39 = (char *)((char *)v12 - (char *)v5);
      v100 = a1[1];
      *a1 = v99;
      v12 = (__m128 *)(v99 + (char *)v12 - (char *)v5);
      v7 = v100;
    }
    memmove(&v12[1], v12, v7 * 16 - (_QWORD)v39);
    *(__m128i *)v12 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v16);
    ++a1[1];
    if ( !*(_BYTE *)(a3 + 28) )
      goto LABEL_35;
    v40 = _mm_loadu_si128(a2);
    v41 = *(_QWORD *)(a3 + 8);
    LOBYTE(v191) = 0;
    v42 = *(__m128i **)a3;
    v43 = *(_QWORD *)(a3 + 16);
    v190 = v40;
    v44 = v41 + 1;
    if ( &v190 >= v42 && &v190 < (__m128i *)((char *)v42 + 24 * v43) )
    {
      if ( v43 >= v44 )
      {
LABEL_50:
        v45 = (__m128i *)((char *)v42 + 24 * v41);
        v45[1].m128i_i8[0] = 0;
        *v45 = v40;
LABEL_77:
        ++*(_QWORD *)(a3 + 8);
        goto LABEL_35;
      }
      v185 = v40;
      v171 = qvector_reserve(a3, 0, v41 + 1, 24);
      v172 = *(_QWORD *)(a3 + 8);
      v53 = *(__m128i **)a3;
      v54 = *(_QWORD *)(a3 + 16);
      v55 = _mm_load_si128(&v185);
      *(_QWORD *)(a3 + 16) = v43;
      v42 = (__m128i *)v171;
      v173 = v172 - 1;
      v174 = v53;
      if ( v173 >= 0 )
      {
        do
        {
          v175 = _mm_loadu_si128(v174);
          v171 += 24;
          v174 = (const __m128i *)((char *)v174 + 24);
          *(__m128i *)(v171 - 24) = v175;
          *(_QWORD *)(v171 - 8) = v174[-1].m128i_i64[1];
          v59 = v173-- == 0;
        }
        while ( !v59 );
LABEL_58:
        v53 = *(__m128i **)a3;
        goto LABEL_59;
      }
      goto LABEL_59;
    }
    if ( v43 < v44 )
    {
      v116 = qvector_reserve(a3, 0, v41 + 1, 24);
      v117 = *(_QWORD *)(a3 + 8);
      v118 = *(_QWORD *)(a3 + 16);
      *(_QWORD *)(a3 + 16) = v43;
      v119 = *(__m128i **)a3;
      v42 = (__m128i *)v116;
      v120 = v117 - 1;
      if ( v120 < 0 )
      {
LABEL_108:
        qfree(v119);
        *(_QWORD *)a3 = v42;
        v41 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 16) = v118;
        goto LABEL_76;
      }
      do
      {
        v121 = _mm_loadu_si128(v119);
        v116 += 24;
        v119 = (__m128i *)((char *)v119 + 24);
        *(__m128i *)(v116 - 24) = v121;
        *(_QWORD *)(v116 - 8) = v119[-1].m128i_i64[1];
        v59 = v120-- == 0;
      }
      while ( !v59 );
LABEL_107:
      v119 = *(__m128i **)a3;
      goto LABEL_108;
    }
    goto LABEL_76;
  }
  return result;
}
