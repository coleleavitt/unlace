__int64 __fastcall sub_784340(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int16 v5; // ax

  v4 = sub_7943D0(88, a1, a2, 8LL * a3);
  *(_OWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = off_49F5208;
  *(_QWORD *)(v4 + 24) = *(_QWORD *)(v4 + 24) & 0xFFFF000000000000LL | 0x600300000000LL;
  v5 = sub_799DF0(3);
  *(_BYTE *)(v4 + 32) &= 0xF8u;
  *(_WORD *)(v4 + 30) = v5 & 0x3FFF | *(_WORD *)(v4 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(3);
  sub_79B760(v4 + 40, 3);
  *(_DWORD *)(v4 + 72) = a3;
  *(_QWORD *)(v4 + 80) = 0;
  *(_QWORD *)v4 = &off_47DA300;
  return v4;
}

