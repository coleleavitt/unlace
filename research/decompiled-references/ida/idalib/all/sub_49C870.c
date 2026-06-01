__int64 __fastcall sub_49C870(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbp
  __int64 func; // rax
  __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rax
  const char *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // rsi
  char *v15; // rdi
  char *v16; // rsi
  char *v17; // rdi
  size_t v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  const char *v22; // rdx
  void *v23; // rax
  const void *v24; // rsi
  __int64 v26; // [rsp+18h] [rbp-140h] BYREF
  void *v27; // [rsp+20h] [rbp-138h] BYREF
  __int128 v28; // [rsp+28h] [rbp-130h]
  void *ptr; // [rsp+40h] [rbp-118h] BYREF
  __int128 v30; // [rsp+48h] [rbp-110h]
  char *s1; // [rsp+58h] [rbp-100h]
  __int128 v32; // [rsp+60h] [rbp-F8h]
  char *v33; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v34; // [rsp+78h] [rbp-E0h]
  char *v35; // [rsp+88h] [rbp-D0h] BYREF
  __int128 v36; // [rsp+90h] [rbp-C8h]
  int v37; // [rsp+A0h] [rbp-B8h]
  void *v38; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+B8h] [rbp-A0h]
  char *s2; // [rsp+C8h] [rbp-90h]
  __int128 v41; // [rsp+D0h] [rbp-88h]
  char *v42; // [rsp+E0h] [rbp-78h] BYREF
  __int128 v43; // [rsp+E8h] [rbp-70h]
  char *v44; // [rsp+F8h] [rbp-60h] BYREF
  __int128 v45; // [rsp+100h] [rbp-58h]
  int v46; // [rsp+110h] [rbp-48h]
  unsigned __int64 v47; // [rsp+118h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v6 = *(_QWORD *)a2;
  switch_dbctx(*(int *)(*(_QWORD *)a2 + 16LL));
  func = get_func(a3);
  v8 = func;
  if ( !func )
    return v8;
  if ( *(_QWORD *)(func + 24) == -1 )
    return 0;
  s1 = nullptr;
  v33 = nullptr;
  v35 = nullptr;
  v37 = -1;
  s2 = nullptr;
  v42 = nullptr;
  v44 = nullptr;
  v46 = -1;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v9 = *(int *)(v6 + 16);
  ptr = nullptr;
  v38 = nullptr;
  switch_dbctx(v9);
  v26 = 0;
  v10 = get_func(a3);
  get_func_frame(&v26, v10);
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    qfree(ptr);
    ptr = nullptr;
    *((_QWORD *)&v30 + 1) = 0;
  }
  if ( s1 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(s1);
    s1 = nullptr;
    *((_QWORD *)&v32 + 1) = 0;
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
    v33 = nullptr;
    *((_QWORD *)&v34 + 1) = 0;
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
    v35 = nullptr;
    *((_QWORD *)&v36 + 1) = 0;
  }
  v37 = 0;
  switch_dbctx(*(int *)(v6 + 16));
  v27 = nullptr;
  v28 = 0;
  if ( !(_BYTE)v26 )
  {
    v11 = nullptr;
LABEL_13:
    sub_495970((__int64)&ptr, v6, v11);
    goto LABEL_14;
  }
  if ( (unsigned __int8)serialize_tinfo(&v27, &v33, &v35, &v26, 272) )
  {
    v11 = (const char *)v27;
    goto LABEL_13;
  }
LABEL_14:
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  clear_tinfo_t(&v26);
  switch_dbctx(*(int *)(v6 + 20));
  v26 = 0;
  v12 = get_func(a3);
  get_func_frame(&v26, v12);
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
    v38 = nullptr;
    *((_QWORD *)&v39 + 1) = 0;
  }
  if ( s2 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(s2);
    s2 = nullptr;
    *((_QWORD *)&v41 + 1) = 0;
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
    v42 = nullptr;
    *((_QWORD *)&v43 + 1) = 0;
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
    v44 = nullptr;
    *((_QWORD *)&v45 + 1) = 0;
  }
  v46 = 1;
  switch_dbctx(*(int *)(v6 + 20));
  v27 = nullptr;
  v28 = 0;
  if ( (_BYTE)v26 )
  {
    if ( !(unsigned __int8)serialize_tinfo(&v27, &v42, &v44, &v26, 272) )
      goto LABEL_26;
    v22 = (const char *)v27;
  }
  else
  {
    v22 = nullptr;
  }
  sub_495970((__int64)&v38, v6, v22);
LABEL_26:
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  clear_tinfo_t(&v26);
  if ( (unsigned __int64)v30 <= 1 )
  {
    if ( (unsigned __int64)v39 > 1 )
      goto LABEL_41;
    v13 = v34;
    if ( (_QWORD)v43 )
    {
LABEL_34:
      v14 = v42;
      v15 = (char *)byte_23ADD24;
      if ( !v13 )
        goto LABEL_36;
      goto LABEL_35;
    }
  }
  else
  {
    if ( (unsigned __int64)v39 <= 1 )
      goto LABEL_41;
    if ( (unsigned __int64)v32 <= 1 || (unsigned __int64)v41 <= 1 )
      sub_492990();
    if ( strcmp(s1, s2) )
      goto LABEL_41;
    v13 = v34;
    if ( (_QWORD)v43 )
      goto LABEL_34;
  }
  v14 = (char *)byte_23ADD24;
  if ( !v13 )
    goto LABEL_37;
LABEL_35:
  v15 = v33;
LABEL_36:
  if ( strcmp(v15, v14) )
  {
LABEL_41:
    v8 = operator new(0xB0u);
    v18 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)v8 = &off_2B26160;
    v19 = *(_QWORD *)a2;
    *(_QWORD *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 8) = v19;
    *(_OWORD *)(v8 + 24) = 0;
    if ( v18 )
    {
      v23 = (void *)qalloc_or_throw(v18);
      *(_QWORD *)(v8 + 16) = v23;
      v24 = *(const void **)(a2 + 8);
      *(_QWORD *)(v8 + 32) = v18;
      memcpy(v23, v24, v18);
      *(_QWORD *)(v8 + 24) = v18;
    }
    v20 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(v8 + 120) = -1;
    *(_QWORD *)(v8 + 40) = v20;
    LODWORD(v20) = *(_DWORD *)(a2 + 40);
    *(_QWORD *)(v8 + 128) = -1;
    *(_DWORD *)(v8 + 48) = v20;
    *(_QWORD *)(v8 + 136) = -1;
    *(_QWORD *)(v8 + 144) = 0;
    *(_OWORD *)(v8 + 56) = 0;
    *(_OWORD *)(v8 + 72) = 0;
    *(_OWORD *)(v8 + 88) = 0;
    *(_OWORD *)(v8 + 104) = 0;
    merge_handler_ctr(v8, a4);
    *(_QWORD *)v8 = &off_2B2CB58;
    *(_QWORD *)(v8 + 152) = 0;
    *(_OWORD *)(v8 + 160) = 0;
    sub_49C2C0(v8, v8 + 152, a3);
    goto LABEL_44;
  }
LABEL_37:
  if ( !(_QWORD)v45 )
  {
    v8 = 0;
    v16 = (char *)byte_23ADD24;
    if ( !(_QWORD)v36 )
      goto LABEL_44;
    goto LABEL_39;
  }
  v16 = v44;
  v17 = (char *)byte_23ADD24;
  if ( (_QWORD)v36 )
LABEL_39:
    v17 = v35;
  if ( strcmp(v17, v16) )
    goto LABEL_41;
  v8 = 0;
LABEL_44:
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
  }
  if ( s2 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(s2);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  if ( s1 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(s1);
  }
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    qfree(ptr);
  }
  return v8;
}
