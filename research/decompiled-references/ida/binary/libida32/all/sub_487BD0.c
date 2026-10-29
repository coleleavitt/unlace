__int64 __fastcall sub_487BD0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbp
  __int64 func; // rax
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rax
  const char *v10; // rdx
  __int64 v11; // rax
  const char *v12; // rsi
  __int64 v13; // rax
  char *v14; // rdi
  char *v15; // rdi
  size_t v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v20; // rdx
  void *v21; // rax
  const void *v22; // rsi
  __int64 v23; // [rsp+18h] [rbp-140h] BYREF
  void *v24; // [rsp+20h] [rbp-138h] BYREF
  __int128 v25; // [rsp+28h] [rbp-130h]
  void *ptr; // [rsp+40h] [rbp-118h] BYREF
  __int128 v27; // [rsp+48h] [rbp-110h]
  char *s1; // [rsp+58h] [rbp-100h]
  __int128 v29; // [rsp+60h] [rbp-F8h]
  char *v30; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+78h] [rbp-E0h]
  char *v32; // [rsp+88h] [rbp-D0h] BYREF
  __int128 v33; // [rsp+90h] [rbp-C8h]
  int v34; // [rsp+A0h] [rbp-B8h]
  void *v35; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-A0h]
  char *s2; // [rsp+C8h] [rbp-90h]
  __int128 v38; // [rsp+D0h] [rbp-88h]
  char *v39; // [rsp+E0h] [rbp-78h] BYREF
  __int128 v40; // [rsp+E8h] [rbp-70h]
  char *v41; // [rsp+F8h] [rbp-60h] BYREF
  __int128 v42; // [rsp+100h] [rbp-58h]
  int v43; // [rsp+110h] [rbp-48h]
  unsigned __int64 v44; // [rsp+118h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v5 = *(_QWORD *)a2;
  switch_dbctx(*(int *)(*(_QWORD *)a2 + 16LL));
  func = get_func(a3);
  v7 = func;
  if ( !func )
    return v7;
  if ( *(_DWORD *)(func + 16) == -1 )
    return 0;
  s1 = nullptr;
  v30 = nullptr;
  v32 = nullptr;
  v34 = -1;
  s2 = nullptr;
  v39 = nullptr;
  v41 = nullptr;
  v43 = -1;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v8 = *(int *)(v5 + 16);
  ptr = nullptr;
  v35 = nullptr;
  switch_dbctx(v8);
  v23 = 0;
  v9 = get_func(a3);
  get_func_frame(&v23, v9);
  if ( ptr )
  {
    *(_QWORD *)&v27 = 0;
    qfree(ptr);
    ptr = nullptr;
    *((_QWORD *)&v27 + 1) = 0;
  }
  if ( s1 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(s1);
    s1 = nullptr;
    *((_QWORD *)&v29 + 1) = 0;
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
    v30 = nullptr;
    *((_QWORD *)&v31 + 1) = 0;
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
    v32 = nullptr;
    *((_QWORD *)&v33 + 1) = 0;
  }
  v34 = 0;
  switch_dbctx(*(int *)(v5 + 16));
  v24 = nullptr;
  v25 = 0;
  if ( !(_BYTE)v23 )
  {
    v10 = nullptr;
LABEL_13:
    sub_480C80((__int64)&ptr, v5, v10);
    goto LABEL_14;
  }
  if ( (unsigned __int8)serialize_tinfo(&v24, &v30, &v32, &v23, 272) )
  {
    v10 = (const char *)v24;
    goto LABEL_13;
  }
LABEL_14:
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  clear_tinfo_t(&v23);
  switch_dbctx(*(int *)(v5 + 20));
  v23 = 0;
  v11 = get_func(a3);
  get_func_frame(&v23, v11);
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
    v35 = nullptr;
    *((_QWORD *)&v36 + 1) = 0;
  }
  if ( s2 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(s2);
    s2 = nullptr;
    *((_QWORD *)&v38 + 1) = 0;
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
    v39 = nullptr;
    *((_QWORD *)&v40 + 1) = 0;
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
    v41 = nullptr;
    *((_QWORD *)&v42 + 1) = 0;
  }
  v43 = 1;
  switch_dbctx(*(int *)(v5 + 20));
  v24 = nullptr;
  v25 = 0;
  if ( (_BYTE)v23 )
  {
    v12 = (const char *)&v39;
    if ( !(unsigned __int8)serialize_tinfo(&v24, &v39, &v41, &v23, 272) )
      goto LABEL_26;
    v20 = (const char *)v24;
  }
  else
  {
    v20 = nullptr;
  }
  v12 = (const char *)v5;
  sub_480C80((__int64)&v35, v5, v20);
LABEL_26:
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  clear_tinfo_t(&v23);
  if ( (unsigned __int64)v27 <= 1 )
  {
    if ( (unsigned __int64)v36 > 1 )
      goto LABEL_41;
    v13 = v31;
    if ( (_QWORD)v40 )
    {
LABEL_34:
      v12 = v39;
      v14 = (char *)byte_2389C44;
      if ( !v13 )
        goto LABEL_36;
      goto LABEL_35;
    }
  }
  else
  {
    if ( (unsigned __int64)v36 <= 1 )
      goto LABEL_41;
    if ( (unsigned __int64)v29 <= 1 || (unsigned __int64)v38 <= 1 )
      sub_47DEB0();
    v12 = s2;
    if ( strcmp(s1, s2) )
      goto LABEL_41;
    v13 = v31;
    if ( (_QWORD)v40 )
      goto LABEL_34;
  }
  v12 = byte_2389C44;
  if ( !v13 )
    goto LABEL_37;
LABEL_35:
  v14 = v30;
LABEL_36:
  if ( strcmp(v14, v12) )
  {
LABEL_41:
    v7 = operator new(0xB0u);
    v16 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)v7 = &off_2AFD020;
    v17 = *(_QWORD *)a2;
    *(_QWORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 8) = v17;
    *(_OWORD *)(v7 + 24) = 0;
    if ( v16 )
    {
      v21 = (void *)qalloc_or_throw(v16, v12);
      *(_QWORD *)(v7 + 16) = v21;
      v22 = *(const void **)(a2 + 8);
      *(_QWORD *)(v7 + 32) = v16;
      memcpy(v21, v22, v16);
      *(_QWORD *)(v7 + 24) = v16;
    }
    v18 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(v7 + 120) = -1;
    *(_QWORD *)(v7 + 40) = v18;
    LODWORD(v18) = *(_DWORD *)(a2 + 40);
    *(_QWORD *)(v7 + 128) = -1;
    *(_DWORD *)(v7 + 48) = v18;
    *(_QWORD *)(v7 + 136) = 0xFFFFFFFFLL;
    *(_DWORD *)(v7 + 144) = 0;
    *(_OWORD *)(v7 + 56) = 0;
    *(_OWORD *)(v7 + 72) = 0;
    *(_OWORD *)(v7 + 88) = 0;
    *(_OWORD *)(v7 + 104) = 0;
    merge_handler_ctr();
    *(_QWORD *)v7 = &off_2B02B98;
    *(_QWORD *)(v7 + 152) = 0;
    *(_OWORD *)(v7 + 160) = 0;
    sub_487660(v7, v7 + 152, a3);
    goto LABEL_44;
  }
LABEL_37:
  if ( !(_QWORD)v42 )
  {
    v7 = 0;
    v12 = byte_2389C44;
    if ( !(_QWORD)v33 )
      goto LABEL_44;
    goto LABEL_39;
  }
  v12 = v41;
  v15 = (char *)byte_2389C44;
  if ( (_QWORD)v33 )
LABEL_39:
    v15 = v32;
  if ( strcmp(v15, v12) )
    goto LABEL_41;
  v7 = 0;
LABEL_44:
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  if ( s2 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(s2);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  if ( s1 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(s1);
  }
  if ( ptr )
  {
    *(_QWORD *)&v27 = 0;
    qfree(ptr);
  }
  return v7;
}

