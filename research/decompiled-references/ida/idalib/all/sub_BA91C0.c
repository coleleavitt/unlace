__int64 __fastcall sub_BA91C0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int16 v12; // cx

  result = sub_B8E970(a1 + 48);
  if ( !result )
  {
LABEL_6:
    v8 = 0;
LABEL_7:
    result = 0;
    if ( !a3 )
      return v8;
    return result;
  }
  if ( (*(_BYTE *)(result + 28) & 0x7F) != 0xE )
  {
    do
    {
      v7 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
      result = v7;
      if ( !v7 )
        goto LABEL_6;
    }
    while ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0xE );
  }
  v8 = 0;
LABEL_11:
  v9 = *(_QWORD *)(result + 48);
  v10 = *(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v9 + 40) & 7) != 0 )
    v10 = 0;
  if ( v10 != a2 )
  {
LABEL_16:
    while ( 1 )
    {
      v11 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
      result = v11;
      if ( !v11 )
        goto LABEL_7;
      if ( (*(_BYTE *)(v11 + 28) & 0x7F) == 0xE )
        goto LABEL_11;
    }
  }
  v12 = *(_WORD *)(v9 + 72) & 0x4000;
  if ( a3 )
  {
    if ( a3 == 2 )
    {
      if ( !v12 )
        goto LABEL_16;
      return result;
    }
    if ( a3 != 1 )
    {
      if ( v12 )
        v8 = result;
      goto LABEL_16;
    }
  }
  if ( v12 )
  {
    v8 = result;
    goto LABEL_16;
  }
  return result;
}
