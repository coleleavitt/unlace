__int64 __fastcall sub_783140(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int16 v4; // ax

  v3 = sub_7943D0(48, a1, a2, (unsigned int)(a3 + 1));
  *(_OWORD *)(v3 + 8) = 0;
  *(_QWORD *)v3 = off_49F5208;
  *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 24) & 0xFFFF000000000000LL | 0x600A00000000LL;
  v4 = sub_799DF0(10);
  *(_BYTE *)(v3 + 32) &= 0xF8u;
  *(_WORD *)(v3 + 30) = v4 & 0x3FFF | *(_WORD *)(v3 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(10);
  *(_QWORD *)(v3 + 40) = 0;
  *(_QWORD *)v3 = &off_47DA0C8;
  return v3;
}

