__int64 __fastcall sub_77D4A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax

  v2 = sub_7943D0(104, a1, a2, 0);
  *(_OWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = off_49F5208;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x602900000000LL;
  v3 = sub_799DF0(41);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(41);
  *(_QWORD *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 72) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)v2 = &off_47D9CC0;
  *(_QWORD *)(v2 + 80) = v2;
  *(_QWORD *)(v2 + 88) = 0;
  *(_QWORD *)(v2 + 96) = 1536;
  *(_OWORD *)(v2 + 40) = 0;
  return v2;
}

