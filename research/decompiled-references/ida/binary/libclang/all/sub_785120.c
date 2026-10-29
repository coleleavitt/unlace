__int64 __fastcall sub_785120(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax

  v2 = sub_7943D0(96, a1, a2, 0);
  *(_OWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = off_49F5208;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x603F00000000LL;
  v3 = sub_799DF0(63);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(63);
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  *(_QWORD *)v2 = &off_47DA5A0;
  *(_QWORD *)(v2 + 64) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v2 + 72) = v2;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  return v2;
}

