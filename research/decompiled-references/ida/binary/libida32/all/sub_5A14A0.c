unsigned __int64 __fastcall sub_5A14A0(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v7; // rdi
  __int64 func; // rax
  __int64 v10; // rdi
  const char *v11; // rdx
  void **v12; // rsi
  size_t v13; // r15
  void *v14; // rax
  void *v15; // rax
  _QWORD *v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v20; // [rsp+0h] [rbp-E8h] BYREF
  void *v21; // [rsp+8h] [rbp-E0h] BYREF
  void *v22; // [rsp+10h] [rbp-D8h] BYREF
  void *v23; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v25; // [rsp+28h] [rbp-C0h]
  void *src; // [rsp+40h] [rbp-A8h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-A0h]
  void *v28; // [rsp+58h] [rbp-90h]
  __int128 v29; // [rsp+60h] [rbp-88h]
  void *v30; // [rsp+70h] [rbp-78h] BYREF
  __int128 v31; // [rsp+78h] [rbp-70h]
  void *v32; // [rsp+88h] [rbp-60h] BYREF
  __int128 v33; // [rsp+90h] [rbp-58h]
  int v34; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v35; // [rsp+A8h] [rbp-40h]

  v4 = a3;
  v5 = a2;
  v7 = *(int *)(a1 + 4LL * a3 + 16);
  v35 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  v28 = nullptr;
  v30 = nullptr;
  v32 = nullptr;
  v34 = -1;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  switch_dbctx(v7);
  v23 = nullptr;
  func = get_func(a4);
  if ( (unsigned __int8)get_func_frame(&v23, func) )
  {
    if ( src )
    {
      n[0] = 0;
      qfree(src);
      src = nullptr;
      n[1] = 0;
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
      v28 = nullptr;
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
    v10 = *(int *)(a1 + 4 * v4 + 16);
    v34 = v4;
    switch_dbctx(v10);
    ptr = nullptr;
    v25 = 0;
    if ( (_BYTE)v23 )
    {
      v12 = &v30;
      if ( !(unsigned __int8)serialize_tinfo(&ptr, &v30, &v32, &v23, 272) )
        goto LABEL_13;
      v11 = (const char *)ptr;
    }
    else
    {
      v11 = nullptr;
    }
    v12 = (void **)a1;
    sub_480C80((__int64)&src, a1, v11);
LABEL_13:
    if ( ptr )
    {
      *(_QWORD *)&v25 = 0;
      qfree(ptr);
    }
    clear_tinfo_t(&v23);
    v13 = n[0];
    v20 = 0;
    if ( n[0] <= 1 )
    {
      clear_tinfo_t(&v20);
    }
    else
    {
      ptr = nullptr;
      v25 = 0;
      ptr = (void *)qalloc_or_throw(n[0], (const char *)v12);
      *((_QWORD *)&v25 + 1) = v13;
      memcpy(ptr, src, v13);
      *(_QWORD *)&v25 = v13;
      if ( (_DWORD)v5 != -1 && (_DWORD)v5 != v34 )
      {
        sub_483310(a1, (__int64)&ptr, v34, v5, 1);
        switch_dbctx(*(int *)(a1 + 4 * v5 + 16));
      }
      v21 = ptr;
      v14 = nullptr;
      if ( (unsigned __int64)v31 > 1 )
        v14 = v30;
      v22 = v14;
      v15 = nullptr;
      if ( (unsigned __int64)v33 > 1 )
        v15 = v32;
      v23 = v15;
      deserialize_tinfo(&v20, 0, &v21, &v22, &v23, 0);
      if ( ptr )
      {
        *(_QWORD *)&v25 = 0;
        qfree(ptr);
      }
    }
    v16 = *(_QWORD **)(qword_2CA1698 + 1480);
    v17 = sub_3B90A0(v16, a4);
    sub_525A20((__int64)v16, &v20, v17);
    sub_59CD70((__int64)v16, &v20, nullptr, 0);
    v18 = sub_5AFCE0(v16);
    if ( !v18 )
    {
      if ( !under_debugger )
        interr(3122);
      BUG();
    }
    *(_DWORD *)(v18 + 16) = a4;
    sub_5ACD60(v16, v18, 1);
    clear_tinfo_t(&v20);
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
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
    }
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    return v35 - __readfsqword(0x28u);
  }
  clear_tinfo_t(&v23);
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
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v35 - __readfsqword(0x28u);
}

