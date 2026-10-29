void __fastcall sub_1046B80(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // rax

  sub_102D220(a1, a2, a3);
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 512) = a1 + 528;
  *(_QWORD *)(a1 + 544) = a1 + 560;
  *(_BYTE *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_BYTE *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_BYTE *)(a1 + 585) = 0;
  *(_WORD *)(a1 + 18) = 4112;
  v3 = sub_21F9090();
  *(_WORD *)(a1 + 24) = -32640;
  *(_QWORD *)(a1 + 88) = v3;
  *(_QWORD *)(a1 + 112) = sub_21F90C0();
  *(_QWORD *)(a1 + 152) = 0x600000005LL;
  *(_QWORD *)(a1 + 328) = "_mcount";
  *(_BYTE *)(a1 + 393) |= 4u;
  *(_WORD *)(a1 + 62) = 128;
  *(_WORD *)(a1 + 8) = 16448;
  *(_WORD *)(a1 + 30) = 16448;
  *(_BYTE *)(a1 + 279) = 1;
  *(_BYTE *)(a1 + 285) = 1;
  *(_QWORD *)a1 = &off_2C07180;
  *(_DWORD *)(a1 + 168) = 7;
  *(_DWORD *)(a1 + 140) = 7;
  sub_102D780((_QWORD *)a1, "e-m:e-p:64:64-i64:64-i128:128-n32:64-S128", 41, (__int64)&byte_22F0C30);
}
