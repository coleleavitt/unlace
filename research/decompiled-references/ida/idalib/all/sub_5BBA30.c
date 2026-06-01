unsigned __int64 __fastcall sub_5BBA30(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v6; // rdi
  __int64 func; // rax
  __int64 v9; // rdi
  const char *v10; // rdx
  size_t v11; // r15
  void *v12; // rax
  void *v13; // rax
  _QWORD *v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v18; // [rsp+0h] [rbp-E8h] BYREF
  void *v19; // [rsp+8h] [rbp-E0h] BYREF
  void *v20; // [rsp+10h] [rbp-D8h] BYREF
  void *v21; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v23; // [rsp+28h] [rbp-C0h]
  void *src; // [rsp+40h] [rbp-A8h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-A0h]
  void *v26; // [rsp+58h] [rbp-90h]
  __int128 v27; // [rsp+60h] [rbp-88h]
  void *v28; // [rsp+70h] [rbp-78h] BYREF
  __int128 v29; // [rsp+78h] [rbp-70h]
  void *v30; // [rsp+88h] [rbp-60h] BYREF
  __int128 v31; // [rsp+90h] [rbp-58h]
  int v32; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v33; // [rsp+A8h] [rbp-40h]

  v4 = a3;
  v6 = *(int *)(a1 + 4LL * a3 + 16);
  v33 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  v26 = nullptr;
  v28 = nullptr;
  v30 = nullptr;
  v32 = -1;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  switch_dbctx(v6);
  v21 = nullptr;
  func = get_func(a4);
  if ( (unsigned __int8)get_func_frame(&v21, func) )
  {
    if ( src )
    {
      n[0] = 0;
      qfree(src);
      src = nullptr;
      n[1] = 0;
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
      v26 = nullptr;
      *((_QWORD *)&v27 + 1) = 0;
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
    v9 = *(int *)(a1 + 4 * v4 + 16);
    v32 = v4;
    switch_dbctx(v9);
    ptr = nullptr;
    v23 = 0;
    if ( (_BYTE)v21 )
    {
      if ( !(unsigned __int8)serialize_tinfo(&ptr, &v28, &v30, &v21, 272) )
        goto LABEL_13;
      v10 = (const char *)ptr;
    }
    else
    {
      v10 = nullptr;
    }
    sub_495970((__int64)&src, a1, v10);
LABEL_13:
    if ( ptr )
    {
      *(_QWORD *)&v23 = 0;
      qfree(ptr);
    }
    clear_tinfo_t(&v21);
    v11 = n[0];
    v18 = 0;
    if ( n[0] <= 1 )
    {
      clear_tinfo_t(&v18);
    }
    else
    {
      ptr = nullptr;
      v23 = 0;
      ptr = (void *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v23 + 1) = v11;
      memcpy(ptr, src, v11);
      *(_QWORD *)&v23 = v11;
      if ( a2 != -1 && a2 != v32 )
      {
        sub_498010(a1, (__int64)&ptr, v32, a2, 1);
        switch_dbctx(*(int *)(a1 + 4LL * a2 + 16));
      }
      v19 = ptr;
      v12 = nullptr;
      if ( (unsigned __int64)v29 > 1 )
        v12 = v28;
      v20 = v12;
      v13 = nullptr;
      if ( (unsigned __int64)v31 > 1 )
        v13 = v30;
      v21 = v13;
      deserialize_tinfo(&v18, 0, &v19, &v20, &v21, 0);
      if ( ptr )
      {
        *(_QWORD *)&v23 = 0;
        qfree(ptr);
      }
    }
    v14 = *(_QWORD **)(qword_2CCB598 + 1672);
    v15 = sub_3BDD60(v14, a4);
    sub_53E720((__int64)v14, &v18, v15);
    sub_5B6F10((__int64)v14, &v18, nullptr, 0);
    v16 = sub_5CAA10(v14);
    if ( !v16 )
    {
      if ( !under_debugger )
        interr(3122);
      BUG();
    }
    *(_QWORD *)(v16 + 24) = a4;
    sub_5C77B0(v14, v16, 1);
    clear_tinfo_t(&v18);
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
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
    }
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    return v33 - __readfsqword(0x28u);
  }
  clear_tinfo_t(&v21);
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
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v33 - __readfsqword(0x28u);
}
