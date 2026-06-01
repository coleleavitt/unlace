bool __fastcall sub_44F4B0(__int64 a1, __int64 a2)
{
  int v3; // edx
  bool result; // al
  __int64 v5; // rax
  const char *v6; // rsi
  int v7; // edx
  int v8; // edx
  int v9; // edx

  v3 = compare_bpt_locs(a1 + 32, a2 + 32);
  result = 0;
  if ( v3 )
    return result;
  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a2 + 16) )
  {
    v6 = *(const char **)(a2 + 8);
    if ( !v5 )
    {
      v8 = strcmp(haystack, v6);
      result = 0;
      if ( v8 )
        return result;
      goto LABEL_8;
    }
    goto LABEL_4;
  }
  v6 = haystack;
  if ( v5 )
  {
LABEL_4:
    v7 = strcmp(*(const char **)(a1 + 8), v6);
    result = 0;
    if ( v7 )
      return result;
  }
LABEL_8:
  v9 = *(_DWORD *)(a1 + 56);
  result = 0;
  if ( v9 == *(_DWORD *)(a2 + 56) && *(_DWORD *)(a1 + 64) == *(_DWORD *)(a2 + 64) )
  {
    result = 1;
    if ( v9 != 4 )
      return *(_DWORD *)(a2 + 72) == *(_DWORD *)(a1 + 72);
  }
  return result;
}

