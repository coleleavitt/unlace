__int64 __fastcall vcred_write_0(__int64 a1, __int64 *a2)
{
  bool v2; // cc
  const char *v4; // r13
  __int64 v5; // rax
  __int64 v6; // r13
  size_t v7; // r12
  size_t v8; // r12
  unsigned int v9; // r12d
  const char *v10; // rbx
  void *v11; // rdi
  __int64 v13; // rdx
  const void *v14; // r15
  const char *v15; // rdx
  const char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  const void *v19; // r15
  const char *v20; // rdx
  const char *v21; // rsi
  void *v22; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+8h] [rbp-B0h]
  void *v24; // [rsp+20h] [rbp-98h] BYREF
  __int128 v25; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int128 v27; // [rsp+48h] [rbp-70h]
  void *dest; // [rsp+60h] [rbp-58h] BYREF
  __int128 v29; // [rsp+68h] [rbp-50h]
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 48) <= 1u;
  v30 = __readfsqword(0x28u);
  if ( v2 )
  {
    v10 = "Invalid user name";
    if ( a2 )
      goto LABEL_18;
    return 0;
  }
  if ( *(_QWORD *)(a1 + 16) <= 1u )
  {
    v10 = "Invalid host name";
    if ( a2 )
    {
LABEL_18:
      v11 = (void *)*a2;
      if ( (unsigned __int64)a2[2] <= 0x11 )
      {
        v17 = qvector_reserve(a2, *a2, 18, 1);
        *a2 = v17;
        v11 = (void *)v17;
      }
      a2[1] = 18;
      memmove(v11, v10, 0x11u);
      *(_BYTE *)(*a2 + 17) = 0;
    }
    return 0;
  }
  v22 = nullptr;
  v23 = 0;
  sub_7A5FF0(a1 + 8, (__int64)&v22, 1);
  reg_str_set();
  v24 = nullptr;
  v25 = 0;
  sub_7A6620(a1, (__int64)&v24);
  v4 = haystack;
  if ( (_QWORD)v25 )
    v4 = (const char *)v24;
  reg_str_set();
  reg_int_op("UseProxy", 1, (*(_BYTE *)(a1 + 169) & 4) != 0, v4);
  if ( *(_QWORD *)(a1 + 96) > 1u )
  {
    dest = nullptr;
    v29 = 0;
    sub_7A5FF0(a1 + 88, (__int64)&dest, 1);
    reg_str_set();
    if ( dest )
      qfree(dest);
  }
  v5 = sub_79E140();
  ptr = nullptr;
  v6 = v5;
  v27 = 0;
  sub_7A5FF0(a1 + 8, (__int64)&ptr, 0);
  v7 = *(_QWORD *)(a1 + 72);
  if ( v7 <= 1 )
    goto LABEL_9;
  v18 = *(_QWORD *)(a1 + 72);
  v19 = *(const void **)(a1 + 64);
  v29 = 0;
  dest = nullptr;
  dest = (void *)qvector_reserve(&dest, 0, v18, 1);
  memset((char *)dest + v29, 0, v7 - v29);
  *(_QWORD *)&v29 = v7;
  memcpy(dest, v19, v7);
  v20 = haystack;
  if ( (_QWORD)v27 )
    v20 = (const char *)ptr;
  v21 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v21 = *(const char **)(a1 + 40);
  v9 = (*(__int64 (__fastcall **)(__int64, const char *, const char *, const char *, void **, __int64 *))(*(_QWORD *)v6 + 24LL))(
         v6,
         v21,
         v20,
         "hexvault",
         &dest,
         a2);
  if ( dest )
  {
    *(_QWORD *)&v29 = 0;
    qfree(dest);
  }
  if ( (_BYTE)v9 )
  {
LABEL_9:
    v8 = *(_QWORD *)(a1 + 152);
    if ( v8 > 1 )
    {
      v13 = *(_QWORD *)(a1 + 152);
      dest = nullptr;
      v14 = *(const void **)(a1 + 144);
      v29 = 0;
      dest = (void *)qvector_reserve(&dest, 0, v13, 1);
      memset((char *)dest + v29, 0, v8 - v29);
      *(_QWORD *)&v29 = v8;
      memcpy(dest, v14, v8);
      v15 = haystack;
      if ( (_QWORD)v27 )
        v15 = (const char *)ptr;
      v16 = haystack;
      if ( *(_QWORD *)(a1 + 48) )
        v16 = *(const char **)(a1 + 40);
      v9 = (*(__int64 (__fastcall **)(__int64, const char *, const char *, const char *, void **, __int64 *))(*(_QWORD *)v6 + 24LL))(
             v6,
             v16,
             v15,
             "hexvault_proxy",
             &dest,
             a2);
      if ( dest )
      {
        *(_QWORD *)&v29 = 0;
        qfree(dest);
      }
    }
    else
    {
      v9 = 1;
    }
  }
  if ( ptr )
    qfree(ptr);
  if ( v24 )
    qfree(v24);
  if ( v22 )
    qfree(v22);
  return v9;
}

