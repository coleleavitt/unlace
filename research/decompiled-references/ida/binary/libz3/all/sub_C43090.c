void __fastcall sub_C43090(__int64 a1, __int64 a2)
{
  _BYTE v2[32]; // [rsp+8h] [rbp-20h] BYREF

  sub_1863170(a1 + 664, a2);
  sub_17F9A60(v2, "tactic");
  *(_BYTE *)(a1 + 768) = sub_1859610(a1 + 664, "compile_equality", 1);
  *(_DWORD *)(a1 + 772) = sub_1859980(a2, "lia2card.max_range", v2, 100);
  *(_DWORD *)(a1 + 776) = sub_1859980(a2, "lia2card.max_ite_nesting", v2, 4);
  sub_18572D0(v2);
}

