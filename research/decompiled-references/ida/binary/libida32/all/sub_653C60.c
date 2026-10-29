__int64 __fastcall sub_653C60(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        double a6,
        __m128i a7,
        double a8)
{
  bool v9; // r14
  unsigned int v10; // r13d
  char *v11; // rax
  int v12; // r15d
  unsigned int v13; // r15d
  char *v14; // rsi
  __int64 v15; // rax
  unsigned int *v16; // r15
  unsigned int *v17; // r12
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // xmm0_8
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  unsigned int *v27; // r15
  unsigned int *v28; // r12
  _DWORD *v29; // rax
  __int64 v30; // rax
  unsigned int *v31; // r13
  unsigned int *v32; // r15
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  _QWORD *v35; // rsi
  __int64 v36; // rsi
  unsigned int v37; // eax
  char v38; // dl
  int v39; // eax
  int i; // eax
  unsigned int v41; // r13d
  unsigned int v42; // r15d
  unsigned int v43; // r14d
  __m128i *v44; // rax
  __m128i *v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  __m128i *v49; // r8
  unsigned __int32 v50; // ecx
  __int64 v51; // rdx
  __int64 v52; // rax
  void *v53; // rax
  __m128i v54; // xmm1
  __m128i v55; // xmm0
  char *v56; // r12
  char *v57; // r14
  unsigned int v58; // ebx
  __m128i *v60; // r13
  unsigned int j; // r13d
  int v62; // eax
  unsigned int v63; // r15d
  unsigned int v64; // eax
  int k; // eax
  unsigned int v66; // r15d
  int v67; // r14d
  int v68; // r15d
  unsigned int v69; // eax
  unsigned int v70; // r13d
  _QWORD *v71; // r13
  _QWORD *v72; // r14
  void *v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned int *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // [rsp+0h] [rbp-190h]
  int v81; // [rsp+0h] [rbp-190h]
  void *v82; // [rsp+8h] [rbp-188h]
  int v83; // [rsp+8h] [rbp-188h]
  __m128i *v84; // [rsp+8h] [rbp-188h]
  __int64 v85; // [rsp+10h] [rbp-180h]
  int v86; // [rsp+10h] [rbp-180h]
  int v87; // [rsp+18h] [rbp-178h]
  int v88; // [rsp+18h] [rbp-178h]
  __m128i *v89; // [rsp+18h] [rbp-178h]
  int v90; // [rsp+20h] [rbp-170h]
  int v91; // [rsp+20h] [rbp-170h]
  int v92; // [rsp+24h] [rbp-16Ch]
  int v93; // [rsp+28h] [rbp-168h]
  int v94; // [rsp+28h] [rbp-168h]
  __int64 v95; // [rsp+28h] [rbp-168h]
  __int64 v96; // [rsp+30h] [rbp-160h]
  int v97; // [rsp+30h] [rbp-160h]
  int v98; // [rsp+38h] [rbp-158h]
  __m128i *v99; // [rsp+38h] [rbp-158h]
  __m128i *v100; // [rsp+38h] [rbp-158h]
  int v101; // [rsp+40h] [rbp-150h]
  int v102; // [rsp+48h] [rbp-148h]
  __int64 v103; // [rsp+48h] [rbp-148h]
  int v104; // [rsp+50h] [rbp-140h]
  __m128i *v105; // [rsp+58h] [rbp-138h]
  int v106; // [rsp+60h] [rbp-130h]
  int v107; // [rsp+68h] [rbp-128h]
  unsigned int v108; // [rsp+6Ch] [rbp-124h]
  unsigned int v109[4]; // [rsp+70h] [rbp-120h]
  int v110; // [rsp+80h] [rbp-110h]
  int v111; // [rsp+84h] [rbp-10Ch] BYREF
  int v112; // [rsp+88h] [rbp-108h] BYREF
  int v113; // [rsp+8Ch] [rbp-104h] BYREF
  void *v114; // [rsp+90h] [rbp-100h] BYREF
  __int128 v115; // [rsp+98h] [rbp-F8h]
  int v116; // [rsp+A8h] [rbp-E8h]
  void *v117; // [rsp+B0h] [rbp-E0h] BYREF
  __int128 v118; // [rsp+B8h] [rbp-D8h]
  void *ptr; // [rsp+D0h] [rbp-C0h] BYREF
  __m128i v120; // [rsp+D8h] [rbp-B8h] BYREF
  void *v121; // [rsp+F0h] [rbp-A0h] BYREF
  __int128 v122; // [rsp+F8h] [rbp-98h]
  __int64 v123; // [rsp+108h] [rbp-88h]
  int v124; // [rsp+110h] [rbp-80h]
  __m128i v125; // [rsp+120h] [rbp-70h] BYREF
  void *v126; // [rsp+130h] [rbp-60h]
  __int64 *v127; // [rsp+138h] [rbp-58h]
  __int64 *v128; // [rsp+140h] [rbp-50h]
  __int64 v129; // [rsp+148h] [rbp-48h]
  unsigned __int64 v130; // [rsp+158h] [rbp-38h]

  *(_QWORD *)v109 = __PAIR64__(a2, a3);
  v108 = a4;
  v90 = a5;
  v130 = __readfsqword(0x28u);
  v107 = a3 - a2;
  v9 = (a5 & 0x40) != 0;
  v101 = a5 & 0x80;
  LOBYTE(v106) = !((unsigned __int8)(a5 & 0x80) >> 7);
  v92 = a5 & 1;
  if ( (a5 & 1) == 0 )
    sub_3B7400((int)"HIDECANCEL\nMoving database info...");
  v10 = a2;
  v114 = nullptr;
  v115 = 0;
  v109[2] = a2 + a4;
  while ( v10 < v109[2] )
  {
    v12 = sub_3B8AB0((__int64)a1, v10);
    if ( v12 != -1 )
    {
      v13 = sub_3B8BE0(a1, v10) + v12;
      v14 = (char *)v114;
      if ( v13 > v109[2] )
        v13 = v109[2];
      v15 = v115;
      if ( *((_QWORD *)&v115 + 1) < (unsigned __int64)(v115 + 1) )
      {
        v114 = (void *)qvector_reserve(&v114, v114, v115 + 1, 8);
        v14 = (char *)v114;
        v15 = v115;
      }
      v11 = &v14[8 * v15];
      *(_QWORD *)v11 = 0;
      *(_QWORD *)&v115 = v115 + 1;
      *(_DWORD *)v11 = v10;
      *((_DWORD *)v11 + 1) = v13;
    }
    v10 = sub_3B8950((__int64)a1, v10);
  }
  v16 = (unsigned int *)v114;
  v17 = (unsigned int *)((char *)v114 + 8 * v115);
  if ( v109[1] < v109[0] )
  {
    if ( v114 == v17 )
      goto LABEL_15;
    v77 = v17 - 2;
    if ( v114 >= v17 - 2 )
    {
      do
      {
LABEL_13:
        if ( (unsigned int)sub_3D1FA0((__int64)a1, *v16, v107 + *v16, v16[1] - *v16) )
        {
          if ( !under_debugger )
            interr(513);
          BUG();
        }
        v16 += 2;
      }
      while ( v17 != v16 );
      goto LABEL_15;
    }
    do
    {
      v78 = *(_QWORD *)v16;
      v79 = *(_QWORD *)v77;
      v16 += 2;
      v77 -= 2;
      *((_QWORD *)v16 - 1) = v79;
      *((_QWORD *)v77 + 1) = v78;
    }
    while ( v16 < v77 );
    v16 = (unsigned int *)v114;
    v17 = (unsigned int *)((char *)v114 + 8 * v115);
  }
  if ( v17 != v16 )
    goto LABEL_13;
LABEL_15:
  HIDWORD(v85) = sub_3B90A0(a1, v109[1]);
  LODWORD(v85) = sub_3B90A0(a1, v109[0]);
  if ( v101 )
  {
    netnode_copy(HIDWORD(v85), v108, (unsigned int)v85, 1);
    v20 = 0;
    v124 = -1;
    v121 = nullptr;
    v123 = 0;
    v122 = 0;
  }
  else
  {
    v19 = *a1;
    v121 = nullptr;
    v123 = 0;
    v124 = -1;
    v125.m128i_i64[0] = 0;
    v105 = &v125;
    v122 = 0;
    sub_6141A0(v19, 26, &v125, 8u, v18);
    a7 = _mm_loadl_epi64(&v125);
    v20 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v109[1] - v109[0]), 224), a7).m128i_u64[0];
    v125.m128i_i64[0] = v20;
    rangeset_t_add((int)&v121, (int)v105, v109[0], v21, v22, (int)v105, v80, v82, v85, v87, v90, v93, v96);
    v125.m128i_i64[0] = *(_QWORD *)&v109[1];
    rangeset_t_sub(
      (int)&v121,
      (int)v105,
      v23,
      v24,
      v25,
      v26,
      v81,
      v83,
      v86,
      v88,
      v91,
      v94,
      v97,
      v98,
      0,
      v102,
      v104,
      (int)v105,
      v106,
      v107,
      v109[0],
      v109[2],
      v110,
      v112,
      (int)v114,
      (void *)v115,
      *((__int64 *)&v115 + 1),
      v116,
      (int)v117,
      v118,
      *((__int64 *)&v118 + 1));
  }
  sub_3D24E0((__int64)a1, v109[1], v109[0], v108);
  v27 = (unsigned int *)v121;
  v28 = (unsigned int *)((char *)v121 + 8 * v122);
  if ( v121 != v28 )
  {
    do
    {
      sub_3D24E0((__int64)a1, *v27, v107 + *v27, v27[1] - *v27);
      v27 += 2;
    }
    while ( v28 != v27 );
  }
  sub_4F0F80(
    (__int64)(a1 + 194),
    v109[1],
    v109[0],
    v108,
    v106,
    nullptr,
    *(double *)&v20,
    *(double *)a7.m128i_i64,
    a8,
    0);
  sub_4F8940(*a1);
  sub_666C00(a1, v109[1], v109[0]);
  sub_506010(*a1, v109[1], v109[0], v108, v106);
  if ( !v92 )
    sub_3B7400((int)"HIDECANCEL\nMoving functions...");
  sub_5AF4C0((__int64)a1, v109[1], v109[0], v108, v106, *(double *)&v20, *(double *)a7.m128i_i64, a8);
  sub_3C26C0((__int64)a1, v109[1], v109[0], v108, v106);
  sub_6254D0((__int64)a1, v109[1], v109[0], v108, v106, *(double *)&v20, a7, a8);
  sub_3C2320((int)a1, v109[1], v109[0], v108, v106);
  sub_59A720(a1, v109[1], v109[0], v108);
  sub_4B81A0(a1, v109[1], v109[0], v108);
  sub_39FF00((int)a1, (void *)v109[1], v109[0]);
  v118 = 0;
  v117 = nullptr;
  v117 = (void *)qvector_reserve(&v117, 0, 1, 8);
  v29 = (char *)v117 + 8 * v118;
  *v29 = v109[1];
  v29[1] = v109[2];
  v30 = v118 + 1;
  v31 = (unsigned int *)((char *)v121 + 8 * v122);
  *(_QWORD *)&v118 = v118 + 1;
  v32 = (unsigned int *)v121;
  if ( v121 != v31 )
  {
    do
    {
      v33 = _mm_cvtsi32_si128(*v32);
      v34 = _mm_cvtsi32_si128(v32[1]);
      v35 = v117;
      if ( *((_QWORD *)&v118 + 1) < (unsigned __int64)(v30 + 1) )
      {
        v117 = (void *)qvector_reserve(&v117, v117, v30 + 1, 8);
        v35 = v117;
        v34 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v34));
        v30 = v118;
        v33 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v33));
      }
      v35[v30] = _mm_unpacklo_epi32(v33, v34).m128i_u64[0];
      v32 += 2;
      v30 = v118 + 1;
      *(_QWORD *)&v118 = v118 + 1;
    }
    while ( v31 != v32 );
  }
  sub_652EA0(a1, (unsigned int **)&v117, v107, v106, v9);
  if ( !v101 )
  {
    sub_651960(a1, v109[1], v109[0], v108, v90, 1);
    goto LABEL_51;
  }
  sub_586C50(a1, v109[1], v109[0], v108);
  sub_651960(a1, v109[1], v109[0], v108, v90, 0);
  v36 = *a1;
  ptr = nullptr;
  v120 = 0;
  v37 = sub_79B3A0(a1 + 280, v36, 0xFFFFFFFFLL, 65);
  v103 = 0;
  v95 = v37;
  if ( !v37 )
    goto LABEL_82;
  do
  {
    v125.m128i_i32[2] = 0;
    v126 = nullptr;
    v127 = &v125.m128i_i64[1];
    v128 = &v125.m128i_i64[1];
    v129 = 0;
    v38 = sub_79BBD0(a1 + 280, v36, &v113, (unsigned int)v103, 65);
    v39 = -1;
    if ( v38 )
      v39 = v113;
    v111 = v39;
    for ( i = sub_79B7E0(&v111, v36, 83); ; i = sub_79B840(&v111, v36, v41, 83) )
    {
      v41 = i;
      if ( i == -1 )
        break;
      v42 = sub_3B9110(a1, i);
      v43 = sub_665E90(a1, v42, v109[1], v109[0], v108, 0, 0);
      if ( v42 != v43 && sub_79B6F0(&v111, v36, &ptr, v41, 83) > 0 )
      {
        v44 = (__m128i *)v126;
        v45 = (__m128i *)&v125.m128i_u64[1];
        if ( !v126 )
          goto LABEL_41;
        do
        {
          while ( 1 )
          {
            v46 = v44[1].m128i_i64[0];
            v47 = v44[1].m128i_i64[1];
            if ( v44[2].m128i_i32[0] < v43 )
              break;
            v45 = v44;
            v44 = (__m128i *)v44[1].m128i_i64[0];
            if ( !v46 )
              goto LABEL_39;
          }
          v44 = (__m128i *)v44[1].m128i_i64[1];
        }
        while ( v47 );
LABEL_39:
        if ( v45 == (__m128i *)&v125.m128i_u64[1] || v43 < v45[2].m128i_i32[0] )
        {
LABEL_41:
          v48 = operator new(0x40u);
          *(_DWORD *)(v48 + 32) = v43;
          v49 = (__m128i *)v48;
          *(_QWORD *)(v48 + 40) = 0;
          *(_OWORD *)(v48 + 48) = 0;
          if ( v45 == (__m128i *)&v125.m128i_u64[1] )
          {
            if ( !v129 )
              goto LABEL_90;
            v51 = (__int64)v128;
            v45 = nullptr;
            if ( *((_DWORD *)v128 + 8) >= v43 )
              goto LABEL_90;
LABEL_47:
            if ( !v51 )
              goto LABEL_86;
            goto LABEL_48;
          }
          v50 = v45[2].m128i_u32[0];
          if ( v43 < v50 )
          {
            v51 = (__int64)v45;
            if ( v127 == (__int64 *)v45 )
              goto LABEL_47;
            v89 = (__m128i *)v48;
            v52 = std::_Rb_tree_decrement();
            v49 = v89;
            v51 = v52;
            if ( *(_DWORD *)(v52 + 32) < v43 )
            {
              if ( *(_QWORD *)(v52 + 24) )
                v51 = (__int64)v45;
              else
                v45 = nullptr;
              goto LABEL_47;
            }
LABEL_90:
            v100 = v49;
            v74 = sub_651280((__int64)&v125, v43);
            v49 = v100;
            v45 = (__m128i *)v74;
            goto LABEL_47;
          }
          if ( v50 >= v43 )
          {
LABEL_86:
            if ( v49 )
              operator delete(v49, 0x40u);
          }
          else
          {
            if ( v128 == (__int64 *)v45 )
            {
              if ( !v45 )
                goto LABEL_86;
            }
            else
            {
              v84 = (__m128i *)v48;
              v75 = std::_Rb_tree_increment();
              v49 = v84;
              v51 = v75;
              if ( v43 >= *(_DWORD *)(v75 + 32) )
                goto LABEL_90;
              if ( v45[1].m128i_i64[1] )
              {
                v45 = (__m128i *)v75;
                goto LABEL_47;
              }
              if ( !v45 )
                goto LABEL_86;
            }
LABEL_48:
            v99 = v49;
            std::_Rb_tree_insert_and_rebalance();
            ++v129;
            v45 = v99;
          }
        }
        v53 = (void *)v45[2].m128i_i64[1];
        v54 = _mm_loadu_si128(&v120);
        v55 = _mm_loadu_si128(v45 + 3);
        v45[2].m128i_i64[1] = (__int64)ptr;
        v45[3] = v54;
        ptr = v53;
        v120 = v55;
        sub_79B4D0(&v111, v36, v41, 83);
        continue;
      }
    }
    v60 = (__m128i *)v127;
    if ( v127 != (__int64 *)&v125.m128i_u64[1] )
    {
      do
      {
        sub_79B440(&v111, v36, v60[2].m128i_u32[0], v60[2].m128i_i64[1], 0, 339);
        v60 = (__m128i *)std::_Rb_tree_increment();
      }
      while ( v60 != (__m128i *)&v125.m128i_u64[1] );
    }
    for ( j = sub_79B7E0(&v111, v36, 65); j != -1; j = sub_79B840(&v111, v36, j, 65) )
    {
      v62 = sub_79B3A0(&v111, v36, j, 65);
      v63 = sub_3B9110(a1, v62);
      v64 = sub_665E90(a1, v63, v109[1], v109[0], v108, 0, 0);
      if ( v63 != v64 )
      {
        v112 = ea2node(v64);
        sub_79B440(&v111, v36, j, &v112, 4, 65);
      }
    }
    for ( k = sub_79B7E0(&v111, v36, 79); ; k = sub_79B840(&v111, v36, v70, 79) )
    {
      v70 = k;
      if ( k == -1 )
        break;
      v66 = sub_3B9110(a1, k);
      v67 = sub_665E90(a1, v66, v109[1], v109[0], v108, 0, 0);
      if ( v66 != v67 )
      {
        v68 = sub_79B3A0(&v111, v36, v70, 79);
        sub_79B4D0(&v111, v36, v70, 65);
        v69 = sub_3B90A0(a1, v67);
        v113 = v68;
        sub_79B440(&v111, v36, v69, &v113, 4, 79);
      }
    }
    v71 = v126;
    if ( v126 )
    {
      do
      {
        v72 = v71;
        sub_651340((_QWORD *)v71[3]);
        v73 = (void *)v71[5];
        v71 = (_QWORD *)v71[2];
        if ( v73 )
        {
          v72[6] = 0;
          qfree(v73);
        }
        operator delete(v72, 0x40u);
      }
      while ( v71 );
    }
    ++v103;
  }
  while ( v95 != v103 );
LABEL_82:
  if ( ptr )
  {
    v120.m128i_i64[0] = 0;
    qfree(ptr);
  }
  netnode_charshift(*(unsigned int *)(*(_QWORD *)(*a1 + 544) + 104LL), HIDWORD(v85), (unsigned int)v85, v108, 0);
LABEL_51:
  sub_40B960(a1, v109[1], v109[0], v108, v106);
  sub_4DBC60((char *)a1, v109[1], v109[0], v108, v106);
  sub_670A00(*a1, v109[1], v109[0], v108);
  sub_676C20(a1, v109[1], v109[0], v108);
  v56 = (char *)v121;
  v57 = (char *)v121 + 8 * v122;
  if ( v121 != v57 )
  {
    do
    {
      sub_676C20(
        a1,
        *(unsigned int *)v56,
        (unsigned int)(v107 + *(_DWORD *)v56),
        (unsigned int)(*((_DWORD *)v56 + 1) - *(_DWORD *)v56));
      v56 += 8;
    }
    while ( v57 != v56 );
  }
  sub_698450(a1);
  sub_56ED80((__int64)a1, v109[1], v109[0], v108);
  sub_67F190(a1, v109[1], v109[0], v108, (unsigned __int8)v106);
  sub_6510B0(a1, v109[1], v109[0], v108);
  if ( v101 )
  {
    v76 = sub_41FEF0((__int64)a1, 1u);
    if ( v76 )
      sub_653800(v76, v107, 1);
  }
  if ( (v90 & 2) != 0 || (unsigned __int8)sub_625020(v109[1], v109[0], v108, (v90 & 4) != 0) )
    v58 = 0;
  else
    v58 = -5;
  if ( v117 )
  {
    *(_QWORD *)&v118 = 0;
    qfree(v117);
  }
  if ( v121 )
  {
    *(_QWORD *)&v122 = 0;
    qfree(v121);
  }
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    qfree(v114);
  }
  return v58;
}

