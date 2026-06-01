int __fastcall sub_5A79F0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  const char *v4; // rsi
  int v5; // eax
  int result; // eax
  int v7; // eax
  bool v8; // cc

  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a2 + 8) )
  {
    v4 = *(const char **)a2;
    if ( !v3 )
    {
      v5 = *(unsigned __int8 *)v4;
      if ( (_BYTE)v5 )
        return -v5;
      goto LABEL_9;
    }
  }
  else
  {
    v4 = haystack;
    if ( !v3 )
    {
LABEL_9:
      v7 = *(_DWORD *)(a2 + 24);
      v8 = *(_DWORD *)(a1 + 24) < v7;
      result = *(_DWORD *)(a1 + 24) > v7;
      if ( v8 )
        return -1;
      return result;
    }
  }
  result = strcmp(*(const char **)a1, v4);
  if ( !result && v3 == 1 )
    goto LABEL_9;
  return result;
}
