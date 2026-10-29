__int64 __fastcall sub_782C90(__int64 a1)
{
  __int64 v1; // rbx
  __int16 v2; // ax

  v1 = sub_79A610(104, a1, 0, 0);
  *(_OWORD *)(v1 + 8) = 0;
  *(_QWORD *)v1 = off_49F5208;
  *(_QWORD *)(v1 + 24) = *(_QWORD *)(v1 + 24) & 0xFFFF000000000000LL | 0x600000000000LL;
  v2 = sub_799DF0(0);
  *(_BYTE *)(v1 + 32) &= 0xF8u;
  *(_WORD *)(v1 + 30) = v2 & 0x3FFF | *(_WORD *)(v1 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(0);
  sub_79B760(v1 + 40, 0);
  *(_QWORD *)(v1 + 80) = v1;
  *(_QWORD *)(v1 + 88) = a1;
  *(_QWORD *)(v1 + 96) = 0;
  *(_QWORD *)(v1 + 72) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)v1 = &off_47D9FF8;
  return v1;
}

