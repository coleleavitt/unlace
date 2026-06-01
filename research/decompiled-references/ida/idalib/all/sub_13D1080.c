__int64 __fastcall sub_13D1080(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  char v7; // al

  *(_BYTE *)(a1 + 26) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 80;
  *(_QWORD *)(a1 + 72) = 0x400000000LL;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_WORD *)(a1 + 24) = 0;
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)a1 = off_2BB2738;
  *(_DWORD *)(a1 + 128) = a2;
  *(_QWORD *)(a1 + 136) = a3;
  v7 = *(_BYTE *)(a3 + 3);
  *(_BYTE *)(a1 + 34) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 112) = a4;
  *(_BYTE *)(a1 + 144) = (v7 & 2) != 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_BYTE *)(a1 + 164) = a7;
  *(_QWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 152) = a5;
  *(_QWORD *)(a1 + 120) = a6;
  if ( a4 == a5 )
  {
    if ( (unsigned __int64)(a6 - a5) > 2 && *(_WORD *)a5 == 0xBBEF && *(_BYTE *)(a5 + 2) == 0xBF )
      a5 += 3;
    *(_QWORD *)(a1 + 152) = a5;
  }
  *(_BYTE *)(a1 + 26) = 1;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 160) = 257;
  *(_WORD *)(a1 + 145) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  return 0;
}
