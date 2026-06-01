unsigned __int64 __fastcall sub_18C3380(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx

  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
    return 0;
  v2 = sub_15F1640(a1, 1);
  if ( !v2 || (*(_BYTE *)(v2 + 28) & 0x7Fu) - 35 > 3 )
    return 0;
  v3 = *(_QWORD *)(sub_B8C1B0(v2 + 72) + 16);
  if ( (v3 & 4) != 0 )
    v7 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v7 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v7 )
    BUG();
  v8 = *(_QWORD *)(v7 + 64);
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 10) & 0x20) != 0 )
      return 0;
  }
  v9 = *(_QWORD *)(a2 + 40);
  result = sub_B7E900(v7 - 64, 1, v8, v4, v5, v6);
  if ( !result )
    return 0;
LABEL_10:
  while ( v9 != *(_QWORD *)(result + 40) )
  {
    result = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !result )
      return 0;
    if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 49 > 2 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
        result = v11;
        if ( !v11 )
          return 0;
        if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_10;
      }
    }
  }
  return result;
}
