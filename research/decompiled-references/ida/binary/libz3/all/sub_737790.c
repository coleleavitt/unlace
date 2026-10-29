void __fastcall sub_737790(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _BYTE v3[32]; // [rsp+8h] [rbp-20h] BYREF

  sub_1863170(a1 + 24, a2);
  v2 = *(_QWORD *)(a1 + 16);
  sub_17F9A60(v3, "rewriter");
  *(_DWORD *)(v2 + 544) = sub_1859980(a1 + 24, "bv_ineq_consistency_test_max", v3, 0);
  *(_QWORD *)(v2 + 776) = (unsigned int)sub_1859980(a1 + 24, "max_memory", v3, 0xFFFFFFFFLL);
  *(_QWORD *)(v2 + 768) = (unsigned int)sub_1859980(a1 + 24, "max_steps", v3, 0xFFFFFFFFLL);
  sub_18572D0(v3);
}

