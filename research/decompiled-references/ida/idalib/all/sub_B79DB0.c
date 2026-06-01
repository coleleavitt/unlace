__int64 __fastcall sub_B79DB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  __int16 v4; // ax

  v2 = sub_B8FF70(128, a1, a2, 0);
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = off_2C02B30;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x600800000000LL;
  v3 = sub_B8C0C0(8);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(8);
  sub_B8E080(v2 + 40, 8);
  *(_QWORD *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_OWORD *)(v2 + 88) = 0;
  *(_QWORD *)v2 = &off_2B4AA90;
  v4 = *(_WORD *)(v2 + 49);
  *(_QWORD *)(v2 + 104) = 0;
  v4 &= 0xF81Fu;
  *(_QWORD *)(v2 + 112) = 0;
  LOBYTE(v4) = v4 | 0x80;
  *(_QWORD *)(v2 + 120) = 0;
  *(_WORD *)(v2 + 49) = v4;
  return v2;
}
