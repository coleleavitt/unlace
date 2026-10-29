__int64 __fastcall sub_785C90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax

  v2 = sub_7943D0(80, a1, a2, 0);
  *(_OWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = off_49F5208;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x600600000000LL;
  v3 = sub_799DF0(6);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(6);
  sub_79B760(v2 + 40, 6);
  *(_DWORD *)(v2 + 72) = 0;
  *(_QWORD *)v2 = &off_47DA7B0;
  return v2;
}

