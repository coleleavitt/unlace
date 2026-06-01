unsigned __int64 __fastcall sub_3F8FC0(__int64 a1)
{
  _BYTE *v1; // r15
  __int64 v2; // rsi
  void **v3; // rax
  __int64 *v4; // rsi
  __int64 v5; // rcx
  __int64 *v6; // r8
  void *v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  char *v10; // rdi
  __int64 *v11; // rbx
  void *v12; // r10
  __m128i v13; // xmm3
  __m128i v14; // xmm2
  __m128i v15; // xmm1
  __int64 v16; // rax
  __int64 v17; // rax
  size_t v18; // rbp
  size_t v19; // rbp
  size_t v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm0
  __int64 v26; // rax
  void *v27; // rdx
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __int64 v30; // r12
  __int64 v31; // rbp
  char *v32; // rbx
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  __m128i v36; // xmm3
  __m128i v37; // xmm3
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  char *v41; // r13
  char *v42; // r15
  __int64 v43; // r14
  __int64 v44; // r12
  __int64 v45; // rbp
  _QWORD *v46; // rbx
  void *v47; // rdi
  void *v48; // rdi
  void *v49; // rdi
  void *v51; // rax
  const void *v52; // rsi
  void *v53; // rax
  void *v54; // rax
  __int64 v55; // rax
  char *v56; // r13
  __int64 v57; // rbp
  __int64 v58; // rbp
  unsigned __int64 v59; // r12
  __int64 v60; // rax
  __m128i v61; // xmm0
  __int64 v62; // rax
  __m128i v63; // xmm0
  __int64 v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // rax
  void *v67; // rdi
  void *v68; // rdi
  void *v69; // rdi
  bool v70; // cf
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rbp
  char *v74; // r12
  __m128i v75; // xmm1
  void *v76; // r10
  __int64 v77; // rbp
  __m128i v78; // xmm2
  __m128i v79; // xmm3
  void *v80; // r9
  __int64 *v81; // r8
  __int64 *v82; // r13
  char *v83; // rbx
  unsigned __int64 v84; // r12
  __int64 v85; // rcx
  __m128i v86; // xmm0
  __int64 v87; // rcx
  __m128i v88; // xmm0
  __int64 v89; // rcx
  __m128i v90; // xmm0
  __int64 v91; // rcx
  void *v92; // rdi
  void *v93; // rdi
  void *v94; // rdi
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // r12
  char *v98; // r13
  __int64 v99; // rbp
  __int64 v100; // rbx
  __int64 v101; // r14
  __int64 v102; // rax
  __m128i v103; // xmm0
  __int64 v104; // rax
  __m128i v105; // xmm0
  __int64 v106; // rax
  __m128i v107; // xmm0
  __int64 v108; // rax
  void *v109; // rdi
  void *v110; // rdi
  void *v111; // rdi
  __m128i v112; // [rsp+0h] [rbp-258h] BYREF
  __int64 *v113; // [rsp+18h] [rbp-240h]
  __int64 *v114; // [rsp+20h] [rbp-238h]
  __int64 v115; // [rsp+28h] [rbp-230h]
  __int64 v116; // [rsp+30h] [rbp-228h]
  _QWORD *v117; // [rsp+38h] [rbp-220h]
  __m128i v118; // [rsp+40h] [rbp-218h] BYREF
  __m128i v119; // [rsp+50h] [rbp-208h] BYREF
  __m128i v120; // [rsp+60h] [rbp-1F8h] BYREF
  void *v121; // [rsp+70h] [rbp-1E8h]
  void *v122; // [rsp+78h] [rbp-1E0h]
  __int64 *v123; // [rsp+80h] [rbp-1D8h]
  __int64 *p_ptr; // [rsp+88h] [rbp-1D0h]
  __int64 v125; // [rsp+90h] [rbp-1C8h]
  __int64 v126; // [rsp+98h] [rbp-1C0h]
  void *ptr; // [rsp+A0h] [rbp-1B8h] BYREF
  __int128 v128; // [rsp+A8h] [rbp-1B0h]
  __int64 v129; // [rsp+C0h] [rbp-198h] BYREF
  void *v130; // [rsp+C8h] [rbp-190h]
  __m128i v131; // [rsp+D0h] [rbp-188h] BYREF
  void *v132; // [rsp+E0h] [rbp-178h]
  __m128i v133; // [rsp+E8h] [rbp-170h] BYREF
  __int64 v134; // [rsp+F8h] [rbp-160h]
  __m128i v135; // [rsp+100h] [rbp-158h] BYREF
  __int64 v136; // [rsp+110h] [rbp-148h]
  __int64 v137; // [rsp+120h] [rbp-138h]
  void *v138; // [rsp+128h] [rbp-130h]
  __m128i v139; // [rsp+130h] [rbp-128h]
  void *v140; // [rsp+140h] [rbp-118h]
  __m128i v141; // [rsp+148h] [rbp-110h]
  __int64 v142; // [rsp+158h] [rbp-100h]
  __m128i v143; // [rsp+160h] [rbp-F8h]
  __int64 v144; // [rsp+170h] [rbp-E8h]
  __m128i v145; // [rsp+180h] [rbp-D8h] BYREF
  __m128i v146; // [rsp+190h] [rbp-C8h]
  _QWORD v147[2]; // [rsp+1A0h] [rbp-B8h] BYREF
  _BYTE v148[48]; // [rsp+1B0h] [rbp-A8h] BYREF
  char v149; // [rsp+1E0h] [rbp-78h] BYREF
  void *v150; // [rsp+1F8h] [rbp-60h] BYREF
  __int128 v151; // [rsp+200h] [rbp-58h]
  __int64 v152; // [rsp+210h] [rbp-48h]
  unsigned __int64 v153; // [rsp+218h] [rbp-40h]

  v126 = a1;
  v1 = v148;
  v153 = __readfsqword(0x28u);
  v2 = *(int *)(*(_QWORD *)(a1 + 8) + 28LL);
  v147[0] = *(_QWORD *)(a1 + 8);
  v117 = v147;
  v3 = (void **)v148;
  v147[1] = v2;
  do
  {
    *v3 = nullptr;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( v3 != &v150 );
  v150 = nullptr;
  v152 = 0;
  v151 = 0;
  if ( (int)v2 > 0 )
  {
    v115 = v126;
    v125 = v126 + 8 * v2;
    p_ptr = (__int64 *)&ptr;
    do
    {
      v4 = p_ptr;
      ptr = nullptr;
      v128 = 0;
      sub_3F1480(*(_QWORD *)(v115 + 152), p_ptr);
      v8 = v128;
      v9 = *((_QWORD *)v1 + 2);
      if ( v9 < (unsigned __int64)v128 )
      {
        v4 = nullptr;
        v96 = qvector_reserve(v1, 0, v128, 88);
        v97 = *((_QWORD *)v1 + 2);
        v98 = *(char **)v1;
        *((_QWORD *)v1 + 2) = v9;
        v99 = v96;
        v100 = *((_QWORD *)v1 + 1) - 1LL;
        if ( v100 >= 0 )
        {
          v101 = v96;
          do
          {
            *(_QWORD *)v101 = *(_QWORD *)v98;
            v102 = *((_QWORD *)v98 + 1);
            v103 = _mm_loadu_si128((const __m128i *)v98 + 1);
            *((_QWORD *)v98 + 1) = 0;
            *(_QWORD *)(v101 + 8) = v102;
            *(__m128i *)(v101 + 16) = v103;
            v104 = *((_QWORD *)v98 + 4);
            v105 = _mm_loadu_si128((const __m128i *)(v98 + 40));
            *((_OWORD *)v98 + 1) = 0;
            *(_QWORD *)(v101 + 32) = v104;
            *(__m128i *)(v101 + 40) = v105;
            v106 = *((_QWORD *)v98 + 7);
            v107 = _mm_loadu_si128((const __m128i *)v98 + 4);
            *((_QWORD *)v98 + 4) = 0;
            *(_OWORD *)(v98 + 40) = 0;
            *(_QWORD *)(v101 + 56) = v106;
            *(__m128i *)(v101 + 64) = v107;
            v108 = *((_QWORD *)v98 + 10);
            *((_QWORD *)v98 + 7) = 0;
            *((_QWORD *)v98 + 9) = 0;
            *(_QWORD *)(v101 + 80) = v108;
            v109 = *((void **)v98 + 7);
            if ( v109 )
            {
              *((_QWORD *)v98 + 8) = 0;
              qfree(v109);
            }
            v110 = *((void **)v98 + 4);
            if ( v110 )
            {
              *((_QWORD *)v98 + 5) = 0;
              qfree(v110);
            }
            v111 = *((void **)v98 + 1);
            if ( v111 )
            {
              *((_QWORD *)v98 + 2) = 0;
              qfree(v111);
            }
            v98 += 88;
            v101 += 88;
            v70 = v100-- == 0;
          }
          while ( !v70 );
          v98 = *(char **)v1;
        }
        qfree(v98);
        *(_QWORD *)v1 = v99;
        v8 = v128;
        *((_QWORD *)v1 + 2) = v97;
      }
      v10 = (char *)ptr;
      v114 = (__int64 *)((char *)ptr + 80 * v8);
      if ( v114 != ptr )
      {
        v11 = (__int64 *)ptr;
        do
        {
          while ( 1 )
          {
            v17 = *v11;
            v18 = v11[2];
            v130 = nullptr;
            v131 = 0;
            v112.m128i_i64[0] = v17;
            v129 = v17;
            if ( v18 )
            {
              v53 = (void *)qalloc_or_throw(v18, v4, v8, v5, v6, v7);
              v4 = (__int64 *)v11[1];
              v130 = v53;
              v131.m128i_i64[1] = v18;
              memcpy(v53, v4, v18);
              v131.m128i_i64[0] = v18;
            }
            v19 = v11[5];
            v132 = nullptr;
            v133 = 0;
            if ( v19 )
            {
              v54 = (void *)qalloc_or_throw(v19, v4, v8, v5, v6, v7);
              v4 = (__int64 *)v11[4];
              v132 = v54;
              v133.m128i_i64[1] = v19;
              memcpy(v54, v4, v19);
              v133.m128i_i64[0] = v19;
            }
            v20 = v11[8];
            v134 = 0;
            v135 = 0;
            if ( v20 )
            {
              v51 = (void *)qalloc_or_throw(v20, v4, v8, v5, v6, v7);
              v52 = (const void *)v11[7];
              v134 = (__int64)v51;
              v135.m128i_i64[1] = v20;
              memcpy(v51, v52, v20);
              v135.m128i_i64[0] = v20;
            }
            v21 = *((_QWORD *)v1 + 1);
            v22 = *(_QWORD *)v1;
            v4 = &v129;
            v136 = -1;
            v113 = &v129;
            v23 = *((_QWORD *)v1 + 2);
            v24 = v21 + 1;
            if ( (unsigned __int64)&v129 < v22 )
              break;
            v4 = (__int64 *)(v22 + 88 * v23);
            if ( v113 >= v4 )
              break;
            v12 = v130;
            v130 = nullptr;
            v7 = v132;
            v6 = (__int64 *)v134;
            v132 = nullptr;
            v13 = _mm_load_si128(&v131);
            v137 = v112.m128i_i64[0];
            v14 = _mm_loadu_si128(&v133);
            v138 = v12;
            v15 = _mm_load_si128(&v135);
            v140 = v7;
            v142 = v134;
            v134 = 0;
            v144 = -1;
            v139 = v13;
            v131 = 0;
            v141 = v14;
            v133 = 0;
            v143 = v15;
            v135 = 0;
            if ( v23 < v24 )
            {
              v4 = nullptr;
              v122 = v7;
              v123 = v6;
              v121 = v12;
              v120 = v13;
              v119 = v14;
              v118 = v15;
              v22 = qvector_reserve(v1, 0, v24, 88);
              v72 = *((_QWORD *)v1 + 2);
              *((_QWORD *)v1 + 2) = v23;
              v73 = *((_QWORD *)v1 + 1);
              v74 = *(char **)v1;
              v75 = _mm_load_si128(&v118);
              v76 = v121;
              v116 = v72;
              v77 = v73 - 1;
              v78 = _mm_load_si128(&v119);
              v79 = _mm_load_si128(&v120);
              v80 = v122;
              v81 = v123;
              if ( v77 >= 0 )
              {
                v123 = v11;
                v82 = v81;
                v83 = v74;
                v84 = v22;
                do
                {
                  *(_QWORD *)v84 = *(_QWORD *)v83;
                  v85 = *((_QWORD *)v83 + 1);
                  v86 = _mm_loadu_si128((const __m128i *)v83 + 1);
                  *((_QWORD *)v83 + 1) = 0;
                  *(_QWORD *)(v84 + 8) = v85;
                  *(__m128i *)(v84 + 16) = v86;
                  v87 = *((_QWORD *)v83 + 4);
                  v88 = _mm_loadu_si128((const __m128i *)(v83 + 40));
                  *((_OWORD *)v83 + 1) = 0;
                  *(_QWORD *)(v84 + 32) = v87;
                  *(__m128i *)(v84 + 40) = v88;
                  v89 = *((_QWORD *)v83 + 7);
                  v90 = _mm_loadu_si128((const __m128i *)v83 + 4);
                  *((_QWORD *)v83 + 4) = 0;
                  *(_OWORD *)(v83 + 40) = 0;
                  *(_QWORD *)(v84 + 56) = v89;
                  *(__m128i *)(v84 + 64) = v90;
                  v91 = *((_QWORD *)v83 + 10);
                  *((_QWORD *)v83 + 7) = 0;
                  *((_QWORD *)v83 + 9) = 0;
                  *(_QWORD *)(v84 + 80) = v91;
                  v92 = *((void **)v83 + 7);
                  if ( v92 )
                  {
                    *((_QWORD *)v83 + 8) = 0;
                    qfree(v92);
                  }
                  v93 = *((void **)v83 + 4);
                  if ( v93 )
                  {
                    *((_QWORD *)v83 + 5) = 0;
                    qfree(v93);
                  }
                  v94 = *((void **)v83 + 1);
                  if ( v94 )
                  {
                    *((_QWORD *)v83 + 2) = 0;
                    qfree(v94);
                  }
                  v83 += 88;
                  v84 += 88LL;
                  v70 = v77-- == 0;
                }
                while ( !v70 );
                v75 = _mm_load_si128(&v118);
                v78 = _mm_load_si128(&v119);
                v81 = v82;
                v79 = _mm_load_si128(&v120);
                v76 = v121;
                v80 = v122;
                v11 = v123;
                v74 = *(char **)v1;
              }
              v123 = v81;
              v122 = v80;
              v121 = v76;
              v120 = v79;
              v119 = v78;
              v118 = v75;
              qfree(v74);
              v95 = v116;
              v6 = v123;
              *(_QWORD *)v1 = v22;
              v7 = v122;
              v12 = v121;
              v13 = _mm_load_si128(&v120);
              v14 = _mm_load_si128(&v119);
              *((_QWORD *)v1 + 2) = v95;
              v15 = _mm_load_si128(&v118);
              v21 = *((_QWORD *)v1 + 1);
            }
            v8 = 5 * v21;
            v5 = v112.m128i_i64[0];
            v11 += 10;
            v16 = v22 + 88 * v21;
            *(_QWORD *)v16 = v112.m128i_i64[0];
            *(_QWORD *)(v16 + 8) = v12;
            *(_QWORD *)(v16 + 32) = v7;
            *(_QWORD *)(v16 + 56) = v6;
            *(_QWORD *)(v16 + 80) = -1;
            *(__m128i *)(v16 + 16) = v13;
            *(__m128i *)(v16 + 40) = v14;
            *(__m128i *)(v16 + 64) = v15;
            ++*((_QWORD *)v1 + 1);
            if ( v114 == v11 )
              goto LABEL_20;
          }
          if ( v23 < v24 )
          {
            v4 = nullptr;
            v22 = qvector_reserve(v1, 0, v24, 88);
            v55 = *((_QWORD *)v1 + 2);
            v56 = *(char **)v1;
            *((_QWORD *)v1 + 2) = v23;
            v57 = *((_QWORD *)v1 + 1);
            v116 = v55;
            v58 = v57 - 1;
            if ( v58 >= 0 )
            {
              v59 = v22;
              do
              {
                *(_QWORD *)v59 = *(_QWORD *)v56;
                v60 = *((_QWORD *)v56 + 1);
                v61 = _mm_loadu_si128((const __m128i *)v56 + 1);
                *((_QWORD *)v56 + 1) = 0;
                *(_QWORD *)(v59 + 8) = v60;
                *(__m128i *)(v59 + 16) = v61;
                v62 = *((_QWORD *)v56 + 4);
                v63 = _mm_loadu_si128((const __m128i *)(v56 + 40));
                *((_OWORD *)v56 + 1) = 0;
                *(_QWORD *)(v59 + 32) = v62;
                *(__m128i *)(v59 + 40) = v63;
                v64 = *((_QWORD *)v56 + 7);
                v65 = _mm_loadu_si128((const __m128i *)v56 + 4);
                *((_QWORD *)v56 + 4) = 0;
                *(_OWORD *)(v56 + 40) = 0;
                *(_QWORD *)(v59 + 56) = v64;
                *(__m128i *)(v59 + 64) = v65;
                v66 = *((_QWORD *)v56 + 10);
                *((_QWORD *)v56 + 7) = 0;
                *((_QWORD *)v56 + 9) = 0;
                *(_QWORD *)(v59 + 80) = v66;
                v67 = *((void **)v56 + 7);
                if ( v67 )
                {
                  *((_QWORD *)v56 + 8) = 0;
                  qfree(v67);
                }
                v68 = *((void **)v56 + 4);
                if ( v68 )
                {
                  *((_QWORD *)v56 + 5) = 0;
                  qfree(v68);
                }
                v69 = *((void **)v56 + 1);
                if ( v69 )
                {
                  *((_QWORD *)v56 + 2) = 0;
                  qfree(v69);
                }
                v56 += 88;
                v59 += 88LL;
                v70 = v58-- == 0;
              }
              while ( !v70 );
              v56 = *(char **)v1;
            }
            qfree(v56);
            v71 = v116;
            *(_QWORD *)v1 = v22;
            *((_QWORD *)v1 + 2) = v71;
            v21 = *((_QWORD *)v1 + 1);
          }
          v5 = v112.m128i_i64[0];
          v11 += 10;
          v25 = _mm_load_si128(&v131);
          v26 = v22 + 88 * v21;
          *(_QWORD *)(v26 + 8) = v130;
          v27 = v132;
          *(__m128i *)(v26 + 16) = v25;
          v28 = _mm_loadu_si128(&v133);
          *(_QWORD *)(v26 + 32) = v27;
          v8 = v134;
          *(__m128i *)(v26 + 40) = v28;
          v29 = _mm_load_si128(&v135);
          *(_QWORD *)v26 = v5;
          *(_QWORD *)(v26 + 56) = v8;
          *(_QWORD *)(v26 + 80) = -1;
          *(__m128i *)(v26 + 64) = v29;
          ++*((_QWORD *)v1 + 1);
        }
        while ( v114 != v11 );
LABEL_20:
        v10 = (char *)ptr;
      }
      if ( v10 )
      {
        v30 = v128;
        if ( (_QWORD)v128 )
        {
          v31 = 0;
          do
          {
            v32 = &v10[80 * v31];
            v33 = *((void **)v32 + 7);
            if ( v33 )
            {
              *((_QWORD *)v32 + 8) = 0;
              qfree(v33);
            }
            v34 = *((void **)v32 + 4);
            if ( v34 )
            {
              *((_QWORD *)v32 + 5) = 0;
              qfree(v34);
            }
            v35 = *((void **)v32 + 1);
            if ( v35 )
            {
              *((_QWORD *)v32 + 2) = 0;
              qfree(v35);
            }
            ++v31;
            v10 = (char *)ptr;
          }
          while ( v30 != v31 );
        }
        *(_QWORD *)&v128 = 0;
        qfree(v10);
      }
      v115 += 8;
      v1 += 24;
    }
    while ( v125 != v115 );
  }
  v146 = 0u;
  v145 = 0;
  v112 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2AFDA48), (__m128i)(unsigned __int64)sub_3EFE90);
  if ( sub_3F0360 )
  {
    v36 = _mm_load_si128(&v112);
    v145.m128i_i64[0] = (__int64)sub_3F0360;
    v146 = v36;
  }
  sub_3F6C60(v117, &v145, 1);
  if ( v146.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v146.m128i_i64[0])(&v145, &v145, 3);
  v146 = 0u;
  v145 = 0;
  if ( sub_3F02C0 )
  {
    v37 = _mm_load_si128(&v112);
    v145.m128i_i64[0] = (__int64)sub_3F02C0;
    v146 = v37;
  }
  sub_3F6C60(v117, &v145, 0);
  if ( v146.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v146.m128i_i64[0])(&v145, &v145, 3);
  sub_3F3660(v117, (_QWORD *)(v126 + 152), 1, v38, v39, v40);
  if ( v150 )
  {
    *(_QWORD *)&v151 = 0;
    qfree(v150);
  }
  v41 = &v149;
  v42 = (char *)(v117 - 1);
  do
  {
    if ( *(_QWORD *)v41 )
    {
      v43 = *((_QWORD *)v41 + 1);
      v44 = 0;
      v45 = 0;
      if ( v43 )
      {
        do
        {
          v46 = (_QWORD *)(v44 + *(_QWORD *)v41);
          v47 = (void *)v46[7];
          if ( v47 )
          {
            v46[8] = 0;
            qfree(v47);
          }
          v48 = (void *)v46[4];
          if ( v48 )
          {
            v46[5] = 0;
            qfree(v48);
          }
          v49 = (void *)v46[1];
          if ( v49 )
          {
            v46[2] = 0;
            qfree(v49);
          }
          ++v45;
          v44 += 88;
        }
        while ( v43 != v45 );
      }
      *((_QWORD *)v41 + 1) = 0;
      qfree(*(void **)v41);
    }
    v41 -= 24;
  }
  while ( v42 != v41 );
  return v153 - __readfsqword(0x28u);
}

