unsigned __int64 __fastcall sub_45B310(int *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  int aflags; // eax
  __int64 v21; // rdi
  int source_linnum; // eax
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rsi
  void *v26; // rdi
  __int64 v27; // r13
  void *v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  void *v31; // rdx
  __int64 v32; // rsi
  void *v33; // rdi
  __int64 v34; // r13
  void *v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  void *v38; // rdx
  __int64 v40; // rsi
  void *v41; // rdi
  __int64 v42; // r13
  void *v43; // rdi
  void *v44; // rdi
  void *v45; // rdi
  void *v46; // rdx
  __int64 v47; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v49; // [rsp+18h] [rbp-40h]
  unsigned __int64 v50; // [rsp+28h] [rbp-30h]

  v5 = a1[87];
  v50 = __readfsqword(0x28u);
  switch_dbctx(*(int *)(a2 + 4 * v5 + 16));
  v7 = *((void **)a1 + 1);
  a1[88] = -1;
  *(_QWORD *)a1 = 0xFFFFFFFF00000000LL;
  if ( v7 )
  {
    *((_QWORD *)a1 + 2) = 0;
    qfree(v7);
    *((_QWORD *)a1 + 1) = 0;
    *((_QWORD *)a1 + 3) = 0;
  }
  v8 = *((void **)a1 + 4);
  if ( v8 )
  {
    *((_QWORD *)a1 + 5) = 0;
    qfree(v8);
    *((_QWORD *)a1 + 4) = 0;
    *((_QWORD *)a1 + 6) = 0;
  }
  v9 = *((void **)a1 + 7);
  if ( v9 )
  {
    *((_QWORD *)a1 + 8) = 0;
    qfree(v9);
    *((_QWORD *)a1 + 7) = 0;
    *((_QWORD *)a1 + 9) = 0;
  }
  v10 = *((void **)a1 + 10);
  if ( v10 )
  {
    *((_QWORD *)a1 + 11) = 0;
    qfree(v10);
    *((_QWORD *)a1 + 10) = 0;
    *((_QWORD *)a1 + 12) = 0;
  }
  v11 = *((void **)a1 + 13);
  if ( v11 )
  {
    *((_QWORD *)a1 + 14) = 0;
    qfree(v11);
    *((_QWORD *)a1 + 13) = 0;
    *((_QWORD *)a1 + 15) = 0;
  }
  v12 = *((void **)a1 + 17);
  a1[32] = -1;
  if ( v12 )
  {
    *((_QWORD *)a1 + 18) = 0;
    qfree(v12);
    *((_QWORD *)a1 + 17) = 0;
    *((_QWORD *)a1 + 19) = 0;
  }
  v13 = *((void **)a1 + 20);
  if ( v13 )
  {
    *((_QWORD *)a1 + 21) = 0;
    qfree(v13);
    *((_QWORD *)a1 + 20) = 0;
    *((_QWORD *)a1 + 22) = 0;
  }
  v14 = *((void **)a1 + 23);
  if ( v14 )
  {
    *((_QWORD *)a1 + 24) = 0;
    qfree(v14);
    *((_QWORD *)a1 + 23) = 0;
    *((_QWORD *)a1 + 25) = 0;
  }
  v15 = *((void **)a1 + 26);
  if ( v15 )
  {
    *((_QWORD *)a1 + 27) = 0;
    qfree(v15);
    *((_QWORD *)a1 + 26) = 0;
    *((_QWORD *)a1 + 28) = 0;
  }
  v16 = *((void **)a1 + 30);
  a1[58] = -1;
  if ( v16 )
  {
    *((_QWORD *)a1 + 31) = 0;
    qfree(v16);
    *((_QWORD *)a1 + 30) = 0;
    *((_QWORD *)a1 + 32) = 0;
  }
  v17 = *((void **)a1 + 33);
  if ( v17 )
  {
    *((_QWORD *)a1 + 34) = 0;
    qfree(v17);
    *((_QWORD *)a1 + 33) = 0;
    *((_QWORD *)a1 + 35) = 0;
  }
  v18 = *((void **)a1 + 36);
  if ( v18 )
  {
    *((_QWORD *)a1 + 37) = 0;
    qfree(v18);
    *((_QWORD *)a1 + 36) = 0;
    *((_QWORD *)a1 + 38) = 0;
  }
  v19 = *((void **)a1 + 39);
  if ( v19 )
  {
    *((_QWORD *)a1 + 40) = 0;
    qfree(v19);
    *((_QWORD *)a1 + 39) = 0;
    *((_QWORD *)a1 + 41) = 0;
  }
  a1[84] = -1;
  a1[86] = -1;
  a1[88] = a3;
  aflags = get_aflags(a3);
  v21 = (unsigned int)a1[88];
  *a1 = aflags;
  source_linnum = get_source_linnum(v21);
  v23 = (unsigned int)a1[88];
  a1[1] = source_linnum;
  get_manual_insn(a1 + 2, v23);
  v24 = *a1;
  if ( (*a1 & 0x2000800) != 0 )
  {
    v25 = (unsigned int)a1[88];
    v47 = 0;
    get_tinfo(&v47, v25);
    v26 = *((void **)a1 + 4);
    v27 = a1[87];
    if ( v26 )
    {
      *((_QWORD *)a1 + 5) = 0;
      qfree(v26);
      *((_QWORD *)a1 + 4) = 0;
      *((_QWORD *)a1 + 6) = 0;
    }
    v28 = *((void **)a1 + 7);
    if ( v28 )
    {
      *((_QWORD *)a1 + 8) = 0;
      qfree(v28);
      *((_QWORD *)a1 + 7) = 0;
      *((_QWORD *)a1 + 9) = 0;
    }
    v29 = *((void **)a1 + 10);
    if ( v29 )
    {
      *((_QWORD *)a1 + 11) = 0;
      qfree(v29);
      *((_QWORD *)a1 + 10) = 0;
      *((_QWORD *)a1 + 12) = 0;
    }
    v30 = *((void **)a1 + 13);
    if ( v30 )
    {
      *((_QWORD *)a1 + 14) = 0;
      qfree(v30);
      *((_QWORD *)a1 + 13) = 0;
      *((_QWORD *)a1 + 15) = 0;
    }
    a1[32] = v27;
    switch_dbctx(*(int *)(a2 + 4 * v27 + 16));
    ptr = nullptr;
    v49 = 0;
    if ( (_BYTE)v47 )
    {
      if ( !(unsigned __int8)serialize_tinfo(&ptr, a1 + 20, a1 + 26, &v47, 272) )
        goto LABEL_39;
      v31 = ptr;
    }
    else
    {
      v31 = nullptr;
    }
    sub_480C80(a1 + 8, a2, v31);
LABEL_39:
    if ( ptr )
    {
      *(_QWORD *)&v49 = 0;
      qfree(ptr);
    }
    clear_tinfo_t(&v47);
    v24 = *a1;
  }
  if ( (v24 & 0x1000) == 0 )
    goto LABEL_43;
  v40 = (unsigned int)a1[88];
  v47 = 0;
  get_op_tinfo(&v47, v40, 0);
  v41 = *((void **)a1 + 17);
  v42 = a1[87];
  if ( v41 )
  {
    *((_QWORD *)a1 + 18) = 0;
    qfree(v41);
    *((_QWORD *)a1 + 17) = 0;
    *((_QWORD *)a1 + 19) = 0;
  }
  v43 = *((void **)a1 + 20);
  if ( v43 )
  {
    *((_QWORD *)a1 + 21) = 0;
    qfree(v43);
    *((_QWORD *)a1 + 20) = 0;
    *((_QWORD *)a1 + 22) = 0;
  }
  v44 = *((void **)a1 + 23);
  if ( v44 )
  {
    *((_QWORD *)a1 + 24) = 0;
    qfree(v44);
    *((_QWORD *)a1 + 23) = 0;
    *((_QWORD *)a1 + 25) = 0;
  }
  v45 = *((void **)a1 + 26);
  if ( v45 )
  {
    *((_QWORD *)a1 + 27) = 0;
    qfree(v45);
    *((_QWORD *)a1 + 26) = 0;
    *((_QWORD *)a1 + 28) = 0;
  }
  a1[58] = v42;
  switch_dbctx(*(int *)(a2 + 4 * v42 + 16));
  ptr = nullptr;
  v49 = 0;
  if ( !(_BYTE)v47 )
  {
    v46 = nullptr;
    goto LABEL_74;
  }
  if ( (unsigned __int8)serialize_tinfo(&ptr, a1 + 46, a1 + 52, &v47, 272) )
  {
    v46 = ptr;
LABEL_74:
    sub_480C80(a1 + 34, a2, v46);
  }
  if ( ptr )
  {
    *(_QWORD *)&v49 = 0;
    qfree(ptr);
  }
  clear_tinfo_t(&v47);
  v24 = *a1;
LABEL_43:
  if ( (v24 & 0x2000) == 0 )
    goto LABEL_58;
  v32 = (unsigned int)a1[88];
  v47 = 0;
  get_op_tinfo(&v47, v32, 1);
  v33 = *((void **)a1 + 30);
  v34 = a1[87];
  if ( v33 )
  {
    *((_QWORD *)a1 + 31) = 0;
    qfree(v33);
    *((_QWORD *)a1 + 30) = 0;
    *((_QWORD *)a1 + 32) = 0;
  }
  v35 = *((void **)a1 + 33);
  if ( v35 )
  {
    *((_QWORD *)a1 + 34) = 0;
    qfree(v35);
    *((_QWORD *)a1 + 33) = 0;
    *((_QWORD *)a1 + 35) = 0;
  }
  v36 = *((void **)a1 + 36);
  if ( v36 )
  {
    *((_QWORD *)a1 + 37) = 0;
    qfree(v36);
    *((_QWORD *)a1 + 36) = 0;
    *((_QWORD *)a1 + 38) = 0;
  }
  v37 = *((void **)a1 + 39);
  if ( v37 )
  {
    *((_QWORD *)a1 + 40) = 0;
    qfree(v37);
    *((_QWORD *)a1 + 39) = 0;
    *((_QWORD *)a1 + 41) = 0;
  }
  a1[84] = v34;
  switch_dbctx(*(int *)(a2 + 4 * v34 + 16));
  ptr = nullptr;
  v49 = 0;
  if ( (_BYTE)v47 )
  {
    if ( !(unsigned __int8)serialize_tinfo(&ptr, a1 + 72, a1 + 78, &v47, 272) )
      goto LABEL_55;
    v38 = ptr;
  }
  else
  {
    v38 = nullptr;
  }
  sub_480C80(a1 + 60, a2, v38);
LABEL_55:
  if ( ptr )
  {
    *(_QWORD *)&v49 = 0;
    qfree(ptr);
  }
  clear_tinfo_t(&v47);
LABEL_58:
  a1[86] = get_item_color((unsigned int)a1[88]);
  return v50 - __readfsqword(0x28u);
}

