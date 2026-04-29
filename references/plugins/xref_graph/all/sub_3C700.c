unsigned __int64 __fastcall sub_3C700(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v6; // rsi
  __int64 v7; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rax
  char v12; // dl
  __int64 v14; // rdx
  __int64 v15; // r15
  const char *v16; // r14
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int128 v20; // rax
  const char *v21; // rsi
  unsigned __int64 v22; // rdi
  _BYTE *v23; // r15
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  char *v26; // rax
  char v27; // al
  __int128 v28; // rax
  const char *v29; // rsi
  unsigned __int64 v30; // rdi
  _BYTE *v31; // r15
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  char *v34; // rax
  __int128 v35; // rax
  const char *v36; // rsi
  unsigned __int64 v37; // rdi
  _BYTE *v38; // r15
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  char *v41; // rax
  char v42; // al
  __int128 v43; // rax
  const char *v44; // rsi
  unsigned __int64 v45; // rdi
  __m128i v46; // xmm0
  char *v47; // rax
  __int128 v48; // rax
  const char *v49; // rsi
  unsigned __int64 v50; // rdi
  _BYTE *v51; // r12
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  char *v54; // rax
  __int64 v55; // rax
  const char *v56; // rsi
  unsigned __int64 v57; // rdi
  _BYTE *v58; // r12
  __m128i v59; // xmm0
  __m128i v60; // xmm1
  char *v61; // rax
  _BYTE *v62; // rdi
  __int64 v63; // rdx
  const char *v64; // rsi
  __int64 v65; // rax
  char *v66; // rdi
  size_t v67; // r12
  void *v68; // r15
  __int64 v69; // rdx
  const char *v70; // rsi
  char *v71; // rax
  __int64 v72; // r15
  __int64 v73; // r14
  __int64 v74; // rdx
  __int64 v75; // rsi
  __m128i v76; // xmm0
  __int64 v77; // rax
  __int64 v78; // rax
  const char *v79; // rsi
  void *v80; // rdi
  const char *v81; // rdx
  __int64 v82; // rbp
  __int64 v83; // rbx
  const char *v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rbx
  _BYTE *v88; // rsi
  __m128i v89; // xmm0
  char *v90; // rax
  __int128 v91; // rax
  const char *v92; // rsi
  unsigned __int64 v93; // rdi
  __m128i v94; // xmm0
  char *v95; // rax
  __int128 v96; // rax
  const char *v97; // rsi
  unsigned __int64 v98; // rdi
  __m128i v99; // xmm0
  char *v100; // rax
  __int128 v101; // rax
  const char *v102; // rsi
  unsigned __int64 v103; // rdi
  __m128i v104; // xmm0
  char *v105; // rax
  unsigned __int64 v106; // rdi
  _BYTE *v107; // r12
  __m128i v108; // xmm0
  __m128i v109; // xmm1
  char *v110; // rax
  char *v111; // rax
  __m128i v112; // xmm0
  char *v113; // rax
  __m128i v114; // xmm0
  char *v115; // rax
  __m128i v116; // xmm0
  char *v117; // rax
  __int64 v118; // rax
  __int64 v119; // r12
  __int64 i; // r8
  char *v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rdi
  void *v124; // rax
  size_t v125; // rcx
  const void **v126; // rdx
  __int64 v127; // rax
  __int128 v128; // rax
  const char *v129; // rsi
  unsigned __int64 v130; // rdi
  _BYTE *v131; // r15
  __m128i v132; // xmm0
  __m128i v133; // xmm1
  char *v134; // rax
  __m128i v135; // xmm0
  char *v136; // rax
  __int64 v137; // rax
  __int64 v138; // rbx
  _BYTE *v139; // rsi
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rbx
  _BYTE *v143; // rsi
  __int64 v144; // rax
  __int64 v145; // rbx
  _BYTE *v146; // rsi
  _BYTE *v147; // r12
  __m128i v148; // xmm0
  __m128i v149; // xmm1
  char *v150; // rax
  _BYTE *v151; // r12
  __m128i v152; // xmm0
  __m128i v153; // xmm1
  char *v154; // rax
  _BYTE *v155; // r12
  __m128i v156; // xmm0
  __m128i v157; // xmm1
  char *v158; // rax
  _BYTE *v159; // r12
  __m128i v160; // xmm0
  __m128i v161; // xmm1
  char *v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __m128i v166; // [rsp+0h] [rbp-B8h] BYREF
  const void **v167; // [rsp+10h] [rbp-A8h]
  __int64 v168; // [rsp+18h] [rbp-A0h]
  const char *v169; // [rsp+20h] [rbp-98h] BYREF
  __int128 v170; // [rsp+28h] [rbp-90h]
  void *src; // [rsp+40h] [rbp-78h] BYREF
  size_t v172[3]; // [rsp+48h] [rbp-70h]
  _BYTE *v173; // [rsp+60h] [rbp-58h] BYREF
  __m128i v174; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v175; // [rsp+78h] [rbp-40h]

  v6 = (_QWORD *)a1[30];
  v7 = a1[31];
  v175 = __readfsqword(0x28u);
  v9 = &v6[v7];
  if ( v6 != v9 )
  {
    v10 = v6;
    while ( *v10 != a2 )
    {
      if ( v9 == ++v10 )
        goto LABEL_11;
    }
    v11 = v10 - v6;
    if ( v11 != -1 )
    {
      if ( *(_BYTE *)(a3 + 16) )
      {
        v86 = a1[27] + 24 * v11;
        v87 = *(_QWORD *)v86;
        v88 = *(_BYTE **)(*(_QWORD *)v86 + 96LL);
        if ( *(_QWORD *)(*(_QWORD *)v86 + 112LL) <= 1u )
        {
          v140 = qvector_reserve(v87 + 96, v88, 2, 1);
          *(_QWORD *)(v87 + 96) = v140;
          v88 = (_BYTE *)v140;
        }
        *(_QWORD *)(v87 + 104) = 2;
        *v88 = 88;
        *(_BYTE *)(*(_QWORD *)(v87 + 96) + 1LL) = 0;
      }
      else
      {
        v12 = *(_BYTE *)(a3 + 17);
        switch ( v12 )
        {
          case 3:
            v137 = a1[27] + 24 * v11;
            v138 = *(_QWORD *)v137;
            v139 = *(_BYTE **)(*(_QWORD *)v137 + 24LL);
            if ( *(_QWORD *)(*(_QWORD *)v137 + 40LL) <= 1u )
            {
              v163 = qvector_reserve(v138 + 24, v139, 2, 1);
              *(_QWORD *)(v138 + 24) = v163;
              v139 = (_BYTE *)v163;
            }
            *(_QWORD *)(v138 + 32) = 2;
            *v139 = 88;
            *(_BYTE *)(*(_QWORD *)(v138 + 24) + 1LL) = 0;
            break;
          case 2:
            v141 = a1[27] + 24 * v11;
            v142 = *(_QWORD *)v141;
            v143 = *(_BYTE **)(*(_QWORD *)v141 + 48LL);
            if ( *(_QWORD *)(*(_QWORD *)v141 + 64LL) <= 1u )
            {
              v164 = qvector_reserve(v142 + 48, v143, 2, 1);
              *(_QWORD *)(v142 + 48) = v164;
              v143 = (_BYTE *)v164;
            }
            *(_QWORD *)(v142 + 56) = 2;
            *v143 = 88;
            *(_BYTE *)(*(_QWORD *)(v142 + 48) + 1LL) = 0;
            break;
          case 1:
            v144 = a1[27] + 24 * v11;
            v145 = *(_QWORD *)v144;
            v146 = *(_BYTE **)(*(_QWORD *)v144 + 72LL);
            if ( *(_QWORD *)(*(_QWORD *)v144 + 88LL) <= 1u )
            {
              v165 = qvector_reserve(v145 + 72, v146, 2, 1);
              *(_QWORD *)(v145 + 72) = v165;
              v146 = (_BYTE *)v165;
            }
            *(_QWORD *)(v145 + 80) = 2;
            *v146 = 88;
            *(_BYTE *)(*(_QWORD *)(v145 + 72) + 1LL) = 0;
            break;
        }
      }
      return v175 - __readfsqword(0x28u);
    }
  }
LABEL_11:
  v169 = nullptr;
  v173 = nullptr;
  v170 = 0;
  v174 = 0;
  if ( a4 )
  {
    v14 = 3;
    v15 = 2;
    v16 = "Up";
  }
  else
  {
    v14 = 5;
    v15 = 4;
    v16 = "Down";
  }
  v166.m128i_i64[0] = v14;
  v17 = qvector_reserve(&v173, 0, v14, 1);
  v173 = (_BYTE *)v17;
  v174.m128i_i64[0] = v166.m128i_i64[0];
  v18 = 0;
  do
  {
    v19 = v18++;
    *(_BYTE *)(v17 + v19) = v16[v19];
  }
  while ( v18 < (unsigned int)v15 );
  v173[v15] = 0;
  v20 = v170;
  v21 = v169;
  v22 = v170 + 1;
  if ( &v173 >= (_BYTE **)v169 && &v173 < (_BYTE **)&v169[24 * *((_QWORD *)&v170 + 1)] )
  {
    v23 = v173;
    v24 = _mm_loadl_epi64(&v174);
    v173 = nullptr;
    v25 = _mm_loadl_epi64((const __m128i *)&v174.m128i_u64[1]);
    v174 = 0;
    if ( *((_QWORD *)&v170 + 1) < v22 )
    {
      v166.m128i_i64[1] = v25.m128i_i64[0];
      v166.m128i_i64[0] = v24.m128i_i64[0];
      v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
      v21 = v169;
      v25 = _mm_loadl_epi64((const __m128i *)&v166.m128i_u64[1]);
      *(_QWORD *)&v20 = v170;
      v24 = _mm_loadl_epi64(&v166);
    }
    v26 = (char *)&v21[24 * v20];
    *(_QWORD *)v26 = v23;
    *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64(v24, v25);
    *(_QWORD *)&v170 = v170 + 1;
    if ( v173 )
    {
      v174.m128i_i64[0] = 0;
      qfree(v173, v21, *((_QWORD *)&v20 + 1));
    }
    if ( !*(_BYTE *)(a3 + 16) )
      goto LABEL_22;
LABEL_81:
    v174 = 0;
    v173 = nullptr;
    v173 = (_BYTE *)qvector_reserve(&v173, 0, 1, 1);
    v174.m128i_i64[0] = 1;
    *v173 = 0;
    v91 = v170;
    v92 = v169;
    v93 = v170 + 1;
    if ( &v173 >= (_BYTE **)v169 && &v173 < (_BYTE **)&v169[24 * *((_QWORD *)&v170 + 1)] )
    {
      v147 = v173;
      v148 = _mm_loadl_epi64(&v174);
      v173 = nullptr;
      v149 = _mm_loadl_epi64((const __m128i *)&v174.m128i_u64[1]);
      v174 = 0;
      if ( *((_QWORD *)&v170 + 1) < v93 )
      {
        v166.m128i_i64[1] = v149.m128i_i64[0];
        v166.m128i_i64[0] = v148.m128i_i64[0];
        v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
        v92 = v169;
        v149 = _mm_loadl_epi64((const __m128i *)&v166.m128i_u64[1]);
        *(_QWORD *)&v91 = v170;
        v148 = _mm_loadl_epi64(&v166);
      }
      v150 = (char *)&v92[24 * v91];
      *(_QWORD *)v150 = v147;
      *(__m128i *)(v150 + 8) = _mm_unpacklo_epi64(v148, v149);
      *(_QWORD *)&v170 = v170 + 1;
      if ( v173 )
      {
        v174.m128i_i64[0] = 0;
        qfree(v173, v92, *((_QWORD *)&v91 + 1));
      }
    }
    else
    {
      if ( *((_QWORD *)&v170 + 1) < v93 )
      {
        v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
        v92 = v169;
        *(_QWORD *)&v91 = v170;
      }
      v94 = _mm_loadu_si128(&v174);
      v95 = (char *)&v92[24 * v91];
      *(_QWORD *)v95 = v173;
      *(__m128i *)(v95 + 8) = v94;
      *(_QWORD *)&v170 = v170 + 1;
    }
    v174 = 0;
    v173 = nullptr;
    v173 = (_BYTE *)qvector_reserve(&v173, 0, 1, 1);
    v174.m128i_i64[0] = 1;
    *v173 = 0;
    v96 = v170;
    v97 = v169;
    v98 = v170 + 1;
    if ( &v173 >= (_BYTE **)v169 && &v173 < (_BYTE **)&v169[24 * *((_QWORD *)&v170 + 1)] )
    {
      v155 = v173;
      v156 = _mm_loadl_epi64(&v174);
      v173 = nullptr;
      v157 = _mm_loadl_epi64((const __m128i *)&v174.m128i_u64[1]);
      v174 = 0;
      if ( *((_QWORD *)&v170 + 1) < v98 )
      {
        v166.m128i_i64[1] = v157.m128i_i64[0];
        v166.m128i_i64[0] = v156.m128i_i64[0];
        v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
        v97 = v169;
        v157 = _mm_loadl_epi64((const __m128i *)&v166.m128i_u64[1]);
        *(_QWORD *)&v96 = v170;
        v156 = _mm_loadl_epi64(&v166);
      }
      v158 = (char *)&v97[24 * v96];
      *(_QWORD *)v158 = v155;
      *(__m128i *)(v158 + 8) = _mm_unpacklo_epi64(v156, v157);
      *(_QWORD *)&v170 = v170 + 1;
      if ( v173 )
      {
        v174.m128i_i64[0] = 0;
        qfree(v173, v97, *((_QWORD *)&v96 + 1));
      }
    }
    else
    {
      if ( *((_QWORD *)&v170 + 1) < v98 )
      {
        v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
        v97 = v169;
        *(_QWORD *)&v96 = v170;
      }
      v99 = _mm_loadu_si128(&v174);
      v100 = (char *)&v97[24 * v96];
      *(_QWORD *)v100 = v173;
      *(__m128i *)(v100 + 8) = v99;
      *(_QWORD *)&v170 = v170 + 1;
    }
    v174 = 0;
    v173 = nullptr;
    v173 = (_BYTE *)qvector_reserve(&v173, 0, 1, 1);
    v174.m128i_i64[0] = 1;
    *v173 = 0;
    v101 = v170;
    v102 = v169;
    v103 = v170 + 1;
    if ( &v173 >= (_BYTE **)v169 && &v173 < (_BYTE **)&v169[24 * *((_QWORD *)&v170 + 1)] )
    {
      v151 = v173;
      v152 = _mm_loadl_epi64(&v174);
      v173 = nullptr;
      v153 = _mm_loadl_epi64((const __m128i *)&v174.m128i_u64[1]);
      v174 = 0;
      if ( *((_QWORD *)&v170 + 1) < v103 )
      {
        v166.m128i_i64[1] = v153.m128i_i64[0];
        v166.m128i_i64[0] = v152.m128i_i64[0];
        v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
        v102 = v169;
        v153 = _mm_loadl_epi64((const __m128i *)&v166.m128i_u64[1]);
        *(_QWORD *)&v101 = v170;
        v152 = _mm_loadl_epi64(&v166);
      }
      v154 = (char *)&v102[24 * v101];
      *(_QWORD *)v154 = v151;
      *(__m128i *)(v154 + 8) = _mm_unpacklo_epi64(v152, v153);
      *(_QWORD *)&v170 = v170 + 1;
      if ( v173 )
      {
        v174.m128i_i64[0] = 0;
        qfree(v173, v102, *((_QWORD *)&v101 + 1));
      }
    }
    else
    {
      if ( *((_QWORD *)&v170 + 1) < v103 )
      {
        v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
        v102 = v169;
        *(_QWORD *)&v101 = v170;
      }
      v104 = _mm_loadu_si128(&v174);
      v105 = (char *)&v102[24 * v101];
      *(_QWORD *)v105 = v173;
      *(__m128i *)(v105 + 8) = v104;
      *(_QWORD *)&v170 = v170 + 1;
    }
    v174 = 0;
    v173 = nullptr;
    v173 = (_BYTE *)qvector_reserve(&v173, 0, 2, 1);
    v174.m128i_i64[0] = 2;
    *v173 = 88;
    v173[1] = 0;
    v55 = v170;
    v56 = v169;
    v106 = v170 + 1;
    if ( &v173 >= (_BYTE **)v169 && &v173 < (_BYTE **)&v169[24 * *((_QWORD *)&v170 + 1)] )
    {
      v107 = v173;
      v108 = _mm_loadl_epi64(&v174);
      v173 = nullptr;
      v109 = _mm_loadl_epi64((const __m128i *)&v174.m128i_u64[1]);
      v174 = 0;
      if ( *((_QWORD *)&v170 + 1) < v106 )
      {
        v166.m128i_i64[1] = v109.m128i_i64[0];
        v166.m128i_i64[0] = v108.m128i_i64[0];
        v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
        v56 = v169;
        v109 = _mm_loadl_epi64((const __m128i *)&v166.m128i_u64[1]);
        v55 = v170;
        v108 = _mm_loadl_epi64(&v166);
      }
      v110 = (char *)&v56[24 * v55];
      *(_QWORD *)v110 = v107;
      *(__m128i *)(v110 + 8) = _mm_unpacklo_epi64(v108, v109);
      v62 = v173;
      v63 = v170 + 1;
      *(_QWORD *)&v170 = v170 + 1;
      if ( v173 )
        goto LABEL_54;
      goto LABEL_55;
    }
    if ( *((_QWORD *)&v170 + 1) >= v106 )
    {
LABEL_103:
      v111 = (char *)&v56[24 * v55];
      *(_QWORD *)v111 = v173;
      *(__m128i *)(v111 + 8) = _mm_loadu_si128(&v174);
      v64 = v169;
      v63 = v170 + 1;
      *(_QWORD *)&v170 = v63;
      v65 = v63 + 1;
      if ( *((_QWORD *)&v170 + 1) >= (unsigned __int64)(v63 + 1) )
        goto LABEL_56;
LABEL_104:
      v169 = (const char *)qvector_reserve(&v169, v64, v65, 24);
      v63 = v170;
      v64 = v169;
      goto LABEL_56;
    }
LABEL_130:
    v169 = (const char *)qvector_reserve(&v169, v56, v170 + 1, 24);
    v56 = v169;
    v55 = v170;
    goto LABEL_103;
  }
  if ( *((_QWORD *)&v170 + 1) < v22 )
  {
    v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
    v21 = v169;
    *(_QWORD *)&v20 = v170;
  }
  v89 = _mm_loadu_si128(&v174);
  v90 = (char *)&v21[24 * v20];
  *(_QWORD *)v90 = v173;
  *(__m128i *)(v90 + 8) = v89;
  *(_QWORD *)&v170 = v170 + 1;
  if ( *(_BYTE *)(a3 + 16) )
    goto LABEL_81;
LABEL_22:
  v27 = *(_BYTE *)(a3 + 17);
  if ( v27 == 1 )
  {
    v174 = 0;
    v173 = nullptr;
    v173 = (_BYTE *)qvector_reserve(&v173, 0, 1, 1);
    v174.m128i_i64[0] = 1;
    *v173 = 0;
    v128 = v170;
    v129 = v169;
    v130 = v170 + 1;
    if ( &v173 < (_BYTE **)v169 || &v173 >= (_BYTE **)&v169[24 * *((_QWORD *)&v170 + 1)] )
    {
      if ( *((_QWORD *)&v170 + 1) < v130 )
      {
        v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
        v129 = v169;
        *(_QWORD *)&v128 = v170;
      }
      v135 = _mm_loadu_si128(&v174);
      v136 = (char *)&v129[24 * v128];
      *(_QWORD *)v136 = v173;
      *(__m128i *)(v136 + 8) = v135;
      *(_QWORD *)&v170 = v170 + 1;
    }
    else
    {
      v131 = v173;
      v132 = _mm_loadl_epi64(&v174);
      v173 = nullptr;
      v133 = _mm_loadl_epi64((const __m128i *)&v174.m128i_u64[1]);
      v174 = 0;
      if ( *((_QWORD *)&v170 + 1) < v130 )
      {
        v166.m128i_i64[1] = v133.m128i_i64[0];
        v166.m128i_i64[0] = v132.m128i_i64[0];
        v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
        v129 = v169;
        v133 = _mm_loadl_epi64((const __m128i *)&v166.m128i_u64[1]);
        *(_QWORD *)&v128 = v170;
        v132 = _mm_loadl_epi64(&v166);
      }
      v134 = (char *)&v129[24 * v128];
      *(_QWORD *)v134 = v131;
      *(__m128i *)(v134 + 8) = _mm_unpacklo_epi64(v132, v133);
      *(_QWORD *)&v170 = v170 + 1;
      if ( v173 )
      {
        v174.m128i_i64[0] = 0;
        qfree(v173, v129, *((_QWORD *)&v128 + 1));
      }
    }
  }
  else if ( v27 != 2 )
  {
    goto LABEL_30;
  }
  v174 = 0;
  v173 = nullptr;
  v173 = (_BYTE *)qvector_reserve(&v173, 0, 1, 1);
  v174.m128i_i64[0] = 1;
  *v173 = 0;
  v28 = v170;
  v29 = v169;
  v30 = v170 + 1;
  if ( &v173 < (_BYTE **)v169 || &v173 >= (_BYTE **)&v169[24 * *((_QWORD *)&v170 + 1)] )
  {
    if ( *((_QWORD *)&v170 + 1) < v30 )
    {
      v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
      v29 = v169;
      *(_QWORD *)&v28 = v170;
    }
    v116 = _mm_loadu_si128(&v174);
    v117 = (char *)&v29[24 * v28];
    *(_QWORD *)v117 = v173;
    *(__m128i *)(v117 + 8) = v116;
    *(_QWORD *)&v170 = v170 + 1;
  }
  else
  {
    v31 = v173;
    v32 = _mm_loadl_epi64(&v174);
    v173 = nullptr;
    v33 = _mm_loadl_epi64((const __m128i *)&v174.m128i_u64[1]);
    v174 = 0;
    if ( *((_QWORD *)&v170 + 1) < v30 )
    {
      v166.m128i_i64[1] = v33.m128i_i64[0];
      v166.m128i_i64[0] = v32.m128i_i64[0];
      v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
      v29 = v169;
      v33 = _mm_loadl_epi64((const __m128i *)&v166.m128i_u64[1]);
      *(_QWORD *)&v28 = v170;
      v32 = _mm_loadl_epi64(&v166);
    }
    v34 = (char *)&v29[24 * v28];
    *(_QWORD *)v34 = v31;
    *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64(v32, v33);
    *(_QWORD *)&v170 = v170 + 1;
    if ( v173 )
    {
      v174.m128i_i64[0] = 0;
      qfree(v173, v29, *((_QWORD *)&v28 + 1));
    }
  }
LABEL_30:
  v174 = 0;
  v173 = nullptr;
  v173 = (_BYTE *)qvector_reserve(&v173, 0, 2, 1);
  v174.m128i_i64[0] = 2;
  *v173 = 88;
  v173[1] = 0;
  v35 = v170;
  v36 = v169;
  v37 = v170 + 1;
  if ( &v173 < (_BYTE **)v169 || &v173 >= (_BYTE **)&v169[24 * *((_QWORD *)&v170 + 1)] )
  {
    if ( *((_QWORD *)&v170 + 1) < v37 )
    {
      v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
      v36 = v169;
      *(_QWORD *)&v35 = v170;
    }
    v112 = _mm_loadu_si128(&v174);
    v113 = (char *)&v36[24 * v35];
    *(_QWORD *)v113 = v173;
    *(__m128i *)(v113 + 8) = v112;
    *(_QWORD *)&v170 = v170 + 1;
  }
  else
  {
    v38 = v173;
    v39 = _mm_loadl_epi64(&v174);
    v173 = nullptr;
    v40 = _mm_loadl_epi64((const __m128i *)&v174.m128i_u64[1]);
    v174 = 0;
    if ( *((_QWORD *)&v170 + 1) < v37 )
    {
      v166.m128i_i64[1] = v40.m128i_i64[0];
      v166.m128i_i64[0] = v39.m128i_i64[0];
      v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
      v36 = v169;
      v40 = _mm_loadl_epi64((const __m128i *)&v166.m128i_u64[1]);
      *(_QWORD *)&v35 = v170;
      v39 = _mm_loadl_epi64(&v166);
    }
    v41 = (char *)&v36[24 * v35];
    *(_QWORD *)v41 = v38;
    *(__m128i *)(v41 + 8) = _mm_unpacklo_epi64(v39, v40);
    *(_QWORD *)&v170 = v170 + 1;
    if ( v173 )
    {
      v174.m128i_i64[0] = 0;
      qfree(v173, v36, *((_QWORD *)&v35 + 1));
    }
  }
  v42 = *(_BYTE *)(a3 + 17);
  if ( v42 != 2 )
  {
    if ( v42 != 3 )
      goto LABEL_49;
    v174 = 0;
    v173 = nullptr;
    v173 = (_BYTE *)qvector_reserve(&v173, 0, 1, 1);
    v174.m128i_i64[0] = 1;
    *v173 = 0;
    v43 = v170;
    v44 = v169;
    v45 = v170 + 1;
    if ( &v173 >= (_BYTE **)v169 && &v173 < (_BYTE **)&v169[24 * *((_QWORD *)&v170 + 1)] )
    {
      v159 = v173;
      v160 = _mm_loadl_epi64(&v174);
      v173 = nullptr;
      v161 = _mm_loadl_epi64((const __m128i *)&v174.m128i_u64[1]);
      v174 = 0;
      if ( *((_QWORD *)&v170 + 1) < v45 )
      {
        v166.m128i_i64[1] = v161.m128i_i64[0];
        v166.m128i_i64[0] = v160.m128i_i64[0];
        v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
        v44 = v169;
        v161 = _mm_loadl_epi64((const __m128i *)&v166.m128i_u64[1]);
        *(_QWORD *)&v43 = v170;
        v160 = _mm_loadl_epi64(&v166);
      }
      v162 = (char *)&v44[24 * v43];
      *(_QWORD *)v162 = v159;
      *(__m128i *)(v162 + 8) = _mm_unpacklo_epi64(v160, v161);
      *(_QWORD *)&v170 = v170 + 1;
      if ( v173 )
      {
        v174.m128i_i64[0] = 0;
        qfree(v173, v44, *((_QWORD *)&v43 + 1));
      }
    }
    else
    {
      if ( *((_QWORD *)&v170 + 1) < v45 )
      {
        v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
        v44 = v169;
        *(_QWORD *)&v43 = v170;
      }
      v46 = _mm_loadu_si128(&v174);
      v47 = (char *)&v44[24 * v43];
      *(_QWORD *)v47 = v173;
      *(__m128i *)(v47 + 8) = v46;
      *(_QWORD *)&v170 = v170 + 1;
    }
  }
  v174 = 0;
  v173 = nullptr;
  v173 = (_BYTE *)qvector_reserve(&v173, 0, 1, 1);
  v174.m128i_i64[0] = 1;
  *v173 = 0;
  v48 = v170;
  v49 = v169;
  v50 = v170 + 1;
  if ( &v173 < (_BYTE **)v169 || &v173 >= (_BYTE **)&v169[24 * *((_QWORD *)&v170 + 1)] )
  {
    if ( *((_QWORD *)&v170 + 1) < v50 )
    {
      v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
      v49 = v169;
      *(_QWORD *)&v48 = v170;
    }
    v114 = _mm_loadu_si128(&v174);
    v115 = (char *)&v49[24 * v48];
    *(_QWORD *)v115 = v173;
    *(__m128i *)(v115 + 8) = v114;
    *(_QWORD *)&v170 = v170 + 1;
  }
  else
  {
    v51 = v173;
    v52 = _mm_loadl_epi64(&v174);
    v173 = nullptr;
    v53 = _mm_loadl_epi64((const __m128i *)&v174.m128i_u64[1]);
    v174 = 0;
    if ( *((_QWORD *)&v170 + 1) < v50 )
    {
      v166.m128i_i64[1] = v53.m128i_i64[0];
      v166.m128i_i64[0] = v52.m128i_i64[0];
      v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
      v49 = v169;
      v53 = _mm_loadl_epi64((const __m128i *)&v166.m128i_u64[1]);
      *(_QWORD *)&v48 = v170;
      v52 = _mm_loadl_epi64(&v166);
    }
    v54 = (char *)&v49[24 * v48];
    *(_QWORD *)v54 = v51;
    *(__m128i *)(v54 + 8) = _mm_unpacklo_epi64(v52, v53);
    *(_QWORD *)&v170 = v170 + 1;
    if ( v173 )
    {
      v174.m128i_i64[0] = 0;
      qfree(v173, v49, *((_QWORD *)&v48 + 1));
    }
  }
LABEL_49:
  v174 = 0;
  v173 = nullptr;
  v173 = (_BYTE *)qvector_reserve(&v173, 0, 1, 1);
  v174.m128i_i64[0] = 1;
  *v173 = 0;
  v55 = v170;
  v56 = v169;
  v57 = v170 + 1;
  if ( &v173 < (_BYTE **)v169 || &v173 >= (_BYTE **)&v169[24 * *((_QWORD *)&v170 + 1)] )
  {
    if ( *((_QWORD *)&v170 + 1) >= v57 )
      goto LABEL_103;
    goto LABEL_130;
  }
  v58 = v173;
  v59 = _mm_loadl_epi64(&v174);
  v173 = nullptr;
  v60 = _mm_loadl_epi64((const __m128i *)&v174.m128i_u64[1]);
  v174 = 0;
  if ( *((_QWORD *)&v170 + 1) < v57 )
  {
    v166.m128i_i64[1] = v60.m128i_i64[0];
    v166.m128i_i64[0] = v59.m128i_i64[0];
    v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
    v56 = v169;
    v60 = _mm_loadl_epi64((const __m128i *)&v166.m128i_u64[1]);
    v55 = v170;
    v59 = _mm_loadl_epi64(&v166);
  }
  v61 = (char *)&v56[24 * v55];
  *(_QWORD *)v61 = v58;
  *(__m128i *)(v61 + 8) = _mm_unpacklo_epi64(v59, v60);
  v62 = v173;
  v63 = v170 + 1;
  *(_QWORD *)&v170 = v170 + 1;
  if ( v173 )
  {
LABEL_54:
    v174.m128i_i64[0] = 0;
    qfree(v62, v56);
    v63 = v170;
  }
LABEL_55:
  v64 = v169;
  v65 = v63 + 1;
  if ( *((_QWORD *)&v170 + 1) < (unsigned __int64)(v63 + 1) )
    goto LABEL_104;
LABEL_56:
  v66 = (char *)&v64[24 * v63];
  *(_QWORD *)v66 = 0;
  *(_OWORD *)(v66 + 8) = 0;
  *(_QWORD *)&v170 = v170 + 1;
  sub_1AC30((__int64 *)v66, (__int64)"%016llX", a2);
  src = nullptr;
  *(_OWORD *)v172 = 0;
  get_nice_colored_name(&src, a2, 2);
  v67 = v172[0];
  v68 = nullptr;
  if ( v172[0] )
  {
    v68 = (void *)qalloc_or_throw(v172[0]);
    memcpy(v68, src, v67);
  }
  v69 = v170;
  v70 = v169;
  if ( *((_QWORD *)&v170 + 1) < (unsigned __int64)(v170 + 1) )
  {
    v169 = (const char *)qvector_reserve(&v169, v169, v170 + 1, 24);
    v69 = v170;
    v70 = v169;
  }
  v71 = (char *)&v70[24 * v69];
  *(_QWORD *)v71 = v68;
  v72 = 0;
  *(__m128i *)(v71 + 8) = _mm_unpacklo_epi64((__m128i)v67, (__m128i)v67);
  v73 = v170;
  *(_QWORD *)&v170 = v170 + 1;
  v166.m128i_i64[0] = v170;
  if ( (_QWORD)v170 )
  {
    v72 = qalloc_or_throw(24 * v166.m128i_i64[0]);
    v119 = v72;
    for ( i = 0; ; ++i )
    {
      v121 = (char *)&v169[v119 - v72];
      *(_QWORD *)v119 = 0;
      *(_OWORD *)(v119 + 8) = 0;
      v122 = *((_QWORD *)v121 + 1);
      if ( v122 )
      {
        v123 = *((_QWORD *)v121 + 1);
        v168 = i;
        v167 = (const void **)v121;
        v166.m128i_i64[1] = v122;
        v124 = (void *)qalloc_or_throw(v123);
        v125 = v166.m128i_u64[1];
        v126 = v167;
        *(_QWORD *)v119 = v124;
        *(_QWORD *)(v119 + 16) = v125;
        memcpy(v124, *v126, v125);
        i = v168;
        *(_QWORD *)(v119 + 8) = v166.m128i_i64[1];
      }
      v119 += 24;
      if ( v73 == i )
        break;
    }
  }
  v74 = a1[28];
  v75 = a1[27];
  if ( a1[29] < (unsigned __int64)(v74 + 1) )
  {
    v127 = qvector_reserve(a1 + 27, v75, v74 + 1, 24);
    a1[27] = v127;
    v74 = a1[28];
    v75 = v127;
  }
  v76 = _mm_loadl_epi64(&v166);
  v77 = v75 + 24 * v74;
  *(_QWORD *)v77 = v72;
  *(__m128i *)(v77 + 8) = _mm_unpacklo_epi64(v76, v76);
  v78 = a1[31];
  v79 = (const char *)a1[30];
  ++a1[28];
  if ( a1[32] < (unsigned __int64)(v78 + 1) )
  {
    v118 = qvector_reserve(a1 + 30, v79, v78 + 1, 8);
    a1[30] = v118;
    v79 = (const char *)v118;
    v78 = a1[31];
  }
  *(_QWORD *)&v79[8 * v78] = a2;
  v80 = src;
  ++a1[31];
  if ( v80 )
  {
    v172[0] = 0;
    qfree(v80, v79);
  }
  v81 = v169;
  if ( v169 )
  {
    v82 = v170;
    if ( (_QWORD)v170 )
    {
      v83 = 0;
      do
      {
        v84 = &v81[24 * v83];
        v85 = *(_QWORD *)v84;
        if ( *(_QWORD *)v84 )
        {
          *((_QWORD *)v84 + 1) = 0;
          qfree(v85, v79);
          v81 = v169;
        }
        ++v83;
      }
      while ( v82 != v83 );
    }
    *(_QWORD *)&v170 = 0;
    qfree(v81, v79);
  }
  return v175 - __readfsqword(0x28u);
}
