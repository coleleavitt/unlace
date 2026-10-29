bool __fastcall sub_395AF0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  const char *v5; // rsi
  int v6; // edx
  bool result; // al
  __int64 v8; // rax
  const char *v9; // rsi
  const char *v10; // rdi
  int v11; // edx
  _BOOL4 v12; // eax
  int v13; // edx

  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a2 + 8) )
  {
    v5 = *(const char **)a2;
    if ( !v4 )
    {
      v6 = strcmp(haystack, v5);
      result = 0;
      if ( v6 )
        return result;
      goto LABEL_6;
    }
  }
  else
  {
    v5 = haystack;
    if ( !v4 )
      goto LABEL_6;
  }
  v13 = strcmp(*(const char **)a1, v5);
  result = 0;
  if ( v13 )
    return result;
LABEL_6:
  result = 0;
  if ( *(_WORD *)(a1 + 24) != *(_WORD *)(a2 + 24)
    || *(_BYTE *)(a1 + 26) != *(_BYTE *)(a2 + 26)
    || *(_BYTE *)(a1 + 32) != *(_BYTE *)(a2 + 32) )
  {
    return result;
  }
  v8 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(a2 + 48) )
  {
    v9 = *(const char **)(a2 + 40);
    v10 = haystack;
    if ( !v8 )
      goto LABEL_11;
    goto LABEL_18;
  }
  v9 = haystack;
  if ( v8 )
  {
LABEL_18:
    v10 = *(const char **)(a1 + 40);
LABEL_11:
    v11 = strcmp(v10, v9);
    result = 0;
    if ( v11 )
      return result;
  }
  v12 = *(_DWORD *)(a1 + 88) != *(_DWORD *)(a2 + 88) || *(_WORD *)(a1 + 92) != *(_WORD *)(a2 + 92);
  return !v12;
}
