int sub_336B80()
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
  _QWORD *v37; // rdi
  __int64 v38; // rsi
  int v39; // eax
  __int64 v40; // rbx
  _DWORD *v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rax
  size_t v44; // rdx
  size_t v45; // r15
  __int64 v46; // rax
  _BYTE *v47; // rdi
  void *v48; // rdi
  __int64 v49; // [rsp+0h] [rbp-118h]
  __int64 v50; // [rsp+0h] [rbp-118h]
  __int64 v51; // [rsp+0h] [rbp-118h]
  __int64 v52; // [rsp+0h] [rbp-118h]
  __int64 v53; // [rsp+0h] [rbp-118h]
  __int64 v54; // [rsp+0h] [rbp-118h]
  void *v55; // [rsp+8h] [rbp-110h]
  int v56; // [rsp+14h] [rbp-104h] BYREF
  __int64 v57; // [rsp+18h] [rbp-100h] BYREF
  void *v58; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v59; // [rsp+28h] [rbp-F0h]
  _BYTE v60[16]; // [rsp+30h] [rbp-E8h] BYREF
  void *src; // [rsp+40h] [rbp-D8h] BYREF
  size_t n; // [rsp+48h] [rbp-D0h]
  _BYTE v63[16]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+68h] [rbp-B0h]
  char v66; // [rsp+70h] [rbp-A8h]
  void *v67; // [rsp+78h] [rbp-A0h]
  size_t v68; // [rsp+80h] [rbp-98h]
  _QWORD v69[2]; // [rsp+88h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v71[112]; // [rsp+A8h] [rbp-70h] BYREF

  v0 = j__strlen("Controls which conditions are eliminated");
  v1 = j__strlen("conds-eliminated");
  v2 = sub_21F7DB0();
  src = v63;
  v3 = v2 + 32;
  sub_21C4CB0(&src, "Controls which conditions are eliminated", &aControlsWhichC[v0]);
  v4 = v2 + 32;
  v58 = v60;
  sub_21C4CB0(&v58, "conds-eliminated", &aCondsEliminate[v1]);
  v5 = *(_QWORD *)(v2 + 40);
  if ( !v5 )
    goto LABEL_36;
  do
  {
    while ( (int)sub_9A0E10(v5 + 32, &v58) >= 0 )
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
  if ( v3 == v4 || (int)sub_9A0E10(&v58, v4 + 32) < 0 )
  {
LABEL_36:
    v49 = v4;
    v31 = operator new(0x48u);
    v32 = (char *)v58;
    v33 = v59;
    v34 = v31 + 32;
    v4 = v31;
    *(_QWORD *)(v31 + 32) = v31 + 48;
    v55 = (void *)(v31 + 48);
    sub_21C4BF0(v31 + 32, v32, &v32[v33]);
    *(_DWORD *)(v4 + 64) = 0;
    v35 = sub_1FEAD00(v2 + 24, v49, v34);
    if ( v36 )
    {
      if ( v35 == 0 && v3 != v36 )
        sub_9A0E10(v34, v36 + 32);
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(v2 + 64);
    }
    else
    {
      v48 = *(void **)(v4 + 32);
      if ( v55 != v48 )
      {
        v51 = v35;
        operator delete(v48);
        v35 = v51;
      }
      v52 = v35;
      operator delete((void *)v4);
      v4 = v52;
    }
  }
  v9 = *(_DWORD *)(v4 + 64);
  if ( !v9 )
  {
    v37 = *(_QWORD **)(v2 + 80);
    *(_DWORD *)(v4 + 64) = (((__int64)v37 - *(_QWORD *)(v2 + 72)) >> 5) + 1;
    if ( v37 == *(_QWORD **)(v2 + 88) )
    {
      sub_1098E50(v2 + 72, v37, &v58, v6, v7, v8);
    }
    else
    {
      *v37 = v37 + 2;
      sub_21C4BF0(v37, v58, (char *)v58 + v59);
      *(_QWORD *)(v2 + 80) += 32LL;
    }
    v9 = *(_DWORD *)(v4 + 64);
  }
  v56 = v9;
  if ( (unsigned __int8)sub_21C4D70(v2, &v56, &v57) )
  {
    v10 = v57 + 8;
  }
  else
  {
    v64 = v57;
    v38 = *(unsigned int *)(v2 + 16);
    v39 = *(_DWORD *)(v2 + 8) + 1;
    if ( 4 * v39 >= (unsigned int)(3 * v38) )
    {
      sub_21C4E10(v2, (unsigned int)(2 * v38));
      sub_21C4D70(v2, &v56, &v64);
    }
    else if ( (int)v38 - *(_DWORD *)(v2 + 12) - v39 <= (unsigned int)v38 >> 3 )
    {
      sub_21C4E10(v2, v38);
      sub_21C4D70(v2, &v56, &v64);
    }
    v40 = v64;
    ++*(_DWORD *)(v2 + 8);
    if ( *(_DWORD *)v40 != -1 )
      --*(_DWORD *)(v2 + 12);
    v41 = (_DWORD *)(v40 + 8);
    v42 = 30;
    *(_DWORD *)v40 = v56;
    while ( v42 )
    {
      *v41++ = 0;
      --v42;
    }
    *(_QWORD *)(v40 + 32) = v40 + 48;
    v43 = v40 + 80;
    v10 = v40 + 8;
    *(_QWORD *)(v10 + 56) = v43;
    *(_QWORD *)(v10 + 64) = 0x300000000LL;
  }
  v65 = 0;
  v66 = 0;
  v11 = (_BYTE *)(v10 + 40);
  v67 = v69;
  ptr[0] = v71;
  v64 = 0;
  v68 = 0;
  LOBYTE(v69[0]) = 0;
  ptr[1] = (void *)0x300000000LL;
  v12 = *(_BYTE **)(v10 + 24);
  *(_QWORD *)v10 = 0;
  *(_QWORD *)(v10 + 8) = v65;
  *(_BYTE *)(v10 + 16) = v66;
  if ( v67 == v69 )
  {
    v44 = v68;
    if ( v68 )
    {
      if ( v68 == 1 )
        *v12 = v69[0];
      else
        memcpy(v12, v67, v68);
      v12 = *(_BYTE **)(v10 + 24);
      v44 = v68;
    }
    *(_QWORD *)(v10 + 32) = v44;
    v12[v44] = 0;
  }
  else
  {
    if ( v12 == v11 )
    {
      *(_QWORD *)(v10 + 24) = v67;
      *(_QWORD *)(v10 + 32) = v68;
      *(_QWORD *)(v10 + 40) = v69[0];
    }
    else
    {
      *(_QWORD *)(v10 + 24) = v67;
      v13 = *(_QWORD *)(v10 + 40);
      *(_QWORD *)(v10 + 32) = v68;
      *(_QWORD *)(v10 + 40) = v69[0];
      if ( v12 )
      {
        v67 = v12;
        v69[0] = v13;
        goto LABEL_15;
      }
    }
    v67 = v69;
  }
LABEL_15:
  v68 = 0;
  *(_BYTE *)v67 = 0;
  sub_1FEAA60(v10 + 56, ptr);
  if ( ptr[0] != v71 )
    free(ptr[0]);
  if ( v67 != v69 )
    operator delete(v67);
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
      v45 = 2 * v15;
      if ( n < 2 * v15 )
      {
        if ( (v15 & 0x4000000000000000LL) != 0 )
          v45 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v45 = n;
      }
      v46 = operator new(v45 + 1);
      v47 = *(_BYTE **)(v10 + 24);
      if ( v47 != v11 )
      {
        v50 = v46;
        operator delete(v47);
        v46 = v50;
      }
      *(_QWORD *)(v10 + 24) = v46;
      *(_QWORD *)(v10 + 40) = v45;
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
  if ( v58 != v60 )
    operator delete(v58);
  if ( src != v63 )
    operator delete(src);
  v18 = j__strlen("Maximum number of rows to keep in constraint system");
  qword_2CD6A90 = 0;
  v19 = v18;
  qword_2CD6A98 = 0;
  qword_2CD6AA0 = 0;
  qword_2CD6A80 = (__int64)&off_2C4B8B0;
  qword_2CD6A88 = (unsigned int)qword_2CD6A88 & 0x80000000;
  qword_2CD6AC8 = 0x100000000LL;
  qword_2CD6AA8 = 0;
  qword_2CD6AB0 = 0;
  qword_2CD6AB8 = 0;
  qword_2CD6AC0 = (__int64)&unk_2CD6AD0;
  qword_2CD6AD8 = (__int64)&unk_2CD6AF0;
  qword_2CD6AE0 = 1;
  dword_2CD6AE8 = 0;
  byte_2CD6AEC = 1;
  v20 = sub_21ED2B0("Maximum number of rows to keep in constraint system");
  v21 = (unsigned int)qword_2CD6AC8;
  v22 = (unsigned int)qword_2CD6AC8 + 1LL;
  if ( v22 > HIDWORD(qword_2CD6AC8) )
  {
    v53 = v20;
    sub_22134E0((char *)&unk_2CD6AD0 - 16, &unk_2CD6AD0, v22, 8);
    v21 = (unsigned int)qword_2CD6AC8;
    v20 = v53;
  }
  *(_QWORD *)(qword_2CD6AC0 + 8 * v21) = v20;
  xmmword_2CD6B28 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CD6AC8) = qword_2CD6AC8 + 1;
  qword_2CD6B00 = (__int64)off_2C472D0;
  dword_2CD6AF8 = 0;
  byte_2CD6B0C = 0;
  qword_2CD6A80 = (__int64)off_2C4B710;
  dword_2CD6B08 = 0;
  qword_2CD6B10 = (__int64)off_2BC0BF8;
  v23 = j__strlen("constraint-elimination-max-rows");
  sub_21F3510(&qword_2CD6A80, "constraint-elimination-max-rows", v23);
  dword_2CD6AF8 = 500;
  byte_2CD6B0C = 1;
  qword_2CD6AA8 = v19;
  dword_2CD6B08 = 500;
  BYTE2(qword_2CD6A88) = BYTE2(qword_2CD6A88) & 0x9F | 0x20;
  qword_2CD6AA0 = (__int64)"Maximum number of rows to keep in constraint system";
  sub_21F4400(&qword_2CD6A80);
  __cxa_atexit(sub_1FC9520, &qword_2CD6A80, &off_2AFC540);
  v24 = j__strlen("Dump IR to reproduce successful transformations.");
  byte_2CD6A2C = 1;
  qword_2CD69D0 = 0;
  v25 = v24;
  qword_2CD69C0 = (__int64)&off_2C4B8B0;
  qword_2CD69C8 = (unsigned int)qword_2CD69C8 & 0x80000000;
  qword_2CD6A08 = 0x100000000LL;
  qword_2CD69D8 = 0;
  qword_2CD69E0 = 0;
  qword_2CD69E8 = 0;
  qword_2CD69F0 = 0;
  qword_2CD69F8 = 0;
  qword_2CD6A00 = (__int64)&unk_2CD6A10;
  qword_2CD6A18 = (__int64)&unk_2CD6A30;
  qword_2CD6A20 = 1;
  dword_2CD6A28 = 0;
  v26 = sub_21ED2B0("Dump IR to reproduce successful transformations.");
  v27 = (unsigned int)qword_2CD6A08;
  v28 = (unsigned int)qword_2CD6A08 + 1LL;
  if ( v28 > HIDWORD(qword_2CD6A08) )
  {
    v54 = v26;
    sub_22134E0((char *)&unk_2CD6A10 - 16, &unk_2CD6A10, v28, 8);
    v27 = (unsigned int)qword_2CD6A08;
    v26 = v54;
  }
  *(_QWORD *)(qword_2CD6A00 + 8 * v27) = v26;
  word_2CD6A48 = 0;
  xmmword_2CD6A68 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD6A08) = qword_2CD6A08 + 1;
  qword_2CD6A40 = (__int64)off_2C474E8;
  byte_2CD6A38 = 0;
  qword_2CD69C0 = (__int64)off_2C4B848;
  qword_2CD6A50 = (__int64)off_2BC0B68;
  v29 = j__strlen("constraint-elimination-dump-reproducers");
  sub_21F3510(&qword_2CD69C0, "constraint-elimination-dump-reproducers", v29);
  word_2CD6A48 = 256;
  qword_2CD69E8 = v25;
  byte_2CD6A38 = 0;
  BYTE2(qword_2CD69C8) = BYTE2(qword_2CD69C8) & 0x9F | 0x20;
  qword_2CD69E0 = (__int64)"Dump IR to reproduce successful transformations.";
  sub_21F4400(&qword_2CD69C0);
  return __cxa_atexit(sub_1FEA450, &qword_2CD69C0, &off_2AFC540);
}

