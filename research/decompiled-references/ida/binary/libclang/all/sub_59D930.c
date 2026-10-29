int sub_59D930()
{
  __int64 v0; // rbx
  __int64 v1; // r12
  __int64 v2; // r14
  __m128i *v3; // rax
  __int64 v4; // rcx
  _BYTE *v5; // rdx
  __int64 v6; // r15
  size_t v7; // rdx
  signed __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r13
  size_t v11; // rdx
  signed __int64 v12; // rax
  __int64 v13; // rax
  size_t v14; // r13
  void *v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rax
  void *v19; // r13
  void *v20; // r8
  size_t v21; // rcx
  const void *v22; // r10
  size_t v23; // rdx
  int v24; // eax
  signed __int64 v25; // rax
  signed __int64 v26; // rax
  void *v27; // rdi
  unsigned int v28; // r12d
  __int64 v29; // rsi
  unsigned __int64 v30; // r8
  __int64 v31; // r9
  unsigned int *v32; // r10
  int v33; // r11d
  unsigned int i; // edi
  unsigned int *v35; // rdx
  int v36; // eax
  unsigned int *v37; // r14
  unsigned int *v38; // rdi
  unsigned int *v39; // rsi
  size_t v40; // rdx
  _BYTE *v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rsi
  int v44; // r9d
  unsigned __int64 v45; // r8
  unsigned int k; // eax
  unsigned __int64 v47; // rdx
  int v48; // r10d
  void *v49; // rdi
  __int64 v50; // rbp
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 *v57; // r12
  size_t v58; // r13
  void *v59; // rdi
  void *v60; // r15
  __int64 v61; // rax
  __int64 v62; // rdx
  int v63; // eax
  _QWORD *v64; // r10
  __int64 v65; // rax
  _QWORD *v66; // rdx
  __int64 v67; // rax
  size_t v68; // rcx
  size_t v69; // rdx
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // eax
  int v74; // eax
  _DWORD *v75; // rdi
  int v76; // eax
  _DWORD *v77; // rdi
  __int64 v78; // rcx
  int v79; // eax
  int v80; // ecx
  int v81; // r9d
  unsigned __int64 v82; // rsi
  unsigned int m; // eax
  int v84; // r8d
  int v85; // eax
  int v86; // eax
  unsigned __int64 v87; // rsi
  unsigned int j; // ecx
  int v89; // eax
  int v90; // eax
  int v91; // r8d
  unsigned __int64 v92; // rcx
  unsigned int ii; // r13d
  int v94; // edi
  int v95; // edx
  int v96; // ecx
  unsigned int v97; // eax
  unsigned __int64 v98; // rdi
  unsigned int v99; // eax
  unsigned int v100; // edi
  unsigned int v101; // eax
  unsigned int v102; // eax
  unsigned int v103; // r13d
  unsigned int v104; // ecx
  __int64 v105; // [rsp+18h] [rbp-130h]
  void *v106; // [rsp+18h] [rbp-130h]
  void *s1a; // [rsp+30h] [rbp-118h]
  void *s1b; // [rsp+30h] [rbp-118h]
  void *s1c; // [rsp+30h] [rbp-118h]
  void *s1d; // [rsp+30h] [rbp-118h]
  void *s1; // [rsp+30h] [rbp-118h]
  _QWORD *s1e; // [rsp+30h] [rbp-118h]
  void *s1f; // [rsp+30h] [rbp-118h]
  size_t na; // [rsp+38h] [rbp-110h]
  size_t nb; // [rsp+38h] [rbp-110h]
  size_t nc; // [rsp+38h] [rbp-110h]
  size_t nd; // [rsp+38h] [rbp-110h]
  size_t n; // [rsp+38h] [rbp-110h]
  void *v119; // [rsp+40h] [rbp-108h]
  size_t v120; // [rsp+40h] [rbp-108h]
  size_t v121; // [rsp+48h] [rbp-100h]
  void *src; // [rsp+50h] [rbp-F8h] BYREF
  size_t v123; // [rsp+58h] [rbp-F0h]
  _QWORD s2[2]; // [rsp+60h] [rbp-E8h] BYREF
  void *v125; // [rsp+70h] [rbp-D8h]
  __int64 v126; // [rsp+78h] [rbp-D0h]
  _QWORD v127[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v128; // [rsp+90h] [rbp-B8h]
  __int64 v129; // [rsp+98h] [rbp-B0h]
  char v130; // [rsp+A0h] [rbp-A8h]
  void *v131; // [rsp+A8h] [rbp-A0h] BYREF
  size_t v132; // [rsp+B0h] [rbp-98h]
  _QWORD v133[2]; // [rsp+B8h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+C8h] [rbp-80h] BYREF
  _BYTE v135[112]; // [rsp+D8h] [rbp-70h] BYREF

  v128 = 43;
  v0 = sub_25A3D10();
  v1 = v0 + 32;
  v125 = v127;
  v2 = v0 + 32;
  v3 = (__m128i *)std::string::_M_create();
  v125 = v3;
  v127[0] = v128;
  *v3 = _mm_load_si128((const __m128i *)&xmmword_3C85120);
  v5 = v125;
  v3[1] = _mm_load_si128((const __m128i *)&xmmword_3C85130);
  *(__m128i *)((char *)v3 + 27) = _mm_load_si128((const __m128i *)&xmmword_3C85140);
  v126 = v128;
  v5[v128] = 0;
  v6 = *(_QWORD *)(v0 + 40);
  strcpy((char *)s2, "machine-cp-fwd");
  src = s2;
  v123 = 14;
  if ( !v6 )
    goto LABEL_20;
  v105 = v0;
  do
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6 + 40);
      if ( !v9 )
        break;
      v7 = 14;
      if ( v9 <= 0xE )
        v7 = *(_QWORD *)(v6 + 40);
      LODWORD(v8) = memcmp(*(const void **)(v6 + 32), s2, v7);
      if ( !(_DWORD)v8 )
      {
        v8 = v9 - 14;
        if ( (__int64)(v9 - 14) >= 0x80000000LL )
          goto LABEL_9;
        v4 = 0xFFFFFFFF7FFFFFFFLL;
        if ( v8 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
          break;
      }
      if ( (int)v8 < 0 )
        break;
LABEL_9:
      v2 = v6;
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v6 )
        goto LABEL_12;
    }
    v6 = *(_QWORD *)(v6 + 24);
  }
  while ( v6 );
LABEL_12:
  v0 = v105;
  if ( v1 == v2 )
    goto LABEL_20;
  v10 = *(_QWORD *)(v2 + 40);
  if ( !v10 )
    goto LABEL_37;
  v11 = 14;
  if ( v10 <= 0xE )
    v11 = *(_QWORD *)(v2 + 40);
  LODWORD(v12) = memcmp(s2, *(const void **)(v2 + 32), v11);
  if ( (_DWORD)v12 )
  {
LABEL_19:
    if ( (int)v12 < 0 )
      goto LABEL_20;
    goto LABEL_37;
  }
  v12 = 14 - v10;
  if ( (__int64)(14 - v10) > 0x7FFFFFFF )
    goto LABEL_37;
  if ( v12 >= (__int64)0xFFFFFFFF80000000LL )
    goto LABEL_19;
LABEL_20:
  v13 = operator new(0x48u);
  v14 = v123;
  v15 = src;
  v16 = v13;
  v106 = (void *)(v13 + 48);
  *(_QWORD *)(v13 + 32) = v13 + 48;
  v128 = v14;
  memcpy((void *)(v13 + 48), v15, v14);
  v17 = *(_QWORD *)(v16 + 32);
  v18 = v128;
  *(_QWORD *)(v16 + 40) = v128;
  *(_BYTE *)(v17 + v18) = 0;
  v19 = *(void **)(v16 + 32);
  *(_DWORD *)(v16 + 64) = 0;
  v20 = *(void **)(v16 + 40);
  if ( v1 == v2 )
  {
    if ( *(_QWORD *)(v0 + 64) )
    {
      s1c = *(void **)(v16 + 40);
      nc = *(_QWORD *)(v0 + 56);
      v63 = sub_3410380(*(_QWORD *)(nc + 32), *(_QWORD *)(nc + 40), v19, s1c);
      v20 = s1c;
      v64 = (_QWORD *)nc;
      if ( v63 < 0 )
        goto LABEL_95;
    }
    goto LABEL_80;
  }
  v21 = *(_QWORD *)(v2 + 40);
  v22 = *(const void **)(v2 + 32);
  v23 = v21;
  if ( (unsigned __int64)v20 <= v21 )
    v23 = *(_QWORD *)(v16 + 40);
  if ( !v23 )
  {
    v25 = (signed __int64)v20 - v21;
    if ( (__int64)((__int64)v20 - v21) <= 0x7FFFFFFF )
      goto LABEL_26;
    goto LABEL_30;
  }
  v121 = *(_QWORD *)(v2 + 40);
  v119 = *(void **)(v16 + 40);
  na = v23;
  s1a = *(void **)(v2 + 32);
  v24 = memcmp(v19, s1a, v23);
  v22 = s1a;
  v23 = na;
  v20 = v119;
  v21 = v121;
  if ( v24 )
  {
    if ( v24 >= 0 )
    {
LABEL_29:
      nb = v21;
      s1b = v20;
      LODWORD(v26) = memcmp(v22, v19, v23);
      v20 = s1b;
      v21 = nb;
      if ( !(_DWORD)v26 )
        goto LABEL_30;
LABEL_32:
      if ( (int)v26 >= 0 )
        goto LABEL_33;
LABEL_101:
      if ( *(_QWORD *)(v0 + 56) == v2 )
        goto LABEL_129;
      s1f = v20;
      n = std::_Rb_tree_increment();
      v73 = sub_3410380(v19, s1f, *(_QWORD *)(n + 32), *(_QWORD *)(n + 40));
      v20 = s1f;
      if ( v73 < 0 )
      {
        if ( !*(_QWORD *)(v2 + 24) )
          goto LABEL_129;
        v64 = (_QWORD *)n;
        v2 = n;
        goto LABEL_81;
      }
      goto LABEL_80;
    }
LABEL_85:
    if ( *(_QWORD *)(v0 + 48) == v2 )
      goto LABEL_105;
    s1 = v20;
    v67 = std::_Rb_tree_decrement();
    v20 = s1;
    v68 = *(_QWORD *)(v67 + 40);
    v64 = (_QWORD *)v67;
    v69 = v68;
    if ( (unsigned __int64)s1 <= v68 )
      v69 = (size_t)s1;
    if ( v69 )
    {
      v120 = *(_QWORD *)(v67 + 40);
      nd = (size_t)s1;
      s1e = (_QWORD *)v67;
      v70 = memcmp(*(const void **)(v67 + 32), v19, v69);
      v64 = s1e;
      v20 = (void *)nd;
      v68 = v120;
      if ( v70 )
        goto LABEL_93;
    }
    v71 = v68 - (_QWORD)v20;
    if ( v71 <= 0x7FFFFFFF )
    {
      if ( v71 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_94;
      v70 = v71;
LABEL_93:
      if ( v70 < 0 )
      {
LABEL_94:
        if ( !v64[3] )
        {
LABEL_95:
          v2 = 0;
LABEL_82:
          if ( v64 == (_QWORD *)v1 || v2 != 0 )
          {
LABEL_83:
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(v0 + 64);
            goto LABEL_36;
          }
          v2 = (__int64)v64;
LABEL_129:
          sub_3410380(v19, v20, *(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40));
          goto LABEL_83;
        }
LABEL_105:
        v64 = (_QWORD *)v2;
        goto LABEL_82;
      }
    }
LABEL_80:
    s1d = v20;
    v65 = sub_3411520(v0 + 24, v19, v20);
    v20 = s1d;
    v2 = v65;
    v64 = v66;
LABEL_81:
    if ( !v64 )
      goto LABEL_33;
    goto LABEL_82;
  }
  v25 = (signed __int64)v119 - v121;
  if ( (__int64)((__int64)v119 - v121) > 0x7FFFFFFF )
    goto LABEL_29;
LABEL_26:
  if ( v25 < (__int64)0xFFFFFFFF80000000LL || (int)v25 < 0 )
    goto LABEL_85;
  if ( v23 )
    goto LABEL_29;
LABEL_30:
  v26 = v21 - (_QWORD)v20;
  if ( (__int64)(v21 - (_QWORD)v20) <= 0x7FFFFFFF )
  {
    if ( v26 >= (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_32;
    goto LABEL_101;
  }
LABEL_33:
  if ( v19 != v106 )
    operator delete(v19, *(_QWORD *)(v16 + 48) + 1LL);
  v27 = (void *)v16;
  v16 = v2;
  operator delete(v27, 0x48u);
LABEL_36:
  v2 = v16;
LABEL_37:
  v28 = *(_DWORD *)(v2 + 64);
  if ( !v28 )
  {
    v57 = *(__int64 **)(v0 + 80);
    *(_DWORD *)(v2 + 64) = (((__int64)v57 - *(_QWORD *)(v0 + 72)) >> 5) + 1;
    if ( v57 == *(__int64 **)(v0 + 88) )
    {
      sub_D5D200(v0 + 72, &src);
      goto LABEL_66;
    }
    v58 = v123;
    v59 = v57 + 2;
    *v57 = (__int64)(v57 + 2);
    v60 = src;
    v128 = v58;
    if ( v58 > 0xF )
    {
      v72 = std::string::_M_create();
      *v57 = v72;
      v59 = (void *)v72;
      v57[2] = v128;
    }
    else
    {
      if ( v58 == 1 )
      {
        *((_BYTE *)v57 + 16) = *(_BYTE *)src;
LABEL_65:
        v61 = v128;
        v62 = *v57;
        v57[1] = v128;
        *(_BYTE *)(v62 + v61) = 0;
        *(_QWORD *)(v0 + 80) += 32LL;
LABEL_66:
        v28 = *(_DWORD *)(v2 + 64);
        goto LABEL_38;
      }
      if ( !v58 )
        goto LABEL_65;
    }
    memcpy(v59, v60, v58);
    goto LABEL_65;
  }
LABEL_38:
  LOBYTE(v133[0]) = 0;
  v128 = 0;
  ptr[1] = (void *)0x300000000LL;
  v29 = *(unsigned int *)(v0 + 16);
  v129 = 0;
  v130 = 0;
  v131 = v133;
  v132 = 0;
  ptr[0] = v135;
  if ( !(_DWORD)v29 )
    goto LABEL_137;
  v30 = (unsigned int)(v29 - 1);
  v31 = *(_QWORD *)v0;
  v32 = nullptr;
  v33 = 1;
  for ( i = v30 & (37 * v28); ; i = v30 & v100 )
  {
    v35 = (unsigned int *)(v31 + ((unsigned __int64)i << 7));
    v36 = *v35;
    if ( v28 == *v35 )
      goto LABEL_41;
    if ( v36 == -1 )
      break;
    if ( !v32 && v36 == -2 )
      v32 = (unsigned int *)(v31 + ((unsigned __int64)i << 7));
    v100 = v33 + i;
    ++v33;
  }
  v74 = *(_DWORD *)(v0 + 8);
  if ( v32 )
    v35 = v32;
  v30 = (unsigned int)(4 * (v74 + 1));
  if ( (unsigned int)v30 >= 3 * (int)v29 )
  {
LABEL_137:
    sub_3414C00(v0, (unsigned int)(2 * v29));
    v85 = *(_DWORD *)(v0 + 16);
    if ( v85 )
    {
      v86 = v85 - 1;
      v30 = 1;
      v87 = 0;
      for ( j = v86 & (37 * v28); ; j = v86 & v104 )
      {
        v35 = (unsigned int *)(*(_QWORD *)v0 + ((unsigned __int64)j << 7));
        v31 = *v35;
        if ( v28 == (_DWORD)v31 )
          break;
        if ( (_DWORD)v31 == -1 )
        {
          if ( v87 )
            v35 = (unsigned int *)v87;
          goto LABEL_111;
        }
        if ( (_DWORD)v31 == -2 && !v87 )
          v87 = *(_QWORD *)v0 + ((unsigned __int64)j << 7);
        v104 = v30 + j;
        v30 = (unsigned int)(v30 + 1);
      }
      goto LABEL_111;
    }
    goto LABEL_184;
  }
  if ( (unsigned int)v29 >> 3 >= (int)v29 - *(_DWORD *)(v0 + 12) - (v74 + 1) )
  {
    sub_3414C00(v0, v29);
    v95 = *(_DWORD *)(v0 + 16);
    if ( v95 )
    {
      v96 = v95 - 1;
      v30 = 1;
      v97 = (v95 - 1) & (37 * v28);
      v98 = 0;
      while ( 1 )
      {
        v35 = (unsigned int *)(*(_QWORD *)v0 + ((unsigned __int64)v97 << 7));
        v31 = *v35;
        if ( v28 == (_DWORD)v31 )
          goto LABEL_111;
        if ( (_DWORD)v31 == -1 )
        {
          if ( v98 )
            v35 = (unsigned int *)v98;
          goto LABEL_111;
        }
        if ( (_DWORD)v31 == -2 && !v98 )
          v98 = *(_QWORD *)v0 + ((unsigned __int64)v97 << 7);
        v102 = v30 + v97;
        v30 = (unsigned int)(v30 + 1);
        v97 = v96 & v102;
      }
    }
LABEL_184:
    ++*(_DWORD *)(v0 + 8);
    BUG();
  }
LABEL_111:
  ++*(_DWORD *)(v0 + 8);
  if ( *v35 != -1 )
    --*(_DWORD *)(v0 + 12);
  v75 = v35 + 2;
  v4 = 30;
  *v35 = v28;
  while ( v4 )
  {
    *v75++ = 0;
    --v4;
  }
  v35[19] = 3;
  *((_QWORD *)v35 + 4) = v35 + 12;
  *((_QWORD *)v35 + 8) = v35 + 20;
LABEL_41:
  v37 = v35 + 2;
  v38 = *((unsigned int **)v35 + 4);
  v39 = v35 + 12;
  *((_QWORD *)v35 + 1) = v128;
  *((_QWORD *)v35 + 2) = v129;
  v40 = v132;
  *((_BYTE *)v37 + 16) = v130;
  v41 = v131;
  if ( v38 == v39 )
  {
    if ( v131 != v133 )
    {
      *((_QWORD *)v37 + 3) = v131;
      *((_QWORD *)v37 + 4) = v40;
      *((_QWORD *)v37 + 5) = v133[0];
      goto LABEL_69;
    }
LABEL_72:
    v30 = (unsigned __int64)&v131;
    if ( &v131 != (void **)(v37 + 6) )
    {
      if ( v40 )
      {
        if ( v40 == 1 )
          *(_BYTE *)v38 = v133[0];
        else
          memcpy(v38, v133, v40);
        v38 = *((unsigned int **)v37 + 3);
        v40 = v132;
      }
      *((_QWORD *)v37 + 4) = v40;
      *((_BYTE *)v38 + v40) = 0;
      v41 = v131;
    }
    goto LABEL_45;
  }
  if ( v131 == v133 )
    goto LABEL_72;
  *((_QWORD *)v37 + 3) = v131;
  v42 = *((_QWORD *)v37 + 5);
  *((_QWORD *)v37 + 4) = v40;
  *((_QWORD *)v37 + 5) = v133[0];
  if ( !v38 )
  {
LABEL_69:
    v131 = v133;
    v41 = v133;
    goto LABEL_45;
  }
  v131 = v38;
  v41 = v38;
  v133[0] = v42;
LABEL_45:
  v132 = 0;
  *v41 = 0;
  sub_3410900(v37 + 14, ptr, v40, v4, v30, v31);
  if ( ptr[0] != v135 )
    free(ptr[0]);
  if ( v131 != v133 )
    operator delete(v131, v133[0] + 1LL);
  v43 = *(unsigned int *)(v0 + 16);
  if ( !(_DWORD)v43 )
    goto LABEL_130;
  v44 = 1;
  v45 = 0;
  for ( k = (v43 - 1) & (37 * v28); ; k = (v43 - 1) & v99 )
  {
    v47 = *(_QWORD *)v0 + ((unsigned __int64)k << 7);
    v48 = *(_DWORD *)v47;
    if ( v28 == *(_DWORD *)v47 )
      goto LABEL_52;
    if ( v48 == -1 )
      break;
    if ( !v45 && v48 == -2 )
      v45 = *(_QWORD *)v0 + ((unsigned __int64)k << 7);
    v99 = v44 + k;
    ++v44;
  }
  v76 = *(_DWORD *)(v0 + 8);
  if ( v45 )
    v47 = v45;
  if ( 4 * (v76 + 1) >= (unsigned int)(3 * v43) )
  {
LABEL_130:
    sub_3414C00(v0, (unsigned int)(2 * v43));
    v79 = *(_DWORD *)(v0 + 16);
    if ( v79 )
    {
      v80 = v79 - 1;
      v81 = 1;
      v82 = 0;
      for ( m = (v79 - 1) & (37 * v28); ; m = v80 & v101 )
      {
        v47 = *(_QWORD *)v0 + ((unsigned __int64)m << 7);
        v84 = *(_DWORD *)v47;
        if ( v28 == *(_DWORD *)v47 )
          break;
        if ( v84 == -1 )
        {
          if ( v82 )
            v47 = v82;
          goto LABEL_122;
        }
        if ( v84 == -2 && !v82 )
          v82 = *(_QWORD *)v0 + ((unsigned __int64)m << 7);
        v101 = v81 + m;
        ++v81;
      }
      goto LABEL_122;
    }
    goto LABEL_183;
  }
  if ( (unsigned int)v43 >> 3 >= (int)v43 - *(_DWORD *)(v0 + 12) - (v76 + 1) )
  {
    sub_3414C00(v0, v43);
    v89 = *(_DWORD *)(v0 + 16);
    if ( v89 )
    {
      v90 = v89 - 1;
      v91 = 1;
      v92 = 0;
      for ( ii = v90 & (37 * v28); ; ii = v90 & v103 )
      {
        v47 = *(_QWORD *)v0 + ((unsigned __int64)ii << 7);
        v94 = *(_DWORD *)v47;
        if ( v28 == *(_DWORD *)v47 )
          break;
        if ( v94 == -1 )
        {
          if ( v92 )
            v47 = v92;
          goto LABEL_122;
        }
        if ( !v92 && v94 == -2 )
          v92 = *(_QWORD *)v0 + ((unsigned __int64)ii << 7);
        v103 = v91 + ii;
        ++v91;
      }
      goto LABEL_122;
    }
LABEL_183:
    ++*(_DWORD *)(v0 + 8);
    BUG();
  }
LABEL_122:
  ++*(_DWORD *)(v0 + 8);
  if ( *(_DWORD *)v47 != -1 )
    --*(_DWORD *)(v0 + 12);
  v77 = (_DWORD *)(v47 + 8);
  v78 = 30;
  *(_DWORD *)v47 = v28;
  while ( v78 )
  {
    *v77++ = 0;
    --v78;
  }
  *(_DWORD *)(v47 + 76) = 3;
  *(_QWORD *)(v47 + 32) = v47 + 48;
  *(_QWORD *)(v47 + 64) = v47 + 80;
LABEL_52:
  std::string::_M_assign();
  if ( src != s2 )
    operator delete(src, s2[0] + 1LL);
  v49 = v125;
  if ( v125 != v127 )
    operator delete(v125, v127[0] + 1LL);
  qword_4AFF090 = 0;
  qword_4AFF0C0 = (__int64)&qword_4AFF0D0;
  qword_4AFF098 = 0;
  qword_4AFF080 = (__int64)&off_4A6E058;
  qword_4AFF088 = (unsigned int)qword_4AFF088 & 0x80000000;
  qword_4AFF0A0 = 0;
  qword_4AFF0A8 = 0;
  qword_4AFF0B0 = 0;
  qword_4AFF0B8 = 0;
  qword_4AFF0C8 = 0x100000000LL;
  qword_4AFF0D8 = (__int64)&qword_4AFF0F0;
  qword_4AFF0E0 = 1;
  dword_4AFF0E8 = 0;
  byte_4AFF0EC = 1;
  v50 = sub_259AC30(v49, &qword_4AFF0D0);
  v51 = (unsigned int)qword_4AFF0C8;
  v52 = (unsigned int)qword_4AFF0C8 + 1LL;
  if ( HIDWORD(qword_4AFF0C8) < v52 )
  {
    sub_25D6060(&qword_4AFF0D0 - 2, &qword_4AFF0D0, v52, 8);
    v51 = (unsigned int)qword_4AFF0C8;
  }
  *(_QWORD *)(qword_4AFF0C0 + 8 * v51) = v50;
  word_4AFF108 = 0;
  xmmword_4AFF118 = 0;
  LODWORD(qword_4AFF0C8) = qword_4AFF0C8 + 1;
  qword_4AFF100 = (__int64)&off_4A64730;
  byte_4AFF0F8 = 0;
  qword_4AFF080 = (__int64)off_4A6DFF0;
  qword_4AFF110 = (__int64)off_49D9168;
  xmmword_4AFF128 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB2E0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AFF080, "mcp-use-is-copy-instr", 21);
  word_4AFF108 = 256;
  byte_4AFF0F8 = 0;
  BYTE2(qword_4AFF088) = BYTE2(qword_4AFF088) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFF080);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFF080, &off_47CFE00);
  qword_4AFEFD0 = 0;
  qword_4AFEFC0 = (__int64)&off_4A6E058;
  qword_4AFEFC8 = (unsigned int)qword_4AFEFC8 & 0x80000000;
  qword_4AFF000 = (__int64)&qword_4AFF010;
  qword_4AFEFD8 = 0;
  qword_4AFEFE0 = 0;
  qword_4AFEFE8 = 0;
  qword_4AFEFF0 = 0;
  qword_4AFEFF8 = 0;
  qword_4AFF008 = 0x100000000LL;
  qword_4AFF018 = (__int64)&qword_4AFF030;
  qword_4AFF020 = 1;
  dword_4AFF028 = 0;
  byte_4AFF02C = 1;
  v53 = sub_259AC30(sub_1F6C9D0, &qword_4AFF010);
  v54 = (unsigned int)qword_4AFF008;
  v55 = (unsigned int)qword_4AFF008 + 1LL;
  if ( HIDWORD(qword_4AFF008) < v55 )
  {
    sub_25D6060(&qword_4AFF010 - 2, &qword_4AFF010, v55, 8);
    v54 = (unsigned int)qword_4AFF008;
  }
  *(_QWORD *)(qword_4AFF000 + 8 * v54) = v53;
  xmmword_4AFF058 = 0;
  LODWORD(qword_4AFF008) = qword_4AFF008 + 1;
  qword_4AFF040 = (__int64)off_49D90F8;
  dword_4AFF038 = 0;
  byte_4AFF04C = 0;
  qword_4AFEFC0 = (__int64)off_4A6D1F8;
  dword_4AFF048 = 0;
  qword_4AFF050 = (__int64)off_49D9198;
  xmmword_4AFF068 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB2E8),
                                (__m128i)(unsigned __int64)nullsub_328);
  sub_259F400(&qword_4AFEFC0, "enable-spill-copy-elim", 22);
  BYTE2(qword_4AFEFC8) = BYTE2(qword_4AFEFC8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFEFC0);
  return __cxa_atexit(sub_23D2630, &qword_4AFEFC0, &off_47CFE00);
}

