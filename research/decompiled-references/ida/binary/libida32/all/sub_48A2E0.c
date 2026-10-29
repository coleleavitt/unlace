unsigned __int64 __fastcall sub_48A2E0(_QWORD *a1, _QWORD *a2, char a3)
{
  bool v4; // zf
  __m128i *v5; // r12
  const __m128i **v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  const __m128i *v9; // rdx
  __m128i *v10; // rdi
  __int64 v11; // rax
  __m128i v12; // xmm8
  __m128i *v13; // rax
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
  const __m128i *i; // r15
  __int64 *v25; // r13
  void *v26; // rdi
  void *v27; // rdi
  __m128i **v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rdi
  __m128i **v31; // r12
  __m128i **v32; // rbp
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r9
  __m128i *v37; // rdx
  __m128i *v38; // rax
  __m128i v39; // xmm7
  __m128i v40; // xmm6
  __m128i v41; // xmm5
  __m128i v42; // xmm4
  __m128i v43; // xmm3
  __m128i v44; // xmm2
  __m128i v45; // xmm1
  __m128i v46; // xmm0
  __int64 v47; // r10
  __int32 v48; // r11d
  __int32 v49; // r11d
  __int32 v50; // r11d
  __int64 v51; // rax
  __m128i *v52; // rdx
  __m128i *v53; // rax
  __m128i v54; // xmm7
  __m128i v55; // xmm6
  __m128i v56; // xmm5
  __m128i v57; // xmm4
  __m128i v58; // xmm3
  __m128i v59; // xmm2
  __m128i v60; // xmm1
  __m128i v61; // xmm0
  __m128i v62; // xmm8
  __m128i v63; // xmm8
  __int64 v64; // r11
  __int64 v65; // r10
  __m128i *v66; // r8
  __m128i *v67; // rax
  __m128i v68; // xmm7
  __m128i v69; // xmm6
  __m128i v70; // xmm5
  __m128i v71; // xmm8
  __m128i v72; // xmm4
  __m128i v73; // xmm3
  __m128i v74; // xmm2
  __m128i v75; // xmm8
  __m128i v76; // xmm1
  __m128i v77; // xmm0
  __m128i v78; // xmm8
  __m128i v79; // xmm8
  __m128i v80; // xmm8
  __m128i v81; // xmm8
  __m128i v82; // xmm8
  __int64 v83; // r9
  __int64 v84; // rdx
  unsigned __int64 v86; // r14
  char **j; // rbp
  char *v88; // rdx
  char *v89; // rdi
  __int64 v90; // rax
  __m128i *v91; // rax
  __int64 v92; // r8
  __int64 v93; // rsi
  char *k; // r13
  char *v95; // r15
  void *v96; // rdi
  void *v97; // rdi
  __int64 v98; // r13
  __m128i *v99; // rcx
  __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rdx
  __m128i *v103; // rax
  __m128i *v104; // rdx
  __m128i v105; // xmm7
  __m128i v106; // xmm6
  __m128i v107; // xmm5
  __m128i v108; // xmm8
  __m128i v109; // xmm4
  __m128i v110; // xmm3
  __m128i v111; // xmm2
  __m128i v112; // xmm8
  __m128i v113; // xmm1
  __m128i v114; // xmm0
  __m128i v115; // xmm8
  __m128i v116; // xmm8
  __m128i v117; // xmm8
  __m128i v118; // xmm8
  __int64 v119; // r8
  __int64 v120; // rdi
  _QWORD *v121; // rdi
  __int64 v122; // r12
  __int64 v123; // rbp
  __int64 v124; // rax
  const __m128i *v125; // [rsp+0h] [rbp-108h]
  char *v126; // [rsp+0h] [rbp-108h]
  void *ptr; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v130; // [rsp+28h] [rbp-E0h]
  __m128i v131; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v132; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v133; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v134; // [rsp+70h] [rbp-98h] BYREF
  __m128i v135; // [rsp+80h] [rbp-88h] BYREF
  __m128i v136; // [rsp+90h] [rbp-78h] BYREF
  __m128i v137; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v138; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v139; // [rsp+C8h] [rbp-40h]

  v4 = a1[14] == 0;
  v139 = __readfsqword(0x28u);
  v5 = (__m128i *)a1[12];
  if ( v4 )
  {
    if ( !a1[1] )
    {
      if ( a3 )
      {
        v28 = nullptr;
        v29 = *a2;
        v30 = a2[1];
        v31 = (__m128i **)(*a2 + 40LL);
        v32 = (__m128i **)(v30 + 40);
        goto LABEL_20;
      }
      return v139 - __readfsqword(0x28u);
    }
    v6 = (const __m128i **)(a1 + 2);
    v7 = 0;
    do
    {
      switch_dbctx(*(int *)(a2[v7] + 8LL));
      v8 = a2[v7];
      sub_489EC0((__m128i **)(v8 + 40), v5);
      v9 = *v6;
      v10 = (__m128i *)((char *)*v6 + 168 * (_QWORD)v6[1]);
      if ( *v6 != v10 )
      {
        do
        {
          v11 = v9[10].m128i_i64[0];
          v12 = _mm_loadu_si128(v9);
          v9 = (const __m128i *)((char *)v9 + 168);
          v13 = (__m128i *)(*(_QWORD *)(v8 + 40) + 160 * v11);
          v14 = _mm_loadu_si128(v13);
          *v13 = v12;
          v15 = _mm_loadu_si128(v13 + 1);
          v16 = _mm_loadu_si128(v13 + 2);
          v17 = _mm_loadu_si128(v13 + 3);
          v18 = _mm_loadu_si128(v13 + 4);
          v131 = v14;
          v13[1] = _mm_loadu_si128((const __m128i *)((char *)v9 - 152));
          v19 = _mm_loadu_si128(v13 + 5);
          v20 = _mm_loadu_si128(v13 + 6);
          v21 = _mm_loadu_si128(v13 + 7);
          v132 = v15;
          v133 = v16;
          v13[2] = _mm_loadu_si128((const __m128i *)((char *)v9 - 136));
          v134 = v17;
          v13[3] = _mm_loadu_si128((const __m128i *)((char *)v9 - 120));
          v135 = v18;
          v13[4] = _mm_loadu_si128((const __m128i *)((char *)v9 - 104));
          v136 = v19;
          v13[5] = _mm_loadu_si128((const __m128i *)((char *)v9 - 88));
          v137 = v20;
          v138 = v21;
          v13[6] = _mm_loadu_si128((const __m128i *)((char *)v9 - 72));
          v13[7] = _mm_loadu_si128((const __m128i *)((char *)v9 - 56));
          v22 = v9[-2].m128i_i64[0];
          *(__m128i *)((char *)v9 - 168) = v14;
          *(__m128i *)((char *)v9 - 152) = v15;
          *(__m128i *)((char *)v9 - 136) = v16;
          *(__m128i *)((char *)v9 - 120) = v17;
          *(__m128i *)((char *)v9 - 104) = v18;
          *(__m128i *)((char *)v9 - 88) = v19;
          *(__m128i *)((char *)v9 - 72) = v20;
          *(__m128i *)((char *)v9 - 56) = v21;
          v23 = v13[8].m128i_i64[1];
          v13[8].m128i_i64[1] = v22;
          LODWORD(v22) = v9[-2].m128i_i32[2];
          v9[-2].m128i_i64[0] = v23;
          LODWORD(v23) = v13[9].m128i_i32[0];
          v13[9].m128i_i32[0] = v22;
          LODWORD(v22) = v9[-2].m128i_i32[3];
          v9[-2].m128i_i32[2] = v23;
          LODWORD(v23) = v13[9].m128i_i32[1];
          v13[9].m128i_i32[1] = v22;
          LODWORD(v22) = v9[-1].m128i_i32[0];
          v9[-2].m128i_i32[3] = v23;
          LODWORD(v23) = v13[9].m128i_i32[2];
          v13[9].m128i_i32[2] = v22;
          LOBYTE(v22) = v9[-1].m128i_i8[4];
          v9[-1].m128i_i32[0] = v23;
          LOBYTE(v23) = v13[9].m128i_i8[12];
          v13[9].m128i_i8[12] = v22;
          v9[-1].m128i_i8[4] = v23;
        }
        while ( v9 != v10 );
        v10 = (__m128i *)*v6;
      }
      if ( v10 )
      {
        v125 = v6[1];
        if ( v125 )
        {
          for ( i = nullptr; i != v125; i = (const __m128i *)((char *)i + 1) )
          {
            v25 = &v10->m128i_i64[21 * (_QWORD)i];
            clear_tinfo_t(v25 + 8);
            v26 = (void *)v25[5];
            if ( v26 )
            {
              v25[6] = 0;
              qfree(v26);
            }
            v27 = (void *)v25[2];
            if ( v27 )
            {
              v25[3] = 0;
              qfree(v27);
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
    v130 = 0;
    sub_489EC0((__m128i **)&ptr, v5);
    v86 = 0;
    for ( j = (char **)(a1 + 2); v86 < a1[1]; j += 3 )
    {
      switch_dbctx(*(int *)(a2[v86] + 8LL));
      v88 = *j;
      v89 = &(*j)[168 * (_QWORD)j[1]];
      if ( *j != v89 )
      {
        do
        {
          v90 = *((_QWORD *)v88 + 20);
          v88 += 168;
          v91 = (__m128i *)((char *)ptr + 160 * v90);
          v131 = _mm_loadu_si128(v91);
          v132 = _mm_loadu_si128(v91 + 1);
          v133 = _mm_loadu_si128(v91 + 2);
          v134 = _mm_loadu_si128(v91 + 3);
          v135 = _mm_loadu_si128(v91 + 4);
          v136 = _mm_loadu_si128(v91 + 5);
          v137 = _mm_loadu_si128(v91 + 6);
          v138 = _mm_loadu_si128(v91 + 7);
          *v91 = _mm_loadu_si128((const __m128i *)(v88 - 168));
          v91[1] = _mm_loadu_si128((const __m128i *)(v88 - 152));
          v91[2] = _mm_loadu_si128((const __m128i *)(v88 - 136));
          v91[3] = _mm_loadu_si128((const __m128i *)(v88 - 120));
          v91[4] = _mm_loadu_si128((const __m128i *)(v88 - 104));
          v91[5] = _mm_loadu_si128((const __m128i *)(v88 - 88));
          v91[6] = _mm_loadu_si128((const __m128i *)(v88 - 72));
          v91[7] = _mm_loadu_si128((const __m128i *)(v88 - 56));
          v92 = *((_QWORD *)v88 - 4);
          *(__m128i *)(v88 - 168) = _mm_load_si128(&v131);
          *(__m128i *)(v88 - 152) = _mm_load_si128(&v132);
          *(__m128i *)(v88 - 136) = _mm_load_si128(&v133);
          *(__m128i *)(v88 - 120) = _mm_load_si128(&v134);
          *(__m128i *)(v88 - 104) = _mm_load_si128(&v135);
          *(__m128i *)(v88 - 88) = _mm_load_si128(&v136);
          *(__m128i *)(v88 - 72) = _mm_load_si128(&v137);
          *(__m128i *)(v88 - 56) = _mm_load_si128(&v138);
          v93 = v91[8].m128i_i64[1];
          v91[8].m128i_i64[1] = v92;
          LODWORD(v92) = *((_DWORD *)v88 - 6);
          *((_QWORD *)v88 - 4) = v93;
          LODWORD(v93) = v91[9].m128i_i32[0];
          v91[9].m128i_i32[0] = v92;
          LODWORD(v92) = *((_DWORD *)v88 - 5);
          *((_DWORD *)v88 - 6) = v93;
          LODWORD(v93) = v91[9].m128i_i32[1];
          v91[9].m128i_i32[1] = v92;
          LODWORD(v92) = *((_DWORD *)v88 - 4);
          *((_DWORD *)v88 - 5) = v93;
          LODWORD(v93) = v91[9].m128i_i32[2];
          v91[9].m128i_i32[2] = v92;
          LOBYTE(v92) = *(v88 - 12);
          *((_DWORD *)v88 - 4) = v93;
          LOBYTE(v93) = v91[9].m128i_i8[12];
          v91[9].m128i_i8[12] = v92;
          *(v88 - 12) = v93;
        }
        while ( v89 != v88 );
        v89 = *j;
      }
      if ( v89 )
      {
        v126 = j[1];
        if ( v126 )
        {
          for ( k = nullptr; k != v126; ++k )
          {
            v95 = &v89[168 * (_QWORD)k];
            clear_tinfo_t(v95 + 64);
            v96 = *((void **)v95 + 5);
            if ( v96 )
            {
              *((_QWORD *)v95 + 6) = 0;
              qfree(v96);
            }
            v97 = *((void **)v95 + 2);
            if ( v97 )
            {
              *((_QWORD *)v95 + 3) = 0;
              qfree(v97);
            }
            v89 = *j;
          }
        }
        j[1] = nullptr;
        qfree(v89);
        *j = nullptr;
        j[2] = nullptr;
      }
      v98 = a2[v86];
      sub_489EC0((__m128i **)(v98 + 40), (__m128i *)((char *)v5 - a1[14]));
      if ( v5 )
      {
        v99 = nullptr;
        v100 = 0;
        do
        {
          while ( !*(_DWORD *)(a1[11] + 4LL * (_QWORD)v99) )
          {
            v99 = (__m128i *)((char *)v99 + 1);
            if ( v99 == v5 )
              goto LABEL_51;
          }
          v101 = 5LL * (_QWORD)v99;
          v102 = 5 * v100;
          v99 = (__m128i *)((char *)v99 + 1);
          ++v100;
          v103 = (__m128i *)((char *)ptr + 32 * v101);
          v104 = (__m128i *)(*(_QWORD *)(v98 + 40) + 32 * v102);
          v105 = _mm_loadu_si128(v104);
          v106 = _mm_loadu_si128(v104 + 1);
          v107 = _mm_loadu_si128(v104 + 2);
          *v104 = _mm_loadu_si128(v103);
          v108 = _mm_loadu_si128(v103 + 1);
          v109 = _mm_loadu_si128(v104 + 3);
          v110 = _mm_loadu_si128(v104 + 4);
          v111 = _mm_loadu_si128(v104 + 5);
          v131 = v105;
          v104[1] = v108;
          v112 = _mm_loadu_si128(v103 + 2);
          v113 = _mm_loadu_si128(v104 + 6);
          v114 = _mm_loadu_si128(v104 + 7);
          v132 = v106;
          v104[2] = v112;
          v115 = _mm_loadu_si128(v103 + 3);
          v133 = v107;
          v104[3] = v115;
          v116 = _mm_loadu_si128(v103 + 4);
          v134 = v109;
          v104[4] = v116;
          v117 = _mm_loadu_si128(v103 + 5);
          v135 = v110;
          v104[5] = v117;
          v118 = _mm_loadu_si128(v103 + 6);
          v136 = v111;
          v137 = v113;
          v138 = v114;
          v104[6] = v118;
          v104[7] = _mm_loadu_si128(v103 + 7);
          v119 = v103[8].m128i_i64[1];
          *v103 = v105;
          v103[1] = v106;
          v103[2] = v107;
          v103[3] = v109;
          v103[4] = v110;
          v103[5] = v111;
          v103[6] = v113;
          v103[7] = v114;
          v120 = v104[8].m128i_i64[1];
          v104[8].m128i_i64[1] = v119;
          LODWORD(v119) = v103[9].m128i_i32[0];
          v103[8].m128i_i64[1] = v120;
          LODWORD(v120) = v104[9].m128i_i32[0];
          v104[9].m128i_i32[0] = v119;
          LODWORD(v119) = v103[9].m128i_i32[1];
          v103[9].m128i_i32[0] = v120;
          LODWORD(v120) = v104[9].m128i_i32[1];
          v104[9].m128i_i32[1] = v119;
          LODWORD(v119) = v103[9].m128i_i32[2];
          v103[9].m128i_i32[1] = v120;
          LODWORD(v120) = v104[9].m128i_i32[2];
          v104[9].m128i_i32[2] = v119;
          LOBYTE(v119) = v103[9].m128i_i8[12];
          v103[9].m128i_i32[2] = v120;
          LOBYTE(v120) = v104[9].m128i_i8[12];
          v104[9].m128i_i8[12] = v119;
          v103[9].m128i_i8[12] = v120;
        }
        while ( v99 != v5 );
      }
      else
      {
        v100 = 0;
      }
LABEL_51:
      if ( *(_QWORD *)(v98 + 48) != v100 )
      {
        if ( !under_debugger )
          interr(1962);
        BUG();
      }
      ++v86;
    }
    v121 = ptr;
    if ( ptr )
    {
      v122 = v130;
      if ( (_QWORD)v130 )
      {
        v123 = 0;
        do
        {
          v124 = 5 * v123++;
          sub_375BF0(&v121[4 * v124]);
          v121 = ptr;
        }
        while ( v122 != v123 );
      }
      *(_QWORD *)&v130 = 0;
      qfree(v121);
      if ( !a3 )
        return v139 - __readfsqword(0x28u);
      goto LABEL_18;
    }
  }
  if ( !a3 )
    return v139 - __readfsqword(0x28u);
LABEL_18:
  v28 = nullptr;
  v29 = *a2;
  v30 = a2[1];
  v31 = (__m128i **)(*a2 + 40LL);
  v32 = (__m128i **)(v30 + 40);
  if ( a1[1] > 2u )
    v28 = (__m128i **)(a2[2] + 40LL);
LABEL_20:
  v33 = *(_QWORD *)(v29 + 48);
  if ( v33 )
  {
    v34 = 0;
    v33 = 0;
    do
    {
      v35 = *(_QWORD *)(v29 + 40);
      v36 = 160 * v34;
      v37 = (__m128i *)(v35 + 160 * v34);
      if ( v37[9].m128i_i8[12] || *(_BYTE *)(*(_QWORD *)(v30 + 40) + v36 + 156) )
      {
        if ( v33 < v34 )
        {
          v38 = (__m128i *)(160 * v33 + v35);
          v39 = _mm_loadu_si128(v38);
          *v38 = _mm_loadu_si128(v37);
          v40 = _mm_loadu_si128(v38 + 1);
          v41 = _mm_loadu_si128(v38 + 2);
          v38[1] = _mm_loadu_si128(v37 + 1);
          v42 = _mm_loadu_si128(v38 + 3);
          v43 = _mm_loadu_si128(v38 + 4);
          v44 = _mm_loadu_si128(v38 + 5);
          v38[2] = _mm_loadu_si128(v37 + 2);
          v45 = _mm_loadu_si128(v38 + 6);
          v46 = _mm_loadu_si128(v38 + 7);
          v38[3] = _mm_loadu_si128(v37 + 3);
          v38[4] = _mm_loadu_si128(v37 + 4);
          v38[5] = _mm_loadu_si128(v37 + 5);
          v38[6] = _mm_loadu_si128(v37 + 6);
          v38[7] = _mm_loadu_si128(v37 + 7);
          *v37 = v39;
          v37[1] = v40;
          v37[2] = v41;
          v37[3] = v42;
          v37[4] = v43;
          v37[5] = v44;
          v37[6] = v45;
          v37[7] = v46;
          v47 = v38[8].m128i_i64[1];
          v38[8].m128i_i64[1] = v37[8].m128i_i64[1];
          v48 = v37[9].m128i_i32[0];
          v37[8].m128i_i64[1] = v47;
          LODWORD(v47) = v38[9].m128i_i32[0];
          v38[9].m128i_i32[0] = v48;
          v49 = v37[9].m128i_i32[1];
          v37[9].m128i_i32[0] = v47;
          LODWORD(v47) = v38[9].m128i_i32[1];
          v38[9].m128i_i32[1] = v49;
          v50 = v37[9].m128i_i32[2];
          v37[9].m128i_i32[1] = v47;
          LODWORD(v47) = v38[9].m128i_i32[2];
          v38[9].m128i_i32[2] = v50;
          LOBYTE(v50) = v37[9].m128i_i8[12];
          v37[9].m128i_i32[2] = v47;
          LOBYTE(v47) = v38[9].m128i_i8[12];
          v38[9].m128i_i8[12] = v50;
          v37[9].m128i_i8[12] = v47;
          v51 = *(_QWORD *)(v30 + 40);
          v52 = (__m128i *)(v51 + 160 * v33);
          v53 = (__m128i *)(v36 + v51);
          v54 = _mm_loadu_si128(v52);
          v55 = _mm_loadu_si128(v52 + 1);
          v56 = _mm_loadu_si128(v52 + 2);
          v57 = _mm_loadu_si128(v52 + 3);
          v58 = _mm_loadu_si128(v52 + 4);
          v59 = _mm_loadu_si128(v52 + 5);
          v131 = v54;
          v132 = v55;
          v133 = v56;
          v134 = v57;
          v135 = v58;
          v136 = v59;
          v60 = _mm_loadu_si128(v52 + 6);
          v61 = _mm_loadu_si128(v52 + 7);
          *v52 = _mm_loadu_si128(v53);
          v62 = _mm_loadu_si128(v53 + 1);
          v137 = v60;
          v52[1] = v62;
          v63 = _mm_loadu_si128(v53 + 2);
          v138 = v61;
          v52[2] = v63;
          v52[3] = _mm_loadu_si128(v53 + 3);
          v52[4] = _mm_loadu_si128(v53 + 4);
          v52[5] = _mm_loadu_si128(v53 + 5);
          v52[6] = _mm_loadu_si128(v53 + 6);
          v52[7] = _mm_loadu_si128(v53 + 7);
          v64 = v53[8].m128i_i64[1];
          *v53 = v54;
          v53[1] = v55;
          v53[2] = v56;
          v53[3] = v57;
          v53[4] = v58;
          v53[5] = v59;
          v53[6] = v60;
          v53[7] = v61;
          v65 = v52[8].m128i_i64[1];
          v52[8].m128i_i64[1] = v64;
          v53[8].m128i_i64[1] = v65;
          LODWORD(v65) = v52[9].m128i_i32[0];
          v52[9].m128i_i32[0] = v53[9].m128i_i32[0];
          LODWORD(v64) = v53[9].m128i_i32[1];
          v53[9].m128i_i32[0] = v65;
          LODWORD(v65) = v52[9].m128i_i32[1];
          v52[9].m128i_i32[1] = v64;
          LODWORD(v64) = v53[9].m128i_i32[2];
          v53[9].m128i_i32[1] = v65;
          LODWORD(v65) = v52[9].m128i_i32[2];
          v52[9].m128i_i32[2] = v64;
          LOBYTE(v64) = v53[9].m128i_i8[12];
          v53[9].m128i_i32[2] = v65;
          LOBYTE(v65) = v52[9].m128i_i8[12];
          v52[9].m128i_i8[12] = v64;
          v53[9].m128i_i8[12] = v65;
          if ( v28 )
          {
            v66 = &(*v28)[10 * v33];
            v67 = &(*v28)[(unsigned __int64)v36 / 0x10];
            v68 = _mm_loadu_si128(v66);
            v69 = _mm_loadu_si128(v66 + 1);
            v70 = _mm_loadu_si128(v66 + 2);
            *v66 = _mm_loadu_si128(v67);
            v71 = _mm_loadu_si128(v67 + 1);
            v72 = _mm_loadu_si128(v66 + 3);
            v73 = _mm_loadu_si128(v66 + 4);
            v74 = _mm_loadu_si128(v66 + 5);
            v131 = v68;
            v66[1] = v71;
            v75 = _mm_loadu_si128(v67 + 2);
            v76 = _mm_loadu_si128(v66 + 6);
            v77 = _mm_loadu_si128(v66 + 7);
            v132 = v69;
            v66[2] = v75;
            v78 = _mm_loadu_si128(v67 + 3);
            v133 = v70;
            v66[3] = v78;
            v79 = _mm_loadu_si128(v67 + 4);
            v134 = v72;
            v66[4] = v79;
            v80 = _mm_loadu_si128(v67 + 5);
            v135 = v73;
            v66[5] = v80;
            v81 = _mm_loadu_si128(v67 + 6);
            v136 = v74;
            v66[6] = v81;
            v82 = _mm_loadu_si128(v67 + 7);
            v137 = v76;
            v138 = v77;
            v66[7] = v82;
            v83 = v67[8].m128i_i64[1];
            *v67 = v68;
            v67[1] = v69;
            v67[2] = v70;
            v67[3] = v72;
            v67[4] = v73;
            v67[5] = v74;
            v67[6] = v76;
            v67[7] = v77;
            v84 = v66[8].m128i_i64[1];
            v66[8].m128i_i64[1] = v83;
            LODWORD(v83) = v67[9].m128i_i32[0];
            v67[8].m128i_i64[1] = v84;
            LODWORD(v84) = v66[9].m128i_i32[0];
            v66[9].m128i_i32[0] = v83;
            LODWORD(v83) = v67[9].m128i_i32[1];
            v67[9].m128i_i32[0] = v84;
            LODWORD(v84) = v66[9].m128i_i32[1];
            v66[9].m128i_i32[1] = v83;
            LODWORD(v83) = v67[9].m128i_i32[2];
            v67[9].m128i_i32[1] = v84;
            LODWORD(v84) = v66[9].m128i_i32[2];
            v66[9].m128i_i32[2] = v83;
            LOBYTE(v83) = v67[9].m128i_i8[12];
            v67[9].m128i_i32[2] = v84;
            LOBYTE(v84) = v66[9].m128i_i8[12];
            v66[9].m128i_i8[12] = v83;
            v67[9].m128i_i8[12] = v84;
          }
        }
        ++v33;
      }
      ++v34;
    }
    while ( v34 < *(_QWORD *)(v29 + 48) );
    v29 = *a2;
  }
  switch_dbctx(*(int *)(v29 + 8));
  sub_489EC0(v31, (__m128i *)v33);
  switch_dbctx(*(int *)(a2[1] + 8LL));
  sub_489EC0(v32, (__m128i *)v33);
  if ( !v28 )
    return v139 - __readfsqword(0x28u);
  switch_dbctx(*(int *)(a2[2] + 8LL));
  return sub_489EC0(v28, (__m128i *)v33);
}

