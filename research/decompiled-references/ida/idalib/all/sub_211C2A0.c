__int64 __fastcall sub_211C2A0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = off_2C73160;
  *(_QWORD *)(a1 + 48) = a1 + 64;
  *(_QWORD *)(a1 + 56) = 0x100000000LL;
  *(_QWORD *)(a1 + 120) = a1 + 136;
  *(_WORD *)(a1 + 276) = 1;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 128) = 0x400000001LL;
  *(_QWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  return 0x400000001LL;
}
