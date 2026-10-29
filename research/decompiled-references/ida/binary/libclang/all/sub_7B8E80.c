unsigned __int64 __fastcall sub_7B8E80(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int16 v14; // ax

  v6 = sub_79C190(a1 + 48);
  if ( !v6 )
  {
LABEL_13:
    v9 = 0;
LABEL_14:
    if ( a3 )
      return 0;
    return v9;
  }
  v7 = v6;
  while ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0xC )
  {
    v8 = *(_QWORD *)(v7 + 8);
    v7 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8 <= 7 )
      goto LABEL_13;
  }
  v9 = 0;
LABEL_6:
  v10 = *(_QWORD *)(v7 + 48);
  v11 = *(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v10 + 40) & 7) != 0 )
    v11 = 0;
  if ( a2 != v11 )
  {
LABEL_11:
    while ( 1 )
    {
      v12 = *(_QWORD *)(v7 + 8);
      v7 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v12 <= 7 )
        goto LABEL_14;
      if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0xC )
        goto LABEL_6;
    }
  }
  v14 = *(_WORD *)(v10 + 72) & 0x4000;
  if ( a3 )
  {
    if ( a3 == 2 )
    {
      if ( !v14 )
        goto LABEL_11;
      return v7;
    }
    if ( a3 != 1 )
    {
      if ( v14 )
        v9 = v7;
      goto LABEL_11;
    }
  }
  v9 = v7;
  if ( v14 )
    goto LABEL_11;
  return v7;
}

