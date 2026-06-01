unsigned __int64 __fastcall sub_406760(_QWORD *a1, _QWORD *a2, char a3)
{
  bool v4; // zf
  size_t v5; // r12
  __m128i **v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  __m128i *v9; // rax
  __m128i *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __m128i v19; // xmm0
  __int64 v20; // rsi
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __m128i *k; // r15
  __m128i *v26; // r13
  void *v27; // rdi
  void *v28; // rdi
  void *v29; // rdi
  size_t *v30; // r13
  __int64 v31; // rdi
  __int64 v32; // r8
  size_t *v33; // r12
  size_t *v34; // rbp
  size_t v35; // rbx
  __int64 v36; // r9
  size_t v37; // rsi
  __int64 v38; // rax
  _QWORD *v39; // rcx
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 v42; // r11
  __int64 v43; // rdx
  __int64 v44; // r11
  __int64 v45; // rdx
  __m128i v46; // xmm0
  __int64 v47; // r11
  __int64 v48; // rdx
  __m128i v49; // xmm0
  __int64 v50; // r11
  __int64 v51; // rdx
  __m128i v52; // xmm0
  __int64 v53; // rax
  __int64 *v54; // rdx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r11
  __int64 v58; // rcx
  __int64 v59; // r11
  __int64 v60; // rcx
  __m128i v61; // xmm0
  __int64 v62; // r11
  __int64 v63; // rcx
  __m128i v64; // xmm0
  __int64 v65; // rcx
  __m128i v66; // xmm0
  __int64 v67; // r10
  _QWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __m128i v74; // xmm0
  __int64 v75; // rcx
  __int64 v76; // rdx
  __m128i v77; // xmm0
  __int64 v78; // rcx
  __int64 v79; // rdx
  __m128i v80; // xmm0
  unsigned __int64 v82; // r14
  __m128i **i; // rbp
  __m128i *v84; // rax
  __m128i *v85; // rdi
  __int64 v86; // rdx
  __int64 v87; // rsi
  char *v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rsi
  __int64 v91; // rcx
  __int64 v92; // rsi
  __int64 v93; // rcx
  __m128i v94; // xmm0
  __int64 v95; // rsi
  __int64 v96; // rcx
  __m128i v97; // xmm0
  __int64 v98; // rcx
  __m128i v99; // xmm0
  __m128i *j; // r13
  __m128i *v101; // r15
  void *v102; // rdi
  void *v103; // rdi
  void *v104; // rdi
  __int64 v105; // r13
  __int64 v106; // rsi
  __int64 v107; // rcx
  __int64 v108; // rdi
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // r8
  _QWORD *v112; // rax
  __int64 v113; // r9
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // r8
  __m128i v117; // xmm0
  __int64 v118; // r9
  __int64 v119; // r8
  __m128i v120; // xmm0
  __int64 v121; // r8
  __m128i v122; // xmm0
  char *v123; // rdi
  __int64 v124; // r13
  __int64 v125; // r12
  __int64 v126; // rbp
  char *v127; // r14
  void *v128; // rdi
  void *v129; // rdi
  void *v130; // rdi
  __m128i *v131; // [rsp+0h] [rbp-78h]
  __m128i *v132; // [rsp+0h] [rbp-78h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v136; // [rsp+28h] [rbp-50h]
  unsigned __int64 v137; // [rsp+38h] [rbp-40h]

  v4 = a1[14] == 0;
  v137 = __readfsqword(0x28u);
  v5 = a1[12];
  if ( !v4 )
  {
    ptr = nullptr;
    v136 = 0;
    sub_406400((size_t *)&ptr, v5);
    v82 = 0;
    for ( i = (__m128i **)(a1 + 2); v82 < a1[1]; i += 3 )
    {
      switch_dbctx(*(int *)(a2[v82] + 8LL));
      v84 = *i;
      v85 = &(*i)[6 * (_QWORD)i[1]];
      if ( *i != v85 )
      {
        do
        {
          v86 = v84[5].m128i_i64[1];
          v87 = v84->m128i_i64[0];
          v84 += 6;
          v88 = (char *)ptr + 88 * v86;
          v89 = *(_QWORD *)v88;
          *(_QWORD *)v88 = v87;
          v90 = v84[-6].m128i_i64[1];
          v84[-6].m128i_i64[0] = v89;
          v91 = *((_QWORD *)v88 + 1);
          *((_QWORD *)v88 + 1) = v90;
          v92 = v84[-5].m128i_i64[0];
          v84[-6].m128i_i64[1] = v91;
          v93 = *((_QWORD *)v88 + 2);
          *((_QWORD *)v88 + 2) = v92;
          v94 = _mm_loadu_si128((const __m128i *)(v88 + 24));
          *((_QWORD *)v88 + 3) = v84[-5].m128i_i64[1];
          *((_QWORD *)v88 + 4) = v84[-4].m128i_i64[0];
          v95 = v84[-4].m128i_i64[1];
          v84[-5].m128i_i64[0] = v93;
          *(__m128i *)((char *)v84 - 72) = v94;
          v96 = *((_QWORD *)v88 + 5);
          v97 = _mm_loadu_si128((const __m128i *)v88 + 3);
          *((_QWORD *)v88 + 5) = v95;
          *((_QWORD *)v88 + 6) = v84[-3].m128i_i64[0];
          *((_QWORD *)v88 + 7) = v84[-3].m128i_i64[1];
          v84[-4].m128i_i64[1] = v96;
          v84[-3] = v97;
          v98 = *((_QWORD *)v88 + 8);
          v99 = _mm_loadu_si128((const __m128i *)(v88 + 72));
          *((_QWORD *)v88 + 8) = v84[-2].m128i_i64[0];
          *((_QWORD *)v88 + 9) = v84[-2].m128i_i64[1];
          *((_QWORD *)v88 + 10) = v84[-1].m128i_i64[0];
          v84[-2].m128i_i64[0] = v98;
          *(__m128i *)((char *)v84 - 24) = v99;
        }
        while ( v85 != v84 );
        v85 = *i;
      }
      if ( v85 )
      {
        v132 = i[1];
        if ( v132 )
        {
          for ( j = nullptr; j != v132; j = (__m128i *)((char *)j + 1) )
          {
            v101 = &v85[6 * (_QWORD)j];
            v102 = (void *)v101[4].m128i_i64[0];
            if ( v102 )
            {
              v101[4].m128i_i64[1] = 0;
              qfree(v102);
            }
            v103 = (void *)v101[2].m128i_i64[1];
            if ( v103 )
            {
              v101[3].m128i_i64[0] = 0;
              qfree(v103);
            }
            v104 = (void *)v101[1].m128i_i64[0];
            if ( v104 )
            {
              v101[1].m128i_i64[1] = 0;
              qfree(v104);
            }
            v85 = *i;
          }
        }
        i[1] = nullptr;
        qfree(v85);
        *i = nullptr;
        i[2] = nullptr;
      }
      v105 = a2[v82];
      sub_406400((size_t *)(v105 + 40), v5 - a1[14]);
      if ( v5 )
      {
        v106 = 0;
        v107 = 0;
        v108 = 0;
        do
        {
          while ( !*(_DWORD *)(a1[11] + 4 * v107) )
          {
            ++v107;
            v106 += 88;
            if ( v107 == v5 )
              goto LABEL_56;
          }
          ++v107;
          v109 = 11 * v108++;
          v110 = *(_QWORD *)(v105 + 40) + 8 * v109;
          v111 = *(_QWORD *)v110;
          v112 = (char *)ptr + v106;
          v106 += 88;
          *(_QWORD *)v110 = *v112;
          v113 = v112[1];
          *v112 = v111;
          v114 = *(_QWORD *)(v110 + 8);
          *(_QWORD *)(v110 + 8) = v113;
          v115 = v112[2];
          v112[1] = v114;
          v116 = *(_QWORD *)(v110 + 16);
          *(_QWORD *)(v110 + 16) = v115;
          v117 = _mm_loadu_si128((const __m128i *)(v110 + 24));
          *(_QWORD *)(v110 + 24) = v112[3];
          *(_QWORD *)(v110 + 32) = v112[4];
          v118 = v112[5];
          v112[2] = v116;
          *(__m128i *)(v112 + 3) = v117;
          v119 = *(_QWORD *)(v110 + 40);
          v120 = _mm_loadu_si128((const __m128i *)(v110 + 48));
          *(_QWORD *)(v110 + 40) = v118;
          *(_QWORD *)(v110 + 48) = v112[6];
          *(_QWORD *)(v110 + 56) = v112[7];
          v112[5] = v119;
          *((__m128i *)v112 + 3) = v120;
          v121 = *(_QWORD *)(v110 + 64);
          v122 = _mm_loadu_si128((const __m128i *)(v110 + 72));
          *(_QWORD *)(v110 + 64) = v112[8];
          *(_QWORD *)(v110 + 72) = v112[9];
          *(_QWORD *)(v110 + 80) = v112[10];
          v112[8] = v121;
          *(__m128i *)(v112 + 9) = v122;
        }
        while ( v107 != v5 );
      }
      else
      {
        v108 = 0;
      }
LABEL_56:
      if ( *(_QWORD *)(v105 + 48) != v108 )
      {
        if ( !under_debugger )
          interr(1962);
        BUG();
      }
      ++v82;
    }
    v123 = (char *)ptr;
    if ( ptr )
    {
      v124 = v136;
      if ( (_QWORD)v136 )
      {
        v125 = 0;
        v126 = 0;
        do
        {
          v127 = &v123[v125];
          v128 = *(void **)&v123[v125 + 64];
          if ( v128 )
          {
            *((_QWORD *)v127 + 9) = 0;
            qfree(v128);
          }
          v129 = *((void **)v127 + 5);
          if ( v129 )
          {
            *((_QWORD *)v127 + 6) = 0;
            qfree(v129);
          }
          v130 = *((void **)v127 + 2);
          if ( v130 )
          {
            *((_QWORD *)v127 + 3) = 0;
            qfree(v130);
          }
          ++v126;
          v123 = (char *)ptr;
          v125 += 88;
        }
        while ( v124 != v126 );
      }
      *(_QWORD *)&v136 = 0;
      qfree(v123);
      if ( a3 )
        goto LABEL_20;
      return v137 - __readfsqword(0x28u);
    }
LABEL_19:
    if ( a3 )
    {
LABEL_20:
      v30 = nullptr;
      v31 = *a2;
      v32 = a2[1];
      v33 = (size_t *)(*a2 + 40LL);
      v34 = (size_t *)(v32 + 40);
      if ( a1[1] > 2u )
        v30 = (size_t *)(a2[2] + 40LL);
      goto LABEL_22;
    }
    return v137 - __readfsqword(0x28u);
  }
  if ( a1[1] )
  {
    v6 = (__m128i **)(a1 + 2);
    v7 = 0;
    do
    {
      switch_dbctx(*(int *)(a2[v7] + 8LL));
      v8 = a2[v7];
      sub_406400((size_t *)(v8 + 40), v5);
      v9 = *v6;
      v10 = &(*v6)[6 * (_QWORD)v6[1]];
      if ( *v6 != v10 )
      {
        do
        {
          v11 = v9[5].m128i_i64[1];
          v12 = v9->m128i_i64[0];
          v9 += 6;
          v13 = *(_QWORD *)(v8 + 40) + 88 * v11;
          v14 = *(_QWORD *)v13;
          *(_QWORD *)v13 = v12;
          v15 = v9[-6].m128i_i64[1];
          v9[-6].m128i_i64[0] = v14;
          v16 = *(_QWORD *)(v13 + 8);
          *(_QWORD *)(v13 + 8) = v15;
          v17 = v9[-5].m128i_i64[0];
          v9[-6].m128i_i64[1] = v16;
          v18 = *(_QWORD *)(v13 + 16);
          *(_QWORD *)(v13 + 16) = v17;
          v19 = _mm_loadu_si128((const __m128i *)(v13 + 24));
          *(_QWORD *)(v13 + 24) = v9[-5].m128i_i64[1];
          *(_QWORD *)(v13 + 32) = v9[-4].m128i_i64[0];
          v20 = v9[-4].m128i_i64[1];
          v9[-5].m128i_i64[0] = v18;
          *(__m128i *)((char *)v9 - 72) = v19;
          v21 = *(_QWORD *)(v13 + 40);
          v22 = _mm_loadu_si128((const __m128i *)(v13 + 48));
          *(_QWORD *)(v13 + 40) = v20;
          *(_QWORD *)(v13 + 48) = v9[-3].m128i_i64[0];
          *(_QWORD *)(v13 + 56) = v9[-3].m128i_i64[1];
          v9[-4].m128i_i64[1] = v21;
          v9[-3] = v22;
          v23 = *(_QWORD *)(v13 + 64);
          v24 = _mm_loadu_si128((const __m128i *)(v13 + 72));
          *(_QWORD *)(v13 + 64) = v9[-2].m128i_i64[0];
          *(_QWORD *)(v13 + 72) = v9[-2].m128i_i64[1];
          *(_QWORD *)(v13 + 80) = v9[-1].m128i_i64[0];
          v9[-2].m128i_i64[0] = v23;
          *(__m128i *)((char *)v9 - 24) = v24;
        }
        while ( v10 != v9 );
        v10 = *v6;
      }
      if ( v10 )
      {
        v131 = v6[1];
        if ( v131 )
        {
          for ( k = nullptr; k != v131; k = (__m128i *)((char *)k + 1) )
          {
            v26 = &v10[6 * (_QWORD)k];
            v27 = (void *)v26[4].m128i_i64[0];
            if ( v27 )
            {
              v26[4].m128i_i64[1] = 0;
              qfree(v27);
            }
            v28 = (void *)v26[2].m128i_i64[1];
            if ( v28 )
            {
              v26[3].m128i_i64[0] = 0;
              qfree(v28);
            }
            v29 = (void *)v26[1].m128i_i64[0];
            if ( v29 )
            {
              v26[1].m128i_i64[1] = 0;
              qfree(v29);
            }
            v10 = *v6;
          }
        }
        v6[1] = nullptr;
        qfree(v10);
        *v6 = nullptr;
        v6[2] = nullptr;
      }
      ++v7;
      v6 += 3;
    }
    while ( v7 < a1[1] );
    goto LABEL_19;
  }
  if ( !a3 )
    return v137 - __readfsqword(0x28u);
  v30 = nullptr;
  v31 = *a2;
  v32 = a2[1];
  v33 = (size_t *)(*a2 + 40LL);
  v34 = (size_t *)(v32 + 40);
LABEL_22:
  v35 = *(_QWORD *)(v31 + 48);
  if ( !v35 )
    goto LABEL_34;
  v36 = 0;
  v37 = 0;
  v35 = 0;
  do
  {
    v38 = *(_QWORD *)(v31 + 40);
    v39 = (_QWORD *)(v38 + v36);
    v40 = *(_QWORD *)(v38 + v36);
    if ( v40 != -1 )
    {
      if ( v35 < v37 )
      {
LABEL_30:
        v41 = (__int64 *)(88 * v35 + v38);
        v42 = *v41;
        *v41 = v40;
        *v39 = v42;
        v43 = v41[1];
        v41[1] = v39[1];
        v44 = v39[2];
        v39[1] = v43;
        v45 = v41[2];
        v41[2] = v44;
        v46 = _mm_loadu_si128((const __m128i *)(v41 + 3));
        v41[3] = v39[3];
        v41[4] = v39[4];
        v47 = v39[5];
        v39[2] = v45;
        *(__m128i *)(v39 + 3) = v46;
        v48 = v41[5];
        v49 = _mm_loadu_si128((const __m128i *)v41 + 3);
        v41[5] = v47;
        v41[6] = v39[6];
        v41[7] = v39[7];
        v50 = v39[8];
        v39[5] = v48;
        *((__m128i *)v39 + 3) = v49;
        v51 = v41[8];
        v52 = _mm_loadu_si128((const __m128i *)(v41 + 9));
        v41[8] = v50;
        v41[9] = v39[9];
        v41[10] = v39[10];
        v39[8] = v51;
        *(__m128i *)(v39 + 9) = v52;
        v53 = *(_QWORD *)(v32 + 40);
        v54 = (__int64 *)(v53 + 88 * v35);
        v55 = (_QWORD *)(v36 + v53);
        v56 = *v54;
        *v54 = *v55;
        v57 = v55[1];
        *v55 = v56;
        v58 = v54[1];
        v54[1] = v57;
        v59 = v55[2];
        v55[1] = v58;
        v60 = v54[2];
        v54[2] = v59;
        v61 = _mm_loadu_si128((const __m128i *)(v54 + 3));
        v54[3] = v55[3];
        v54[4] = v55[4];
        v62 = v55[5];
        v55[2] = v60;
        *(__m128i *)(v55 + 3) = v61;
        v63 = v54[5];
        v64 = _mm_loadu_si128((const __m128i *)v54 + 3);
        v54[5] = v62;
        v54[6] = v55[6];
        v54[7] = v55[7];
        v55[5] = v63;
        *((__m128i *)v55 + 3) = v64;
        v65 = v54[8];
        v66 = _mm_loadu_si128((const __m128i *)(v54 + 9));
        v54[8] = v55[8];
        v54[9] = v55[9];
        v54[10] = v55[10];
        v55[8] = v65;
        *(__m128i *)(v55 + 9) = v66;
        if ( v30 )
        {
          v67 = *v30 + 88 * v35;
          v68 = (_QWORD *)(v36 + *v30);
          v69 = *(_QWORD *)v67;
          *(_QWORD *)v67 = *v68;
          v70 = v68[1];
          *v68 = v69;
          v71 = *(_QWORD *)(v67 + 8);
          *(_QWORD *)(v67 + 8) = v70;
          v72 = v68[2];
          v68[1] = v71;
          v73 = *(_QWORD *)(v67 + 16);
          *(_QWORD *)(v67 + 16) = v72;
          v74 = _mm_loadu_si128((const __m128i *)(v67 + 24));
          *(_QWORD *)(v67 + 24) = v68[3];
          *(_QWORD *)(v67 + 32) = v68[4];
          v75 = v68[5];
          v68[2] = v73;
          *(__m128i *)(v68 + 3) = v74;
          v76 = *(_QWORD *)(v67 + 40);
          v77 = _mm_loadu_si128((const __m128i *)(v67 + 48));
          *(_QWORD *)(v67 + 40) = v75;
          *(_QWORD *)(v67 + 48) = v68[6];
          *(_QWORD *)(v67 + 56) = v68[7];
          v78 = v68[8];
          v68[5] = v76;
          *((__m128i *)v68 + 3) = v77;
          v79 = *(_QWORD *)(v67 + 64);
          v80 = _mm_loadu_si128((const __m128i *)(v67 + 72));
          *(_QWORD *)(v67 + 64) = v78;
          *(_QWORD *)(v67 + 72) = v68[9];
          *(_QWORD *)(v67 + 80) = v68[10];
          v68[8] = v79;
          *(__m128i *)(v68 + 9) = v80;
        }
      }
LABEL_25:
      ++v35;
      goto LABEL_26;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v32 + 40) + v36) != -1 )
    {
      if ( v35 < v37 )
        goto LABEL_30;
      goto LABEL_25;
    }
LABEL_26:
    ++v37;
    v36 += 88;
  }
  while ( v37 < *(_QWORD *)(v31 + 48) );
  v31 = *a2;
LABEL_34:
  switch_dbctx(*(int *)(v31 + 8));
  sub_406400(v33, v35);
  switch_dbctx(*(int *)(a2[1] + 8LL));
  sub_406400(v34, v35);
  if ( !v30 )
    return v137 - __readfsqword(0x28u);
  switch_dbctx(*(int *)(a2[2] + 8LL));
  return sub_406400(v30, v35);
}
