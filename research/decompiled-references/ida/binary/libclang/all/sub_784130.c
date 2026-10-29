__int64 __fastcall sub_784130(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  __int16 v4; // ax

  v2 = sub_7943D0(128, a1, a2, 0);
  *(_OWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = off_49F5208;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x600800000000LL;
  v3 = sub_799DF0(8);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(8);
  sub_79B760(v2 + 40, 8);
  *(_QWORD *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)v2 = &off_47D9F98;
  v4 = *(_WORD *)(v2 + 49);
  *(_QWORD *)(v2 + 112) = 0;
  v4 &= 0xF81Fu;
  *(_QWORD *)(v2 + 120) = 0;
  LOBYTE(v4) = v4 | 0x80;
  *(_OWORD *)(v2 + 88) = 0;
  *(_WORD *)(v2 + 49) = v4;
  return v2;
}

