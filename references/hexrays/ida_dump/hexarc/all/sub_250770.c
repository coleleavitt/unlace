const char *__fastcall sub_250770(__int64 a1, unsigned __int64 *a2, int a3)
{
  const char *v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  int v7; // edi
  unsigned __int64 v8; // rdi

  v3 = **(const char ***)(a1 + 72);
  if ( !v3 )
    return v3;
  v4 = *(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v4 )
    goto LABEL_13;
  if ( (*(_BYTE *)v4 & 2) != 0 )
    return nullptr;
  v5 = *a2;
  while ( 1 )
  {
    while ( v5 < *(_QWORD *)(v4 + 24) )
    {
LABEL_20:
      v4 = *(_QWORD *)(v4 + 8);
      if ( (*(_BYTE *)v4 & 2) != 0 )
        return nullptr;
    }
    if ( v5 == *(_QWORD *)(v4 + 24) )
      break;
LABEL_7:
    v4 = *(_QWORD *)(v4 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
      return nullptr;
  }
  v7 = *(_DWORD *)(v4 + 32);
  if ( *((_DWORD *)a2 + 2) < v7 )
    goto LABEL_20;
  if ( *((_DWORD *)a2 + 2) > v7 )
    goto LABEL_7;
  if ( v3 == (const char *)v4 )
    return nullptr;
LABEL_13:
  if ( !a3 )
  {
    v8 = v4 + 24;
    if ( !*(_BYTE *)(v4 + 64) )
    {
      *(_BYTE *)(v4 + 64) = 1;
      goto LABEL_16;
    }
    return nullptr;
  }
  if ( a3 != 1 )
  {
    if ( !under_debugger )
      sub_37B760(50070);
    BUG();
  }
  v8 = v4 + 24;
LABEL_16:
  v3 = s1;
  if ( !*(_QWORD *)(v8 + 24) )
    return v3;
  return *(const char **)(v8 + 16);
}
