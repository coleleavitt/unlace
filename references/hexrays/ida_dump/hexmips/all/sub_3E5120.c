__int64 __fastcall sub_3E5120(__int64 a1, const char *a2, _DWORD *a3)
{
  __int64 v3; // r14
  char *v5; // rax
  char *v6; // rbx
  int v7; // eax
  size_t v8; // rbx
  _DWORD *v9; // r13
  __int64 v10; // rax
  int v12; // [rsp+Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a1 + 736);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v5 = strchr(a2, 94);
  v6 = v5;
  if ( v5 )
  {
    v7 = strtol(v5 + 1, nullptr, 10);
    v3 = *(_QWORD *)(a1 + 736);
    v12 = v7;
  }
  else
  {
    v12 = 0;
    v6 = (char *)&a2[strlen(a2)];
  }
  v8 = v6 - a2;
  v9 = (_DWORD *)(a1 + *(_QWORD *)v3);
  if ( *(_QWORD *)v3 == 692 )
    return 0xFFFFFFFFLL;
  while ( strncmp(a2, (const char *)(v3 + 8), v8) || *(_BYTE *)(v3 + v8 + 8) )
  {
    v10 = *(_QWORD *)(v3 + 16);
    v3 += 16;
    v9 = (_DWORD *)(a1 + v10);
    if ( v10 == 692 )
      return 0xFFFFFFFFLL;
  }
  if ( a3 )
    *a3 = *(char *)(v3 + 14);
  return (unsigned int)(*v9 + v12);
}
