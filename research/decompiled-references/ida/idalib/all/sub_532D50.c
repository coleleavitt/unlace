__int64 __fastcall sub_532D50(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  const char *v5; // rsi
  const char *v6; // rdi

  result = 0;
  if ( a2 && *(_QWORD *)(a1 + 8) > 1u )
  {
    v3 = a1 + 48 * a2;
    v4 = a1 + 48;
    if ( 48 * a2 == 48 )
      return 1;
    while ( 1 )
    {
      if ( *(_QWORD *)(v4 + 8) )
      {
        v5 = *(const char **)v4;
        v6 = haystack;
        if ( !*(_QWORD *)(v4 - 40) )
          goto LABEL_6;
      }
      else
      {
        if ( !*(_QWORD *)(v4 - 40) )
          return 0;
        v5 = haystack;
      }
      v6 = *(const char **)(v4 - 48);
LABEL_6:
      if ( strcmp(v6, v5) >= 0 )
        return 0;
      v4 += 48;
      if ( v3 == v4 )
        return 1;
    }
  }
  return result;
}
