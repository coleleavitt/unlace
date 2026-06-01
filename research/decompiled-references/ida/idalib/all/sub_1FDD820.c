__int64 __fastcall sub_1FDD820(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  *(_QWORD *)(a1 + 128) = a3;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x200000000LL;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  *(_QWORD *)(a1 + 40) = 0x200000000LL;
  *(_QWORD *)(a1 + 72) = 0x200000000LL;
  *(_QWORD *)(a1 + 64) = a1 + 80;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = a2;
  ++*(_DWORD *)(a3 + 8);
  *(_QWORD *)(a1 + 176) = a1 + 192;
  *(_QWORD *)(a1 + 136) = a4;
  *(_QWORD *)(a1 + 144) = a5;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 184) = 0x400000000LL;
  *(_QWORD *)(a1 + 224) = a1 + 240;
  *(_QWORD *)(a1 + 232) = 0x400000000LL;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  return 0x400000000LL;
}
