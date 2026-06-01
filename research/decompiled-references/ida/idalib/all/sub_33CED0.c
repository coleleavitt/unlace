int sub_33CED0()
{
  size_t v0; // rbp
  size_t v1; // rbx
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rsi
  int v11; // r10d
  _DWORD *v12; // r9
  unsigned int i; // edx
  _DWORD *v14; // rbx
  int v15; // ecx
  _DWORD *v16; // rbx
  _BYTE *v17; // r13
  _BYTE *v18; // rdi
  __int64 v19; // rax
  size_t v20; // r14
  size_t v21; // rax
  _BYTE *v22; // rdi
  __int64 v23; // rax
  size_t v24; // rax
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  size_t v29; // rax
  size_t v30; // rax
  __int64 v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  size_t v35; // rax
  __int64 v37; // rax
  char *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rdi
  size_t v44; // rdx
  size_t v45; // r15
  __int64 v46; // rax
  _BYTE *v47; // rdi
  void *v48; // rdi
  int v49; // eax
  _DWORD *v50; // rbx
  _DWORD *v51; // rdi
  __int64 v52; // rcx
  _DWORD *v53; // rax
  unsigned int v54; // edx
  __int64 v55; // [rsp+0h] [rbp-118h]
  __int64 v56; // [rsp+0h] [rbp-118h]
  __int64 v57; // [rsp+0h] [rbp-118h]
  __int64 v58; // [rsp+0h] [rbp-118h]
  __int64 v59; // [rsp+0h] [rbp-118h]
  __int64 v60; // [rsp+0h] [rbp-118h]
  __int64 v61; // [rsp+0h] [rbp-118h]
  void *v62; // [rsp+8h] [rbp-110h]
  int v63; // [rsp+1Ch] [rbp-FCh] BYREF
  void *v64; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v65; // [rsp+28h] [rbp-F0h]
  _BYTE v66[16]; // [rsp+30h] [rbp-E8h] BYREF
  void *src; // [rsp+40h] [rbp-D8h] BYREF
  size_t n; // [rsp+48h] [rbp-D0h]
  _BYTE v69[16]; // [rsp+50h] [rbp-C8h] BYREF
  _DWORD *v70; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+68h] [rbp-B0h]
  char v72; // [rsp+70h] [rbp-A8h]
  void *v73; // [rsp+78h] [rbp-A0h]
  size_t v74; // [rsp+80h] [rbp-98h]
  _QWORD v75[2]; // [rsp+88h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v77[112]; // [rsp+A8h] [rbp-70h] BYREF

  v0 = j__strlen("Controls which instructions are removed");
  v1 = j__strlen("early-cse");
  v2 = sub_221BAF0();
  src = v69;
  v3 = v2 + 32;
  sub_21E9BD0(&src, "Controls which instructions are removed", &aControlsWhichI_0[v0]);
  v4 = v2 + 32;
  v64 = v66;
  sub_21E9BD0(&v64, "early-cse", &aEarlyCse[v1]);
  v5 = *(_QWORD *)(v2 + 40);
  if ( !v5 )
    goto LABEL_38;
  do
  {
    while ( (int)sub_9C4B50(v5 + 32, &v64) >= 0 )
    {
      v4 = v5;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v5 )
        goto LABEL_6;
    }
    v5 = *(_QWORD *)(v5 + 24);
  }
  while ( v5 );
LABEL_6:
  if ( v3 == v4 || (int)sub_9C4B50(&v64, v4 + 32) < 0 )
  {
LABEL_38:
    v55 = v4;
    v37 = operator new(0x48u);
    v38 = (char *)v64;
    v39 = v65;
    v40 = v37 + 32;
    v4 = v37;
    *(_QWORD *)(v37 + 32) = v37 + 48;
    v62 = (void *)(v37 + 48);
    sub_21E9C90(v37 + 32, v38, &v38[v39]);
    *(_DWORD *)(v4 + 64) = 0;
    v41 = sub_200EA40(v2 + 24, v55, v40);
    if ( v42 )
    {
      LOBYTE(v41) = v3 == v42 || v41 != 0;
      if ( !(_BYTE)v41 )
      {
        v61 = v42;
        LODWORD(v41) = sub_9C4B50(v40, v42 + 32);
        v42 = v61;
        LODWORD(v41) = (unsigned int)v41 >> 31;
      }
      std::_Rb_tree_insert_and_rebalance((unsigned __int8)v41, v4, v42, v2 + 32);
      ++*(_QWORD *)(v2 + 64);
    }
    else
    {
      v48 = *(void **)(v4 + 32);
      if ( v62 != v48 )
      {
        v57 = v41;
        operator delete(v48);
        v41 = v57;
      }
      v58 = v41;
      operator delete((void *)v4);
      v4 = v58;
    }
  }
  v9 = *(_DWORD *)(v4 + 64);
  if ( !v9 )
  {
    v43 = *(_QWORD **)(v2 + 80);
    *(_DWORD *)(v4 + 64) = (((__int64)v43 - *(_QWORD *)(v2 + 72)) >> 5) + 1;
    if ( v43 == *(_QWORD **)(v2 + 88) )
    {
      sub_10BCB90(v2 + 72, v43, &v64, v6, v7, v8);
    }
    else
    {
      *v43 = v43 + 2;
      sub_21E9C90(v43, v64, (char *)v64 + v65);
      *(_QWORD *)(v2 + 80) += 32LL;
    }
    v9 = *(_DWORD *)(v4 + 64);
  }
  v10 = *(unsigned int *)(v2 + 16);
  v63 = v9;
  if ( (_DWORD)v10 )
  {
    v11 = 1;
    v12 = nullptr;
    for ( i = (v10 - 1) & (37 * v9); ; i = (v10 - 1) & v54 )
    {
      v14 = (_DWORD *)(*(_QWORD *)v2 + ((unsigned __int64)i << 7));
      v15 = *v14;
      if ( v9 == *v14 )
      {
        v16 = v14 + 2;
        goto LABEL_13;
      }
      if ( v15 == -1 )
        break;
      if ( v15 != -2 || v12 )
        v14 = v12;
      v54 = v11 + i;
      v12 = v14;
      ++v11;
    }
    v49 = *(_DWORD *)(v2 + 8);
    if ( v12 )
      v14 = v12;
    v70 = v14;
    if ( 4 * (v49 + 1) < (unsigned int)(3 * v10) )
    {
      if ( (int)v10 - *(_DWORD *)(v2 + 12) - (v49 + 1) <= (unsigned int)v10 >> 3 )
      {
        sub_21E8B50(v2, v10);
        sub_21E8AB0(v2, &v63, &v70);
      }
      goto LABEL_72;
    }
  }
  else
  {
    v70 = nullptr;
  }
  sub_21E8B50(v2, (unsigned int)(2 * v10));
  sub_21E8AB0(v2, &v63, &v70);
LABEL_72:
  v50 = v70;
  ++*(_DWORD *)(v2 + 8);
  if ( *v50 != -1 )
    --*(_DWORD *)(v2 + 12);
  v51 = v50 + 2;
  v52 = 30;
  *v50 = v63;
  while ( v52 )
  {
    *v51++ = 0;
    --v52;
  }
  *((_QWORD *)v50 + 4) = v50 + 12;
  v53 = v50 + 20;
  v16 = v50 + 2;
  *((_QWORD *)v16 + 7) = v53;
  *((_QWORD *)v16 + 8) = 0x300000000LL;
LABEL_13:
  v71 = 0;
  v72 = 0;
  v17 = v16 + 10;
  v73 = v75;
  ptr[0] = v77;
  v70 = nullptr;
  v74 = 0;
  LOBYTE(v75[0]) = 0;
  ptr[1] = (void *)0x300000000LL;
  v18 = *((_BYTE **)v16 + 3);
  *(_QWORD *)v16 = 0;
  *((_QWORD *)v16 + 1) = v71;
  *((_BYTE *)v16 + 16) = v72;
  if ( v73 == v75 )
  {
    v44 = v74;
    if ( v74 )
    {
      if ( v74 == 1 )
        *v18 = v75[0];
      else
        memcpy(v18, v73, v74);
      v18 = *((_BYTE **)v16 + 3);
      v44 = v74;
    }
    *((_QWORD *)v16 + 4) = v44;
    v18[v44] = 0;
  }
  else
  {
    if ( v18 == v17 )
    {
      *((_QWORD *)v16 + 3) = v73;
      *((_QWORD *)v16 + 4) = v74;
      *((_QWORD *)v16 + 5) = v75[0];
    }
    else
    {
      *((_QWORD *)v16 + 3) = v73;
      v19 = *((_QWORD *)v16 + 5);
      *((_QWORD *)v16 + 4) = v74;
      *((_QWORD *)v16 + 5) = v75[0];
      if ( v18 )
      {
        v73 = v18;
        v75[0] = v19;
        goto LABEL_17;
      }
    }
    v73 = v75;
  }
LABEL_17:
  v74 = 0;
  *(_BYTE *)v73 = 0;
  sub_200E7A0(v16 + 14, ptr);
  if ( ptr[0] != v77 )
    free(ptr[0]);
  if ( v73 != v75 )
    operator delete(v73);
  if ( v16 + 6 != (_DWORD *)&src )
  {
    v20 = n;
    if ( *((_BYTE **)v16 + 3) == v17 )
      v21 = 15;
    else
      v21 = *((_QWORD *)v16 + 5);
    if ( n > v21 )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v45 = 2 * v21;
      if ( n >= 2 * v21 )
      {
        v45 = n;
      }
      else if ( (v21 & 0x4000000000000000LL) != 0 )
      {
        v45 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v46 = operator new(v45 + 1);
      v47 = *((_BYTE **)v16 + 3);
      if ( v47 != v17 )
      {
        v56 = v46;
        operator delete(v47);
        v46 = v56;
      }
      *((_QWORD *)v16 + 3) = v46;
      *((_QWORD *)v16 + 5) = v45;
    }
    if ( v20 )
    {
      v22 = *((_BYTE **)v16 + 3);
      if ( v20 == 1 )
        *v22 = *(_BYTE *)src;
      else
        memcpy(v22, src, v20);
    }
    v23 = *((_QWORD *)v16 + 3);
    *((_QWORD *)v16 + 4) = v20;
    *(_BYTE *)(v23 + v20) = 0;
  }
  if ( v64 != v66 )
    operator delete(v64);
  if ( src != v69 )
    operator delete(src);
  v24 = j__strlen(
          "Enable imprecision in EarlyCSE in pathological cases, in exchange for faster compile. Caps the MemorySSA clobbering calls.");
  qword_2D017F0 = 0;
  v25 = v24;
  qword_2D017F8 = 0;
  qword_2D01800 = 0;
  qword_2D017E0 = (__int64)&off_2C758B0;
  qword_2D017E8 = (unsigned int)qword_2D017E8 & 0x80000000;
  qword_2D01828 = 0x100000000LL;
  qword_2D01808 = 0;
  qword_2D01810 = 0;
  qword_2D01818 = 0;
  qword_2D01820 = (__int64)&unk_2D01830;
  qword_2D01838 = (__int64)&unk_2D01850;
  qword_2D01840 = 1;
  dword_2D01848 = 0;
  byte_2D0184C = 1;
  v26 = sub_2210FF0(
          "Enable imprecision in EarlyCSE in pathological cases, in exchange for faster compile. Caps the MemorySSA clobbering calls.");
  v27 = (unsigned int)qword_2D01828;
  v28 = (unsigned int)qword_2D01828 + 1LL;
  if ( v28 > HIDWORD(qword_2D01828) )
  {
    v59 = v26;
    sub_2237220((char *)&unk_2D01830 - 16, &unk_2D01830, v28, 8);
    v27 = (unsigned int)qword_2D01828;
    v26 = v59;
  }
  *(_QWORD *)(qword_2D01820 + 8 * v27) = v26;
  xmmword_2D01888 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D01828) = qword_2D01828 + 1;
  qword_2D01860 = (__int64)off_2C712D0;
  dword_2D01858 = 0;
  byte_2D0186C = 0;
  qword_2D017E0 = (__int64)off_2C75710;
  dword_2D01868 = 0;
  qword_2D01870 = (__int64)off_2BEAB98;
  v29 = j__strlen("earlycse-mssa-optimization-cap");
  sub_2217250(&qword_2D017E0, "earlycse-mssa-optimization-cap", v29);
  dword_2D01858 = 500;
  byte_2D0186C = 1;
  qword_2D01808 = v25;
  dword_2D01868 = 500;
  BYTE2(qword_2D017E8) = BYTE2(qword_2D017E8) & 0x9F | 0x20;
  qword_2D01800 = (__int64)"Enable imprecision in EarlyCSE in pathological cases, in exchange for faster compile. Caps th"
                           "e MemorySSA clobbering calls.";
  sub_2218140(&qword_2D017E0);
  __cxa_atexit(sub_1FED260, &qword_2D017E0, &off_2B25620);
  v30 = j__strlen(
          "Perform extra assertion checking to verify that SimpleValue's hash function is well-behaved w.r.t. its isEqual predicate");
  byte_2D0178C = 1;
  qword_2D01730 = 0;
  v31 = v30;
  qword_2D01720 = (__int64)&off_2C758B0;
  qword_2D01728 = (unsigned int)qword_2D01728 & 0x80000000;
  qword_2D01768 = 0x100000000LL;
  qword_2D01738 = 0;
  qword_2D01740 = 0;
  qword_2D01748 = 0;
  qword_2D01750 = 0;
  qword_2D01758 = 0;
  qword_2D01760 = (__int64)&unk_2D01770;
  qword_2D01778 = (__int64)&unk_2D01790;
  qword_2D01780 = 1;
  dword_2D01788 = 0;
  v32 = sub_2210FF0(
          "Perform extra assertion checking to verify that SimpleValue's hash function is well-behaved w.r.t. its isEqual predicate");
  v33 = (unsigned int)qword_2D01768;
  v34 = (unsigned int)qword_2D01768 + 1LL;
  if ( v34 > HIDWORD(qword_2D01768) )
  {
    v60 = v32;
    sub_2237220((char *)&unk_2D01770 - 16, &unk_2D01770, v34, 8);
    v33 = (unsigned int)qword_2D01768;
    v32 = v60;
  }
  *(_QWORD *)(qword_2D01760 + 8 * v33) = v32;
  word_2D017A8 = 0;
  xmmword_2D017C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D01768) = qword_2D01768 + 1;
  qword_2D017A0 = (__int64)off_2C714E8;
  byte_2D01798 = 0;
  qword_2D01720 = (__int64)off_2C75848;
  qword_2D017B0 = (__int64)off_2BEAB08;
  v35 = j__strlen("earlycse-debug-hash");
  sub_2217250(&qword_2D01720, "earlycse-debug-hash", v35);
  word_2D017A8 = 256;
  qword_2D01748 = v31;
  byte_2D01798 = 0;
  BYTE2(qword_2D01728) = BYTE2(qword_2D01728) & 0x9F | 0x20;
  qword_2D01740 = (__int64)"Perform extra assertion checking to verify that SimpleValue's hash function is well-behaved w"
                           ".r.t. its isEqual predicate";
  sub_2218140(&qword_2D01720);
  return __cxa_atexit(sub_200E190, &qword_2D01720, &off_2B25620);
}
