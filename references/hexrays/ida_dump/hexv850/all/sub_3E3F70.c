__int64 __fastcall sub_3E3F70(__int64 a1, const char *a2, _DWORD *a3)
{
  __int64 i; // rbx
  const char *v6; // rdi
  char *v7; // rax
  char *v8; // rbp
  size_t v9; // rbp
  _DWORD *v10; // r14
  char *j; // rbx
  __int64 v12; // rax
  int v14; // [rsp+Ch] [rbp-3Ch]

  for ( i = 0; i != 8; ++i )
  {
    v6 = off_4BD380[i];
    if ( v6 && !strcmp(v6, a2) )
    {
      if ( a3 )
        *a3 = 1;
      return (unsigned int)i;
    }
  }
  v7 = strchr(a2, 94);
  v8 = v7;
  if ( v7 )
  {
    v14 = strtol(v7 + 1, nullptr, 10);
  }
  else
  {
    v14 = 0;
    v8 = (char *)&a2[strlen(a2)];
  }
  v9 = v8 - a2;
  v10 = (_DWORD *)(a1 + 352);
  for ( j = (char *)&unk_40DB40; strncmp(a2, j + 8, v9) || j[v9 + 8]; j += 16 )
  {
    v12 = *((_QWORD *)j + 2);
    v10 = (_DWORD *)(a1 + v12);
    if ( v12 == 504 )
      return 0xFFFFFFFFLL;
  }
  if ( a3 )
    *a3 = (unsigned __int8)j[14];
  return (unsigned int)(*v10 + v14);
}
