unsigned __int64 __fastcall sub_49EFC0(_QWORD *a1, _QWORD *a2, char a3)
{
  bool v4; // zf
  unsigned __int64 v5; // r12
  const __m128i **v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  const __m128i *v9; // rax
  __m128i *v10; // rdi
  __m128i v11; // xmm9
  __m128i *v12; // rdx
  __m128i v13; // xmm8
  __m128i v14; // xmm7
  __m128i v15; // xmm6
  __m128i v16; // xmm5
  __m128i v17; // xmm4
  __m128i v18; // xmm3
  __m128i v19; // xmm2
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rsi
  const __m128i *i; // r15
  __m128i *v27; // r13
  void *v28; // rdi
  void *v29; // rdi
  _QWORD *v30; // r13
  __int64 v31; // rdi
  __int64 v32; // r8
  _QWORD *v33; // r12
  _QWORD *v34; // rbp
  unsigned __int64 v35; // rbx
  __int64 v36; // rcx
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  __m128i *v39; // rdx
  __m128i *v40; // rax
  __m128i v41; // xmm8
  __m128i v42; // xmm7
  __m128i v43; // xmm6
  __m128i v44; // xmm5
  __m128i v45; // xmm4
  __m128i v46; // xmm3
  __m128i v47; // xmm2
  __m128i v48; // xmm1
  __m128i v49; // xmm0
  __int64 v50; // r11
  __int64 v51; // r10
  __int64 v52; // r11
  __int64 v53; // r10
  __int64 v54; // rax
  __m128i *v55; // rdx
  __m128i *v56; // rax
  __m128i v57; // xmm8
  __m128i v58; // xmm7
  __m128i v59; // xmm6
  __m128i v60; // xmm5
  __m128i v61; // xmm4
  __m128i v62; // xmm3
  __m128i v63; // xmm2
  __m128i v64; // xmm9
  __m128i v65; // xmm1
  __m128i v66; // xmm0
  __m128i v67; // xmm9
  __m128i v68; // xmm9
  __m128i v69; // xmm9
  __m128i v70; // xmm9
  __int64 v71; // r11
  __int64 v72; // r10
  __int64 v73; // r11
  __int64 v74; // r10
  __m128i *v75; // r9
  __m128i *v76; // rax
  __m128i v77; // xmm8
  __m128i v78; // xmm7
  __m128i v79; // xmm6
  __m128i v80; // xmm9
  __m128i v81; // xmm5
  __m128i v82; // xmm4
  __m128i v83; // xmm3
  __m128i v84; // xmm9
  __m128i v85; // xmm2
  __m128i v86; // xmm1
  __m128i v87; // xmm0
  __m128i v88; // xmm9
  __m128i v89; // xmm9
  __m128i v90; // xmm9
  __m128i v91; // xmm9
  __int64 v92; // r10
  __int64 v93; // rdx
  __int64 v94; // r10
  __int64 v95; // rdx
  unsigned __int64 v97; // r14
  char **j; // rbp
  __m128i *v99; // rax
  char *v100; // rdi
  __m128i *v101; // rdx
  __int64 v102; // r8
  __int64 v103; // rsi
  __int64 v104; // r8
  __int64 v105; // rsi
  char *k; // r13
  char *v107; // r15
  void *v108; // rdi
  void *v109; // rdi
  __int64 v110; // r13
  __int64 v111; // rsi
  __int64 v112; // rcx
  __int64 v113; // rdi
  __m128i *v114; // rax
  __m128i v115; // xmm8
  __m128i v116; // xmm7
  __m128i *v117; // rdx
  __m128i v118; // xmm6
  __m128i v119; // xmm5
  __m128i v120; // xmm9
  __m128i v121; // xmm4
  __m128i v122; // xmm3
  __m128i v123; // xmm2
  __m128i v124; // xmm9
  __m128i v125; // xmm1
  __m128i v126; // xmm0
  __m128i v127; // xmm9
  __m128i v128; // xmm9
  __m128i v129; // xmm9
  __m128i v130; // xmm9
  __int64 v131; // r9
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // r8
  char *v135; // rdi
  __int64 v136; // rbp
  __int64 v137; // r13
  __int64 v138; // r12
  char *v139; // rdi
  const __m128i *v140; // [rsp+0h] [rbp-118h]
  char *v141; // [rsp+0h] [rbp-118h]
  void *ptr; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v145; // [rsp+28h] [rbp-F0h]
  __m128i v146; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v147; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v148; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v149; // [rsp+70h] [rbp-A8h] BYREF
  __m128i v150; // [rsp+80h] [rbp-98h] BYREF
  __m128i v151; // [rsp+90h] [rbp-88h] BYREF
  __m128i v152; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v153; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v154; // [rsp+C0h] [rbp-58h] BYREF
  unsigned __int64 v155; // [rsp+D8h] [rbp-40h]

  v4 = a1[14] == 0;
  v155 = __readfsqword(0x28u);
  v5 = a1[12];
  if ( v4 )
  {
    if ( !a1[1] )
    {
      if ( a3 )
      {
        v30 = nullptr;
        v31 = *a2;
        v32 = a2[1];
        v33 = (_QWORD *)(*a2 + 40LL);
        v34 = (_QWORD *)(v32 + 40);
        goto LABEL_20;
      }
      return v155 - __readfsqword(0x28u);
    }
    v6 = (const __m128i **)(a1 + 2);
    v7 = 0;
    do
    {
      switch_dbctx(*(int *)(a2[v7] + 8LL));
      v8 = a2[v7];
      sub_49EB40((_QWORD *)(v8 + 40), v5);
      v9 = *v6;
      v10 = (__m128i *)&(*v6)[12 * (_QWORD)v6[1]];
      if ( *v6 != v10 )
      {
        do
        {
          v11 = _mm_loadu_si128(v9);
          v9 += 12;
          v12 = (__m128i *)(*(_QWORD *)(v8 + 40) + 184 * v9[-1].m128i_i64[1]);
          v13 = _mm_loadu_si128(v12);
          *v12 = v11;
          v14 = _mm_loadu_si128(v12 + 1);
          v15 = _mm_loadu_si128(v12 + 2);
          v16 = _mm_loadu_si128(v12 + 3);
          v17 = _mm_loadu_si128(v12 + 4);
          v146 = v13;
          v12[1] = _mm_loadu_si128(v9 - 11);
          v18 = _mm_loadu_si128(v12 + 5);
          v19 = _mm_loadu_si128(v12 + 6);
          v20 = _mm_loadu_si128(v12 + 7);
          v147 = v14;
          v12[2] = _mm_loadu_si128(v9 - 10);
          v21 = _mm_loadu_si128(v12 + 8);
          v148 = v15;
          v12[3] = _mm_loadu_si128(v9 - 9);
          v149 = v16;
          v12[4] = _mm_loadu_si128(v9 - 8);
          v150 = v17;
          v151 = v18;
          v152 = v19;
          v153 = v20;
          v154 = v21;
          v12[5] = _mm_loadu_si128(v9 - 7);
          v12[6] = _mm_loadu_si128(v9 - 6);
          v12[7] = _mm_loadu_si128(v9 - 5);
          v12[8] = _mm_loadu_si128(v9 - 4);
          v22 = v9[-3].m128i_i64[1];
          v9[-12] = v13;
          v9[-11] = v14;
          v9[-10] = v15;
          v9[-9] = v16;
          v9[-8] = v17;
          v9[-7] = v18;
          v9[-6] = v19;
          v9[-5] = v20;
          v9[-4] = v21;
          v23 = v12[9].m128i_i64[1];
          v12[9].m128i_i64[1] = v22;
          v24 = v9[-2].m128i_i64[0];
          v9[-3].m128i_i64[1] = v23;
          v25 = v12[10].m128i_i64[0];
          v12[10].m128i_i64[0] = v24;
          LODWORD(v24) = v9[-2].m128i_i32[2];
          v9[-2].m128i_i64[0] = v25;
          LODWORD(v25) = v12[10].m128i_i32[2];
          v12[10].m128i_i32[2] = v24;
          LODWORD(v24) = v9[-2].m128i_i32[3];
          v9[-2].m128i_i32[2] = v25;
          LODWORD(v25) = v12[10].m128i_i32[3];
          v12[10].m128i_i32[3] = v24;
          v9[-2].m128i_i32[3] = v25;
          LOBYTE(v25) = v12[11].m128i_i8[0];
          v12[11].m128i_i8[0] = v9[-1].m128i_i8[0];
          v9[-1].m128i_i8[0] = v25;
        }
        while ( v9 != v10 );
        v10 = (__m128i *)*v6;
      }
      if ( v10 )
      {
        v140 = v6[1];
        if ( v140 )
        {
          for ( i = nullptr; i != v140; i = (const __m128i *)((char *)i + 1) )
          {
            v27 = &v10[12 * (_QWORD)i];
            clear_tinfo_t(&v27[4]);
            v28 = (void *)v27[2].m128i_i64[1];
            if ( v28 )
            {
              v27[3].m128i_i64[0] = 0;
              qfree(v28);
            }
            v29 = (void *)v27[1].m128i_i64[0];
            if ( v29 )
            {
              v27[1].m128i_i64[1] = 0;
              qfree(v29);
            }
            v10 = (__m128i *)*v6;
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
  }
  else
  {
    ptr = nullptr;
    v145 = 0;
    sub_49EB40(&ptr, v5);
    v97 = 0;
    for ( j = (char **)(a1 + 2); v97 < a1[1]; j += 3 )
    {
      switch_dbctx(*(int *)(a2[v97] + 8LL));
      v99 = (__m128i *)*j;
      v100 = &(*j)[192 * (_QWORD)j[1]];
      if ( *j != v100 )
      {
        do
        {
          v101 = (__m128i *)((char *)ptr + 184 * v99[11].m128i_i64[1]);
          v99 += 12;
          v146 = _mm_loadu_si128(v101);
          v147 = _mm_loadu_si128(v101 + 1);
          v148 = _mm_loadu_si128(v101 + 2);
          v149 = _mm_loadu_si128(v101 + 3);
          v150 = _mm_loadu_si128(v101 + 4);
          v151 = _mm_loadu_si128(v101 + 5);
          v152 = _mm_loadu_si128(v101 + 6);
          v153 = _mm_loadu_si128(v101 + 7);
          v154 = _mm_loadu_si128(v101 + 8);
          *v101 = _mm_loadu_si128(v99 - 12);
          v101[1] = _mm_loadu_si128(v99 - 11);
          v101[2] = _mm_loadu_si128(v99 - 10);
          v101[3] = _mm_loadu_si128(v99 - 9);
          v101[4] = _mm_loadu_si128(v99 - 8);
          v101[5] = _mm_loadu_si128(v99 - 7);
          v101[6] = _mm_loadu_si128(v99 - 6);
          v101[7] = _mm_loadu_si128(v99 - 5);
          v101[8] = _mm_loadu_si128(v99 - 4);
          v102 = v99[-3].m128i_i64[1];
          v99[-12] = _mm_load_si128(&v146);
          v99[-11] = _mm_load_si128(&v147);
          v99[-10] = _mm_load_si128(&v148);
          v99[-9] = _mm_load_si128(&v149);
          v99[-8] = _mm_load_si128(&v150);
          v99[-7] = _mm_load_si128(&v151);
          v99[-6] = _mm_load_si128(&v152);
          v99[-5] = _mm_load_si128(&v153);
          v99[-4] = _mm_load_si128(&v154);
          v103 = v101[9].m128i_i64[1];
          v101[9].m128i_i64[1] = v102;
          v104 = v99[-2].m128i_i64[0];
          v99[-3].m128i_i64[1] = v103;
          v105 = v101[10].m128i_i64[0];
          v101[10].m128i_i64[0] = v104;
          v99[-2].m128i_i64[0] = v105;
          LODWORD(v105) = v101[10].m128i_i32[2];
          v101[10].m128i_i32[2] = v99[-2].m128i_i32[2];
          LODWORD(v104) = v99[-2].m128i_i32[3];
          v99[-2].m128i_i32[2] = v105;
          LODWORD(v105) = v101[10].m128i_i32[3];
          v101[10].m128i_i32[3] = v104;
          LOBYTE(v104) = v99[-1].m128i_i8[0];
          v99[-2].m128i_i32[3] = v105;
          LOBYTE(v105) = v101[11].m128i_i8[0];
          v101[11].m128i_i8[0] = v104;
          v99[-1].m128i_i8[0] = v105;
        }
        while ( v100 != (char *)v99 );
        v100 = *j;
      }
      if ( v100 )
      {
        v141 = j[1];
        if ( v141 )
        {
          for ( k = nullptr; k != v141; ++k )
          {
            v107 = &v100[192 * (_QWORD)k];
            clear_tinfo_t(v107 + 64);
            v108 = *((void **)v107 + 5);
            if ( v108 )
            {
              *((_QWORD *)v107 + 6) = 0;
              qfree(v108);
            }
            v109 = *((void **)v107 + 2);
            if ( v109 )
            {
              *((_QWORD *)v107 + 3) = 0;
              qfree(v109);
            }
            v100 = *j;
          }
        }
        j[1] = nullptr;
        qfree(v100);
        *j = nullptr;
        j[2] = nullptr;
      }
      v110 = a2[v97];
      sub_49EB40((_QWORD *)(v110 + 40), v5 - a1[14]);
      if ( v5 )
      {
        v111 = 0;
        v112 = 0;
        v113 = 0;
        do
        {
          while ( !*(_DWORD *)(a1[11] + 4 * v112) )
          {
            ++v112;
            v111 += 184;
            if ( v112 == v5 )
              goto LABEL_51;
          }
          v114 = (__m128i *)(*(_QWORD *)(v110 + 40) + 184 * v113);
          ++v112;
          v115 = _mm_loadu_si128(v114);
          v116 = _mm_loadu_si128(v114 + 1);
          ++v113;
          v117 = (__m128i *)((char *)ptr + v111);
          v118 = _mm_loadu_si128(v114 + 2);
          v119 = _mm_loadu_si128(v114 + 3);
          v111 += 184;
          v120 = _mm_loadu_si128(v117);
          v121 = _mm_loadu_si128(v114 + 4);
          v146 = v115;
          v122 = _mm_loadu_si128(v114 + 5);
          v123 = _mm_loadu_si128(v114 + 6);
          v147 = v116;
          *v114 = v120;
          v124 = _mm_loadu_si128(v117 + 1);
          v125 = _mm_loadu_si128(v114 + 7);
          v126 = _mm_loadu_si128(v114 + 8);
          v148 = v118;
          v114[1] = v124;
          v127 = _mm_loadu_si128(v117 + 2);
          v149 = v119;
          v114[2] = v127;
          v128 = _mm_loadu_si128(v117 + 3);
          v150 = v121;
          v114[3] = v128;
          v129 = _mm_loadu_si128(v117 + 4);
          v151 = v122;
          v114[4] = v129;
          v130 = _mm_loadu_si128(v117 + 5);
          v152 = v123;
          v153 = v125;
          v154 = v126;
          v114[5] = v130;
          v114[6] = _mm_loadu_si128(v117 + 6);
          v114[7] = _mm_loadu_si128(v117 + 7);
          v114[8] = _mm_loadu_si128(v117 + 8);
          v131 = v117[9].m128i_i64[1];
          *v117 = v115;
          v117[1] = v116;
          v117[2] = v118;
          v117[3] = v119;
          v117[4] = v121;
          v117[5] = v122;
          v117[6] = v123;
          v117[7] = v125;
          v117[8] = v126;
          v132 = v114[9].m128i_i64[1];
          v114[9].m128i_i64[1] = v131;
          v133 = v117[10].m128i_i64[0];
          v117[9].m128i_i64[1] = v132;
          v134 = v114[10].m128i_i64[0];
          v114[10].m128i_i64[0] = v133;
          LODWORD(v133) = v117[10].m128i_i32[2];
          v117[10].m128i_i64[0] = v134;
          LODWORD(v134) = v114[10].m128i_i32[2];
          v114[10].m128i_i32[2] = v133;
          LODWORD(v133) = v117[10].m128i_i32[3];
          v117[10].m128i_i32[2] = v134;
          LODWORD(v134) = v114[10].m128i_i32[3];
          v114[10].m128i_i32[3] = v133;
          v117[10].m128i_i32[3] = v134;
          LOBYTE(v134) = v114[11].m128i_i8[0];
          v114[11].m128i_i8[0] = v117[11].m128i_i8[0];
          v117[11].m128i_i8[0] = v134;
        }
        while ( v112 != v5 );
      }
      else
      {
        v113 = 0;
      }
LABEL_51:
      if ( *(_QWORD *)(v110 + 48) != v113 )
      {
        if ( !under_debugger )
          interr(1962);
        BUG();
      }
      ++v97;
    }
    v135 = (char *)ptr;
    if ( ptr )
    {
      v136 = v145;
      if ( (_QWORD)v145 )
      {
        v137 = 0;
        v138 = 0;
        do
        {
          v139 = &v135[v137];
          ++v138;
          v137 += 184;
          sub_379560(v139);
          v135 = (char *)ptr;
        }
        while ( v136 != v138 );
      }
      *(_QWORD *)&v145 = 0;
      qfree(v135);
      if ( !a3 )
        return v155 - __readfsqword(0x28u);
      goto LABEL_18;
    }
  }
  if ( !a3 )
    return v155 - __readfsqword(0x28u);
LABEL_18:
  v30 = nullptr;
  v31 = *a2;
  v32 = a2[1];
  v33 = (_QWORD *)(*a2 + 40LL);
  v34 = (_QWORD *)(v32 + 40);
  if ( a1[1] > 2u )
    v30 = (_QWORD *)(a2[2] + 40LL);
LABEL_20:
  v35 = *(_QWORD *)(v31 + 48);
  if ( v35 )
  {
    v36 = 0;
    v37 = 0;
    v35 = 0;
    do
    {
      v38 = *(_QWORD *)(v31 + 40);
      v39 = (__m128i *)(v38 + v36);
      if ( *(_BYTE *)(v38 + v36 + 176) || *(_BYTE *)(*(_QWORD *)(v32 + 40) + v36 + 176) )
      {
        if ( v35 < v37 )
        {
          v40 = (__m128i *)(184 * v35 + v38);
          v41 = _mm_loadu_si128(v40);
          *v40 = _mm_loadu_si128(v39);
          v42 = _mm_loadu_si128(v40 + 1);
          v43 = _mm_loadu_si128(v40 + 2);
          v40[1] = _mm_loadu_si128(v39 + 1);
          v44 = _mm_loadu_si128(v40 + 3);
          v45 = _mm_loadu_si128(v40 + 4);
          v46 = _mm_loadu_si128(v40 + 5);
          v40[2] = _mm_loadu_si128(v39 + 2);
          v47 = _mm_loadu_si128(v40 + 6);
          v48 = _mm_loadu_si128(v40 + 7);
          v49 = _mm_loadu_si128(v40 + 8);
          v40[3] = _mm_loadu_si128(v39 + 3);
          v40[4] = _mm_loadu_si128(v39 + 4);
          v40[5] = _mm_loadu_si128(v39 + 5);
          v40[6] = _mm_loadu_si128(v39 + 6);
          v40[7] = _mm_loadu_si128(v39 + 7);
          v40[8] = _mm_loadu_si128(v39 + 8);
          *v39 = v41;
          v39[1] = v42;
          v39[2] = v43;
          v39[3] = v44;
          v39[4] = v45;
          v39[5] = v46;
          v50 = v39[9].m128i_i64[1];
          v39[6] = v47;
          v39[7] = v48;
          v39[8] = v49;
          v51 = v40[9].m128i_i64[1];
          v40[9].m128i_i64[1] = v50;
          v52 = v39[10].m128i_i64[0];
          v39[9].m128i_i64[1] = v51;
          v53 = v40[10].m128i_i64[0];
          v40[10].m128i_i64[0] = v52;
          LODWORD(v52) = v39[10].m128i_i32[2];
          v39[10].m128i_i64[0] = v53;
          LODWORD(v53) = v40[10].m128i_i32[2];
          v40[10].m128i_i32[2] = v52;
          LODWORD(v52) = v39[10].m128i_i32[3];
          v39[10].m128i_i32[2] = v53;
          LODWORD(v53) = v40[10].m128i_i32[3];
          v40[10].m128i_i32[3] = v52;
          LOBYTE(v52) = v39[11].m128i_i8[0];
          v39[10].m128i_i32[3] = v53;
          LOBYTE(v53) = v40[11].m128i_i8[0];
          v40[11].m128i_i8[0] = v52;
          v39[11].m128i_i8[0] = v53;
          v54 = *(_QWORD *)(v32 + 40);
          v55 = (__m128i *)(v54 + 184 * v35);
          v56 = (__m128i *)(v36 + v54);
          v57 = _mm_loadu_si128(v55);
          v58 = _mm_loadu_si128(v55 + 1);
          v59 = _mm_loadu_si128(v55 + 2);
          v60 = _mm_loadu_si128(v55 + 3);
          v146 = v57;
          v147 = v58;
          v148 = v59;
          v149 = v60;
          v61 = _mm_loadu_si128(v55 + 4);
          v62 = _mm_loadu_si128(v55 + 5);
          v63 = _mm_loadu_si128(v55 + 6);
          *v55 = _mm_loadu_si128(v56);
          v64 = _mm_loadu_si128(v56 + 1);
          v65 = _mm_loadu_si128(v55 + 7);
          v66 = _mm_loadu_si128(v55 + 8);
          v150 = v61;
          v55[1] = v64;
          v67 = _mm_loadu_si128(v56 + 2);
          v151 = v62;
          v55[2] = v67;
          v68 = _mm_loadu_si128(v56 + 3);
          v152 = v63;
          v55[3] = v68;
          v69 = _mm_loadu_si128(v56 + 4);
          v153 = v65;
          v55[4] = v69;
          v70 = _mm_loadu_si128(v56 + 5);
          v154 = v66;
          v55[5] = v70;
          v55[6] = _mm_loadu_si128(v56 + 6);
          v55[7] = _mm_loadu_si128(v56 + 7);
          v55[8] = _mm_loadu_si128(v56 + 8);
          *v56 = v57;
          v56[1] = v58;
          v56[2] = v59;
          v56[3] = v60;
          v56[4] = v61;
          v71 = v56[9].m128i_i64[1];
          v56[5] = v62;
          v56[6] = v63;
          v56[7] = v65;
          v56[8] = v66;
          v72 = v55[9].m128i_i64[1];
          v55[9].m128i_i64[1] = v71;
          v73 = v56[10].m128i_i64[0];
          v56[9].m128i_i64[1] = v72;
          v74 = v55[10].m128i_i64[0];
          v55[10].m128i_i64[0] = v73;
          LODWORD(v73) = v56[10].m128i_i32[2];
          v56[10].m128i_i64[0] = v74;
          LODWORD(v74) = v55[10].m128i_i32[2];
          v55[10].m128i_i32[2] = v73;
          LODWORD(v73) = v56[10].m128i_i32[3];
          v56[10].m128i_i32[2] = v74;
          LODWORD(v74) = v55[10].m128i_i32[3];
          v55[10].m128i_i32[3] = v73;
          LOBYTE(v73) = v56[11].m128i_i8[0];
          v56[10].m128i_i32[3] = v74;
          LOBYTE(v74) = v55[11].m128i_i8[0];
          v55[11].m128i_i8[0] = v73;
          v56[11].m128i_i8[0] = v74;
          if ( v30 )
          {
            v75 = (__m128i *)(*v30 + 184 * v35);
            v76 = (__m128i *)(v36 + *v30);
            v77 = _mm_loadu_si128(v75);
            v78 = _mm_loadu_si128(v75 + 1);
            v79 = _mm_loadu_si128(v75 + 2);
            *v75 = _mm_loadu_si128(v76);
            v80 = _mm_loadu_si128(v76 + 1);
            v81 = _mm_loadu_si128(v75 + 3);
            v82 = _mm_loadu_si128(v75 + 4);
            v83 = _mm_loadu_si128(v75 + 5);
            v146 = v77;
            v75[1] = v80;
            v84 = _mm_loadu_si128(v76 + 2);
            v85 = _mm_loadu_si128(v75 + 6);
            v86 = _mm_loadu_si128(v75 + 7);
            v147 = v78;
            v87 = _mm_loadu_si128(v75 + 8);
            v75[2] = v84;
            v88 = _mm_loadu_si128(v76 + 3);
            v148 = v79;
            v75[3] = v88;
            v89 = _mm_loadu_si128(v76 + 4);
            v149 = v81;
            v75[4] = v89;
            v90 = _mm_loadu_si128(v76 + 5);
            v150 = v82;
            v75[5] = v90;
            v91 = _mm_loadu_si128(v76 + 6);
            v151 = v83;
            v152 = v85;
            v153 = v86;
            v154 = v87;
            v75[6] = v91;
            v75[7] = _mm_loadu_si128(v76 + 7);
            v75[8] = _mm_loadu_si128(v76 + 8);
            v92 = v76[9].m128i_i64[1];
            *v76 = v77;
            v76[1] = v78;
            v76[2] = v79;
            v76[3] = v81;
            v76[4] = v82;
            v76[5] = v83;
            v76[6] = v85;
            v76[7] = v86;
            v76[8] = v87;
            v93 = v75[9].m128i_i64[1];
            v75[9].m128i_i64[1] = v92;
            v94 = v76[10].m128i_i64[0];
            v76[9].m128i_i64[1] = v93;
            v95 = v75[10].m128i_i64[0];
            v75[10].m128i_i64[0] = v94;
            LODWORD(v94) = v76[10].m128i_i32[2];
            v76[10].m128i_i64[0] = v95;
            LODWORD(v95) = v75[10].m128i_i32[2];
            v75[10].m128i_i32[2] = v94;
            LODWORD(v94) = v76[10].m128i_i32[3];
            v76[10].m128i_i32[2] = v95;
            LODWORD(v95) = v75[10].m128i_i32[3];
            v75[10].m128i_i32[3] = v94;
            LOBYTE(v94) = v76[11].m128i_i8[0];
            v76[10].m128i_i32[3] = v95;
            LOBYTE(v95) = v75[11].m128i_i8[0];
            v75[11].m128i_i8[0] = v94;
            v76[11].m128i_i8[0] = v95;
          }
        }
        ++v35;
      }
      ++v37;
      v36 += 184;
    }
    while ( v37 < *(_QWORD *)(v31 + 48) );
    v31 = *a2;
  }
  switch_dbctx(*(int *)(v31 + 8));
  sub_49EB40(v33, v35);
  switch_dbctx(*(int *)(a2[1] + 8LL));
  sub_49EB40(v34, v35);
  if ( !v30 )
    return v155 - __readfsqword(0x28u);
  switch_dbctx(*(int *)(a2[2] + 8LL));
  return sub_49EB40(v30, v35);
}
