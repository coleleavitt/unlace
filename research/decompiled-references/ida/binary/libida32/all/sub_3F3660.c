unsigned __int64 __fastcall sub_3F3660(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v7; // zf
  char *v8; // r12
  void **v9; // rbp
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128i *v16; // rdx
  __m128i *v17; // rdi
  __int64 v18; // rax
  __int32 v19; // esi
  __int64 v20; // rax
  __int32 v21; // ecx
  __int32 v22; // esi
  __int32 v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __m128i v26; // xmm0
  __int64 v27; // rsi
  __int64 v28; // rcx
  __m128i v29; // xmm0
  __int64 v30; // rcx
  __m128i v31; // xmm0
  void *k; // r15
  char *v33; // r13
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  __int64 *v37; // r13
  __int64 v38; // rdi
  __int64 v39; // r8
  __int64 *v40; // r12
  __int64 *v41; // rbp
  char *v42; // rbx
  __int64 v43; // r9
  unsigned __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // edx
  int *v48; // rax
  int v49; // r11d
  int v50; // edx
  __int64 v51; // r11
  __int64 v52; // rdx
  __m128i v53; // xmm0
  __int64 v54; // r11
  __int64 v55; // rdx
  __m128i v56; // xmm0
  __int64 v57; // r11
  __int64 v58; // rdx
  __m128i v59; // xmm0
  __int64 v60; // rax
  int *v61; // rdx
  int *v62; // rax
  int v63; // ecx
  int v64; // ecx
  __int64 v65; // r11
  __int64 v66; // rcx
  __m128i v67; // xmm0
  __int64 v68; // r11
  __int64 v69; // rcx
  __m128i v70; // xmm0
  __int64 v71; // rcx
  __m128i v72; // xmm0
  __int64 v73; // r10
  __int64 v74; // rax
  int v75; // edx
  int v76; // ecx
  int v77; // edx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __m128i v80; // xmm0
  __int64 v81; // rcx
  __int64 v82; // rdx
  __m128i v83; // xmm0
  __int64 v84; // rcx
  __int64 v85; // rdx
  __m128i v86; // xmm0
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  unsigned __int64 v100; // r14
  __int64 *i; // rbp
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  char *v107; // rdi
  __int64 v108; // rax
  int v109; // esi
  char *v110; // rax
  int v111; // ecx
  int v112; // esi
  int v113; // ecx
  __int64 v114; // rsi
  __int64 v115; // rcx
  __m128i v116; // xmm0
  __int64 v117; // rsi
  __int64 v118; // rcx
  __m128i v119; // xmm0
  __m128i v120; // xmm0
  __int64 j; // r13
  char *v122; // r15
  void *v123; // rdi
  void *v124; // rdi
  void *v125; // rdi
  __int64 v126; // r13
  __int64 v127; // rsi
  char *v128; // rcx
  __int64 v129; // rdi
  __int64 v130; // rax
  __int64 v131; // rax
  char *v132; // rdx
  int v133; // r8d
  int v134; // r9d
  int v135; // r8d
  __int64 v136; // r9
  __int64 v137; // r8
  __m128i v138; // xmm0
  __int64 v139; // r9
  __int64 v140; // r8
  __m128i v141; // xmm0
  __int64 v142; // r8
  __m128i v143; // xmm0
  char *v144; // rdi
  __int64 v145; // r12
  __int64 v146; // r13
  char *v147; // rbp
  void *v148; // rdi
  void *v149; // rdi
  void *v150; // rdi
  void *v151; // [rsp+0h] [rbp-78h]
  __int64 v152; // [rsp+0h] [rbp-78h]
  char v154; // [rsp+14h] [rbp-64h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v156; // [rsp+28h] [rbp-50h]
  unsigned __int64 v157; // [rsp+38h] [rbp-40h]

  v7 = a1[14] == 0;
  v154 = a3;
  v157 = __readfsqword(0x28u);
  v8 = (char *)a1[12];
  if ( !v7 )
  {
    ptr = nullptr;
    v156 = 0;
    sub_3F3300((__int64 *)&ptr, v8, a3, a4, a5, a6);
    v100 = 0;
    for ( i = a1 + 2; v100 < a1[1]; i += 3 )
    {
      switch_dbctx(*(int *)(a2[v100] + 8LL));
      v104 = i[1];
      v105 = *i;
      v106 = 5 * v104;
      v107 = (char *)(*i + 88 * v104);
      if ( (char *)*i != v107 )
      {
        do
        {
          v108 = *(_QWORD *)(v105 + 80);
          v109 = *(_DWORD *)v105;
          v105 += 88;
          v110 = (char *)ptr + 80 * v108;
          v111 = *(_DWORD *)v110;
          *(_DWORD *)v110 = v109;
          v112 = *(_DWORD *)(v105 - 84);
          *(_DWORD *)(v105 - 88) = v111;
          v113 = *((_DWORD *)v110 + 1);
          *((_DWORD *)v110 + 1) = v112;
          v114 = *(_QWORD *)(v105 - 80);
          *(_DWORD *)(v105 - 84) = v113;
          v115 = *((_QWORD *)v110 + 1);
          *((_QWORD *)v110 + 1) = v114;
          v116 = _mm_loadu_si128((const __m128i *)v110 + 1);
          *((_QWORD *)v110 + 2) = *(_QWORD *)(v105 - 72);
          *((_QWORD *)v110 + 3) = *(_QWORD *)(v105 - 64);
          v117 = *(_QWORD *)(v105 - 56);
          *(_QWORD *)(v105 - 80) = v115;
          *(__m128i *)(v105 - 72) = v116;
          v118 = *((_QWORD *)v110 + 4);
          v119 = _mm_loadu_si128((const __m128i *)(v110 + 40));
          *((_QWORD *)v110 + 4) = v117;
          *((_QWORD *)v110 + 5) = *(_QWORD *)(v105 - 48);
          *((_QWORD *)v110 + 6) = *(_QWORD *)(v105 - 40);
          *(_QWORD *)(v105 - 56) = v118;
          *(__m128i *)(v105 - 48) = v119;
          v106 = *((_QWORD *)v110 + 7);
          v120 = _mm_loadu_si128((const __m128i *)v110 + 4);
          *((_QWORD *)v110 + 7) = *(_QWORD *)(v105 - 32);
          *((_QWORD *)v110 + 8) = *(_QWORD *)(v105 - 24);
          *((_QWORD *)v110 + 9) = *(_QWORD *)(v105 - 16);
          *(_QWORD *)(v105 - 32) = v106;
          *(__m128i *)(v105 - 24) = v120;
        }
        while ( v107 != (char *)v105 );
        v107 = (char *)*i;
      }
      if ( v107 )
      {
        v152 = i[1];
        if ( v152 )
        {
          for ( j = 0; j != v152; ++j )
          {
            v122 = &v107[88 * j];
            v123 = *((void **)v122 + 7);
            if ( v123 )
            {
              *((_QWORD *)v122 + 8) = 0;
              qfree(v123);
            }
            v124 = *((void **)v122 + 4);
            if ( v124 )
            {
              *((_QWORD *)v122 + 5) = 0;
              qfree(v124);
            }
            v125 = *((void **)v122 + 1);
            if ( v125 )
            {
              *((_QWORD *)v122 + 2) = 0;
              qfree(v125);
            }
            v107 = (char *)*i;
          }
        }
        i[1] = 0;
        qfree(v107);
        *i = 0;
        i[2] = 0;
      }
      v126 = a2[v100];
      sub_3F3300((__int64 *)(v126 + 40), &v8[-a1[14]], v105, v106, v102, v103);
      if ( v8 )
      {
        v127 = 0;
        v128 = nullptr;
        v129 = 0;
        do
        {
          while ( !*(_DWORD *)(a1[11] + 4LL * (_QWORD)v128) )
          {
            ++v128;
            v127 += 80;
            if ( v128 == v8 )
              goto LABEL_56;
          }
          v130 = 5 * v129;
          ++v128;
          ++v129;
          v131 = *(_QWORD *)(v126 + 40) + 16 * v130;
          v132 = (char *)ptr + v127;
          v133 = *(_DWORD *)v131;
          v127 += 80;
          *(_DWORD *)v131 = *(_DWORD *)v132;
          v134 = *((_DWORD *)v132 + 1);
          *(_DWORD *)v132 = v133;
          v135 = *(_DWORD *)(v131 + 4);
          *(_DWORD *)(v131 + 4) = v134;
          v136 = *((_QWORD *)v132 + 1);
          *((_DWORD *)v132 + 1) = v135;
          v137 = *(_QWORD *)(v131 + 8);
          *(_QWORD *)(v131 + 8) = v136;
          v138 = _mm_loadu_si128((const __m128i *)(v131 + 16));
          *(_QWORD *)(v131 + 16) = *((_QWORD *)v132 + 2);
          *(_QWORD *)(v131 + 24) = *((_QWORD *)v132 + 3);
          v139 = *((_QWORD *)v132 + 4);
          *((_QWORD *)v132 + 1) = v137;
          *((__m128i *)v132 + 1) = v138;
          v140 = *(_QWORD *)(v131 + 32);
          v141 = _mm_loadu_si128((const __m128i *)(v131 + 40));
          *(_QWORD *)(v131 + 32) = v139;
          *(_QWORD *)(v131 + 40) = *((_QWORD *)v132 + 5);
          *(_QWORD *)(v131 + 48) = *((_QWORD *)v132 + 6);
          *((_QWORD *)v132 + 4) = v140;
          *(__m128i *)(v132 + 40) = v141;
          v142 = *(_QWORD *)(v131 + 56);
          v143 = _mm_loadu_si128((const __m128i *)(v131 + 64));
          *(_QWORD *)(v131 + 56) = *((_QWORD *)v132 + 7);
          *(_QWORD *)(v131 + 64) = *((_QWORD *)v132 + 8);
          *(_QWORD *)(v131 + 72) = *((_QWORD *)v132 + 9);
          *((_QWORD *)v132 + 7) = v142;
          *((__m128i *)v132 + 4) = v143;
        }
        while ( v128 != v8 );
      }
      else
      {
        v129 = 0;
      }
LABEL_56:
      if ( *(_QWORD *)(v126 + 48) != v129 )
      {
        if ( !under_debugger )
          interr(1962);
        BUG();
      }
      ++v100;
    }
    v144 = (char *)ptr;
    if ( ptr )
    {
      v145 = v156;
      if ( (_QWORD)v156 )
      {
        v146 = 0;
        do
        {
          v147 = &v144[80 * v146];
          v148 = *((void **)v147 + 7);
          if ( v148 )
          {
            *((_QWORD *)v147 + 8) = 0;
            qfree(v148);
          }
          v149 = *((void **)v147 + 4);
          if ( v149 )
          {
            *((_QWORD *)v147 + 5) = 0;
            qfree(v149);
          }
          v150 = *((void **)v147 + 1);
          if ( v150 )
          {
            *((_QWORD *)v147 + 2) = 0;
            qfree(v150);
          }
          ++v146;
          v144 = (char *)ptr;
        }
        while ( v145 != v146 );
      }
      *(_QWORD *)&v156 = 0;
      qfree(v144);
      if ( v154 )
        goto LABEL_20;
      return v157 - __readfsqword(0x28u);
    }
LABEL_19:
    if ( v154 )
    {
LABEL_20:
      v37 = nullptr;
      v38 = *a2;
      v39 = a2[1];
      v40 = (__int64 *)(*a2 + 40LL);
      v41 = (__int64 *)(v39 + 40);
      if ( a1[1] > 2u )
        v37 = (__int64 *)(a2[2] + 40LL);
      goto LABEL_22;
    }
    return v157 - __readfsqword(0x28u);
  }
  if ( a1[1] )
  {
    v9 = (void **)(a1 + 2);
    v10 = 0;
    do
    {
      switch_dbctx(*(int *)(a2[v10] + 8LL));
      v11 = a2[v10];
      sub_3F3300((__int64 *)(v11 + 40), v8, v12, v13, v14, v15);
      v16 = (__m128i *)*v9;
      v17 = (__m128i *)((char *)*v9 + 88 * (_QWORD)v9[1]);
      if ( *v9 != v17 )
      {
        do
        {
          v18 = v16[5].m128i_i64[0];
          v19 = v16->m128i_i32[0];
          v16 = (__m128i *)((char *)v16 + 88);
          v20 = *(_QWORD *)(v11 + 40) + 80 * v18;
          v21 = *(_DWORD *)v20;
          *(_DWORD *)v20 = v19;
          v22 = v16[-6].m128i_i32[3];
          v16[-6].m128i_i32[2] = v21;
          v23 = *(_DWORD *)(v20 + 4);
          *(_DWORD *)(v20 + 4) = v22;
          v24 = v16[-5].m128i_i64[0];
          v16[-6].m128i_i32[3] = v23;
          v25 = *(_QWORD *)(v20 + 8);
          *(_QWORD *)(v20 + 8) = v24;
          v26 = _mm_loadu_si128((const __m128i *)(v20 + 16));
          *(_QWORD *)(v20 + 16) = v16[-5].m128i_i64[1];
          *(_QWORD *)(v20 + 24) = v16[-4].m128i_i64[0];
          v27 = v16[-4].m128i_i64[1];
          v16[-5].m128i_i64[0] = v25;
          *(__m128i *)((char *)v16 - 72) = v26;
          v28 = *(_QWORD *)(v20 + 32);
          v29 = _mm_loadu_si128((const __m128i *)(v20 + 40));
          *(_QWORD *)(v20 + 32) = v27;
          *(_QWORD *)(v20 + 40) = v16[-3].m128i_i64[0];
          *(_QWORD *)(v20 + 48) = v16[-3].m128i_i64[1];
          v16[-4].m128i_i64[1] = v28;
          v16[-3] = v29;
          v30 = *(_QWORD *)(v20 + 56);
          v31 = _mm_loadu_si128((const __m128i *)(v20 + 64));
          *(_QWORD *)(v20 + 56) = v16[-2].m128i_i64[0];
          *(_QWORD *)(v20 + 64) = v16[-2].m128i_i64[1];
          *(_QWORD *)(v20 + 72) = v16[-1].m128i_i64[0];
          v16[-2].m128i_i64[0] = v30;
          *(__m128i *)((char *)v16 - 24) = v31;
        }
        while ( v17 != v16 );
        v17 = (__m128i *)*v9;
      }
      if ( v17 )
      {
        v151 = v9[1];
        if ( v151 )
        {
          for ( k = nullptr; k != v151; k = (char *)k + 1 )
          {
            v33 = &v17->m128i_i8[88 * (_QWORD)k];
            v34 = *((void **)v33 + 7);
            if ( v34 )
            {
              *((_QWORD *)v33 + 8) = 0;
              qfree(v34);
            }
            v35 = *((void **)v33 + 4);
            if ( v35 )
            {
              *((_QWORD *)v33 + 5) = 0;
              qfree(v35);
            }
            v36 = *((void **)v33 + 1);
            if ( v36 )
            {
              *((_QWORD *)v33 + 2) = 0;
              qfree(v36);
            }
            v17 = (__m128i *)*v9;
          }
        }
        v9[1] = nullptr;
        qfree(v17);
        *v9 = nullptr;
        v9[2] = nullptr;
      }
      ++v10;
      v9 += 3;
    }
    while ( v10 < a1[1] );
    goto LABEL_19;
  }
  if ( !(_BYTE)a3 )
    return v157 - __readfsqword(0x28u);
  v37 = nullptr;
  v38 = *a2;
  v39 = a2[1];
  v40 = (__int64 *)(*a2 + 40LL);
  v41 = (__int64 *)(v39 + 40);
LABEL_22:
  v42 = *(char **)(v38 + 48);
  if ( !v42 )
    goto LABEL_34;
  v43 = 0;
  v44 = 0;
  v42 = nullptr;
  do
  {
    v45 = *(_QWORD *)(v38 + 40);
    v46 = v45 + v43;
    v47 = *(_DWORD *)(v45 + v43);
    if ( v47 != -1 )
    {
      if ( (unsigned __int64)v42 < v44 )
      {
LABEL_30:
        v48 = (int *)(80LL * (_QWORD)v42 + v45);
        v49 = *v48;
        *v48 = v47;
        *(_DWORD *)v46 = v49;
        v50 = v48[1];
        v48[1] = *(_DWORD *)(v46 + 4);
        v51 = *(_QWORD *)(v46 + 8);
        *(_DWORD *)(v46 + 4) = v50;
        v52 = *((_QWORD *)v48 + 1);
        *((_QWORD *)v48 + 1) = v51;
        v53 = _mm_loadu_si128((const __m128i *)v48 + 1);
        *((_QWORD *)v48 + 2) = *(_QWORD *)(v46 + 16);
        *((_QWORD *)v48 + 3) = *(_QWORD *)(v46 + 24);
        v54 = *(_QWORD *)(v46 + 32);
        *(_QWORD *)(v46 + 8) = v52;
        *(__m128i *)(v46 + 16) = v53;
        v55 = *((_QWORD *)v48 + 4);
        v56 = _mm_loadu_si128((const __m128i *)(v48 + 10));
        *((_QWORD *)v48 + 4) = v54;
        *((_QWORD *)v48 + 5) = *(_QWORD *)(v46 + 40);
        *((_QWORD *)v48 + 6) = *(_QWORD *)(v46 + 48);
        v57 = *(_QWORD *)(v46 + 56);
        *(_QWORD *)(v46 + 32) = v55;
        *(__m128i *)(v46 + 40) = v56;
        v58 = *((_QWORD *)v48 + 7);
        v59 = _mm_loadu_si128((const __m128i *)v48 + 4);
        *((_QWORD *)v48 + 7) = v57;
        *((_QWORD *)v48 + 8) = *(_QWORD *)(v46 + 64);
        *((_QWORD *)v48 + 9) = *(_QWORD *)(v46 + 72);
        *(_QWORD *)(v46 + 56) = v58;
        *(__m128i *)(v46 + 64) = v59;
        v60 = *(_QWORD *)(v39 + 40);
        v61 = (int *)(v60 + 80LL * (_QWORD)v42);
        v62 = (int *)(v43 + v60);
        v63 = *v61;
        *v61 = *v62;
        LODWORD(v57) = v62[1];
        *v62 = v63;
        v64 = v61[1];
        v61[1] = v57;
        v65 = *((_QWORD *)v62 + 1);
        v62[1] = v64;
        v66 = *((_QWORD *)v61 + 1);
        *((_QWORD *)v61 + 1) = v65;
        v67 = _mm_loadu_si128((const __m128i *)v61 + 1);
        *((_QWORD *)v61 + 2) = *((_QWORD *)v62 + 2);
        *((_QWORD *)v61 + 3) = *((_QWORD *)v62 + 3);
        v68 = *((_QWORD *)v62 + 4);
        *((_QWORD *)v62 + 1) = v66;
        *((__m128i *)v62 + 1) = v67;
        v69 = *((_QWORD *)v61 + 4);
        v70 = _mm_loadu_si128((const __m128i *)(v61 + 10));
        *((_QWORD *)v61 + 4) = v68;
        *((_QWORD *)v61 + 5) = *((_QWORD *)v62 + 5);
        *((_QWORD *)v61 + 6) = *((_QWORD *)v62 + 6);
        *((_QWORD *)v62 + 4) = v69;
        *(__m128i *)(v62 + 10) = v70;
        v71 = *((_QWORD *)v61 + 7);
        v72 = _mm_loadu_si128((const __m128i *)v61 + 4);
        *((_QWORD *)v61 + 7) = *((_QWORD *)v62 + 7);
        *((_QWORD *)v61 + 8) = *((_QWORD *)v62 + 8);
        *((_QWORD *)v61 + 9) = *((_QWORD *)v62 + 9);
        *((_QWORD *)v62 + 7) = v71;
        *((__m128i *)v62 + 4) = v72;
        if ( v37 )
        {
          v73 = *v37 + 80LL * (_QWORD)v42;
          v74 = v43 + *v37;
          v75 = *(_DWORD *)v73;
          *(_DWORD *)v73 = *(_DWORD *)v74;
          v76 = *(_DWORD *)(v74 + 4);
          *(_DWORD *)v74 = v75;
          v77 = *(_DWORD *)(v73 + 4);
          *(_DWORD *)(v73 + 4) = v76;
          v78 = *(_QWORD *)(v74 + 8);
          *(_DWORD *)(v74 + 4) = v77;
          v79 = *(_QWORD *)(v73 + 8);
          *(_QWORD *)(v73 + 8) = v78;
          v80 = _mm_loadu_si128((const __m128i *)(v73 + 16));
          *(_QWORD *)(v73 + 16) = *(_QWORD *)(v74 + 16);
          *(_QWORD *)(v73 + 24) = *(_QWORD *)(v74 + 24);
          v81 = *(_QWORD *)(v74 + 32);
          *(_QWORD *)(v74 + 8) = v79;
          *(__m128i *)(v74 + 16) = v80;
          v82 = *(_QWORD *)(v73 + 32);
          v83 = _mm_loadu_si128((const __m128i *)(v73 + 40));
          *(_QWORD *)(v73 + 32) = v81;
          *(_QWORD *)(v73 + 40) = *(_QWORD *)(v74 + 40);
          *(_QWORD *)(v73 + 48) = *(_QWORD *)(v74 + 48);
          v84 = *(_QWORD *)(v74 + 56);
          *(_QWORD *)(v74 + 32) = v82;
          *(__m128i *)(v74 + 40) = v83;
          v85 = *(_QWORD *)(v73 + 56);
          v86 = _mm_loadu_si128((const __m128i *)(v73 + 64));
          *(_QWORD *)(v73 + 56) = v84;
          *(_QWORD *)(v73 + 64) = *(_QWORD *)(v74 + 64);
          *(_QWORD *)(v73 + 72) = *(_QWORD *)(v74 + 72);
          *(_QWORD *)(v74 + 56) = v85;
          *(__m128i *)(v74 + 64) = v86;
        }
      }
LABEL_25:
      ++v42;
      goto LABEL_26;
    }
    if ( *(_DWORD *)(*(_QWORD *)(v39 + 40) + v43) != -1 )
    {
      if ( (unsigned __int64)v42 < v44 )
        goto LABEL_30;
      goto LABEL_25;
    }
LABEL_26:
    ++v44;
    v43 += 80;
  }
  while ( v44 < *(_QWORD *)(v38 + 48) );
  v38 = *a2;
LABEL_34:
  switch_dbctx(*(int *)(v38 + 8));
  sub_3F3300(v40, v42, v88, v89, v90, v91);
  switch_dbctx(*(int *)(a2[1] + 8LL));
  sub_3F3300(v41, v42, v92, v93, v94, v95);
  if ( !v37 )
    return v157 - __readfsqword(0x28u);
  switch_dbctx(*(int *)(a2[2] + 8LL));
  return sub_3F3300(v37, v42, v96, v97, v98, v99);
}

