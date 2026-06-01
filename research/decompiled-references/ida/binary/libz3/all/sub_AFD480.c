void __fastcall sub_AFD480(__int64 a1, __int64 a2)
{
  _BYTE v2[32]; // [rsp+8h] [rbp-20h] BYREF

  sub_E5E9C0(a1, a2);
  sub_15B6B30(a1 + 120, a1 + 80);
  sub_8E3AA0((_QWORD *)(a1 + 880));
  sub_17F9A60(v2, "smt");
  *(_BYTE *)(a1 + 905) = sub_1859630(a1 + 80, "core.extend_patterns", v2, 0);
  *(_DWORD *)(a1 + 908) = sub_1859980(a1 + 80, "core.extend_patterns.max_distance", v2, 0xFFFFFFFFLL);
  *(_BYTE *)(a1 + 912) = sub_1859630(a1 + 80, "core.extend_nonlocal_patterns", v2, 0);
  sub_18572D0(v2);
}

