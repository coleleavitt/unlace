__int64 __fastcall sub_E5AF0(__int64 a1)
{
  int v2; // eax

  if ( !dbg || !(unsigned __int8)sub_E55C0(0) || dword_2515A4 > 0 && (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
    return -1;
  v2 = sub_9E0A0();
  if ( v2 <= 0 )
  {
    if ( v2 >= -1 )
      return -1;
LABEL_10:
    byte_251536 = 1;
    return -1;
  }
  if ( v2 != 1 )
    goto LABEL_10;
  return *(_QWORD *)(a1 + 8);
}

