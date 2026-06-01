int __fastcall sub_3F0360(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  const char *v4; // rsi
  int result; // eax
  const char *v6; // rsi
  const char **v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  const char **v10; // rbx

  v3 = *(_QWORD *)(a1 + 40);
  if ( a2[5] )
  {
    v4 = (const char *)a2[4];
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
  result = strcmp(*(const char **)(a1 + 32), v4);
  if ( result )
    return result;
LABEL_4:
  if ( a2[8] <= 1u )
  {
    v8 = a2[2];
    if ( *(_QWORD *)(a1 + 64) > 1u )
    {
      v7 = (const char **)(a1 + 56);
      v6 = haystack;
      if ( v8 )
        v6 = (const char *)a2[1];
      return strcmp(*v7, v6);
    }
    v9 = *(_QWORD *)(a1 + 16);
    v7 = (const char **)(a1 + 8);
    v6 = haystack;
    if ( !v8 )
      goto LABEL_15;
    v10 = (const char **)(a2 + 1);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 64) > 1u )
    {
      v6 = (const char *)a2[7];
      v7 = (const char **)(a1 + 56);
      return strcmp(*v7, v6);
    }
    v9 = *(_QWORD *)(a1 + 16);
    v10 = (const char **)(a2 + 7);
    v7 = (const char **)(a1 + 8);
  }
  v6 = *v10;
LABEL_15:
  if ( v9 )
    return strcmp(*v7, v6);
  return strcmp(haystack, v6);
}

