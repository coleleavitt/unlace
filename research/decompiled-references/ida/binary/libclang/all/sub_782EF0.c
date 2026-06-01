__int64 __fastcall sub_782EF0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int16 v4; // ax

  v3 = sub_7943D0(40, a1, a2, (unsigned int)(a3 + 1));
  *(_OWORD *)(v3 + 8) = 0;
  *(_QWORD *)v3 = off_49F5208;
  *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 24) & 0xFFFF000000000000LL | 0x600B00000000LL;
  v4 = sub_799DF0(11);
  *(_BYTE *)(v3 + 32) &= 0xF8u;
  *(_WORD *)(v3 + 30) = v4 & 0x3FFF | *(_WORD *)(v3 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(11);
  *(_DWORD *)(v3 + 36) = 0;
  *(_QWORD *)v3 = &off_47DA060;
  return v3;
}

