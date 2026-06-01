void sub_3515A0()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // r12
  size_t v6; // r13
  __int64 v7; // rbx
  const char *v8; // rdx
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // r15
  __int64 v12; // r12
  size_t v13; // rbx
  void *v14; // rbp
  size_t v15; // r14
  size_t v16; // rdx
  signed __int64 v17; // rax
  __int64 v18; // r14
  size_t v19; // rcx
  unsigned __int64 v20; // r9
  size_t v21; // r15
  size_t v22; // rdx
  signed __int64 v23; // rax
  __int64 v24; // rax
  char *v25; // rsi
  size_t v26; // rdx
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r15
  __int64 v31; // r8
  int v32; // r13d
  __int64 v33; // r14
  const __m128i *v34; // r15
  unsigned __int64 v35; // rsi
  __int64 v36; // rdi
  const __m128i *v37; // rax
  __int32 v38; // r8d
  __int32 *v39; // rbx
  _BYTE *v40; // r14
  _BYTE *v41; // rdi
  __int64 v42; // rax
  size_t v43; // r13
  size_t v44; // rax
  _BYTE *v45; // rdi
  __int64 v46; // rax
  _QWORD *v47; // rdi
  size_t v48; // rdx
  size_t v49; // r15
  __int64 v50; // rax
  _BYTE *v51; // rdi
  void *v52; // rdi
  void *v53; // rdi
  size_t v54; // rdx
  int v55; // r10d
  unsigned __int64 v56; // rdx
  int v57; // eax
  _DWORD *v58; // rdi
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  _DWORD *v62; // rax
  __int64 v63; // rdx
  const __m128i *v64; // rcx
  _DWORD *v65; // rdx
  const __m128i *v66; // r14
  const __m128i *v67; // r12
  __int64 v68; // rbp
  __int32 v69; // esi
  int v70; // eax
  int v71; // eax
  __m128i *v72; // r10
  int v73; // r11d
  unsigned int i; // r8d
  __m128i *v75; // rdi
  __int32 v76; // edx
  const __m128i *v77; // rbx
  const __m128i *v78; // rax
  __m128i *v79; // rdi
  __m128i *v80; // rdi
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  _DWORD *v83; // rax
  int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // r14
  _DWORD *v87; // rdx
  const __m128i *v88; // r14
  const __m128i *k; // rbp
  __int32 v90; // eax
  int v91; // ecx
  int v92; // ecx
  int v93; // edx
  __m128i *v94; // r11
  unsigned int m; // esi
  __m128i *v96; // rdi
  __int32 v97; // r8d
  const __m128i *v98; // r12
  const __m128i *v99; // rax
  __m128i *v100; // rdi
  __m128i *v101; // rdi
  int v102; // eax
  int v103; // eax
  int v104; // r9d
  unsigned __int64 v105; // r8
  unsigned int j; // ecx
  int v107; // esi
  int v108; // eax
  int v109; // eax
  int v110; // r9d
  unsigned int ii; // ecx
  int v112; // esi
  unsigned int v113; // ecx
  __int64 v114; // rdx
  _DWORD *v115; // rdx
  __int64 v116; // rdx
  _DWORD *v117; // rdx
  unsigned int v118; // r8d
  unsigned int v119; // esi
  unsigned int v120; // ecx
  __int64 v121; // [rsp+0h] [rbp-118h]
  size_t v122; // [rsp+0h] [rbp-118h]
  __int64 v123; // [rsp+0h] [rbp-118h]
  __int64 v124; // [rsp+0h] [rbp-118h]
  __int64 v125; // [rsp+0h] [rbp-118h]
  void *v126; // [rsp+8h] [rbp-110h]
  void *s2; // [rsp+20h] [rbp-F8h] BYREF
  size_t n; // [rsp+28h] [rbp-F0h]
  _BYTE v129[16]; // [rsp+30h] [rbp-E8h] BYREF
  void *src; // [rsp+40h] [rbp-D8h] BYREF
  size_t v131; // [rsp+48h] [rbp-D0h]
  _QWORD v132[3]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v133; // [rsp+68h] [rbp-B0h]
  char v134; // [rsp+70h] [rbp-A8h]
  void *v135; // [rsp+78h] [rbp-A0h]
  size_t v136; // [rsp+80h] [rbp-98h]
  _QWORD v137[2]; // [rsp+88h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v139[112]; // [rsp+A8h] [rbp-70h] BYREF

  v0 = j__strlen("Verify PredicateInfo in legacy printer pass.");
  qword_2CE4BC0 = (__int64)&unk_2CE4BD0;
  v1 = v0;
  qword_2CE4B90 = 0;
  qword_2CE4B98 = 0;
  qword_2CE4BA0 = 0;
  qword_2CE4B80 = (__int64)&off_2C4B8B0;
  qword_2CE4B88 = (unsigned int)qword_2CE4B88 & 0x80000000;
  qword_2CE4BC8 = 0x100000000LL;
  qword_2CE4BA8 = 0;
  qword_2CE4BB0 = 0;
  qword_2CE4BB8 = 0;
  qword_2CE4BD8 = (__int64)&unk_2CE4BF0;
  qword_2CE4BE0 = 1;
  dword_2CE4BE8 = 0;
  byte_2CE4BEC = 1;
  v2 = sub_21ED2B0("Verify PredicateInfo in legacy printer pass.");
  v3 = (unsigned int)qword_2CE4BC8;
  v4 = (unsigned int)qword_2CE4BC8 + 1LL;
  if ( v4 > HIDWORD(qword_2CE4BC8) )
  {
    v125 = v2;
    sub_22134E0((char *)&unk_2CE4BD0 - 16, &unk_2CE4BD0, v4, 8);
    v3 = (unsigned int)qword_2CE4BC8;
    v2 = v125;
  }
  *(_QWORD *)(qword_2CE4BC0 + 8 * v3) = v2;
  word_2CE4C08 = 0;
  xmmword_2CE4C28 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CE4BC8) = qword_2CE4BC8 + 1;
  qword_2CE4C00 = (__int64)off_2C474E8;
  byte_2CE4BF8 = 0;
  qword_2CE4B80 = (__int64)off_2C4B848;
  qword_2CE4C10 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE4B80, "verify-predicateinfo", 20);
  word_2CE4C08 = 256;
  qword_2CE4BA8 = v1;
  byte_2CE4BF8 = 0;
  BYTE2(qword_2CE4B88) = BYTE2(qword_2CE4B88) & 0x9F | 0x20;
  qword_2CE4BA0 = (__int64)"Verify PredicateInfo in legacy printer pass.";
  sub_21F4400(&qword_2CE4B80);
  __cxa_atexit(sub_1FEA450, &qword_2CE4B80, &off_2AFC540);
  v5 = j__strlen("Controls which variables are renamed with predicateinfo");
  v6 = j__strlen("predicateinfo-rename");
  v7 = sub_21F7DB0();
  src = v132;
  sub_22A47E0(&src, "Controls which variables are renamed with predicateinfo", &aControlsWhichV[v5]);
  v8 = &aPredicateinfoR[v6];
  s2 = v129;
  v9 = v7 + 32;
  sub_22A47E0(&s2, "predicateinfo-rename", v8);
  v11 = *(_QWORD *)(v7 + 40);
  if ( !v11 )
  {
    v18 = v7 + 32;
    goto LABEL_20;
  }
  v121 = v7;
  v12 = v7 + 32;
  v13 = n;
  v14 = s2;
  do
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(v11 + 40);
      v16 = v13;
      if ( v15 <= v13 )
        v16 = *(_QWORD *)(v11 + 40);
      if ( !v16 || (LODWORD(v17) = memcmp(*(const void **)(v11 + 32), v14, v16), !(_DWORD)v17) )
      {
        v17 = v15 - v13;
        if ( (__int64)(v15 - v13) > 0x7FFFFFFF )
          goto LABEL_5;
        if ( v17 < (__int64)0xFFFFFFFF80000000LL )
          break;
      }
      if ( (int)v17 < 0 )
        break;
LABEL_5:
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v11 )
        goto LABEL_12;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  while ( v11 );
LABEL_12:
  v18 = v12;
  v19 = v13;
  v20 = (unsigned __int64)v14;
  v7 = v121;
  if ( v9 == v12 )
    goto LABEL_20;
  v21 = *(_QWORD *)(v12 + 40);
  v22 = v21;
  if ( v19 <= v21 )
    v22 = v19;
  if ( v22 && (v122 = v19, LODWORD(v23) = memcmp(v14, *(const void **)(v12 + 32), v22), v19 = v122, (_DWORD)v23) )
  {
LABEL_19:
    if ( (int)v23 < 0 )
      goto LABEL_20;
  }
  else
  {
    v23 = v19 - v21;
    if ( (__int64)(v19 - v21) <= 0x7FFFFFFF )
    {
      if ( v23 >= (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_19;
LABEL_20:
      v123 = v18;
      v24 = operator new(0x48u);
      v25 = (char *)s2;
      v26 = n;
      v27 = v24 + 32;
      v18 = v24;
      *(_QWORD *)(v24 + 32) = v24 + 48;
      v126 = (void *)(v24 + 48);
      sub_22A48A0(v24 + 32, v25, &v25[v26]);
      *(_DWORD *)(v18 + 64) = 0;
      v28 = sub_1FEAD00(v7 + 24, v123, v27);
      v30 = v28;
      v31 = v29;
      if ( v29 )
      {
        if ( v28 == 0 && v9 != v29 )
        {
          v54 = *(_QWORD *)(v29 + 40);
          if ( *(_QWORD *)(v18 + 40) <= v54 )
            v54 = *(_QWORD *)(v18 + 40);
          if ( v54 )
            memcmp(*(const void **)(v18 + 32), *(const void **)(v31 + 32), v54);
        }
        std::_Rb_tree_insert_and_rebalance();
        ++*(_QWORD *)(v7 + 64);
      }
      else
      {
        v52 = *(void **)(v18 + 32);
        if ( v126 != v52 )
          operator delete(v52);
        v53 = (void *)v18;
        v18 = v30;
        operator delete(v53);
      }
    }
  }
  v32 = *(_DWORD *)(v18 + 64);
  if ( !v32 )
  {
    v47 = *(_QWORD **)(v7 + 80);
    *(_DWORD *)(v18 + 64) = (((__int64)v47 - *(_QWORD *)(v7 + 72)) >> 5) + 1;
    if ( v47 == *(_QWORD **)(v7 + 88) )
    {
      sub_1098E50(v7 + 72, v47, &s2, v19, v10, v20);
    }
    else
    {
      *v47 = v47 + 2;
      sub_22A48A0(v47, s2, (char *)s2 + n);
      *(_QWORD *)(v7 + 80) += 32LL;
    }
    v32 = *(_DWORD *)(v18 + 64);
  }
  v33 = *(unsigned int *)(v7 + 16);
  v34 = *(const __m128i **)v7;
  if ( !(_DWORD)v33 )
    goto LABEL_100;
  v19 = (unsigned int)(37 * v32);
  v35 = (unsigned int)(v33 - 1);
  LODWORD(v36) = v35 & (37 * v32);
  v37 = &v34[8 * (unsigned __int64)(unsigned int)v36];
  v38 = v37->m128i_i32[0];
  if ( v32 == v37->m128i_i32[0] )
  {
LABEL_26:
    v39 = &v37->m128i_i32[2];
    goto LABEL_27;
  }
  v55 = 1;
  v56 = 0;
  if ( v38 == -1 )
    goto LABEL_81;
  while ( 1 )
  {
    if ( !v56 && v38 == -2 )
      v56 = (unsigned __int64)v37;
    v20 = (unsigned int)(v55 + 1);
    v36 = (unsigned int)v35 & ((_DWORD)v36 + v55);
    v37 = &v34[8 * v36];
    v38 = v37->m128i_i32[0];
    if ( v32 == v37->m128i_i32[0] )
      goto LABEL_26;
    if ( v38 == -1 )
      break;
    ++v55;
  }
  if ( !v56 )
LABEL_81:
    v56 = (unsigned __int64)v37;
  v57 = *(_DWORD *)(v7 + 8) + 1;
  v10 = (unsigned int)(4 * v57);
  if ( (unsigned int)v10 >= 3 * (int)v33 )
  {
LABEL_100:
    v60 = (((((((unsigned int)(2 * v33 - 1) | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v33 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v33 - 1) | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v33 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v33 - 1) | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v33 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v33 - 1) | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v33 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1);
    v61 = ((v60 >> 16) | v60) + 1;
    if ( (unsigned int)v61 < 0x40 )
      LODWORD(v61) = 64;
    *(_DWORD *)(v7 + 16) = v61;
    v62 = (_DWORD *)sub_220C370((unsigned __int64)(unsigned int)v61 << 7, 8, 64, v19, v10, v20);
    *(_QWORD *)v7 = v62;
    if ( v34 )
    {
      v63 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v64 = &v34[8 * v33];
      v65 = &v62[32 * v63];
      while ( v65 != v62 )
      {
        *v62 = -1;
        v62 += 32;
      }
      v66 = v34;
      v67 = v64;
      v68 = v7;
      while ( v67 != v66 )
      {
        v69 = v66->m128i_i32[0];
        if ( (unsigned int)(v66->m128i_i32[0] + 2) > 1 )
        {
          v70 = *(_DWORD *)(v68 + 16);
          if ( !v70 )
          {
LABEL_190:
            dword_0 = 0;
            BUG();
          }
          v71 = v70 - 1;
          v72 = nullptr;
          v73 = 1;
          for ( i = v71 & (37 * v69); ; i = v71 & v118 )
          {
            v75 = (__m128i *)(*(_QWORD *)v68 + ((unsigned __int64)i << 7));
            v76 = v75->m128i_i32[0];
            if ( v69 == v75->m128i_i32[0] )
              break;
            if ( v76 == -1 )
            {
              if ( v72 )
                v75 = v72;
              break;
            }
            if ( v72 || v76 != -2 )
              v75 = v72;
            v118 = v73 + i;
            v72 = v75;
            ++v73;
          }
          v75->m128i_i32[0] = v69;
          v77 = v66 + 3;
          v75->m128i_i64[1] = v66->m128i_i64[1];
          v75[1].m128i_i64[0] = v66[1].m128i_i64[0];
          v75[1].m128i_i8[8] = v66[1].m128i_i8[8];
          v75[2].m128i_i64[0] = (__int64)v75[3].m128i_i64;
          v78 = (const __m128i *)v66[2].m128i_i64[0];
          if ( v78 == &v66[3] )
          {
            v75[3] = _mm_loadu_si128(v66 + 3);
          }
          else
          {
            v75[2].m128i_i64[0] = (__int64)v78;
            v75[3].m128i_i64[0] = v66[3].m128i_i64[0];
          }
          v75[2].m128i_i64[1] = v66[2].m128i_i64[1];
          v66[2].m128i_i64[0] = (__int64)v77;
          v66[2].m128i_i64[1] = 0;
          v66[3].m128i_i8[0] = 0;
          v75[4].m128i_i64[0] = (__int64)v75[5].m128i_i64;
          v75[4].m128i_i64[1] = 0x300000000LL;
          if ( v66[4].m128i_i32[2] )
            sub_1FEAA60(&v75[4], &v66[4]);
          v79 = (__m128i *)v66[4].m128i_i64[0];
          ++*(_DWORD *)(v68 + 8);
          if ( v79 != &v66[5] )
            free(v79);
          v80 = (__m128i *)v66[2].m128i_i64[0];
          if ( v80 != v77 )
            operator delete(v80);
        }
        v66 += 8;
      }
      v7 = v68;
      operator delete();
    }
    else
    {
      v114 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v115 = &v62[32 * v114];
      while ( v115 != v62 )
      {
        *v62 = -1;
        v62 += 32;
      }
    }
    v102 = *(_DWORD *)(v7 + 16);
    if ( v102 )
    {
      v103 = v102 - 1;
      v104 = 1;
      v105 = 0;
      for ( j = v103 & (37 * v32); ; j = v103 & v120 )
      {
        v56 = *(_QWORD *)v7 + ((unsigned __int64)j << 7);
        v107 = *(_DWORD *)v56;
        if ( v32 == *(_DWORD *)v56 )
          break;
        if ( v107 == -1 )
        {
LABEL_147:
          if ( v105 )
            v56 = v105;
          goto LABEL_84;
        }
        if ( v105 || v107 != -2 )
          v56 = v105;
        v120 = v104 + j;
        v105 = v56;
        ++v104;
      }
      goto LABEL_84;
    }
    goto LABEL_191;
  }
  if ( (int)v33 - *(_DWORD *)(v7 + 12) - v57 <= (unsigned int)v33 >> 3 )
  {
    v81 = (((((v35 >> 1) | v35 | (((v35 >> 1) | v35) >> 2)) >> 4) | (v35 >> 1) | v35 | (((v35 >> 1) | v35) >> 2)) >> 8)
        | (((v35 >> 1) | v35 | (((v35 >> 1) | v35) >> 2)) >> 4)
        | (v35 >> 1)
        | v35
        | (((v35 >> 1) | v35) >> 2);
    v82 = ((v81 >> 16) | v81) + 1;
    if ( (unsigned int)v82 < 0x40 )
      LODWORD(v82) = 64;
    *(_DWORD *)(v7 + 16) = v82;
    v83 = (_DWORD *)sub_220C370((unsigned __int64)(unsigned int)v82 << 7, 8, 64, v19, v10, v20);
    v84 = 37 * v32;
    *(_QWORD *)v7 = v83;
    if ( v34 )
    {
      v85 = *(unsigned int *)(v7 + 16);
      v86 = v33 << 7;
      *(_QWORD *)(v7 + 8) = 0;
      v87 = &v83[32 * v85];
      while ( v87 != v83 )
      {
        *v83 = -1;
        v83 += 32;
      }
      v88 = (const __m128i *)((char *)v34 + v86);
      for ( k = v34; v88 != k; k += 8 )
      {
        v90 = k->m128i_i32[0];
        if ( (unsigned int)(k->m128i_i32[0] + 2) > 1 )
        {
          v91 = *(_DWORD *)(v7 + 16);
          if ( !v91 )
            goto LABEL_190;
          v92 = v91 - 1;
          v93 = 1;
          v94 = nullptr;
          for ( m = v92 & (37 * v90); ; m = v92 & v119 )
          {
            v96 = (__m128i *)(*(_QWORD *)v7 + ((unsigned __int64)m << 7));
            v97 = v96->m128i_i32[0];
            if ( v90 == v96->m128i_i32[0] )
              break;
            if ( v97 == -1 )
            {
              if ( v94 )
                v96 = v94;
              break;
            }
            if ( v94 || v97 != -2 )
              v96 = v94;
            v119 = v93 + m;
            v94 = v96;
            ++v93;
          }
          v96->m128i_i32[0] = v90;
          v98 = k + 3;
          v96->m128i_i64[1] = k->m128i_i64[1];
          v96[1].m128i_i64[0] = k[1].m128i_i64[0];
          v96[1].m128i_i8[8] = k[1].m128i_i8[8];
          v96[2].m128i_i64[0] = (__int64)v96[3].m128i_i64;
          v99 = (const __m128i *)k[2].m128i_i64[0];
          if ( v99 == &k[3] )
          {
            v96[3] = _mm_loadu_si128(k + 3);
          }
          else
          {
            v96[2].m128i_i64[0] = (__int64)v99;
            v96[3].m128i_i64[0] = k[3].m128i_i64[0];
          }
          v96[2].m128i_i64[1] = k[2].m128i_i64[1];
          k[2].m128i_i64[0] = (__int64)v98;
          k[2].m128i_i64[1] = 0;
          k[3].m128i_i8[0] = 0;
          v96[4].m128i_i64[0] = (__int64)v96[5].m128i_i64;
          v96[4].m128i_i64[1] = 0x300000000LL;
          if ( k[4].m128i_i32[2] )
            sub_1FEAA60(&v96[4], &k[4]);
          v100 = (__m128i *)k[4].m128i_i64[0];
          ++*(_DWORD *)(v7 + 8);
          if ( v100 != &k[5] )
            free(v100);
          v101 = (__m128i *)k[2].m128i_i64[0];
          if ( v101 != v98 )
            operator delete(v101);
        }
      }
      operator delete();
      v84 = 37 * v32;
    }
    else
    {
      v116 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v117 = &v83[32 * v116];
      while ( v117 != v83 )
      {
        *v83 = -1;
        v83 += 32;
      }
    }
    v108 = *(_DWORD *)(v7 + 16);
    if ( v108 )
    {
      v109 = v108 - 1;
      v110 = 1;
      v105 = 0;
      for ( ii = v109 & v84; ; ii = v109 & v113 )
      {
        v56 = *(_QWORD *)v7 + ((unsigned __int64)ii << 7);
        v112 = *(_DWORD *)v56;
        if ( v32 == *(_DWORD *)v56 )
          break;
        if ( v112 == -1 )
          goto LABEL_147;
        if ( v112 != -2 || v105 )
          v56 = v105;
        v113 = v110 + ii;
        v105 = v56;
        ++v110;
      }
      goto LABEL_84;
    }
LABEL_191:
    ++*(_DWORD *)(v7 + 8);
    BUG();
  }
LABEL_84:
  ++*(_DWORD *)(v7 + 8);
  if ( *(_DWORD *)v56 != -1 )
    --*(_DWORD *)(v7 + 12);
  v58 = (_DWORD *)(v56 + 8);
  v59 = 30;
  *(_DWORD *)v56 = v32;
  while ( v59 )
  {
    *v58++ = 0;
    --v59;
  }
  v39 = (__int32 *)(v56 + 8);
  *(_QWORD *)(v56 + 32) = v56 + 48;
  *(_QWORD *)(v56 + 64) = v56 + 80;
  *(_QWORD *)(v56 + 72) = 0x300000000LL;
LABEL_27:
  v134 = 0;
  v136 = 0;
  v135 = v137;
  v40 = v39 + 10;
  ptr[0] = v139;
  LOBYTE(v137[0]) = 0;
  ptr[1] = (void *)0x300000000LL;
  v41 = *((_BYTE **)v39 + 3);
  v133 = 0;
  v132[2] = 0;
  *(_QWORD *)v39 = 0;
  *((_QWORD *)v39 + 1) = v133;
  *((_BYTE *)v39 + 16) = v134;
  if ( v135 == v137 )
  {
    v48 = v136;
    if ( v136 )
    {
      if ( v136 == 1 )
        *v41 = v137[0];
      else
        memcpy(v41, v135, v136);
      v41 = *((_BYTE **)v39 + 3);
      v48 = v136;
    }
    *((_QWORD *)v39 + 4) = v48;
    v41[v48] = 0;
  }
  else
  {
    if ( v41 == v40 )
    {
      *((_QWORD *)v39 + 3) = v135;
      *((_QWORD *)v39 + 4) = v136;
      *((_QWORD *)v39 + 5) = v137[0];
    }
    else
    {
      *((_QWORD *)v39 + 3) = v135;
      v42 = *((_QWORD *)v39 + 5);
      *((_QWORD *)v39 + 4) = v136;
      *((_QWORD *)v39 + 5) = v137[0];
      if ( v41 )
      {
        v135 = v41;
        v137[0] = v42;
        goto LABEL_31;
      }
    }
    v135 = v137;
  }
LABEL_31:
  v136 = 0;
  *(_BYTE *)v135 = 0;
  sub_1FEAA60(v39 + 14, ptr);
  if ( ptr[0] != v139 )
    free(ptr[0]);
  if ( v135 != v137 )
    operator delete(v135);
  if ( v39 + 6 != (__int32 *)&src )
  {
    v43 = v131;
    if ( *((_BYTE **)v39 + 3) == v40 )
      v44 = 15;
    else
      v44 = *((_QWORD *)v39 + 5);
    if ( v131 > v44 )
    {
      if ( (v131 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v49 = 2 * v44;
      if ( v131 >= 2 * v44 )
      {
        v49 = v131;
      }
      else if ( (v44 & 0x4000000000000000LL) != 0 )
      {
        v49 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v50 = operator new(v49 + 1);
      v51 = *((_BYTE **)v39 + 3);
      if ( v51 != v40 )
      {
        v124 = v50;
        operator delete(v51);
        v50 = v124;
      }
      *((_QWORD *)v39 + 3) = v50;
      *((_QWORD *)v39 + 5) = v49;
    }
    if ( v43 )
    {
      v45 = *((_BYTE **)v39 + 3);
      if ( v43 == 1 )
        *v45 = *(_BYTE *)src;
      else
        memcpy(v45, src, v43);
    }
    v46 = *((_QWORD *)v39 + 3);
    *((_QWORD *)v39 + 4) = v43;
    *(_BYTE *)(v46 + v43) = 0;
  }
  if ( s2 != v129 )
    operator delete(s2);
  if ( src != v132 )
    operator delete(src);
}

