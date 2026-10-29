__int64 __fastcall sub_3208E0(_QWORD *a1)
{
  __int64 v2; // rax
  size_t v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  size_t v6; // rbp
  char *v7; // r14
  int i; // ebx
  char *v9; // rsi
  char *v10; // r12
  size_t v11; // rax
  size_t v12; // rbx
  char *v13; // rdi
  size_t v14; // r14
  __int64 v15; // rdi
  double v16; // xmm0_8
  char *v18; // rax
  char *v19; // rbx
  __int64 v20; // [rsp+8h] [rbp-D0h]
  char *s; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+18h] [rbp-C0h]
  char *endptr; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+38h] [rbp-A0h]
  __int64 v25; // [rsp+48h] [rbp-90h]
  char *s1; // [rsp+50h] [rbp-88h] BYREF
  __int128 v27; // [rsp+58h] [rbp-80h]
  __int64 v28; // [rsp+68h] [rbp-70h]
  void *v29; // [rsp+70h] [rbp-68h]
  __int128 v30; // [rsp+78h] [rbp-60h]
  __int64 v31; // [rsp+88h] [rbp-50h]
  char v32; // [rsp+90h] [rbp-48h]
  unsigned __int64 v33; // [rsp+98h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  sub_31D450(a1, 1);
  v20 = (*(__int64 (**)(void))(*(_QWORD *)*a1 + 8LL))();
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
  s1 = nullptr;
  v27 = 0;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = v2;
  if ( v3 )
  {
    v18 = (char *)qalloc_or_throw(*(_QWORD *)(v2 + 8));
    *((_QWORD *)&v27 + 1) = v3;
    s1 = v18;
    memcpy(v18, *(const void **)v4, v3);
    *(_QWORD *)&v27 = v3;
  }
  v5 = *(_QWORD *)(v4 + 24);
  v28 = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 12);
  v29 = nullptr;
  v30 = 0;
  v6 = *(_QWORD *)(v4 + 40);
  if ( v6 )
  {
    v29 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 40));
    *((_QWORD *)&v30 + 1) = v6;
    memcpy(v29, *(const void **)(v4 + 32), v6);
    *(_QWORD *)&v30 = v6;
  }
  v7 = (char *)&::s1;
  v31 = *(_QWORD *)(v4 + 56);
  v32 = *(_BYTE *)(v4 + 64);
  if ( (_QWORD)v27 )
  {
    v7 = s1;
    if ( !strncmp(s1, "Copy of: ", 9u) )
    {
      v7 = s1 + 9;
    }
    else if ( !strncmp(s1, "Copy #", 6u) )
    {
      if ( strtoul(s1 + 6, &endptr, 10) )
      {
        v19 = endptr + 5;
        if ( !strncmp(endptr, " of: ", 5u) )
          v7 = v19;
      }
    }
  }
  s = nullptr;
  v22 = 0;
  sub_169A50((__int64 *)&s, (__int64)"Copy of: %s", v7);
  for ( i = 2; ; ++i )
  {
    v9 = (char *)&::s1;
    if ( (_QWORD)v22 )
      v9 = s;
    if ( !(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a1 + 16LL))(*a1, v9) )
      break;
    sub_169A50((__int64 *)&s, (__int64)"Copy #%d of: %s", i, v7);
  }
  if ( (_QWORD)v22 && (v10 = s) != nullptr && (v11 = strlen(s), (v12 = v11) != 0) )
  {
    v13 = s1;
    v14 = v11 + 1;
    if ( *((_QWORD *)&v27 + 1) < v11 + 1 )
    {
      s1 = (char *)qvector_reserve(&s1, s1, v11 + 1, 1);
      v13 = s1;
    }
    *(_QWORD *)&v27 = v14;
    memmove(v13, v10, v12);
    s1[v12] = 0;
  }
  else
  {
    *(_QWORD *)&v27 = 0;
  }
  v15 = *a1;
  v31 = -1;
  (*(void (__fastcall **)(__int64, __int64, char **))(*(_QWORD *)v15 + 40LL))(v15, v20, &s1);
  sub_31D200(a1);
  endptr = nullptr;
  v25 = -1;
  v24 = 0;
  endptr = (char *)qvector_reserve(&endptr, 0, 1, 8);
  *(_QWORD *)&endptr[8 * v24] = v20;
  v25 = v20;
  *(_QWORD *)&v24 = v24 + 1;
  v16 = sub_4A4790("Execute script:45", &endptr);
  if ( endptr )
  {
    *(_QWORD *)&v24 = 0;
    v16 = qfree(endptr, (const char *)&endptr, v16);
  }
  if ( s )
  {
    *(_QWORD *)&v22 = 0;
    v16 = qfree(s, (const char *)&endptr, v16);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    v16 = qfree(v29, (const char *)&endptr, v16);
  }
  if ( v28 )
    --*(_DWORD *)(v28 + 12);
  if ( s1 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(s1, (const char *)&endptr, v16);
  }
  return 1;
}
