unsigned __int64 __fastcall sub_40C0E0(__int64 a1)
{
  void **v1; // r14
  __int64 v2; // rsi
  void **v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  __m128i *v6; // rbx
  __m128i v7; // xmm3
  void *v8; // r10
  void *v9; // r9
  __m128i v10; // xmm2
  __m128i *v11; // r8
  __m128i v12; // xmm1
  __m128i v13; // xmm3
  __m128i v14; // xmm7
  __m128i *v15; // rax
  __m128i v16; // xmm5
  size_t v17; // rbp
  size_t v18; // rbp
  size_t v19; // rbp
  void *v20; // rax
  __m128i *v21; // r13
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rsi
  __m128i v24; // xmm3
  __m128i v25; // xmm0
  __m128i *v26; // rax
  void *v27; // rdx
  __m128i v28; // xmm0
  __m128i *v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // rbp
  __int64 *v34; // rbx
  void *v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  __m128i v38; // xmm3
  __m128i v39; // xmm3
  char *v40; // rbp
  char *v41; // r13
  __int64 v42; // r12
  __int64 v43; // r14
  _QWORD *v44; // rbx
  void *v45; // rdi
  void *v46; // rdi
  void *v47; // rdi
  __m128i *v49; // rax
  const void *v50; // rsi
  void *v51; // rax
  const void *v52; // rsi
  void *v53; // rax
  const void *v54; // rsi
  void *v55; // rax
  char *v56; // r15
  void *v57; // rbp
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
  void *v71; // rax
  void *v72; // rax
  void *v73; // rbp
  char *v74; // r12
  __m128i v75; // xmm1
  void *v76; // r10
  __int64 v77; // rbp
  __m128i v78; // xmm2
  __m128i v79; // xmm3
  void *v80; // r9
  __m128i *v81; // r8
  __m128i *v82; // r15
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
  void *v95; // rax
  __int64 v96; // rax
  void *v97; // r12
  char *v98; // r13
  __int64 v99; // rbp
  __int64 v100; // rbx
  __int64 v101; // r15
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
  __m128i *v113; // [rsp+18h] [rbp-240h]
  char *v114; // [rsp+20h] [rbp-238h]
  __int64 v115; // [rsp+28h] [rbp-230h]
  void *v116; // [rsp+30h] [rbp-228h]
  _QWORD *v117; // [rsp+38h] [rbp-220h]
  __m128i v118; // [rsp+40h] [rbp-218h] BYREF
  __m128i v119; // [rsp+50h] [rbp-208h] BYREF
  __m128i v120; // [rsp+60h] [rbp-1F8h] BYREF
  void *v121; // [rsp+70h] [rbp-1E8h]
  void *v122; // [rsp+78h] [rbp-1E0h]
  __m128i *v123; // [rsp+80h] [rbp-1D8h]
  __int64 *p_ptr; // [rsp+88h] [rbp-1D0h]
  __int64 v125; // [rsp+90h] [rbp-1C8h]
  __int64 v126; // [rsp+98h] [rbp-1C0h]
  void *ptr; // [rsp+A0h] [rbp-1B8h] BYREF
  __int128 v128; // [rsp+A8h] [rbp-1B0h]
  __m128i v129; // [rsp+C0h] [rbp-198h] BYREF
  void *v130; // [rsp+D0h] [rbp-188h]
  __m128i v131; // [rsp+D8h] [rbp-180h] BYREF
  void *v132; // [rsp+E8h] [rbp-170h]
  __m128i v133; // [rsp+F0h] [rbp-168h] BYREF
  __m128i *v134; // [rsp+100h] [rbp-158h]
  __m128i v135; // [rsp+108h] [rbp-150h] BYREF
  __int64 v136; // [rsp+118h] [rbp-140h]
  __m128i v137; // [rsp+120h] [rbp-138h]
  void *v138; // [rsp+130h] [rbp-128h]
  __m128i v139; // [rsp+138h] [rbp-120h]
  void *v140; // [rsp+148h] [rbp-110h]
  __m128i v141; // [rsp+150h] [rbp-108h]
  __m128i *v142; // [rsp+160h] [rbp-F8h]
  __m128i v143; // [rsp+168h] [rbp-F0h]
  __int64 v144; // [rsp+178h] [rbp-E0h]
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
  v1 = (void **)v148;
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
      ptr = nullptr;
      v128 = 0;
      sub_404500(*(_QWORD *)(v115 + 152), p_ptr);
      v4 = v128;
      v5 = (unsigned __int64)v1[2];
      if ( v5 < (unsigned __int64)v128 )
      {
        v96 = qvector_reserve(v1, 0, v128, 96);
        v97 = v1[2];
        v98 = (char *)*v1;
        v1[2] = (void *)v5;
        v99 = v96;
        v100 = (__int64)v1[1] - 1;
        if ( v100 >= 0 )
        {
          v101 = v96;
          do
          {
            *(__m128i *)v101 = _mm_loadu_si128((const __m128i *)v98);
            v102 = *((_QWORD *)v98 + 2);
            v103 = _mm_loadu_si128((const __m128i *)(v98 + 24));
            *((_QWORD *)v98 + 2) = 0;
            *(_QWORD *)(v101 + 16) = v102;
            *(__m128i *)(v101 + 24) = v103;
            v104 = *((_QWORD *)v98 + 5);
            v105 = _mm_loadu_si128((const __m128i *)v98 + 3);
            *(_OWORD *)(v98 + 24) = 0;
            *(_QWORD *)(v101 + 40) = v104;
            *(__m128i *)(v101 + 48) = v105;
            v106 = *((_QWORD *)v98 + 8);
            v107 = _mm_loadu_si128((const __m128i *)(v98 + 72));
            *((_QWORD *)v98 + 5) = 0;
            *((_OWORD *)v98 + 3) = 0;
            *(_QWORD *)(v101 + 64) = v106;
            *(__m128i *)(v101 + 72) = v107;
            v108 = *((_QWORD *)v98 + 11);
            *((_QWORD *)v98 + 8) = 0;
            *((_QWORD *)v98 + 10) = 0;
            *(_QWORD *)(v101 + 88) = v108;
            v109 = *((void **)v98 + 8);
            if ( v109 )
            {
              *((_QWORD *)v98 + 9) = 0;
              qfree(v109);
            }
            v110 = *((void **)v98 + 5);
            if ( v110 )
            {
              *((_QWORD *)v98 + 6) = 0;
              qfree(v110);
            }
            v111 = *((void **)v98 + 2);
            if ( v111 )
            {
              *((_QWORD *)v98 + 3) = 0;
              qfree(v111);
            }
            v98 += 96;
            v101 += 96;
            v70 = v100-- == 0;
          }
          while ( !v70 );
          v98 = (char *)*v1;
        }
        qfree(v98);
        *v1 = (void *)v99;
        v4 = v128;
        v1[2] = v97;
      }
      v6 = (__m128i *)ptr;
      v114 = (char *)ptr + 88 * v4;
      if ( v114 != ptr )
      {
        do
        {
          while ( 1 )
          {
            v16 = _mm_loadu_si128(v6);
            v17 = v6[1].m128i_u64[1];
            v130 = nullptr;
            v131 = 0;
            v112 = v16;
            v129 = v16;
            if ( v17 )
            {
              v51 = (void *)qalloc_or_throw(v17);
              v52 = (const void *)v6[1].m128i_i64[0];
              v130 = v51;
              v131.m128i_i64[1] = v17;
              memcpy(v51, v52, v17);
              v131.m128i_i64[0] = v17;
            }
            v18 = v6[3].m128i_u64[0];
            v132 = nullptr;
            v133 = 0;
            if ( v18 )
            {
              v53 = (void *)qalloc_or_throw(v18);
              v54 = (const void *)v6[2].m128i_i64[1];
              v132 = v53;
              v133.m128i_i64[1] = v18;
              memcpy(v53, v54, v18);
              v133.m128i_i64[0] = v18;
            }
            v19 = v6[4].m128i_u64[1];
            v134 = nullptr;
            v135 = 0;
            if ( v19 )
            {
              v49 = (__m128i *)qalloc_or_throw(v19);
              v50 = (const void *)v6[4].m128i_i64[0];
              v134 = v49;
              v135.m128i_i64[1] = v19;
              memcpy(v49, v50, v19);
              v135.m128i_i64[0] = v19;
            }
            v20 = v1[1];
            v21 = (__m128i *)*v1;
            v136 = -1;
            v113 = &v129;
            v22 = (unsigned __int64)v1[2];
            v23 = (unsigned __int64)v20 + 1;
            if ( &v129 < v21 || v113 >= &v21[6 * v22] )
              break;
            v7 = _mm_load_si128(&v112);
            v8 = v130;
            v144 = -1;
            v9 = v132;
            v10 = _mm_load_si128(&v133);
            v130 = nullptr;
            v11 = v134;
            v137 = v7;
            v12 = _mm_loadu_si128(&v135);
            v13 = _mm_loadu_si128(&v131);
            v138 = v8;
            v140 = v132;
            v132 = nullptr;
            v142 = v134;
            v134 = nullptr;
            v139 = v13;
            v131 = 0;
            v141 = v10;
            v133 = 0;
            v143 = v12;
            v135 = 0;
            if ( v22 < v23 )
            {
              v123 = v11;
              v122 = v9;
              v121 = v8;
              v120 = v13;
              v119 = v10;
              v118 = v12;
              v21 = (__m128i *)qvector_reserve(v1, 0, (char *)v20 + 1, 96);
              v72 = v1[2];
              v1[2] = (void *)v22;
              v73 = v1[1];
              v74 = (char *)*v1;
              v75 = _mm_load_si128(&v118);
              v76 = v121;
              v116 = v72;
              v77 = (__int64)v73 - 1;
              v78 = _mm_load_si128(&v119);
              v79 = _mm_load_si128(&v120);
              v80 = v122;
              v81 = v123;
              if ( v77 >= 0 )
              {
                v123 = v6;
                v82 = v81;
                v83 = v74;
                v84 = (unsigned __int64)v21;
                do
                {
                  *(__m128i *)v84 = _mm_loadu_si128((const __m128i *)v83);
                  v85 = *((_QWORD *)v83 + 2);
                  v86 = _mm_loadu_si128((const __m128i *)(v83 + 24));
                  *((_QWORD *)v83 + 2) = 0;
                  *(_QWORD *)(v84 + 16) = v85;
                  *(__m128i *)(v84 + 24) = v86;
                  v87 = *((_QWORD *)v83 + 5);
                  v88 = _mm_loadu_si128((const __m128i *)v83 + 3);
                  *(_OWORD *)(v83 + 24) = 0;
                  *(_QWORD *)(v84 + 40) = v87;
                  *(__m128i *)(v84 + 48) = v88;
                  v89 = *((_QWORD *)v83 + 8);
                  v90 = _mm_loadu_si128((const __m128i *)(v83 + 72));
                  *((_QWORD *)v83 + 5) = 0;
                  *((_OWORD *)v83 + 3) = 0;
                  *(_QWORD *)(v84 + 64) = v89;
                  *(__m128i *)(v84 + 72) = v90;
                  v91 = *((_QWORD *)v83 + 11);
                  *((_QWORD *)v83 + 8) = 0;
                  *((_QWORD *)v83 + 10) = 0;
                  *(_QWORD *)(v84 + 88) = v91;
                  v92 = *((void **)v83 + 8);
                  if ( v92 )
                  {
                    *((_QWORD *)v83 + 9) = 0;
                    qfree(v92);
                  }
                  v93 = *((void **)v83 + 5);
                  if ( v93 )
                  {
                    *((_QWORD *)v83 + 6) = 0;
                    qfree(v93);
                  }
                  v94 = *((void **)v83 + 2);
                  if ( v94 )
                  {
                    *((_QWORD *)v83 + 3) = 0;
                    qfree(v94);
                  }
                  v83 += 96;
                  v84 += 96LL;
                  v70 = v77-- == 0;
                }
                while ( !v70 );
                v75 = _mm_load_si128(&v118);
                v78 = _mm_load_si128(&v119);
                v81 = v82;
                v79 = _mm_load_si128(&v120);
                v76 = v121;
                v80 = v122;
                v6 = v123;
                v74 = (char *)*v1;
              }
              v123 = v81;
              v122 = v80;
              v121 = v76;
              v120 = v79;
              v119 = v78;
              v118 = v75;
              qfree(v74);
              v95 = v116;
              v11 = v123;
              *v1 = v21;
              v9 = v122;
              v8 = v121;
              v13 = _mm_load_si128(&v120);
              v10 = _mm_load_si128(&v119);
              v1[2] = v95;
              v12 = _mm_load_si128(&v118);
              v20 = v1[1];
            }
            v14 = _mm_load_si128(&v112);
            v6 = (__m128i *)((char *)v6 + 88);
            v15 = &v21[6 * (_QWORD)v20];
            v15[1].m128i_i64[0] = (__int64)v8;
            v15[2].m128i_i64[1] = (__int64)v9;
            v15[4].m128i_i64[0] = (__int64)v11;
            v15[5].m128i_i64[1] = -1;
            *v15 = v14;
            *(__m128i *)((char *)v15 + 24) = v13;
            v15[3] = v10;
            *(__m128i *)((char *)v15 + 72) = v12;
            v1[1] = (char *)v1[1] + 1;
            if ( v114 == (char *)v6 )
              goto LABEL_20;
          }
          if ( v22 < v23 )
          {
            v21 = (__m128i *)qvector_reserve(v1, 0, (char *)v20 + 1, 96);
            v55 = v1[2];
            v56 = (char *)*v1;
            v1[2] = (void *)v22;
            v57 = v1[1];
            v116 = v55;
            v58 = (__int64)v57 - 1;
            if ( v58 >= 0 )
            {
              v59 = (unsigned __int64)v21;
              do
              {
                *(__m128i *)v59 = _mm_loadu_si128((const __m128i *)v56);
                v60 = *((_QWORD *)v56 + 2);
                v61 = _mm_loadu_si128((const __m128i *)(v56 + 24));
                *((_QWORD *)v56 + 2) = 0;
                *(_QWORD *)(v59 + 16) = v60;
                *(__m128i *)(v59 + 24) = v61;
                v62 = *((_QWORD *)v56 + 5);
                v63 = _mm_loadu_si128((const __m128i *)v56 + 3);
                *(_OWORD *)(v56 + 24) = 0;
                *(_QWORD *)(v59 + 40) = v62;
                *(__m128i *)(v59 + 48) = v63;
                v64 = *((_QWORD *)v56 + 8);
                v65 = _mm_loadu_si128((const __m128i *)(v56 + 72));
                *((_QWORD *)v56 + 5) = 0;
                *((_OWORD *)v56 + 3) = 0;
                *(_QWORD *)(v59 + 64) = v64;
                *(__m128i *)(v59 + 72) = v65;
                v66 = *((_QWORD *)v56 + 11);
                *((_QWORD *)v56 + 8) = 0;
                *((_QWORD *)v56 + 10) = 0;
                *(_QWORD *)(v59 + 88) = v66;
                v67 = *((void **)v56 + 8);
                if ( v67 )
                {
                  *((_QWORD *)v56 + 9) = 0;
                  qfree(v67);
                }
                v68 = *((void **)v56 + 5);
                if ( v68 )
                {
                  *((_QWORD *)v56 + 6) = 0;
                  qfree(v68);
                }
                v69 = *((void **)v56 + 2);
                if ( v69 )
                {
                  *((_QWORD *)v56 + 3) = 0;
                  qfree(v69);
                }
                v56 += 96;
                v59 += 96LL;
                v70 = v58-- == 0;
              }
              while ( !v70 );
              v56 = (char *)*v1;
            }
            qfree(v56);
            v71 = v116;
            *v1 = v21;
            v1[2] = v71;
            v20 = v1[1];
          }
          v24 = _mm_load_si128(&v112);
          v6 = (__m128i *)((char *)v6 + 88);
          v25 = _mm_loadu_si128(&v131);
          v26 = &v21[6 * (_QWORD)v20];
          v26[1].m128i_i64[0] = (__int64)v130;
          v27 = v132;
          *(__m128i *)((char *)v26 + 24) = v25;
          v28 = _mm_load_si128(&v133);
          v26[2].m128i_i64[1] = (__int64)v27;
          v29 = v134;
          v26[3] = v28;
          v30 = _mm_loadu_si128(&v135);
          v26[4].m128i_i64[0] = (__int64)v29;
          v26[5].m128i_i64[1] = -1;
          *v26 = v24;
          *(__m128i *)((char *)v26 + 72) = v30;
          v1[1] = (char *)v1[1] + 1;
        }
        while ( v114 != (char *)v6 );
LABEL_20:
        v6 = (__m128i *)ptr;
      }
      if ( v6 )
      {
        v31 = v128;
        if ( (_QWORD)v128 )
        {
          v32 = 0;
          v33 = 0;
          do
          {
            v34 = &v6->m128i_i64[v32];
            v35 = (void *)v34[8];
            if ( v35 )
            {
              v34[9] = 0;
              qfree(v35);
            }
            v36 = (void *)v34[5];
            if ( v36 )
            {
              v34[6] = 0;
              qfree(v36);
            }
            v37 = (void *)v34[2];
            if ( v37 )
            {
              v34[3] = 0;
              qfree(v37);
            }
            ++v33;
            v6 = (__m128i *)ptr;
            v32 += 11;
          }
          while ( v31 != v33 );
        }
        *(_QWORD *)&v128 = 0;
        qfree(v6);
      }
      v115 += 8;
      v1 += 3;
    }
    while ( v125 != v115 );
  }
  v146 = 0u;
  v145 = 0;
  v112 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B27A10), (__m128i)(unsigned __int64)sub_402ED0);
  if ( sub_4033F0 )
  {
    v38 = _mm_load_si128(&v112);
    v145.m128i_i64[0] = (__int64)sub_4033F0;
    v146 = v38;
  }
  sub_409DC0(v117, &v145, 1);
  if ( v146.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v146.m128i_i64[0])(&v145, &v145, 3);
  v146 = 0u;
  v145 = 0;
  if ( sub_403350 )
  {
    v39 = _mm_load_si128(&v112);
    v145.m128i_i64[0] = (__int64)sub_403350;
    v146 = v39;
  }
  sub_409DC0(v117, &v145, 0);
  if ( v146.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v146.m128i_i64[0])(&v145, &v145, 3);
  sub_406760(v117, (_QWORD *)(v126 + 152), 1);
  if ( v150 )
  {
    *(_QWORD *)&v151 = 0;
    qfree(v150);
  }
  v40 = &v149;
  v41 = (char *)(v117 - 1);
  do
  {
    if ( *(_QWORD *)v40 )
    {
      v42 = *((_QWORD *)v40 + 1);
      v43 = 0;
      if ( v42 )
      {
        do
        {
          v44 = (_QWORD *)(*(_QWORD *)v40 + 96 * v43);
          v45 = (void *)v44[8];
          if ( v45 )
          {
            v44[9] = 0;
            qfree(v45);
          }
          v46 = (void *)v44[5];
          if ( v46 )
          {
            v44[6] = 0;
            qfree(v46);
          }
          v47 = (void *)v44[2];
          if ( v47 )
          {
            v44[3] = 0;
            qfree(v47);
          }
          ++v43;
        }
        while ( v42 != v43 );
      }
      *((_QWORD *)v40 + 1) = 0;
      qfree(*(void **)v40);
    }
    v40 -= 24;
  }
  while ( v41 != v40 );
  return v153 - __readfsqword(0x28u);
}
