__int64 __fastcall sub_46AAB0(__int64 a1, _BYTE *a2, int a3, int a4, unsigned __int8 a5)
{
  unsigned int v5; // r14d
  __int64 v8; // rdi
  __int64 v9; // r12
  bool v11; // zf
  void *v12; // rdx
  size_t v13; // r14
  int v14; // r9d
  char v15; // al
  void *v16; // rax
  void *v17; // rax
  char v18; // al
  void *v19; // [rsp+8h] [rbp-D0h] BYREF
  void *v20; // [rsp+10h] [rbp-C8h] BYREF
  void *v21; // [rsp+18h] [rbp-C0h] BYREF
  void *ptr; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+28h] [rbp-B0h]
  void *src; // [rsp+40h] [rbp-98h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-90h]
  void *v26; // [rsp+58h] [rbp-80h]
  __int128 v27; // [rsp+60h] [rbp-78h]
  void *v28; // [rsp+70h] [rbp-68h] BYREF
  __int128 v29; // [rsp+78h] [rbp-60h]
  void *v30; // [rsp+88h] [rbp-50h] BYREF
  __int128 v31; // [rsp+90h] [rbp-48h]
  int v32; // [rsp+A0h] [rbp-38h]
  unsigned __int64 v33; // [rsp+A8h] [rbp-30h]

  v5 = 1;
  v33 = __readfsqword(0x28u);
  if ( !*a2 )
    return v5;
  v32 = a3;
  v8 = *(int *)(a1 + 4LL * a3 + 16);
  v9 = a4;
  src = nullptr;
  v26 = nullptr;
  v28 = nullptr;
  v30 = nullptr;
  *(_OWORD *)n = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  switch_dbctx(v8);
  ptr = nullptr;
  v11 = *a2 == 0;
  v23 = 0;
  if ( v11 )
  {
    v12 = nullptr;
  }
  else
  {
    v18 = serialize_tinfo(&ptr, &v28, &v30, a2, 272);
    v12 = ptr;
    if ( !v18 )
    {
      if ( ptr )
      {
        *(_QWORD *)&v23 = 0;
        qfree(ptr);
      }
      clear_tinfo_t(a2);
      goto LABEL_32;
    }
  }
  sub_495970(&src, a1, v12);
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
  clear_tinfo_t(a2);
  v13 = n[0];
  if ( n[0] <= 1 )
  {
    clear_tinfo_t(a2);
    v5 = 1;
    goto LABEL_20;
  }
  ptr = nullptr;
  v23 = 0;
  ptr = (void *)qalloc_or_throw(n[0]);
  *((_QWORD *)&v23 + 1) = v13;
  memcpy(ptr, src, v13);
  *(_QWORD *)&v23 = v13;
  if ( (_DWORD)v9 == -1 || (_DWORD)v9 == v32 )
    goto LABEL_13;
  v15 = sub_498010(a1, (unsigned int)&ptr, v32, v9, a5, v14);
  if ( a5 || v15 )
  {
    switch_dbctx(*(int *)(a1 + 4 * v9 + 16));
LABEL_13:
    v19 = ptr;
    v16 = nullptr;
    if ( (unsigned __int64)v29 > 1 )
      v16 = v28;
    v20 = v16;
    v17 = nullptr;
    if ( (unsigned __int64)v31 > 1 )
      v17 = v30;
    v21 = v17;
    v5 = deserialize_tinfo(a2, 0, &v19, &v20, &v21, 0);
    if ( ptr )
    {
      *(_QWORD *)&v23 = 0;
      qfree(ptr);
    }
    if ( (a5 & ((unsigned __int8)v5 ^ 1)) != 0 )
    {
      if ( !under_debugger )
        interr(2060);
      BUG();
    }
    goto LABEL_20;
  }
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
LABEL_32:
  v5 = 0;
LABEL_20:
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
  return v5;
}
