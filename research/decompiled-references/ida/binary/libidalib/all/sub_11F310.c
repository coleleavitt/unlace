__int64 __fastcall sub_11F310(_QWORD *a1)
{
  __int64 v2; // rax
  size_t v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  size_t v6; // rbp
  int i; // ebx
  char *v8; // rsi
  char *v9; // r12
  size_t v10; // rax
  size_t v11; // rbx
  char *v12; // rdi
  size_t v13; // r14
  __int64 v14; // rdi
  __int64 v16; // [rsp+8h] [rbp-D0h]
  char *s; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+18h] [rbp-C0h]
  char *endptr; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+38h] [rbp-A0h]
  __int64 v21; // [rsp+48h] [rbp-90h]
  char *s1; // [rsp+50h] [rbp-88h] BYREF
  __int128 v23; // [rsp+58h] [rbp-80h]
  __int64 v24; // [rsp+68h] [rbp-70h]
  void *v25; // [rsp+70h] [rbp-68h]
  __int128 v26; // [rsp+78h] [rbp-60h]
  __int64 v27; // [rsp+88h] [rbp-50h]
  char v28; // [rsp+90h] [rbp-48h]
  unsigned __int64 v29; // [rsp+98h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  sub_11C830(a1, 1);
  v16 = (*(__int64 (**)(void))(*(_QWORD *)*a1 + 8LL))();
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
  s1 = nullptr;
  v23 = 0;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = v2;
  if ( v3 )
  {
    *((_QWORD *)&v23 + 1) = *(_QWORD *)(v2 + 8);
    s1 = (char *)qalloc_or_throw();
    memcpy(s1, *(const void **)v4, v3);
    *(_QWORD *)&v23 = v3;
  }
  v5 = *(_QWORD *)(v4 + 24);
  v24 = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 12);
  v25 = nullptr;
  v26 = 0;
  v6 = *(_QWORD *)(v4 + 40);
  if ( v6 )
  {
    v25 = (void *)qalloc_or_throw();
    *((_QWORD *)&v26 + 1) = v6;
    memcpy(v25, *(const void **)(v4 + 32), v6);
    *(_QWORD *)&v26 = v6;
  }
  v27 = *(_QWORD *)(v4 + 56);
  v28 = *(_BYTE *)(v4 + 64);
  if ( (_QWORD)v23 && strncmp(s1, "Copy of: ", 9u) && !strncmp(s1, "Copy #", 6u) && strtoul(s1 + 6, &endptr, 10) )
    strncmp(endptr, " of: ", 5u);
  s = nullptr;
  v18 = 0;
  sub_94440((__int64 *)&s);
  for ( i = 2; ; ++i )
  {
    v8 = (char *)::s1;
    if ( (_QWORD)v18 )
      v8 = s;
    if ( !(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a1 + 16LL))(*a1, v8) )
      break;
    sub_94440((__int64 *)&s);
  }
  if ( (_QWORD)v18 && (v9 = s) != nullptr && (v10 = strlen(s), (v11 = v10) != 0) )
  {
    v12 = s1;
    v13 = v10 + 1;
    if ( *((_QWORD *)&v23 + 1) < v10 + 1 )
    {
      s1 = (char *)qvector_reserve();
      v12 = s1;
    }
    *(_QWORD *)&v23 = v13;
    memmove(v12, v9, v11);
    s1[v11] = 0;
  }
  else
  {
    *(_QWORD *)&v23 = 0;
  }
  v14 = *a1;
  v27 = -1;
  (*(void (__fastcall **)(__int64, __int64, char **))(*(_QWORD *)v14 + 40LL))(v14, v16, &s1);
  sub_11C620(a1);
  endptr = nullptr;
  v21 = -1;
  v20 = 0;
  endptr = (char *)qvector_reserve();
  *(_QWORD *)&endptr[8 * v20] = v16;
  v21 = v16;
  *(_QWORD *)&v20 = v20 + 1;
  sub_196CC0("Execute script:45", &endptr);
  if ( endptr )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  if ( s )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  if ( v24 )
    --*(_DWORD *)(v24 + 12);
  if ( s1 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  return 1;
}

