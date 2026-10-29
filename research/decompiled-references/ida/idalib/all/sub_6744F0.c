int __fastcall sub_6744F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  int result; // eax
  const char *v5; // rdi
  const char *v6; // rsi

  if ( *(_QWORD *)a1 < *(_QWORD *)a2 )
    return -1;
  if ( *(_QWORD *)a2 < *(_QWORD *)a1 )
    return 1;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v2 < v3 )
    return -1;
  if ( v3 < v2 )
    return 1;
  result = strcmp(*(const char **)(a1 + 16), *(const char **)(a2 + 16));
  if ( !result )
  {
    result = strcmp(*(const char **)(a1 + 24), *(const char **)(a2 + 24));
    if ( !result )
    {
      v5 = *(const char **)(a1 + 32);
      v6 = *(const char **)(a2 + 32);
      if ( !v5 )
        return -(v6 != nullptr);
      if ( v6 )
        return strcmp(v5, v6);
      return 1;
    }
  }
  return result;
}
