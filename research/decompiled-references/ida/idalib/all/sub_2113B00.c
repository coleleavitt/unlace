__int64 __fastcall sub_2113B00(__int64 a1, int a2, __int64 a3, __int64 a4, char a5, char a6, __int64 a7)
{
  char v7; // al

  *(_QWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)a1 = &off_2C73050;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 16) = a7;
  v7 = *(_BYTE *)(a1 + 48);
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 152) = a3;
  *(_QWORD *)(a1 + 160) = a4;
  *(_DWORD *)(a1 + 168) = a2;
  *(_BYTE *)(a1 + 48) = (16 * a6) & 0x10 | (8 * a5) & 8 | v7 & 0xC0;
  *(_QWORD *)(a1 + 56) = a1 + 72;
  *(_QWORD *)(a1 + 96) = a1 + 120;
  *(_QWORD *)(a1 + 120) = a1 + 136;
  *(_QWORD *)(a1 + 136) = a1 + 152;
  *(_QWORD *)(a1 + 64) = 0x100000001LL;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 8) = a1 + 80;
  return a1 + 80;
}
