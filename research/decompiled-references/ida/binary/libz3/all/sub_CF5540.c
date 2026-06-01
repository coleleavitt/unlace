void __fastcall sub_CF5540(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  _BYTE v3[32]; // [rsp+8h] [rbp-20h] BYREF

  sub_1863170(a1 + 112, a2);
  sub_14B5FE0(a1 + 24, a2);
  sub_17F9A60(v3, "tactic");
  v2 = sub_1859980(a1 + 112, "propagate_values.max_rounds", v3, 4);
  *(_DWORD *)(a1 + 100) = sub_1859960(a1 + 112, "max_rounds", v2);
  sub_18572D0(v3);
}

