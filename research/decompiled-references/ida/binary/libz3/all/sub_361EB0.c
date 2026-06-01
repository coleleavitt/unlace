void __fastcall sub_361EB0(__int64 a1, __int64 a2)
{
  _BYTE v2[32]; // [rsp+8h] [rbp-20h] BYREF

  sub_17F9A60(v2, "opt");
  *(_BYTE *)(a1 + 104) = sub_1859630(a2, "maxres.hill_climb", v2, 1);
  *(_DWORD *)(a1 + 108) = sub_1859980(a2, "maxres.max_num_cores", v2, 200);
  *(_DWORD *)(a1 + 112) = sub_1859980(a2, "maxres.max_core_size", v2, 3);
  *(_BYTE *)(a1 + 116) = sub_1859630(a2, "enable_core_rotate", v2, 0);
  sub_18572D0(v2);
}

