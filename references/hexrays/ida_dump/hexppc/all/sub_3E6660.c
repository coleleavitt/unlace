__int64 __fastcall sub_3E6660(__int64 a1, const char *a2, _DWORD *a3, double a4)
{
  char *v5; // rax
  char *v6; // rbx
  size_t v7; // rbx
  __int64 v8; // r14
  int v9; // eax
  int v11; // [rsp+Ch] [rbp-3Ch]

  v5 = strchr(a2, 94);
  if ( v5 )
  {
    v6 = v5;
    v11 = strtol(v5 + 1, nullptr, 10);
  }
  else
  {
    v11 = 0;
    v6 = (char *)&a2[strlen(a2)];
  }
  v7 = v6 - a2;
  v8 = a1 + 544;
  while ( strncmp(a2, (const char *)v8, v7) || *(_BYTE *)(v8 + v7) )
  {
    v8 += 32;
    if ( a1 + 4416 == v8 )
      return 0xFFFFFFFFLL;
  }
  v9 = *(char *)(v8 + 12);
  if ( v9 > *(_DWORD *)(a1 + 80) )
  {
    if ( !under_debugger )
      sub_37EEE0(0xC8A5u, v8, a4);
    BUG();
  }
  if ( a3 )
    *a3 = v9;
  return (unsigned int)(*(_DWORD *)(v8 - 8 + 28) + v11);
}
