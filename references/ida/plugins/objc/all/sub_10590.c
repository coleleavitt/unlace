__int64 __fastcall sub_10590(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  const char *v6; // rsi
  const char *v7; // r13
  int v8; // edx
  __int64 v9; // rax

  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)(v4 + 8) )
  {
    v6 = *(const char **)v4;
    v7 = src;
    if ( !v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = src;
    if ( !v5 )
    {
      v9 = *(_QWORD *)(a1 + 32);
      goto LABEL_10;
    }
  }
  v7 = *(const char **)a3;
LABEL_3:
  v8 = strcmp(v7, v6);
  v9 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    if ( *(_BYTE *)(v9 + 2216) )
      sub_EC40();
    return 0;
  }
LABEL_10:
  if ( *(_BYTE *)(v9 + 2216) )
    sub_EC40();
  **(_QWORD **)(a1 + 40) = *(_QWORD *)(a3 + 32);
  return 1;
}
