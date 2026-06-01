__int64 __fastcall sub_6DAAE0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax

  v2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v2 = *(_QWORD *)v2;
  if ( !v2 || (*(_BYTE *)(v2 + 8) & 0x7F) == 0 )
    return 0;
  if ( (*(_BYTE *)(v2 + 8) & 0x7Fu) - 58 <= 4 && v2 != 64 )
    return 1;
  while ( 1 )
  {
    v3 = *(_QWORD *)(sub_B8C1B0(v2) + 16);
    v2 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v3 & 4) != 0 )
      v2 = *(_QWORD *)v2;
    if ( !v2 || (*(_BYTE *)(v2 + 8) & 0x7F) == 0 )
      break;
    if ( (*(_BYTE *)(v2 + 8) & 0x7Fu) - 58 <= 4 && v2 != 64 )
      return 1;
  }
  return 0;
}
