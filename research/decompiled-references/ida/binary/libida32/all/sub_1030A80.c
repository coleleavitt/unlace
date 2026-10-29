void __fastcall sub_1030A80(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // rax
  bool v4; // zf
  void *v5[2]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+10h] [rbp-28h] BYREF

  sub_10094E0(a1, a2, a3);
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)a1 = &off_2C045B0;
  *(_QWORD *)(a1 + 512) = a1 + 528;
  *(_QWORD *)(a1 + 544) = a1 + 560;
  *(_WORD *)(a1 + 18) = 4112;
  *(_BYTE *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_BYTE *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_WORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 88) = sub_21D5350();
  *(_WORD *)(a1 + 24) = -32640;
  v3 = sub_21D5380();
  v4 = *(_BYTE *)(a1 + 40) == 0;
  *(_BYTE *)(a1 + 279) = 1;
  *(_QWORD *)(a1 + 112) = v3;
  *(_QWORD *)(a1 + 328) = "_mcount";
  *(_WORD *)(a1 + 62) = 128;
  *(_QWORD *)(a1 + 152) = 0x600000005LL;
  if ( v4 )
    *(_BYTE *)(a1 + 40) = 1;
  *(_DWORD *)(a1 + 36) = 128;
  *(_QWORD *)a1 = &off_2BDB618;
  *(_QWORD *)(a1 + 144) = 0x500000005LL;
  *(_DWORD *)(a1 + 136) = 6;
  sub_1009A40((_QWORD *)a1, "e-m:e-p:32:32-i64:64-n32-S128", 29, (__int64)&byte_22CD811);
  v5[0] = v6;
  sub_1014B80(v5, "ilp32d", (__int64)"");
  if ( !sub_990D60((__int64)v5, "ilp32d") || !sub_990D60((__int64)v5, "ilp32f") || !sub_990D60((__int64)v5, "ilp32s") )
    sub_9CAB60(a1 + 512, (__int64)v5);
  if ( v5[0] != v6 )
    operator delete(v5[0]);
}

