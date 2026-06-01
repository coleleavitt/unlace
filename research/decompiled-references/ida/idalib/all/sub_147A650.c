__int64 __fastcall sub_147A650(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  v4 = *(_QWORD *)(a2 + 160);
  *(_DWORD *)(a1 + 96) = a4;
  *(_QWORD *)(a1 + 88) = v4;
  *(_QWORD *)(a1 + 128) = a1 + 144;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 136) = 0x400000000LL;
  *(_BYTE *)(a1 + 720) = (((*(_DWORD *)a2 >> 12) & 0x7F) == 69) | *(_BYTE *)(a1 + 720) & 0xFE;
  *(_WORD *)(a1 + 720) &= 0xFC01u;
  v5 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 736) = a1 + 752;
  *(_QWORD *)(a1 + 768) = v5;
  *(_QWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 744) = 0x200000000LL;
  *(_QWORD *)(a1 + 776) = a1 + 792;
  *(_QWORD *)(a1 + 784) = 0x200000000LL;
  *(_QWORD *)(a1 + 808) = a3;
  *(_QWORD *)(a1 + 816) = 0;
  *(_QWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 840) = 0;
  *(_QWORD *)(a1 + 848) = 0;
  *(_QWORD *)(a1 + 2648) = 0;
  return 0x200000000LL;
}
