int __fastcall sub_673970(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  const char *v6; // rax
  const char *v8; // rdx
  int result; // eax
  const char *v10; // rdi
  const char *v11; // rsi

  if ( *(_DWORD *)a2 > *(_DWORD *)a1 )
    return -1;
  if ( *(_DWORD *)a2 < *(_DWORD *)a1 )
    return 1;
  v6 = *(const char **)(a1 + 8);
  v8 = *(const char **)(a2 + 8);
  if ( !v6 )
    return -(v8 != nullptr);
  if ( !v8 )
    return 1;
  if ( a3 )
    result = sub_497DA0(a3, v6, v8, a4, a5);
  else
    result = strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8));
  if ( !result )
  {
    v10 = *(const char **)(a1 + 16);
    v11 = *(const char **)(a2 + 16);
    if ( !v10 )
      return -(v11 != nullptr);
    if ( v11 )
      return strcmp(v10, v11);
    return 1;
  }
  return result;
}
