char *__fastcall sub_9A980(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 i; // rcx
  char *result; // rax
  __int64 v6; // rdx

  if ( !a1 || a2 <= 0 )
    return "";
  v3 = a1;
  for ( i = 0; i < a2; ++i )
  {
    if ( *(_DWORD *)v3 == a3 )
      return *(char **)(v3 + 8);
    v3 += 16;
  }
  result = "";
  v6 = a1 + 16 * a2 - 16;
  if ( !*(_DWORD *)v6 )
    return *(char **)(v6 + 8);
  return result;
}

