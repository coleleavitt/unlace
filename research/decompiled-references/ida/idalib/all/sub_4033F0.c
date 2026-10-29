int __fastcall sub_4033F0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  const char *v4; // rsi
  int result; // eax
  const char *v6; // rsi
  const char **v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  const char **v10; // rbx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2[6] )
  {
    v4 = (const char *)a2[5];
    if ( !v3 )
    {
      result = strcmp(haystack, v4);
      if ( result )
        return result;
      goto LABEL_4;
    }
  }
  else
  {
    v4 = haystack;
    if ( !v3 )
      goto LABEL_4;
  }
  result = strcmp(*(const char **)(a1 + 40), v4);
  if ( result )
    return result;
LABEL_4:
  if ( a2[9] <= 1u )
  {
    v8 = a2[3];
    if ( *(_QWORD *)(a1 + 72) > 1u )
    {
      v7 = (const char **)(a1 + 64);
      v6 = haystack;
      if ( v8 )
        v6 = (const char *)a2[2];
      return strcmp(*v7, v6);
    }
    v9 = *(_QWORD *)(a1 + 24);
    v7 = (const char **)(a1 + 16);
    v6 = haystack;
    if ( !v8 )
      goto LABEL_15;
    v10 = (const char **)(a2 + 2);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 72) > 1u )
    {
      v6 = (const char *)a2[8];
      v7 = (const char **)(a1 + 64);
      return strcmp(*v7, v6);
    }
    v9 = *(_QWORD *)(a1 + 24);
    v10 = (const char **)(a2 + 8);
    v7 = (const char **)(a1 + 16);
  }
  v6 = *v10;
LABEL_15:
  if ( v9 )
    return strcmp(*v7, v6);
  return strcmp(haystack, v6);
}
