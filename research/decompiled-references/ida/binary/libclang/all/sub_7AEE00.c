__int64 __fastcall sub_7AEE00(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  unsigned __int64 v4; // rax

  v2 = (__int64)sub_7943D0(112, (_QWORD *)a1, a2, 0);
  *(_OWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = off_49F5208;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x601600000000LL;
  v3 = sub_799DF0(0x16u);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(22);
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)v2 = &off_47D9B58;
  sub_79B760(v2 + 48, 22);
  *(_BYTE *)(v2 + 57) &= 0x9Fu;
  *(_QWORD *)(v2 + 88) = v2;
  v4 = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 80) = v4;
  *(_QWORD *)v2 = &off_49F56E8;
  *(_QWORD *)(v2 + 104) = 0;
  if ( v4 > 3 )
    *(_QWORD *)(v2 + 80) = sub_6D4E90((_QWORD *)(a1 & 0xFFFFFFFFFFFFFFFCLL), v2) | 1;
  else
    *(_QWORD *)(v2 + 80) = v2 & 0xFFFFFFFFFFFFFFFALL | 1;
  return v2;
}

