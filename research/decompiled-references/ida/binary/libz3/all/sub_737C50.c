void __fastcall sub_737C50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v9[64]; // [rsp+18h] [rbp-40h] BYREF

  *(_QWORD *)a1 = &off_1C53F30;
  *(_DWORD *)(a1 + 8) = 0;
  sub_1858590(a1 + 24, a3);
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  v5 = sub_186B270(0x318u);
  sub_738AE0(v5, a2, 0, v5 + 536);
  *(_QWORD *)(v5 + 536) = a2;
  *(_QWORD *)v5 = &off_1C53F10;
  *(_WORD *)(v5 + 564) = 0;
  *(_QWORD *)(v5 + 624) = v5 + 640;
  *(_QWORD *)(v5 + 552) = a2;
  *(_DWORD *)(v5 + 560) = 256;
  *(_DWORD *)(v5 + 580) = 0;
  *(_QWORD *)(v5 + 632) = 0x1000000000LL;
  *(_OWORD *)(v5 + 592) = 0;
  *(_OWORD *)(v5 + 608) = 0;
  v8 = 0;
  sub_14DC230(v5 + 552, &v8);
  sub_18572D0(&v8);
  *(_QWORD *)(v5 + 784) = a1 + 32;
  v8 = a3;
  sub_17F9A60(v9, "rewriter");
  *(_DWORD *)(v5 + 544) = sub_1859980(v8, "bv_ineq_consistency_test_max", v9, 0);
  v6 = sub_1859980(v8, "max_memory", v9, 0xFFFFFFFFLL);
  v7 = v8;
  *(_QWORD *)(v5 + 776) = v6;
  *(_QWORD *)(v5 + 768) = (unsigned int)sub_1859980(v7, "max_steps", v9, 0xFFFFFFFFLL);
  sub_18572D0(v9);
  *(_QWORD *)(a1 + 16) = v5;
}

