__int64 __fastcall sub_41E6C0(__int64 a1)
{
  __int64 v1; // rbp
  char v2; // al
  __int32 v3; // ebx
  unsigned int *v4; // rax
  unsigned int v5; // eax
  unsigned __int32 v6; // ebx
  void **p_ptr; // rsi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  unsigned int *v11; // r15
  __int64 v12; // r12
  int v13; // ebx
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  int v16; // edx
  int v17; // eax
  unsigned int v18; // edx
  const char *v19; // rsi
  const char *v20; // rsi
  const char *v21; // rdi
  char v22; // r14
  char **v23; // r15
  __int64 v24; // r12
  size_t v25; // r13
  char *v26; // rdx
  char *v27; // rbp
  char *i; // rbx
  char *v29; // rax
  void *v30; // rdi
  __int64 v31; // r12
  __int64 v32; // r15
  char *v33; // r14
  char *v34; // rdx
  __int64 v35; // r13
  __int64 j; // rbx
  char *v37; // rax
  void *v38; // rdi
  void **v39; // rsi
  char v40; // bl
  char *v41; // rdi
  __int64 v42; // r14
  __int64 v43; // rbp
  char *v44; // r13
  char *v45; // rdx
  __int64 v46; // r12
  __int64 m; // rbx
  char *v48; // rax
  void *v49; // rdi
  char *v50; // rdi
  __int64 v51; // r14
  __int64 v52; // rbp
  char *v53; // r13
  char *v54; // rdx
  __int64 v55; // r12
  __int64 ii; // rbx
  char *v57; // rax
  void *v58; // rdi
  __int64 v60; // rbx
  int v61; // ebx
  __int32 v62; // r12d
  char *v63; // r12
  char *v64; // rbp
  __int64 v65; // r14
  _QWORD *v66; // rdx
  __int64 v67; // r13
  __int64 v68; // rax
  _QWORD *v69; // r10
  __int64 v70; // rbx
  __int64 v71; // r15
  __int64 v72; // rbx
  __int64 v73; // rax
  void *v74; // rax
  char *v75; // rdx
  __int64 v76; // r14
  __int64 k; // r13
  char *v78; // rax
  void *v79; // rdi
  __int64 v80; // rbx
  char *v81; // r15
  __int64 v82; // r13
  _QWORD *v83; // rdx
  __int64 v84; // rbx
  __int64 v85; // rax
  _QWORD *v86; // r9
  __int64 v87; // r12
  __int64 v88; // r14
  __int64 v89; // r12
  __int64 v90; // rax
  void *v91; // rax
  int v92; // [rsp+0h] [rbp-148h]
  size_t n; // [rsp+8h] [rbp-140h]
  size_t na; // [rsp+8h] [rbp-140h]
  size_t nb; // [rsp+8h] [rbp-140h]
  size_t nc; // [rsp+8h] [rbp-140h]
  size_t v97; // [rsp+10h] [rbp-138h]
  size_t v98; // [rsp+10h] [rbp-138h]
  size_t v99; // [rsp+10h] [rbp-138h]
  size_t v100; // [rsp+10h] [rbp-138h]
  int v101; // [rsp+18h] [rbp-130h]
  const void **v102; // [rsp+18h] [rbp-130h]
  _QWORD *v103; // [rsp+18h] [rbp-130h]
  int v104; // [rsp+20h] [rbp-128h]
  __int64 v105; // [rsp+20h] [rbp-128h]
  const void **v106; // [rsp+20h] [rbp-128h]
  __int64 *v107; // [rsp+28h] [rbp-120h]
  void *v108; // [rsp+30h] [rbp-118h]
  char *v109; // [rsp+30h] [rbp-118h]
  char *v110; // [rsp+38h] [rbp-110h]
  __int64 v111; // [rsp+38h] [rbp-110h]
  __m128i v112; // [rsp+58h] [rbp-F0h] BYREF
  __int128 v113; // [rsp+68h] [rbp-E0h]
  void *v114; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v115; // [rsp+88h] [rbp-C0h]
  void *v116; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v117; // [rsp+A8h] [rbp-A0h]
  void *ptr; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v119; // [rsp+C8h] [rbp-80h]
  void *v120; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v121; // [rsp+E8h] [rbp-60h]
  __int64 v122; // [rsp+F8h] [rbp-50h]
  int v123; // [rsp+100h] [rbp-48h]
  unsigned __int64 v124; // [rsp+108h] [rbp-40h]

  v124 = __readfsqword(0x28u);
  v1 = a1;
  switch_dbctx(*(int *)(a1 + 88));
  v112.m128i_i64[0] = 0;
  sub_6141A0(**(_QWORD **)(a1 + 1480), 26, &v112, 8);
  sub_4196E0(a1);
  v2 = sub_41A7C0(a1, (__int64)"Before moving");
  v3 = v112.m128i_i32[0] - v112.m128i_i32[1];
  LOBYTE(v108) = v2;
  if ( (unsigned __int8)sub_41C0E0(a1, v112.m128i_i32[0] - v112.m128i_i32[1], 0) )
    sub_365330();
  v4 = (unsigned int *)sub_4EEB90(*(_QWORD *)(a1 + 1480) + 1552LL, 0xFFFFFFFFLL);
  if ( v4 )
  {
    v5 = *v4;
    v6 = v3 - 1;
    if ( v6 <= v5 )
      v5 = v6;
    if ( (unsigned __int8)sub_41C0E0(a1, v5, 0) )
      sub_365330();
  }
  v112.m128i_i64[1] = 0;
  p_ptr = (void **)&v112.m128i_i64[1];
  v107 = &v112.m128i_i64[1];
  v113 = 0;
  sub_417800(a1, &v112.m128i_i64[1]);
  v11 = (unsigned int *)&unk_2389A30;
  v12 = *(_QWORD *)(a1 + 1480);
  do
  {
    v13 = *v11;
    v14 = _mm_loadl_epi64(&v112);
    v15 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(*v11), 224), v14);
    ptr = (void *)v15.m128i_i64[0];
    if ( _mm_cvtsi128_si32(v15) >= (unsigned int)_mm_cvtsi128_si32(_mm_shuffle_epi32(v15, 229)) )
    {
      v17 = _mm_cvtsi128_si32(v14);
      v16 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v14, 229));
    }
    else
    {
      p_ptr = &ptr;
      if ( !(unsigned __int8)rangeset_t_has_common(v12 + 1032, &ptr, 0) )
        goto LABEL_13;
      v16 = v112.m128i_i32[1];
      v17 = v112.m128i_i32[0];
    }
    v18 = v16 - v13;
    LODWORD(v120) = v17 - v13;
    HIDWORD(v120) = v18;
    if ( v17 - v13 < v18 )
    {
      p_ptr = &v120;
      if ( !(unsigned __int8)rangeset_t_has_common(v12 + 1032, &v120, 0) )
      {
        v13 = -v13;
        goto LABEL_13;
      }
    }
    ++v11;
  }
  while ( v11 != (unsigned int *)&unk_2389A40 );
  v120 = nullptr;
  v121 = 0;
  v60 = *(_QWORD *)(v12 + 1040);
  if ( v60 )
  {
    v120 = (void *)qalloc_or_throw(8 * v60, (const char *)p_ptr);
    *((_QWORD *)&v121 + 1) = v60;
    memcpy(v120, *(const void **)(v12 + 1032), 8 * v60);
    *(_QWORD *)&v121 = v60;
  }
  v122 = 0;
  v123 = -1;
  rangeset_t_add(
    (int)&v120,
    (int)&v112,
    v18,
    v8,
    v9,
    v10,
    v92,
    &ptr,
    v97,
    v101,
    v104,
    (int)&v112.m128i_i32[2],
    (__int64)v108);
  v61 = sub_41A560((__int64)&v120, v112.m128i_i32[1] - v112.m128i_i32[0]);
  if ( v61 == -1 )
  {
    if ( v120 )
    {
      *(_QWORD *)&v121 = 0;
      qfree(v120);
    }
    goto LABEL_116;
  }
  v62 = v112.m128i_i32[0];
  if ( v120 )
  {
    *(_QWORD *)&v121 = 0;
    qfree(v120);
  }
  v13 = v61 - v62;
LABEL_13:
  if ( !v13 )
LABEL_116:
    sub_365330();
  if ( !(unsigned __int8)sub_41C0E0(a1, v13 + v112.m128i_i32[0], 0) )
    sub_365330();
  v114 = nullptr;
  v115 = 0;
  sub_357520((__int64 *)&v114);
  v19 = haystack;
  if ( (_QWORD)v115 )
    v19 = (const char *)v114;
  if ( (_BYTE)v108 != (unsigned __int8)sub_41A7C0(a1, (__int64)v19) )
  {
    if ( !under_debugger )
      interr(2109);
LABEL_129:
    BUG();
  }
  v116 = nullptr;
  v117 = 0;
  sub_417800(a1, (__int64 *)&v116);
  v20 = "after move_privrange +%a (%a)";
  ptr = nullptr;
  v119 = 0;
  sub_3573A0((char **)&ptr);
  *((_QWORD *)&v121 + 1) = 0;
  v110 = nullptr;
  n = v117;
  if ( !(_QWORD)v117 )
    goto LABEL_19;
  v80 = v117;
  v110 = (char *)qalloc_or_throw(24 * v117, "after move_privrange +%a (%a)", 0.0, *(double *)v14.m128i_i64);
  v81 = v110;
  v82 = 0;
  *((_QWORD *)&v121 + 1) = v80;
  while ( 2 )
  {
    v83 = v116;
    *(_QWORD *)v81 = 0;
    *(_OWORD *)(v81 + 8) = 0;
    v84 = v83[3 * v82 + 1];
    if ( !v84 )
      goto LABEL_106;
    v99 = (size_t)&v83[3 * v82];
    v85 = qalloc_or_throw(24 * v84, v20);
    *(_QWORD *)v81 = v85;
    v86 = (_QWORD *)v99;
    v87 = v85;
    v88 = 0;
    *((_QWORD *)v81 + 2) = v84;
    while ( 1 )
    {
      v89 = 24 * v88 + v87;
      v90 = *v86 + 24 * v88;
      *(_QWORD *)v89 = 0;
      *(_OWORD *)(v89 + 8) = 0;
      if ( *(_QWORD *)(v90 + 8) )
        break;
      if ( v84 == ++v88 )
        goto LABEL_113;
LABEL_110:
      v87 = *(_QWORD *)v81;
    }
    v106 = (const void **)v90;
    v103 = v86;
    v100 = *(_QWORD *)(v90 + 8);
    v91 = (void *)qalloc_or_throw(v100, v20);
    *(_QWORD *)v89 = v91;
    ++v88;
    *(_QWORD *)(v89 + 16) = v100;
    v20 = (const char *)*v106;
    memcpy(v91, *v106, v100);
    v86 = v103;
    *(_QWORD *)(v89 + 8) = v100;
    if ( v84 != v88 )
      goto LABEL_110;
LABEL_113:
    *((_QWORD *)v81 + 1) = v84;
LABEL_106:
    ++v82;
    v81 += 24;
    if ( n != v82 )
      continue;
    break;
  }
LABEL_19:
  v21 = haystack;
  if ( (_QWORD)v119 )
    v21 = (const char *)ptr;
  v120 = v110;
  *(_QWORD *)&v121 = n;
  v22 = sub_41DAC0((__int64)v21, v107, &v120);
  if ( v110 )
  {
    v23 = (char **)v110;
    v24 = 0;
    if ( n )
    {
      v25 = n;
      na = v1;
      do
      {
        v26 = *v23;
        if ( *v23 )
        {
          v27 = v23[1];
          if ( v27 )
          {
            for ( i = nullptr; i != v27; ++i )
            {
              v29 = &v26[24 * (_QWORD)i];
              v30 = *(void **)v29;
              if ( *(_QWORD *)v29 )
              {
                *((_QWORD *)v29 + 1) = 0;
                qfree(v30);
                v26 = *v23;
              }
            }
          }
          v23[1] = nullptr;
          qfree(v26);
        }
        ++v24;
        v23 += 3;
      }
      while ( v25 != v24 );
      v1 = na;
    }
    qfree(v110);
  }
  if ( v22 )
  {
    if ( !under_debugger )
      interr(2122);
    goto LABEL_129;
  }
  if ( !(unsigned __int8)sub_41C0E0(v1, v112.m128i_u32[0], 0) )
    sub_365330();
  if ( (_BYTE)v108 != (unsigned __int8)sub_41A7C0(v1, (__int64)"After move_privrange to the initial address") )
  {
    if ( !under_debugger )
      interr(2111);
    goto LABEL_129;
  }
  v31 = v117;
  v32 = 0;
  if ( (_QWORD)v117 )
  {
    do
    {
      v33 = (char *)v116 + 24 * v32;
      v34 = *(char **)v33;
      if ( *(_QWORD *)v33 )
      {
        v35 = *((_QWORD *)v33 + 1);
        if ( v35 )
        {
          for ( j = 0; j != v35; ++j )
          {
            v37 = &v34[24 * j];
            v38 = *(void **)v37;
            if ( *(_QWORD *)v37 )
            {
              *((_QWORD *)v37 + 1) = 0;
              qfree(v38);
              v34 = *(char **)v33;
            }
          }
        }
        *((_QWORD *)v33 + 1) = 0;
        qfree(v34);
      }
      ++v32;
    }
    while ( v31 != v32 );
  }
  v39 = &v116;
  *(_QWORD *)&v117 = 0;
  sub_417800(v1, (__int64 *)&v116);
  *((_QWORD *)&v121 + 1) = 0;
  v105 = v117;
  if ( !(_QWORD)v117 )
  {
    v120 = nullptr;
    *(_QWORD *)&v121 = 0;
    v40 = sub_41DAC0((__int64)"after test_privrange_move", v107, &v120);
    goto LABEL_48;
  }
  v111 = 24 * v117;
  v109 = (char *)qalloc_or_throw(24 * v117, (const char *)&v116);
  v63 = v109;
  v64 = v109;
  v65 = 0;
  *((_QWORD *)&v121 + 1) = v105;
LABEL_88:
  while ( 2 )
  {
    v66 = v116;
    *(_QWORD *)v63 = 0;
    *(_OWORD *)(v63 + 8) = 0;
    v67 = v66[3 * v65 + 1];
    if ( v67 )
    {
      nb = (size_t)&v66[3 * v65];
      v68 = qalloc_or_throw(24 * v67, (const char *)v39);
      *(_QWORD *)v63 = v68;
      v69 = (_QWORD *)nb;
      v70 = v68;
      v71 = 0;
      *((_QWORD *)v63 + 2) = v67;
      while ( 1 )
      {
        v72 = 24 * v71 + v70;
        v73 = *v69 + 24 * v71;
        *(_QWORD *)v72 = 0;
        *(_OWORD *)(v72 + 8) = 0;
        if ( *(_QWORD *)(v73 + 8) )
        {
          v102 = (const void **)v73;
          v98 = (size_t)v69;
          nc = *(_QWORD *)(v73 + 8);
          v74 = (void *)qalloc_or_throw(nc, (const char *)v39);
          *(_QWORD *)v72 = v74;
          ++v71;
          *(_QWORD *)(v72 + 16) = nc;
          v39 = (void **)*v102;
          memcpy(v74, *v102, nc);
          v69 = (_QWORD *)v98;
          *(_QWORD *)(v72 + 8) = nc;
          if ( v67 == v71 )
          {
LABEL_94:
            *((_QWORD *)v63 + 1) = v67;
            ++v65;
            v63 += 24;
            if ( v105 == v65 )
              goto LABEL_95;
            goto LABEL_88;
          }
        }
        else if ( v67 == ++v71 )
        {
          goto LABEL_94;
        }
        v70 = *(_QWORD *)v63;
      }
    }
    ++v65;
    v63 += 24;
    if ( v105 != v65 )
      continue;
    break;
  }
LABEL_95:
  v120 = v109;
  *(_QWORD *)&v121 = v105;
  v40 = sub_41DAC0((__int64)"after test_privrange_move", v107, &v120);
  if ( v109 )
  {
    do
    {
      v75 = *(char **)v64;
      if ( *(_QWORD *)v64 )
      {
        v76 = *((_QWORD *)v64 + 1);
        if ( v76 )
        {
          for ( k = 0; k != v76; ++k )
          {
            v78 = &v75[24 * k];
            v79 = *(void **)v78;
            if ( *(_QWORD *)v78 )
            {
              *((_QWORD *)v78 + 1) = 0;
              qfree(v79);
              v75 = *(char **)v64;
            }
          }
        }
        *((_QWORD *)v64 + 1) = 0;
        qfree(v75);
      }
      v64 += 24;
    }
    while ( &v109[v111] != v64 );
    qfree(v109);
  }
LABEL_48:
  if ( v40 )
  {
    if ( !under_debugger )
      interr(2112);
    goto LABEL_129;
  }
  if ( ptr )
  {
    *(_QWORD *)&v119 = 0;
    qfree(ptr);
  }
  v41 = (char *)v116;
  if ( v116 )
  {
    v42 = v117;
    if ( (_QWORD)v117 )
    {
      v43 = 0;
      do
      {
        v44 = &v41[24 * v43];
        v45 = *(char **)v44;
        if ( *(_QWORD *)v44 )
        {
          v46 = *((_QWORD *)v44 + 1);
          if ( v46 )
          {
            for ( m = 0; m != v46; ++m )
            {
              v48 = &v45[24 * m];
              v49 = *(void **)v48;
              if ( *(_QWORD *)v48 )
              {
                *((_QWORD *)v48 + 1) = 0;
                qfree(v49);
                v45 = *(char **)v44;
              }
            }
          }
          *((_QWORD *)v44 + 1) = 0;
          qfree(v45);
          v41 = (char *)v116;
        }
        ++v43;
      }
      while ( v42 != v43 );
    }
    *(_QWORD *)&v117 = 0;
    qfree(v41);
  }
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    qfree(v114);
  }
  v50 = (char *)v112.m128i_i64[1];
  if ( v112.m128i_i64[1] )
  {
    v51 = v113;
    if ( (_QWORD)v113 )
    {
      v52 = 0;
      do
      {
        v53 = &v50[24 * v52];
        v54 = *(char **)v53;
        if ( *(_QWORD *)v53 )
        {
          v55 = *((_QWORD *)v53 + 1);
          if ( v55 )
          {
            for ( ii = 0; ii != v55; ++ii )
            {
              v57 = &v54[24 * ii];
              v58 = *(void **)v57;
              if ( *(_QWORD *)v57 )
              {
                *((_QWORD *)v57 + 1) = 0;
                qfree(v58);
                v54 = *(char **)v53;
              }
            }
          }
          *((_QWORD *)v53 + 1) = 0;
          qfree(v54);
          v50 = (char *)v112.m128i_i64[1];
        }
        ++v52;
      }
      while ( v51 != v52 );
    }
    *(_QWORD *)&v113 = 0;
    qfree(v50);
  }
  return 1;
}

