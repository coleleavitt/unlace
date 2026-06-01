__int64 __fastcall sub_78A230(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  unsigned __int64 v4; // rax
  int v5; // eax

  v2 = sub_7943D0(160, a1, a2, 0);
  *(_OWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = off_49F5208;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x603C00000000LL;
  v3 = sub_799DF0(60);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(60);
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  *(_QWORD *)v2 = &off_47DA4B0;
  sub_79B760(v2 + 64, 60);
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  v4 = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v2 + 104) = v2;
  *(_QWORD *)(v2 + 96) = v4;
  *(_QWORD *)v2 = &off_47D9E28;
  if ( v4 > 3 )
    *(_QWORD *)(v2 + 96) = sub_6D4E90((_QWORD *)(a1 & 0xFFFFFFFFFFFFFFFCLL), v2) | 1;
  else
    *(_QWORD *)(v2 + 96) = v2 & 0xFFFFFFFFFFFFFFFALL | 1;
  *(_WORD *)(v2 + 76) &= 0xF800u;
  *(_QWORD *)(v2 + 144) = 0;
  *(_OWORD *)(v2 + 128) = 0;
  *(_QWORD *)v2 = &off_47D9EA0;
  v5 = *(_DWORD *)(v2 + 72);
  *(_DWORD *)(v2 + 152) = 0;
  v5 &= 0x101FFFu;
  BYTE1(v5) |= 0x80u;
  *(_DWORD *)(v2 + 72) = v5;
  *(_BYTE *)(v2 + 74) = (16 * (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 18LL) >> 7)) | *(_BYTE *)(v2 + 74) & 0xEF;
  return v2;
}

