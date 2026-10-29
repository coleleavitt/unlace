unsigned __int64 __fastcall sub_19F5210(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 result; // rax

  v2 = sub_B8E650(a2);
  v7 = sub_B94670(v2, a1, v3, v4, v5, v6);
  if ( !v7 )
    return 0;
  v8 = v7;
  v9 = 0;
  while ( 1 )
  {
    v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    result = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v8 & 4) == 0 )
      break;
    if ( !v10 )
      return v9;
    if ( (*(_BYTE *)(*(_QWORD *)v10 + 28LL) & 0x7Fu) - 59 <= 2 )
      v9 = *(_QWORD *)v10;
    v8 = *(_QWORD *)(v10 + 8);
    if ( !v8 )
      return v9;
  }
  if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 59 >= 3 )
    return v9;
  return result;
}
