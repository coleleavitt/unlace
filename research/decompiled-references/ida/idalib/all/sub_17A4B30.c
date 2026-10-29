__int64 __fastcall sub_17A4B30(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  __int64 v7; // r13
  __int64 v8; // r12
  unsigned __int64 v9; // rdi

  v4 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v4 = *(_QWORD *)(v4 + 8);
  if ( !(unsigned __int8)sub_B8E180(v4) )
    return 1;
  if ( (*(_WORD *)(a2 + 30) & 0x180) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v5 = *(_QWORD *)v5;
    if ( (*(_BYTE *)(v5 + 8) & 0x7F) == 0x18 || (*(_BYTE *)(v5 + 8) & 0x7F) == 0 )
      return 0;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 26 > 0x1A || (*(_BYTE *)(a3 + 28) & 0x7Fu) - 26 > 0x1A )
    return 1;
  v7 = *(_QWORD *)(a3 + 48);
  v8 = *(_QWORD *)(a2 + 48);
  v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v9 = *(_QWORD *)(v9 + 8);
  if ( !(unsigned __int8)sub_B8E180(v9) )
    return 1;
  if ( (*(_BYTE *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 || (*(_WORD *)(a2 + 30) & 0x980) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      return (((unsigned __int16)(*(_WORD *)(a3 + 30) & 0x3FFF) >> 11) ^ 1) & 1;
    return 1;
  }
  return 0;
}
