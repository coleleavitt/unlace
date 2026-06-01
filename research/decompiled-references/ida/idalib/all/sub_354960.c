void sub_354960()
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
  unsigned int v32; // r15d
  int v33; // r13d
  __int64 v34; // r14
  const __m128i *v35; // r15
  unsigned __int64 v36; // rsi
  __int64 v37; // rdi
  const __m128i *v38; // rax
  __int32 v39; // r8d
  __int32 *v40; // rbx
  _BYTE *v41; // r14
  _BYTE *v42; // rdi
  __int64 v43; // rax
  size_t v44; // r13
  size_t v45; // rax
  _BYTE *v46; // rdi
  __int64 v47; // rax
  _QWORD *v48; // rdi
  size_t v49; // rdx
  size_t v50; // r15
  __int64 v51; // rax
  _BYTE *v52; // rdi
  void *v53; // rdi
  void *v54; // rdi
  size_t v55; // rcx
  size_t v56; // r9
  size_t v57; // rdx
  unsigned int v58; // eax
  int v59; // r10d
  unsigned __int64 v60; // rdx
  int v61; // eax
  _DWORD *v62; // rdi
  __int64 v63; // rcx
  __int64 v64; // rcx
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  _DWORD *v67; // rax
  __int64 v68; // rdx
  const __m128i *v69; // rcx
  _DWORD *v70; // rdx
  const __m128i *v71; // r14
  const __m128i *v72; // r12
  __int64 v73; // rbp
  __int32 v74; // esi
  int v75; // eax
  int v76; // eax
  __m128i *v77; // r10
  int v78; // r11d
  unsigned int i; // r8d
  __m128i *v80; // rdi
  __int32 v81; // edx
  const __m128i *v82; // rbx
  const __m128i *v83; // rax
  __m128i *v84; // rdi
  __m128i *v85; // rdi
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  _DWORD *v88; // rax
  int v89; // ecx
  __int64 v90; // rdx
  __int64 v91; // r14
  _DWORD *v92; // rdx
  const __m128i *v93; // r14
  const __m128i *k; // rbp
  __int32 v95; // eax
  int v96; // ecx
  int v97; // ecx
  int v98; // edx
  __m128i *v99; // r11
  unsigned int m; // esi
  __m128i *v101; // rdi
  __int32 v102; // r8d
  const __m128i *v103; // r12
  const __m128i *v104; // rax
  __m128i *v105; // rdi
  __m128i *v106; // rdi
  int v107; // eax
  int v108; // eax
  int v109; // r9d
  unsigned __int64 v110; // r8
  unsigned int j; // ecx
  int v112; // esi
  int v113; // eax
  int v114; // eax
  int v115; // r9d
  unsigned int ii; // ecx
  int v117; // esi
  unsigned int v118; // ecx
  __int64 v119; // rdx
  _DWORD *v120; // rdx
  __int64 v121; // rdx
  _DWORD *v122; // rdx
  unsigned int v123; // r8d
  unsigned int v124; // esi
  unsigned int v125; // ecx
  __int64 v126; // [rsp+0h] [rbp-118h]
  size_t v127; // [rsp+0h] [rbp-118h]
  __int64 v128; // [rsp+0h] [rbp-118h]
  __int64 v129; // [rsp+0h] [rbp-118h]
  __int64 v130; // [rsp+0h] [rbp-118h]
  __int64 v131; // [rsp+0h] [rbp-118h]
  __int64 v132; // [rsp+0h] [rbp-118h]
  __int64 v133; // [rsp+0h] [rbp-118h]
  void *v134; // [rsp+8h] [rbp-110h]
  size_t v135; // [rsp+8h] [rbp-110h]
  size_t v136; // [rsp+10h] [rbp-108h]
  void *s2; // [rsp+20h] [rbp-F8h] BYREF
  size_t n; // [rsp+28h] [rbp-F0h]
  _BYTE v139[16]; // [rsp+30h] [rbp-E8h] BYREF
  void *src; // [rsp+40h] [rbp-D8h] BYREF
  size_t v141; // [rsp+48h] [rbp-D0h]
  _QWORD v142[3]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v143; // [rsp+68h] [rbp-B0h]
  char v144; // [rsp+70h] [rbp-A8h]
  void *v145; // [rsp+78h] [rbp-A0h]
  size_t v146; // [rsp+80h] [rbp-98h]
  _QWORD v147[2]; // [rsp+88h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v149[112]; // [rsp+A8h] [rbp-70h] BYREF

  v0 = j__strlen("Verify PredicateInfo in legacy printer pass.");
  qword_2D0EAE0 = (__int64)&unk_2D0EAF0;
  v1 = v0;
  qword_2D0EAB0 = 0;
  qword_2D0EAB8 = 0;
  qword_2D0EAC0 = 0;
  qword_2D0EAA0 = (__int64)&off_2C758B0;
  qword_2D0EAA8 = (unsigned int)qword_2D0EAA8 & 0x80000000;
  qword_2D0EAE8 = 0x100000000LL;
  qword_2D0EAC8 = 0;
  qword_2D0EAD0 = 0;
  qword_2D0EAD8 = 0;
  qword_2D0EAF8 = (__int64)&unk_2D0EB10;
  qword_2D0EB00 = 1;
  dword_2D0EB08 = 0;
  byte_2D0EB0C = 1;
  v2 = sub_2210FF0("Verify PredicateInfo in legacy printer pass.");
  v3 = (unsigned int)qword_2D0EAE8;
  v4 = (unsigned int)qword_2D0EAE8 + 1LL;
  if ( v4 > HIDWORD(qword_2D0EAE8) )
  {
    v130 = v2;
    sub_2237220((char *)&unk_2D0EAF0 - 16, &unk_2D0EAF0, v4, 8);
    v3 = (unsigned int)qword_2D0EAE8;
    v2 = v130;
  }
  *(_QWORD *)(qword_2D0EAE0 + 8 * v3) = v2;
  word_2D0EB28 = 0;
  xmmword_2D0EB48 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D0EAE8) = qword_2D0EAE8 + 1;
  qword_2D0EB20 = (__int64)off_2C714E8;
  byte_2D0EB18 = 0;
  qword_2D0EAA0 = (__int64)off_2C75848;
  qword_2D0EB30 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0EAA0, "verify-predicateinfo", 20);
  word_2D0EB28 = 256;
  qword_2D0EAC8 = v1;
  byte_2D0EB18 = 0;
  BYTE2(qword_2D0EAA8) = BYTE2(qword_2D0EAA8) & 0x9F | 0x20;
  qword_2D0EAC0 = (__int64)"Verify PredicateInfo in legacy printer pass.";
  sub_2218140(&qword_2D0EAA0);
  __cxa_atexit(sub_200E190, &qword_2D0EAA0, &off_2B25620);
  v5 = j__strlen("Controls which variables are renamed with predicateinfo");
  v6 = j__strlen("predicateinfo-rename");
  v7 = sub_221BAF0();
  src = v142;
  sub_22C8520(&src, "Controls which variables are renamed with predicateinfo", &aControlsWhichV[v5]);
  v8 = &aPredicateinfoR[v6];
  s2 = v139;
  v9 = v7 + 32;
  sub_22C8520(&s2, "predicateinfo-rename", v8);
  v11 = *(_QWORD *)(v7 + 40);
  if ( !v11 )
  {
    v18 = v7 + 32;
    goto LABEL_20;
  }
  v126 = v7;
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
  v7 = v126;
  if ( v9 == v12 )
    goto LABEL_20;
  v21 = *(_QWORD *)(v12 + 40);
  v22 = v21;
  if ( v19 <= v21 )
    v22 = v19;
  if ( v22 && (v127 = v19, LODWORD(v23) = memcmp(v14, *(const void **)(v12 + 32), v22), v19 = v127, (_DWORD)v23) )
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
      v128 = v18;
      v24 = operator new(0x48u);
      v25 = (char *)s2;
      v26 = n;
      v27 = v24 + 32;
      v18 = v24;
      *(_QWORD *)(v24 + 32) = v24 + 48;
      v134 = (void *)(v24 + 48);
      sub_22C85E0(v24 + 32, v25, &v25[v26]);
      *(_DWORD *)(v18 + 64) = 0;
      v28 = sub_200EA40(v7 + 24, v128, v27);
      v30 = v28;
      v31 = v29;
      if ( v29 )
      {
        LOBYTE(v32) = v28 != 0 || v9 == v29;
        if ( (_BYTE)v32 )
          goto LABEL_22;
        v55 = *(_QWORD *)(v18 + 40);
        v57 = *(_QWORD *)(v29 + 40);
        v56 = v57;
        if ( v55 <= v57 )
          v57 = *(_QWORD *)(v18 + 40);
        if ( v57
          && (v136 = *(_QWORD *)(v31 + 40),
              v135 = *(_QWORD *)(v18 + 40),
              v131 = v31,
              v58 = memcmp(*(const void **)(v18 + 32), *(const void **)(v31 + 32), v57),
              v31 = v131,
              v55 = v135,
              v56 = v136,
              v58) )
        {
LABEL_80:
          v32 = v58 >> 31;
        }
        else
        {
          v64 = v55 - v56;
          if ( v64 <= 0x7FFFFFFF )
          {
            if ( v64 >= (__int64)0xFFFFFFFF80000000LL )
            {
              v58 = v64;
              goto LABEL_80;
            }
            LOBYTE(v32) = 1;
          }
        }
LABEL_22:
        std::_Rb_tree_insert_and_rebalance((unsigned __int8)v32, v18, v31, v9);
        ++*(_QWORD *)(v7 + 64);
      }
      else
      {
        v53 = *(void **)(v18 + 32);
        if ( v134 != v53 )
          operator delete(v53);
        v54 = (void *)v18;
        v18 = v30;
        operator delete(v54);
      }
    }
  }
  v33 = *(_DWORD *)(v18 + 64);
  if ( !v33 )
  {
    v48 = *(_QWORD **)(v7 + 80);
    *(_DWORD *)(v18 + 64) = (((__int64)v48 - *(_QWORD *)(v7 + 72)) >> 5) + 1;
    if ( v48 == *(_QWORD **)(v7 + 88) )
    {
      sub_10BCB90(v7 + 72, v48, &s2, v19, v10, v20);
    }
    else
    {
      *v48 = v48 + 2;
      sub_22C85E0(v48, s2, (char *)s2 + n);
      *(_QWORD *)(v7 + 80) += 32LL;
    }
    v33 = *(_DWORD *)(v18 + 64);
  }
  v34 = *(unsigned int *)(v7 + 16);
  v35 = *(const __m128i **)v7;
  if ( !(_DWORD)v34 )
    goto LABEL_103;
  v19 = (unsigned int)(37 * v33);
  v36 = (unsigned int)(v34 - 1);
  LODWORD(v37) = v36 & (37 * v33);
  v38 = &v35[8 * (unsigned __int64)(unsigned int)v37];
  v39 = v38->m128i_i32[0];
  if ( v33 == v38->m128i_i32[0] )
  {
LABEL_26:
    v40 = &v38->m128i_i32[2];
    goto LABEL_27;
  }
  v59 = 1;
  v60 = 0;
  if ( v39 == -1 )
    goto LABEL_82;
  while ( 1 )
  {
    if ( !v60 && v39 == -2 )
      v60 = (unsigned __int64)v38;
    v20 = (unsigned int)(v59 + 1);
    v37 = (unsigned int)v36 & ((_DWORD)v37 + v59);
    v38 = &v35[8 * v37];
    v39 = v38->m128i_i32[0];
    if ( v33 == v38->m128i_i32[0] )
      goto LABEL_26;
    if ( v39 == -1 )
      break;
    ++v59;
  }
  if ( !v60 )
LABEL_82:
    v60 = (unsigned __int64)v38;
  v61 = *(_DWORD *)(v7 + 8) + 1;
  v10 = (unsigned int)(4 * v61);
  if ( (unsigned int)v10 >= 3 * (int)v34 )
  {
LABEL_103:
    v65 = (((((((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v34 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v34 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v34 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v34 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1);
    v66 = ((v65 >> 16) | v65) + 1;
    if ( (unsigned int)v66 < 0x40 )
      LODWORD(v66) = 64;
    *(_DWORD *)(v7 + 16) = v66;
    v67 = (_DWORD *)sub_22300B0((unsigned __int64)(unsigned int)v66 << 7, 8, 64, v19, v10, v20);
    *(_QWORD *)v7 = v67;
    if ( v35 )
    {
      v68 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v132 = v34 << 7;
      v69 = &v35[8 * v34];
      v70 = &v67[32 * v68];
      while ( v70 != v67 )
      {
        *v67 = -1;
        v67 += 32;
      }
      v71 = v35;
      v72 = v69;
      v73 = v7;
      while ( v72 != v71 )
      {
        v74 = v71->m128i_i32[0];
        if ( (unsigned int)(v71->m128i_i32[0] + 2) > 1 )
        {
          v75 = *(_DWORD *)(v73 + 16);
          if ( !v75 )
          {
LABEL_194:
            dword_0 = 0;
            BUG();
          }
          v76 = v75 - 1;
          v77 = nullptr;
          v78 = 1;
          for ( i = v76 & (37 * v74); ; i = v76 & v123 )
          {
            v80 = (__m128i *)(*(_QWORD *)v73 + ((unsigned __int64)i << 7));
            v81 = v80->m128i_i32[0];
            if ( v74 == v80->m128i_i32[0] )
              break;
            if ( v81 == -1 )
            {
              if ( v77 )
                v80 = v77;
              break;
            }
            if ( v77 || v81 != -2 )
              v80 = v77;
            v123 = v78 + i;
            v77 = v80;
            ++v78;
          }
          v80->m128i_i32[0] = v74;
          v82 = v71 + 3;
          v80->m128i_i64[1] = v71->m128i_i64[1];
          v80[1].m128i_i64[0] = v71[1].m128i_i64[0];
          v80[1].m128i_i8[8] = v71[1].m128i_i8[8];
          v80[2].m128i_i64[0] = (__int64)v80[3].m128i_i64;
          v83 = (const __m128i *)v71[2].m128i_i64[0];
          if ( v83 == &v71[3] )
          {
            v80[3] = _mm_loadu_si128(v71 + 3);
          }
          else
          {
            v80[2].m128i_i64[0] = (__int64)v83;
            v80[3].m128i_i64[0] = v71[3].m128i_i64[0];
          }
          v80[2].m128i_i64[1] = v71[2].m128i_i64[1];
          v71[2].m128i_i64[0] = (__int64)v82;
          v71[2].m128i_i64[1] = 0;
          v71[3].m128i_i8[0] = 0;
          v80[4].m128i_i64[0] = (__int64)v80[5].m128i_i64;
          v80[4].m128i_i64[1] = 0x300000000LL;
          if ( v71[4].m128i_i32[2] )
            sub_200E7A0(&v80[4], &v71[4]);
          v84 = (__m128i *)v71[4].m128i_i64[0];
          ++*(_DWORD *)(v73 + 8);
          if ( v84 != &v71[5] )
            free(v84);
          v85 = (__m128i *)v71[2].m128i_i64[0];
          if ( v85 != v82 )
            operator delete(v85);
        }
        v71 += 8;
      }
      v7 = v73;
      operator delete(v35, v132, 8);
    }
    else
    {
      v119 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v120 = &v67[32 * v119];
      while ( v120 != v67 )
      {
        *v67 = -1;
        v67 += 32;
      }
    }
    v107 = *(_DWORD *)(v7 + 16);
    if ( v107 )
    {
      v108 = v107 - 1;
      v109 = 1;
      v110 = 0;
      for ( j = v108 & (37 * v33); ; j = v108 & v125 )
      {
        v60 = *(_QWORD *)v7 + ((unsigned __int64)j << 7);
        v112 = *(_DWORD *)v60;
        if ( v33 == *(_DWORD *)v60 )
          break;
        if ( v112 == -1 )
        {
LABEL_150:
          if ( v110 )
            v60 = v110;
          goto LABEL_85;
        }
        if ( v110 || v112 != -2 )
          v60 = v110;
        v125 = v109 + j;
        v110 = v60;
        ++v109;
      }
      goto LABEL_85;
    }
    goto LABEL_195;
  }
  if ( (int)v34 - *(_DWORD *)(v7 + 12) - v61 <= (unsigned int)v34 >> 3 )
  {
    v86 = (((((v36 >> 1) | v36 | (((v36 >> 1) | v36) >> 2)) >> 4) | (v36 >> 1) | v36 | (((v36 >> 1) | v36) >> 2)) >> 8)
        | (((v36 >> 1) | v36 | (((v36 >> 1) | v36) >> 2)) >> 4)
        | (v36 >> 1)
        | v36
        | (((v36 >> 1) | v36) >> 2);
    v87 = ((v86 >> 16) | v86) + 1;
    if ( (unsigned int)v87 < 0x40 )
      LODWORD(v87) = 64;
    *(_DWORD *)(v7 + 16) = v87;
    v88 = (_DWORD *)sub_22300B0((unsigned __int64)(unsigned int)v87 << 7, 8, 64, v19, v10, v20);
    v89 = 37 * v33;
    *(_QWORD *)v7 = v88;
    if ( v35 )
    {
      v90 = *(unsigned int *)(v7 + 16);
      v91 = v34 << 7;
      *(_QWORD *)(v7 + 8) = 0;
      v133 = v91;
      v92 = &v88[32 * v90];
      while ( v92 != v88 )
      {
        *v88 = -1;
        v88 += 32;
      }
      v93 = (const __m128i *)((char *)v35 + v91);
      for ( k = v35; v93 != k; k += 8 )
      {
        v95 = k->m128i_i32[0];
        if ( (unsigned int)(k->m128i_i32[0] + 2) > 1 )
        {
          v96 = *(_DWORD *)(v7 + 16);
          if ( !v96 )
            goto LABEL_194;
          v97 = v96 - 1;
          v98 = 1;
          v99 = nullptr;
          for ( m = v97 & (37 * v95); ; m = v97 & v124 )
          {
            v101 = (__m128i *)(*(_QWORD *)v7 + ((unsigned __int64)m << 7));
            v102 = v101->m128i_i32[0];
            if ( v95 == v101->m128i_i32[0] )
              break;
            if ( v102 == -1 )
            {
              if ( v99 )
                v101 = v99;
              break;
            }
            if ( v99 || v102 != -2 )
              v101 = v99;
            v124 = v98 + m;
            v99 = v101;
            ++v98;
          }
          v101->m128i_i32[0] = v95;
          v103 = k + 3;
          v101->m128i_i64[1] = k->m128i_i64[1];
          v101[1].m128i_i64[0] = k[1].m128i_i64[0];
          v101[1].m128i_i8[8] = k[1].m128i_i8[8];
          v101[2].m128i_i64[0] = (__int64)v101[3].m128i_i64;
          v104 = (const __m128i *)k[2].m128i_i64[0];
          if ( v104 == &k[3] )
          {
            v101[3] = _mm_loadu_si128(k + 3);
          }
          else
          {
            v101[2].m128i_i64[0] = (__int64)v104;
            v101[3].m128i_i64[0] = k[3].m128i_i64[0];
          }
          v101[2].m128i_i64[1] = k[2].m128i_i64[1];
          k[2].m128i_i64[0] = (__int64)v103;
          k[2].m128i_i64[1] = 0;
          k[3].m128i_i8[0] = 0;
          v101[4].m128i_i64[0] = (__int64)v101[5].m128i_i64;
          v101[4].m128i_i64[1] = 0x300000000LL;
          if ( k[4].m128i_i32[2] )
            sub_200E7A0(&v101[4], &k[4]);
          v105 = (__m128i *)k[4].m128i_i64[0];
          ++*(_DWORD *)(v7 + 8);
          if ( v105 != &k[5] )
            free(v105);
          v106 = (__m128i *)k[2].m128i_i64[0];
          if ( v106 != v103 )
            operator delete(v106);
        }
      }
      operator delete(v35, v133, 8);
      v89 = 37 * v33;
    }
    else
    {
      v121 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v122 = &v88[32 * v121];
      while ( v122 != v88 )
      {
        *v88 = -1;
        v88 += 32;
      }
    }
    v113 = *(_DWORD *)(v7 + 16);
    if ( v113 )
    {
      v114 = v113 - 1;
      v115 = 1;
      v110 = 0;
      for ( ii = v114 & v89; ; ii = v114 & v118 )
      {
        v60 = *(_QWORD *)v7 + ((unsigned __int64)ii << 7);
        v117 = *(_DWORD *)v60;
        if ( v33 == *(_DWORD *)v60 )
          break;
        if ( v117 == -1 )
          goto LABEL_150;
        if ( v117 != -2 || v110 )
          v60 = v110;
        v118 = v115 + ii;
        v110 = v60;
        ++v115;
      }
      goto LABEL_85;
    }
LABEL_195:
    ++*(_DWORD *)(v7 + 8);
    BUG();
  }
LABEL_85:
  ++*(_DWORD *)(v7 + 8);
  if ( *(_DWORD *)v60 != -1 )
    --*(_DWORD *)(v7 + 12);
  v62 = (_DWORD *)(v60 + 8);
  v63 = 30;
  *(_DWORD *)v60 = v33;
  while ( v63 )
  {
    *v62++ = 0;
    --v63;
  }
  v40 = (__int32 *)(v60 + 8);
  *(_QWORD *)(v60 + 32) = v60 + 48;
  *(_QWORD *)(v60 + 64) = v60 + 80;
  *(_QWORD *)(v60 + 72) = 0x300000000LL;
LABEL_27:
  v144 = 0;
  v146 = 0;
  v145 = v147;
  v41 = v40 + 10;
  ptr[0] = v149;
  LOBYTE(v147[0]) = 0;
  ptr[1] = (void *)0x300000000LL;
  v42 = *((_BYTE **)v40 + 3);
  v143 = 0;
  v142[2] = 0;
  *(_QWORD *)v40 = 0;
  *((_QWORD *)v40 + 1) = v143;
  *((_BYTE *)v40 + 16) = v144;
  if ( v145 == v147 )
  {
    v49 = v146;
    if ( v146 )
    {
      if ( v146 == 1 )
        *v42 = v147[0];
      else
        memcpy(v42, v145, v146);
      v42 = *((_BYTE **)v40 + 3);
      v49 = v146;
    }
    *((_QWORD *)v40 + 4) = v49;
    v42[v49] = 0;
  }
  else
  {
    if ( v42 == v41 )
    {
      *((_QWORD *)v40 + 3) = v145;
      *((_QWORD *)v40 + 4) = v146;
      *((_QWORD *)v40 + 5) = v147[0];
    }
    else
    {
      *((_QWORD *)v40 + 3) = v145;
      v43 = *((_QWORD *)v40 + 5);
      *((_QWORD *)v40 + 4) = v146;
      *((_QWORD *)v40 + 5) = v147[0];
      if ( v42 )
      {
        v145 = v42;
        v147[0] = v43;
        goto LABEL_31;
      }
    }
    v145 = v147;
  }
LABEL_31:
  v146 = 0;
  *(_BYTE *)v145 = 0;
  sub_200E7A0(v40 + 14, ptr);
  if ( ptr[0] != v149 )
    free(ptr[0]);
  if ( v145 != v147 )
    operator delete(v145);
  if ( v40 + 6 != (__int32 *)&src )
  {
    v44 = v141;
    if ( *((_BYTE **)v40 + 3) == v41 )
      v45 = 15;
    else
      v45 = *((_QWORD *)v40 + 5);
    if ( v141 > v45 )
    {
      if ( (v141 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v50 = 2 * v45;
      if ( v141 >= 2 * v45 )
      {
        v50 = v141;
      }
      else if ( (v45 & 0x4000000000000000LL) != 0 )
      {
        v50 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v51 = operator new(v50 + 1);
      v52 = *((_BYTE **)v40 + 3);
      if ( v52 != v41 )
      {
        v129 = v51;
        operator delete(v52);
        v51 = v129;
      }
      *((_QWORD *)v40 + 3) = v51;
      *((_QWORD *)v40 + 5) = v50;
    }
    if ( v44 )
    {
      v46 = *((_BYTE **)v40 + 3);
      if ( v44 == 1 )
        *v46 = *(_BYTE *)src;
      else
        memcpy(v46, src, v44);
    }
    v47 = *((_QWORD *)v40 + 3);
    *((_QWORD *)v40 + 4) = v44;
    *(_BYTE *)(v47 + v44) = 0;
  }
  if ( s2 != v139 )
    operator delete(s2);
  if ( src != v142 )
    operator delete(src);
}
