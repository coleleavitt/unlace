int sub_339F40()
{
  size_t v0; // r12
  size_t v1; // rbx
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rbx
  _BYTE *v11; // r13
  _BYTE *v12; // rdi
  __int64 v13; // rax
  size_t v14; // r14
  size_t v15; // rax
  _BYTE *v16; // rdi
  __int64 v17; // rax
  size_t v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  size_t v23; // rax
  size_t v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  size_t v29; // rax
  __int64 v31; // rax
  char *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  bool v37; // di
  _QWORD *v38; // rdi
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // rbx
  _DWORD *v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // rax
  size_t v45; // rdx
  size_t v46; // r15
  __int64 v47; // rax
  _BYTE *v48; // rdi
  void *v49; // rdi
  int v50; // eax
  __int64 v51; // [rsp+0h] [rbp-118h]
  __int64 v52; // [rsp+0h] [rbp-118h]
  __int64 v53; // [rsp+0h] [rbp-118h]
  __int64 v54; // [rsp+0h] [rbp-118h]
  __int64 v55; // [rsp+0h] [rbp-118h]
  __int64 v56; // [rsp+0h] [rbp-118h]
  __int64 v57; // [rsp+0h] [rbp-118h]
  void *v58; // [rsp+8h] [rbp-110h]
  int v59; // [rsp+14h] [rbp-104h] BYREF
  __int64 v60; // [rsp+18h] [rbp-100h] BYREF
  void *v61; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v62; // [rsp+28h] [rbp-F0h]
  _BYTE v63[16]; // [rsp+30h] [rbp-E8h] BYREF
  void *src; // [rsp+40h] [rbp-D8h] BYREF
  size_t n; // [rsp+48h] [rbp-D0h]
  _BYTE v66[16]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v67; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+68h] [rbp-B0h]
  char v69; // [rsp+70h] [rbp-A8h]
  void *v70; // [rsp+78h] [rbp-A0h]
  size_t v71; // [rsp+80h] [rbp-98h]
  _QWORD v72[2]; // [rsp+88h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v74[112]; // [rsp+A8h] [rbp-70h] BYREF

  v0 = j__strlen("Controls which conditions are eliminated");
  v1 = j__strlen("conds-eliminated");
  v2 = sub_221BAF0();
  src = v66;
  v3 = v2 + 32;
  sub_21E89F0(&src, "Controls which conditions are eliminated", &aControlsWhichC[v0]);
  v4 = v2 + 32;
  v61 = v63;
  sub_21E89F0(&v61, "conds-eliminated", &aCondsEliminate[v1]);
  v5 = *(_QWORD *)(v2 + 40);
  if ( !v5 )
    goto LABEL_36;
  do
  {
    while ( (int)sub_9C4B50(v5 + 32, &v61) >= 0 )
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
  if ( v3 == v4 || (int)sub_9C4B50(&v61, v4 + 32) < 0 )
  {
LABEL_36:
    v51 = v4;
    v31 = operator new(0x48u);
    v32 = (char *)v61;
    v33 = v62;
    v34 = v31 + 32;
    v4 = v31;
    *(_QWORD *)(v31 + 32) = v31 + 48;
    v58 = (void *)(v31 + 48);
    sub_21E8930(v31 + 32, v32, &v32[v33]);
    *(_DWORD *)(v4 + 64) = 0;
    v35 = sub_200EA40(v2 + 24, v51, v34);
    if ( v36 )
    {
      v37 = v35 != 0 || v3 == v36;
      if ( !v37 )
      {
        v57 = v36;
        v50 = sub_9C4B50(v34, v36 + 32);
        v36 = v57;
        v37 = v50 < 0;
      }
      std::_Rb_tree_insert_and_rebalance(v37, v4, v36, v2 + 32);
      ++*(_QWORD *)(v2 + 64);
    }
    else
    {
      v49 = *(void **)(v4 + 32);
      if ( v58 != v49 )
      {
        v53 = v35;
        operator delete(v49);
        v35 = v53;
      }
      v54 = v35;
      operator delete((void *)v4);
      v4 = v54;
    }
  }
  v9 = *(_DWORD *)(v4 + 64);
  if ( !v9 )
  {
    v38 = *(_QWORD **)(v2 + 80);
    *(_DWORD *)(v4 + 64) = (((__int64)v38 - *(_QWORD *)(v2 + 72)) >> 5) + 1;
    if ( v38 == *(_QWORD **)(v2 + 88) )
    {
      sub_10BCB90(v2 + 72, v38, &v61, v6, v7, v8);
    }
    else
    {
      *v38 = v38 + 2;
      sub_21E8930(v38, v61, (char *)v61 + v62);
      *(_QWORD *)(v2 + 80) += 32LL;
    }
    v9 = *(_DWORD *)(v4 + 64);
  }
  v59 = v9;
  if ( (unsigned __int8)sub_21E8AB0(v2, &v59, &v60) )
  {
    v10 = v60 + 8;
  }
  else
  {
    v67 = v60;
    v39 = *(unsigned int *)(v2 + 16);
    v40 = *(_DWORD *)(v2 + 8) + 1;
    if ( 4 * v40 >= (unsigned int)(3 * v39) )
    {
      sub_21E8B50(v2, (unsigned int)(2 * v39));
      sub_21E8AB0(v2, &v59, &v67);
    }
    else if ( (int)v39 - *(_DWORD *)(v2 + 12) - v40 <= (unsigned int)v39 >> 3 )
    {
      sub_21E8B50(v2, v39);
      sub_21E8AB0(v2, &v59, &v67);
    }
    v41 = v67;
    ++*(_DWORD *)(v2 + 8);
    if ( *(_DWORD *)v41 != -1 )
      --*(_DWORD *)(v2 + 12);
    v42 = (_DWORD *)(v41 + 8);
    v43 = 30;
    *(_DWORD *)v41 = v59;
    while ( v43 )
    {
      *v42++ = 0;
      --v43;
    }
    *(_QWORD *)(v41 + 32) = v41 + 48;
    v44 = v41 + 80;
    v10 = v41 + 8;
    *(_QWORD *)(v10 + 56) = v44;
    *(_QWORD *)(v10 + 64) = 0x300000000LL;
  }
  v68 = 0;
  v69 = 0;
  v11 = (_BYTE *)(v10 + 40);
  v70 = v72;
  ptr[0] = v74;
  v67 = 0;
  v71 = 0;
  LOBYTE(v72[0]) = 0;
  ptr[1] = (void *)0x300000000LL;
  v12 = *(_BYTE **)(v10 + 24);
  *(_QWORD *)v10 = 0;
  *(_QWORD *)(v10 + 8) = v68;
  *(_BYTE *)(v10 + 16) = v69;
  if ( v70 == v72 )
  {
    v45 = v71;
    if ( v71 )
    {
      if ( v71 == 1 )
        *v12 = v72[0];
      else
        memcpy(v12, v70, v71);
      v12 = *(_BYTE **)(v10 + 24);
      v45 = v71;
    }
    *(_QWORD *)(v10 + 32) = v45;
    v12[v45] = 0;
  }
  else
  {
    if ( v12 == v11 )
    {
      *(_QWORD *)(v10 + 24) = v70;
      *(_QWORD *)(v10 + 32) = v71;
      *(_QWORD *)(v10 + 40) = v72[0];
    }
    else
    {
      *(_QWORD *)(v10 + 24) = v70;
      v13 = *(_QWORD *)(v10 + 40);
      *(_QWORD *)(v10 + 32) = v71;
      *(_QWORD *)(v10 + 40) = v72[0];
      if ( v12 )
      {
        v70 = v12;
        v72[0] = v13;
        goto LABEL_15;
      }
    }
    v70 = v72;
  }
LABEL_15:
  v71 = 0;
  *(_BYTE *)v70 = 0;
  sub_200E7A0(v10 + 56, ptr);
  if ( ptr[0] != v74 )
    free(ptr[0]);
  if ( v70 != v72 )
    operator delete(v70);
  if ( (void **)(v10 + 24) != &src )
  {
    v14 = n;
    if ( *(_BYTE **)(v10 + 24) == v11 )
      v15 = 15;
    else
      v15 = *(_QWORD *)(v10 + 40);
    if ( n > v15 )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v46 = 2 * v15;
      if ( n < 2 * v15 )
      {
        if ( (v15 & 0x4000000000000000LL) != 0 )
          v46 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v46 = n;
      }
      v47 = operator new(v46 + 1);
      v48 = *(_BYTE **)(v10 + 24);
      if ( v48 != v11 )
      {
        v52 = v47;
        operator delete(v48);
        v47 = v52;
      }
      *(_QWORD *)(v10 + 24) = v47;
      *(_QWORD *)(v10 + 40) = v46;
    }
    if ( v14 )
    {
      v16 = *(_BYTE **)(v10 + 24);
      if ( v14 == 1 )
        *v16 = *(_BYTE *)src;
      else
        memcpy(v16, src, v14);
    }
    v17 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)(v10 + 32) = v14;
    *(_BYTE *)(v17 + v14) = 0;
  }
  if ( v61 != v63 )
    operator delete(v61);
  if ( src != v66 )
    operator delete(src);
  v18 = j__strlen("Maximum number of rows to keep in constraint system");
  qword_2D009B0 = 0;
  v19 = v18;
  qword_2D009B8 = 0;
  qword_2D009C0 = 0;
  qword_2D009A0 = (__int64)&off_2C758B0;
  qword_2D009A8 = (unsigned int)qword_2D009A8 & 0x80000000;
  qword_2D009E8 = 0x100000000LL;
  qword_2D009C8 = 0;
  qword_2D009D0 = 0;
  qword_2D009D8 = 0;
  qword_2D009E0 = (__int64)&unk_2D009F0;
  qword_2D009F8 = (__int64)&unk_2D00A10;
  qword_2D00A00 = 1;
  dword_2D00A08 = 0;
  byte_2D00A0C = 1;
  v20 = sub_2210FF0("Maximum number of rows to keep in constraint system");
  v21 = (unsigned int)qword_2D009E8;
  v22 = (unsigned int)qword_2D009E8 + 1LL;
  if ( v22 > HIDWORD(qword_2D009E8) )
  {
    v55 = v20;
    sub_2237220((char *)&unk_2D009F0 - 16, &unk_2D009F0, v22, 8);
    v21 = (unsigned int)qword_2D009E8;
    v20 = v55;
  }
  *(_QWORD *)(qword_2D009E0 + 8 * v21) = v20;
  xmmword_2D00A48 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D009E8) = qword_2D009E8 + 1;
  qword_2D00A20 = (__int64)off_2C712D0;
  dword_2D00A18 = 0;
  byte_2D00A2C = 0;
  qword_2D009A0 = (__int64)off_2C75710;
  dword_2D00A28 = 0;
  qword_2D00A30 = (__int64)off_2BEAB98;
  v23 = j__strlen("constraint-elimination-max-rows");
  sub_2217250(&qword_2D009A0, "constraint-elimination-max-rows", v23);
  dword_2D00A18 = 500;
  byte_2D00A2C = 1;
  qword_2D009C8 = v19;
  dword_2D00A28 = 500;
  BYTE2(qword_2D009A8) = BYTE2(qword_2D009A8) & 0x9F | 0x20;
  qword_2D009C0 = (__int64)"Maximum number of rows to keep in constraint system";
  sub_2218140(&qword_2D009A0);
  __cxa_atexit(sub_1FED260, &qword_2D009A0, &off_2B25620);
  v24 = j__strlen("Dump IR to reproduce successful transformations.");
  byte_2D0094C = 1;
  qword_2D008F0 = 0;
  v25 = v24;
  qword_2D008E0 = (__int64)&off_2C758B0;
  qword_2D008E8 = (unsigned int)qword_2D008E8 & 0x80000000;
  qword_2D00928 = 0x100000000LL;
  qword_2D008F8 = 0;
  qword_2D00900 = 0;
  qword_2D00908 = 0;
  qword_2D00910 = 0;
  qword_2D00918 = 0;
  qword_2D00920 = (__int64)&unk_2D00930;
  qword_2D00938 = (__int64)&unk_2D00950;
  qword_2D00940 = 1;
  dword_2D00948 = 0;
  v26 = sub_2210FF0("Dump IR to reproduce successful transformations.");
  v27 = (unsigned int)qword_2D00928;
  v28 = (unsigned int)qword_2D00928 + 1LL;
  if ( v28 > HIDWORD(qword_2D00928) )
  {
    v56 = v26;
    sub_2237220((char *)&unk_2D00930 - 16, &unk_2D00930, v28, 8);
    v27 = (unsigned int)qword_2D00928;
    v26 = v56;
  }
  *(_QWORD *)(qword_2D00920 + 8 * v27) = v26;
  word_2D00968 = 0;
  xmmword_2D00988 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D00928) = qword_2D00928 + 1;
  qword_2D00960 = (__int64)off_2C714E8;
  byte_2D00958 = 0;
  qword_2D008E0 = (__int64)off_2C75848;
  qword_2D00970 = (__int64)off_2BEAB08;
  v29 = j__strlen("constraint-elimination-dump-reproducers");
  sub_2217250(&qword_2D008E0, "constraint-elimination-dump-reproducers", v29);
  word_2D00968 = 256;
  qword_2D00908 = v25;
  byte_2D00958 = 0;
  BYTE2(qword_2D008E8) = BYTE2(qword_2D008E8) & 0x9F | 0x20;
  qword_2D00900 = (__int64)"Dump IR to reproduce successful transformations.";
  sub_2218140(&qword_2D008E0);
  return __cxa_atexit(sub_200E190, &qword_2D008E0, &off_2B25620);
}
