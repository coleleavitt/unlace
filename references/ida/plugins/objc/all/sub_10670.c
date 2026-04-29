__int64 __fastcall sub_10670(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // r13
  const char *v6; // rsi
  __int64 result; // rax
  const char *v8; // rsi
  int v9; // edx
  int v10; // edx

  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(a3 + 48) > 1u )
  {
    v6 = *(const char **)(a3 + 40);
    if ( v5 )
    {
      if ( !strcmp(*(const char **)v4, v6) )
        goto LABEL_4;
    }
    else if ( !strcmp(src, v6) )
    {
      goto LABEL_4;
    }
  }
  if ( *(_QWORD *)(a3 + 8) )
  {
    v8 = *(const char **)a3;
    if ( !v5 )
    {
      v10 = strcmp(src, v8);
      result = 0;
      if ( v10 )
        return result;
      goto LABEL_4;
    }
    goto LABEL_8;
  }
  v8 = src;
  if ( v5 )
  {
LABEL_8:
    v9 = strcmp(*(const char **)v4, v8);
    result = 0;
    if ( v9 )
      return result;
  }
LABEL_4:
  result = 0xFFFFFFFFLL;
  if ( *(_BYTE *)(a3 + 32) )
  {
    copy_tinfo_t();
    return 1;
  }
  return result;
}
