__int64 __fastcall sub_432500(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  __int64 v3; // rbp
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __m128 v10; // xmm4
  __m128 v11; // xmm5
  int *v12; // r15
  __int64 v13; // r12
  __int64 v14; // rbp
  __m128i si128; // xmm1
  unsigned __int128 v16; // kr00_16
  char v17; // al
  const char *v18; // rsi
  char v19; // al
  const char *v20; // rdi
  char **v21; // r14
  size_t v22; // r13
  char v23; // r15
  char **v24; // r12
  __int64 v25; // rbp
  size_t v26; // r14
  char *v27; // rdx
  char *v28; // rbx
  char *i; // r13
  char *v30; // rax
  void *v31; // rdi
  char v32; // al
  __int64 v33; // rbp
  __int64 v34; // r15
  char *v35; // r14
  char *v36; // rdx
  __int64 v37; // r13
  __int64 j; // r12
  char *v39; // rax
  void *v40; // rdi
  char v41; // bl
  char *v42; // rdi
  __int64 v43; // r14
  __int64 v44; // rbp
  char *v45; // r13
  char *v46; // rdx
  __int64 v47; // r12
  __int64 m; // rbx
  char *v49; // rax
  void *v50; // rdi
  char *v51; // rdi
  __int64 v52; // r14
  __int64 v53; // rbp
  char *v54; // r13
  char *v55; // rdx
  __int64 v56; // r12
  __int64 ii; // rbx
  char *v58; // rax
  void *v59; // rdi
  char has_common; // al
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rax
  __int64 v64; // rbp
  __int64 v65; // rbp
  __int64 v66; // r13
  __int64 v67; // r15
  char *v68; // r14
  __int64 v69; // r12
  _QWORD *v70; // rdx
  __int64 v71; // r13
  __int64 v72; // rax
  _QWORD *v73; // r10
  __int64 v74; // rbp
  __int64 v75; // r15
  __int64 v76; // rbp
  __int64 v77; // rax
  size_t v78; // rdx
  __int64 v79; // rdi
  void *v80; // rax
  size_t v81; // rdx
  const void **v82; // rsi
  __int64 v83; // rbx
  char *v84; // rbp
  char **v85; // r12
  __int64 v86; // r14
  _QWORD *v87; // rdx
  __int64 v88; // r13
  __int64 v89; // rax
  _QWORD *v90; // r10
  __int64 v91; // rbx
  __int64 v92; // r15
  __int64 v93; // rbx
  __int64 v94; // rax
  size_t v95; // rdx
  __int64 v96; // rdi
  void *v97; // rax
  size_t v98; // rdx
  const void **v99; // rsi
  void *v100; // r15
  char **v101; // rbp
  char *v102; // rdx
  char *v103; // r14
  char *k; // r13
  char *v105; // rax
  void *v106; // rdi
  size_t v107[2]; // [rsp+0h] [rbp-148h] BYREF
  size_t n; // [rsp+10h] [rbp-138h]
  _QWORD *v109; // [rsp+18h] [rbp-130h]
  __int64 v110; // [rsp+20h] [rbp-128h]
  int v111[2]; // [rsp+28h] [rbp-120h]
  void *v112; // [rsp+30h] [rbp-118h]
  void *v113; // [rsp+38h] [rbp-110h]
  _QWORD *v114; // [rsp+40h] [rbp-108h]
  __int64 *v115; // [rsp+48h] [rbp-100h]
  int v116[4]; // [rsp+50h] [rbp-F8h] BYREF
  void *v117; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v118; // [rsp+68h] [rbp-E0h]
  void *ptr; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v120; // [rsp+88h] [rbp-C0h]
  void *v121; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v122; // [rsp+A8h] [rbp-A0h]
  __m128 v123[2]; // [rsp+C0h] [rbp-88h] BYREF
  _BYTE v124[24]; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v125; // [rsp+F8h] [rbp-50h]
  int v126; // [rsp+100h] [rbp-48h]
  unsigned __int64 v127; // [rsp+108h] [rbp-40h]

  v127 = __readfsqword(0x28u);
  v1 = a1;
  switch_dbctx(*(int *)(a1 + 88));
  *(_OWORD *)v116 = 0;
  sub_630CA0(**(_QWORD **)(a1 + 1672), 26, v116, 16);
  sub_42D2E0(a1);
  v2 = sub_42E490(a1, (__int64)"Before moving");
  v3 = *(_QWORD *)v116 - *(_QWORD *)&v116[2];
  LOBYTE(v112) = v2;
  if ( (unsigned __int8)sub_42FE60(a1, *(_QWORD *)v116 - *(_QWORD *)&v116[2], 0) )
    sub_368890();
  v4 = (unsigned __int64 *)sub_5060F0(*(_QWORD *)(a1 + 1672) + 1624LL, -1);
  if ( v4 )
  {
    v5 = *v4;
    v6 = v3 - 1;
    if ( v6 <= v5 )
      v5 = v6;
    if ( (unsigned __int8)sub_42FE60(a1, v5, 0) )
      sub_368890();
  }
  v117 = nullptr;
  *(_QWORD *)v111 = &v117;
  v118 = 0;
  sub_42B2A0(a1, (__int64 *)&v117);
  v12 = (int *)&unk_23ADB10;
  v13 = *(_QWORD *)(a1 + 1672);
  n = (size_t)v123;
  do
  {
    v14 = *v12;
    si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
    v123[0] = (__m128)_mm_add_epi64(_mm_load_si128((const __m128i *)v116), si128);
    v10 = _mm_movehl_ps(v10, v123[0]);
    v16 = __PAIR128__(v10.m128_u64[0], v123[0].m128_u64[0]);
    if ( *(_DWORD *)(*(_QWORD *)(v13 + 24) + 24LL) == 4 )
    {
      *(__m128i *)v107 = si128;
      has_common = rangeset_t_has_common(v13 + 1080, v123, 0);
      si128 = _mm_load_si128((const __m128i *)v107);
      if ( has_common )
        goto LABEL_76;
      v16 = (unsigned __int128)v123[0];
    }
    if ( (unsigned __int64)v16 < *((_QWORD *)&v16 + 1) )
    {
      *(__m128i *)v107 = si128;
      v17 = rangeset_t_has_common(v13 + 1040, n, 0);
      si128 = _mm_load_si128((const __m128i *)v107);
      if ( !v17 )
        goto LABEL_10;
    }
LABEL_76:
    *(__m128i *)v124 = _mm_sub_epi64(_mm_load_si128((const __m128i *)v116), si128);
    v11 = _mm_movehl_ps(v11, *(__m128 *)v124);
    v62 = *(_QWORD *)v124;
    v63 = v11.m128_u64[0];
    if ( *(_DWORD *)(*(_QWORD *)(v13 + 24) + 24LL) == 4 )
    {
      if ( (unsigned __int8)rangeset_t_has_common(v13 + 1080, v124, 0) )
        goto LABEL_81;
      v62 = *(_QWORD *)v124;
      v63 = *(_QWORD *)&v124[8];
    }
    if ( v62 < v63 && !(unsigned __int8)rangeset_t_has_common(v13 + 1040, v124, 0) )
    {
      v14 = -v14;
      goto LABEL_10;
    }
LABEL_81:
    ++v12;
  }
  while ( v12 != (int *)&unk_23ADB20 );
  memset(v124, 0, sizeof(v124));
  v64 = *(_QWORD *)(v13 + 1048);
  if ( v64 )
  {
    *(_QWORD *)v124 = qalloc_or_throw(16 * v64);
    *(_QWORD *)&v124[16] = v64;
    memcpy(*(void **)v124, *(const void **)(v13 + 1040), 16 * v64);
    *(_QWORD *)&v124[8] = v64;
  }
  v125 = 0;
  v126 = -1;
  rangeset_t_add(
    (int)v124,
    (int)v116,
    v62,
    v7,
    v8,
    v9,
    v107[0],
    (void *)v107[1],
    n,
    (int)v109,
    v110,
    v111[0],
    (__int64)v112);
  v65 = sub_42E200((__int64)v124, *(_QWORD *)&v116[2] - *(_QWORD *)v116);
  if ( v65 == -1 )
  {
    if ( *(_QWORD *)v124 )
    {
      *(_QWORD *)&v124[8] = 0;
      qfree(*(void **)v124);
    }
    goto LABEL_120;
  }
  v66 = *(_QWORD *)v116;
  if ( *(_QWORD *)v124 )
  {
    *(_QWORD *)&v124[8] = 0;
    qfree(*(void **)v124);
  }
  v14 = v65 - v66;
LABEL_10:
  if ( !v14 )
LABEL_120:
    sub_368890();
  if ( !(unsigned __int8)sub_42FE60(a1, v14 + *(_QWORD *)v116, 0) )
    sub_368890();
  ptr = nullptr;
  v120 = 0;
  sub_35A910((__int64 *)&ptr);
  v18 = haystack;
  if ( (_QWORD)v120 )
    v18 = (const char *)ptr;
  v19 = sub_42E490(a1, (__int64)v18);
  if ( (_BYTE)v112 != v19 )
  {
    if ( !under_debugger )
      interr(2109);
LABEL_133:
    BUG();
  }
  v121 = nullptr;
  v115 = (__int64 *)&v121;
  v122 = 0;
  sub_42B2A0(a1, (__int64 *)&v121);
  memset(v123, 0, 24);
  sub_35A790((char **)v123);
  *(_QWORD *)&v124[16] = 0;
  v113 = nullptr;
  v107[0] = v122;
  if ( !(_QWORD)v122 )
    goto LABEL_16;
  v67 = v122;
  v113 = (void *)qalloc_or_throw(24 * v122);
  v68 = (char *)v113;
  v69 = 0;
  *(_QWORD *)&v124[16] = v67;
  while ( 2 )
  {
    v70 = v121;
    *(_QWORD *)v68 = 0;
    *(_OWORD *)(v68 + 8) = 0;
    v71 = v70[3 * v69 + 1];
    if ( !v71 )
      goto LABEL_91;
    n = (size_t)&v70[3 * v69];
    v72 = qalloc_or_throw(24 * v71);
    *(_QWORD *)v68 = v72;
    v73 = (_QWORD *)n;
    v74 = v72;
    v75 = 0;
    *((_QWORD *)v68 + 2) = v71;
    while ( 2 )
    {
      v76 = 24 * v75 + v74;
      v77 = *v73 + 24 * v75;
      *(_QWORD *)v76 = 0;
      *(_OWORD *)(v76 + 8) = 0;
      v78 = *(_QWORD *)(v77 + 8);
      if ( !v78 )
      {
        if ( v71 == ++v75 )
          break;
        goto LABEL_95;
      }
      v79 = *(_QWORD *)(v77 + 8);
      v110 = v77;
      v109 = v73;
      n = v78;
      v80 = (void *)qalloc_or_throw(v79);
      v81 = n;
      *(_QWORD *)v76 = v80;
      ++v75;
      v82 = (const void **)v110;
      *(_QWORD *)(v76 + 16) = v81;
      memcpy(v80, *v82, v81);
      v73 = v109;
      *(_QWORD *)(v76 + 8) = n;
      if ( v71 != v75 )
      {
LABEL_95:
        v74 = *(_QWORD *)v68;
        continue;
      }
      break;
    }
    *((_QWORD *)v68 + 1) = v71;
LABEL_91:
    ++v69;
    v68 += 24;
    if ( v107[0] != v69 )
      continue;
    break;
  }
LABEL_16:
  v20 = haystack;
  if ( v123[0].m128_u64[1] )
    v20 = (const char *)v123[0].m128_u64[0];
  v21 = (char **)v113;
  v22 = v107[0];
  v114 = v124;
  *(_QWORD *)v124 = v113;
  *(_QWORD *)&v124[8] = v107[0];
  v23 = sub_4318F0((__int64)v20, *(_QWORD **)v111, v124);
  if ( v21 )
  {
    v24 = v21;
    v25 = 0;
    if ( v22 )
    {
      v26 = v107[0];
      v107[0] = v1;
      do
      {
        v27 = *v24;
        if ( *v24 )
        {
          v28 = v24[1];
          if ( v28 )
          {
            for ( i = nullptr; i != v28; ++i )
            {
              v30 = &v27[24 * (_QWORD)i];
              v31 = *(void **)v30;
              if ( *(_QWORD *)v30 )
              {
                *((_QWORD *)v30 + 1) = 0;
                qfree(v31);
                v27 = *v24;
              }
            }
          }
          v24[1] = nullptr;
          qfree(v27);
        }
        ++v25;
        v24 += 3;
      }
      while ( v26 != v25 );
      v1 = v107[0];
    }
    qfree(v113);
  }
  if ( v23 )
  {
    if ( !under_debugger )
      interr(2122);
    goto LABEL_133;
  }
  if ( !(unsigned __int8)sub_42FE60(v1, *(unsigned __int64 *)v116, 0) )
    sub_368890();
  v32 = sub_42E490(v1, (__int64)"After move_privrange to the initial address");
  if ( (_BYTE)v112 != v32 )
  {
    if ( !under_debugger )
      interr(2111);
    goto LABEL_133;
  }
  v33 = v122;
  v34 = 0;
  if ( (_QWORD)v122 )
  {
    do
    {
      v35 = (char *)v121 + 24 * v34;
      v36 = *(char **)v35;
      if ( *(_QWORD *)v35 )
      {
        v37 = *((_QWORD *)v35 + 1);
        if ( v37 )
        {
          for ( j = 0; j != v37; ++j )
          {
            v39 = &v36[24 * j];
            v40 = *(void **)v39;
            if ( *(_QWORD *)v39 )
            {
              *((_QWORD *)v39 + 1) = 0;
              qfree(v40);
              v36 = *(char **)v35;
            }
          }
        }
        *((_QWORD *)v35 + 1) = 0;
        qfree(v36);
      }
      ++v34;
    }
    while ( v33 != v34 );
  }
  *(_QWORD *)&v122 = 0;
  sub_42B2A0(v1, v115);
  *(_QWORD *)&v124[16] = 0;
  v110 = v122;
  if ( !(_QWORD)v122 )
  {
    *(_QWORD *)v124 = 0;
    *(_QWORD *)&v124[8] = 0;
    v41 = sub_4318F0((__int64)"after test_privrange_move", *(_QWORD **)v111, v114);
    goto LABEL_45;
  }
  v83 = v110;
  v113 = (void *)(24 * v110);
  v112 = (void *)qalloc_or_throw(24 * v110);
  v84 = (char *)v112;
  v85 = (char **)v112;
  v86 = 0;
  *(_QWORD *)&v124[16] = v83;
LABEL_101:
  while ( 2 )
  {
    v87 = v121;
    *(_QWORD *)v84 = 0;
    *(_OWORD *)(v84 + 8) = 0;
    v88 = v87[3 * v86 + 1];
    if ( v88 )
    {
      v107[0] = (size_t)&v87[3 * v86];
      v89 = qalloc_or_throw(24 * v88);
      *(_QWORD *)v84 = v89;
      v90 = (_QWORD *)v107[0];
      v91 = v89;
      v92 = 0;
      *((_QWORD *)v84 + 2) = v88;
      while ( 1 )
      {
        v93 = 24 * v92 + v91;
        v94 = *v90 + 24 * v92;
        *(_QWORD *)v93 = 0;
        *(_OWORD *)(v93 + 8) = 0;
        v95 = *(_QWORD *)(v94 + 8);
        if ( v95 )
        {
          v96 = *(_QWORD *)(v94 + 8);
          v109 = (_QWORD *)v94;
          n = (size_t)v90;
          v107[0] = v95;
          v97 = (void *)qalloc_or_throw(v96);
          v98 = v107[0];
          v99 = (const void **)v109;
          *(_QWORD *)v93 = v97;
          ++v92;
          *(_QWORD *)(v93 + 16) = v98;
          memcpy(v97, *v99, v98);
          v90 = (_QWORD *)n;
          *(_QWORD *)(v93 + 8) = v107[0];
          if ( v88 == v92 )
          {
LABEL_107:
            *((_QWORD *)v84 + 1) = v88;
            ++v86;
            v84 += 24;
            if ( v110 == v86 )
              goto LABEL_108;
            goto LABEL_101;
          }
        }
        else if ( v88 == ++v92 )
        {
          goto LABEL_107;
        }
        v91 = *(_QWORD *)v84;
      }
    }
    ++v86;
    v84 += 24;
    if ( v110 != v86 )
      continue;
    break;
  }
LABEL_108:
  v100 = v112;
  *(_QWORD *)v124 = v112;
  *(_QWORD *)&v124[8] = v110;
  v41 = sub_4318F0((__int64)"after test_privrange_move", *(_QWORD **)v111, v114);
  v101 = (char **)((char *)v113 + (_QWORD)v100);
  if ( v100 )
  {
    do
    {
      v102 = *v85;
      if ( *v85 )
      {
        v103 = v85[1];
        if ( v103 )
        {
          for ( k = nullptr; k != v103; ++k )
          {
            v105 = &v102[24 * (_QWORD)k];
            v106 = *(void **)v105;
            if ( *(_QWORD *)v105 )
            {
              *((_QWORD *)v105 + 1) = 0;
              qfree(v106);
              v102 = *v85;
            }
          }
        }
        v85[1] = nullptr;
        qfree(v102);
      }
      v85 += 3;
    }
    while ( v101 != v85 );
    qfree(v112);
  }
LABEL_45:
  if ( v41 )
  {
    if ( !under_debugger )
      interr(2112);
    goto LABEL_133;
  }
  if ( v123[0].m128_u64[0] )
  {
    v123[0].m128_u64[1] = 0;
    qfree((void *)v123[0].m128_u64[0]);
  }
  v42 = (char *)v121;
  if ( v121 )
  {
    v43 = v122;
    if ( (_QWORD)v122 )
    {
      v44 = 0;
      do
      {
        v45 = &v42[24 * v44];
        v46 = *(char **)v45;
        if ( *(_QWORD *)v45 )
        {
          v47 = *((_QWORD *)v45 + 1);
          if ( v47 )
          {
            for ( m = 0; m != v47; ++m )
            {
              v49 = &v46[24 * m];
              v50 = *(void **)v49;
              if ( *(_QWORD *)v49 )
              {
                *((_QWORD *)v49 + 1) = 0;
                qfree(v50);
                v46 = *(char **)v45;
              }
            }
          }
          *((_QWORD *)v45 + 1) = 0;
          qfree(v46);
          v42 = (char *)v121;
        }
        ++v44;
      }
      while ( v43 != v44 );
    }
    *(_QWORD *)&v122 = 0;
    qfree(v42);
  }
  if ( ptr )
  {
    *(_QWORD *)&v120 = 0;
    qfree(ptr);
  }
  v51 = (char *)v117;
  if ( v117 )
  {
    v52 = v118;
    if ( (_QWORD)v118 )
    {
      v53 = 0;
      do
      {
        v54 = &v51[24 * v53];
        v55 = *(char **)v54;
        if ( *(_QWORD *)v54 )
        {
          v56 = *((_QWORD *)v54 + 1);
          if ( v56 )
          {
            for ( ii = 0; ii != v56; ++ii )
            {
              v58 = &v55[24 * ii];
              v59 = *(void **)v58;
              if ( *(_QWORD *)v58 )
              {
                *((_QWORD *)v58 + 1) = 0;
                qfree(v59);
                v55 = *(char **)v54;
              }
            }
          }
          *((_QWORD *)v54 + 1) = 0;
          qfree(v55);
          v51 = (char *)v117;
        }
        ++v53;
      }
      while ( v52 != v53 );
    }
    *(_QWORD *)&v118 = 0;
    qfree(v51);
  }
  return 1;
}
