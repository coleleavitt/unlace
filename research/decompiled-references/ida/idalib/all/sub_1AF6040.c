__int64 __fastcall sub_1AF6040(__int64 a1, __int64 a2)
{
  sub_168B6B0((_QWORD *)a1, a2);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 256) = a1 + 272;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 432) = a1 + 448;
  *(_QWORD *)(a1 + 24) = 0x400000000LL;
  *(_QWORD *)(a1 + 264) = 0x400000000LL;
  *(_QWORD *)(a1 + 440) = 0x400000000LL;
  *(_QWORD *)(a1 + 480) = a1 + 496;
  *(_QWORD *)(a1 + 488) = 0x400000000LL;
  *(_DWORD *)(a1 + 528) = -1;
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  return 0x400000000LL;
}
