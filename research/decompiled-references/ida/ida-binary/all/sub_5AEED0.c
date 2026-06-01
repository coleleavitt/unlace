void *__fastcall sub_5AEED0(__int64 a1, _QWORD *a2, __int64 a3)
{
  *(_DWORD *)(a1 + 48) = 1048587;
  *(_WORD *)(a1 + 56) = a2[23];
  *(_WORD *)(a1 + 62) = WORD2(a2[23]);
  *(_WORD *)(a1 + 64) = WORD1(a2[23]);
  *(_DWORD *)(a1 + 68) = a2[22];
  *(_QWORD *)(a1 + 120) = a2[18];
  *(_QWORD *)(a1 + 128) = a2[19];
  *(_QWORD *)(a1 + 136) = a2[17];
  *(_QWORD *)(a1 + 144) = a2[16];
  *(_QWORD *)(a1 + 152) = a2[20];
  *(_QWORD *)(a1 + 160) = a2[15];
  *(_QWORD *)(a1 + 168) = a2[14];
  *(_QWORD *)(a1 + 176) = a2[13];
  *(_QWORD *)(a1 + 184) = a2[5];
  *(_QWORD *)(a1 + 192) = a2[6];
  *(_QWORD *)(a1 + 200) = a2[7];
  *(_QWORD *)(a1 + 208) = a2[8];
  *(_QWORD *)(a1 + 216) = a2[9];
  *(_QWORD *)(a1 + 224) = a2[10];
  *(_QWORD *)(a1 + 232) = a2[11];
  *(_QWORD *)(a1 + 240) = a2[12];
  *(_QWORD *)(a1 + 248) = a2[21];
  *(_WORD *)(a1 + 256) = *(_WORD *)a3;
  *(_WORD *)(a1 + 258) = *(_WORD *)(a3 + 2);
  *(_BYTE *)(a1 + 260) = *(_WORD *)(a3 + 4);
  *(_WORD *)(a1 + 262) = *(_WORD *)(a3 + 6);
  *(_DWORD *)(a1 + 264) = *(_QWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 272) = *(_QWORD *)(a3 + 16);
  *(_WORD *)(a1 + 268) = 0;
  *(_WORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 280) = *(_DWORD *)(a3 + 24);
  *(_DWORD *)(a1 + 284) = *(_DWORD *)(a3 + 28);
  memcpy((void *)(a1 + 288), (const void *)(a3 + 32), 0x80u);
  return memcpy((void *)(a1 + 416), (const void *)(a3 + 160), 0x100u);
}
