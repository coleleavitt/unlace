__int64 __fastcall sub_561EC0(_QWORD *a1, __int64 a2, const char *a3)
{
  char *v4; // rbp
  char *v6; // rax
  int v7; // r13d
  unsigned __int8 v8; // al
  __int64 (__fastcall *v9)(_QWORD *, unsigned int); // rax
  const char *v10; // rsi
  char v11; // al
  const char *i; // r14
  char *v13; // rbx
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(_QWORD *, unsigned int); // r14
  unsigned __int8 v16; // al
  unsigned int v17; // ebp
  const char *v18; // rsi
  char v19; // al
  char *v20; // rax
  const char *v22; // [rsp+8h] [rbp-50h]

  v4 = nullptr;
  v22 = (const char *)closing_comment(a1, a2);
  if ( a3 )
  {
    v6 = strchr(a3, 10);
    v4 = v6;
    if ( v6 )
    {
      v4 = v6 + 1;
      v7 = (_DWORD)v6 - (_DWORD)a3;
    }
    else
    {
      v7 = strlen(a3);
    }
    v8 = getinf(41);
    (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD))(*a1 + 48LL))(a1, a1 + 3, v8);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 2);
    sub_359A50((__int64)a1, (__int64)"%s %.*s%s", *(const char **)(a2 + 48), v7, a3, v22);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 2);
  }
  v9 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*a1 + 128LL);
  if ( v9 == sub_557B20 )
  {
    sub_3DA2C0((__int64)(a1 + 3));
    v10 = haystack;
    if ( a1[4] )
      v10 = (const char *)a1[3];
    v11 = (*(__int64 (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 136LL))(a1, v10, 0);
    a1[4] = 0;
  }
  else
  {
    v11 = v9(a1, 0);
  }
  if ( v11 )
    return 1;
  for ( i = v4; i; i = v13 )
  {
    v20 = strchr(i, 10);
    v13 = v20;
    if ( v20 )
    {
      v13 = v20 + 1;
      v14 = (unsigned int)((_DWORD)v20 - (_DWORD)i);
    }
    else
    {
      v14 = (unsigned int)strlen(i);
    }
    sub_359A50((__int64)a1, (__int64)&unk_22B2BD8, *(_QWORD *)(a2 + 48), v14, i, v22);
    v15 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*a1 + 128LL);
    v16 = getinf(41);
    v17 = v16;
    if ( v15 == sub_557B20 )
    {
      sub_3DA2C0((__int64)(a1 + 3));
      v18 = haystack;
      if ( a1[4] )
        v18 = (const char *)a1[3];
      v19 = (*(__int64 (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 136LL))(a1, v18, v17);
      a1[4] = 0;
      if ( v19 )
        return 1;
    }
    else if ( (unsigned __int8)v15(a1, v16) )
    {
      return 1;
    }
  }
  return 0;
}

