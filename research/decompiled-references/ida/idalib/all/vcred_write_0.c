__int64 __fastcall vcred_write_0(__int64 a1, __int64 *a2)
{
  bool v2; // cc
  const char *v4; // rdx
  const char *v5; // r13
  const char *v6; // rdx
  const char *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r13
  size_t v10; // r12
  size_t v11; // r12
  unsigned int v12; // r12d
  const char *v13; // rbx
  void *v14; // rdi
  __int64 v16; // rdx
  const void *v17; // r15
  const char *v18; // rdx
  const char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  const void *v22; // r15
  const char *v23; // rdx
  const char *v24; // rsi
  void *v25; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v26; // [rsp+8h] [rbp-B0h]
  void *v27; // [rsp+20h] [rbp-98h] BYREF
  __int128 v28; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int128 v30; // [rsp+48h] [rbp-70h]
  void *dest; // [rsp+60h] [rbp-58h] BYREF
  __int128 v32; // [rsp+68h] [rbp-50h]
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 48) <= 1u;
  v33 = __readfsqword(0x28u);
  if ( v2 )
  {
    v13 = "Invalid user name";
    if ( a2 )
      goto LABEL_24;
    return 0;
  }
  if ( *(_QWORD *)(a1 + 16) <= 1u )
  {
    v13 = "Invalid host name";
    if ( a2 )
    {
LABEL_24:
      v14 = (void *)*a2;
      if ( (unsigned __int64)a2[2] <= 0x11 )
      {
        v20 = qvector_reserve(a2, *a2, 18, 1);
        *a2 = v20;
        v14 = (void *)v20;
      }
      a2[1] = 18;
      memmove(v14, v13, 0x11u);
      *(_BYTE *)(*a2 + 17) = 0;
    }
    return 0;
  }
  v25 = nullptr;
  v26 = 0;
  sub_7C9450(a1 + 8, (__int64)&v25, 1);
  v4 = haystack;
  if ( (_QWORD)v26 )
    v4 = (const char *)v25;
  reg_str_set("Default", "VaultCredentials", v4);
  v27 = nullptr;
  v28 = 0;
  sub_7C9A80(a1, (__int64)&v27);
  v5 = haystack;
  if ( (_QWORD)v28 )
    v5 = (const char *)v27;
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 184) )
    v6 = *(const char **)(a1 + 176);
  reg_str_set("DefaultSite", v5, v6);
  reg_int_op("UseProxy", 1, (*(_BYTE *)(a1 + 169) & 4) != 0, v5);
  if ( *(_QWORD *)(a1 + 96) > 1u )
  {
    dest = nullptr;
    v32 = 0;
    sub_7C9450(a1 + 88, (__int64)&dest, 1);
    v7 = haystack;
    if ( (_QWORD)v32 )
      v7 = (const char *)dest;
    reg_str_set("Proxy", v5, v7);
    if ( dest )
      qfree(dest);
  }
  v8 = sub_7C1590();
  ptr = nullptr;
  v9 = v8;
  v30 = 0;
  sub_7C9450(a1 + 8, (__int64)&ptr, 0);
  v10 = *(_QWORD *)(a1 + 72);
  if ( v10 <= 1 )
    goto LABEL_15;
  v21 = *(_QWORD *)(a1 + 72);
  v22 = *(const void **)(a1 + 64);
  v32 = 0;
  dest = nullptr;
  dest = (void *)qvector_reserve(&dest, 0, v21, 1);
  memset((char *)dest + v32, 0, v10 - v32);
  *(_QWORD *)&v32 = v10;
  memcpy(dest, v22, v10);
  v23 = haystack;
  if ( (_QWORD)v30 )
    v23 = (const char *)ptr;
  v24 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v24 = *(const char **)(a1 + 40);
  v12 = (*(__int64 (__fastcall **)(__int64, const char *, const char *, const char *, void **, __int64 *))(*(_QWORD *)v9 + 24LL))(
          v9,
          v24,
          v23,
          "hexvault",
          &dest,
          a2);
  if ( dest )
  {
    *(_QWORD *)&v32 = 0;
    qfree(dest);
  }
  if ( (_BYTE)v12 )
  {
LABEL_15:
    v11 = *(_QWORD *)(a1 + 152);
    if ( v11 > 1 )
    {
      v16 = *(_QWORD *)(a1 + 152);
      dest = nullptr;
      v17 = *(const void **)(a1 + 144);
      v32 = 0;
      dest = (void *)qvector_reserve(&dest, 0, v16, 1);
      memset((char *)dest + v32, 0, v11 - v32);
      *(_QWORD *)&v32 = v11;
      memcpy(dest, v17, v11);
      v18 = haystack;
      if ( (_QWORD)v30 )
        v18 = (const char *)ptr;
      v19 = haystack;
      if ( *(_QWORD *)(a1 + 48) )
        v19 = *(const char **)(a1 + 40);
      v12 = (*(__int64 (__fastcall **)(__int64, const char *, const char *, const char *, void **, __int64 *))(*(_QWORD *)v9 + 24LL))(
              v9,
              v19,
              v18,
              "hexvault_proxy",
              &dest,
              a2);
      if ( dest )
      {
        *(_QWORD *)&v32 = 0;
        qfree(dest);
      }
    }
    else
    {
      v12 = 1;
    }
  }
  if ( ptr )
    qfree(ptr);
  if ( v27 )
    qfree(v27);
  if ( v25 )
    qfree(v25);
  return v12;
}
