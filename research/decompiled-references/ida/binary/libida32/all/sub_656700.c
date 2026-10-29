int __fastcall sub_656700(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  int result; // eax
  const char *v5; // rdi
  const char *v6; // rsi

  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    return -1;
  if ( *(_DWORD *)a2 < *(_DWORD *)a1 )
    return 1;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a2 + 4);
  if ( v2 < v3 )
    return -1;
  if ( v3 < v2 )
    return 1;
  result = strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8));
  if ( !result )
  {
    result = strcmp(*(const char **)(a1 + 16), *(const char **)(a2 + 16));
    if ( !result )
    {
      v5 = *(const char **)(a1 + 24);
      v6 = *(const char **)(a2 + 24);
      if ( !v5 )
        return -(v6 != nullptr);
      if ( v6 )
        return strcmp(v5, v6);
      return 1;
    }
  }
  return result;
}

