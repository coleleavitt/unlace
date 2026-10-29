void __fastcall sub_38C7D0(__int64 a1, __int64 a2)
{
  _BYTE v2[32]; // [rsp+8h] [rbp-20h] BYREF

  sub_17F9A60(v2, "ackermannization");
  *(_BYTE *)(a1 + 40) = sub_1859630(a2, "sat_backend", v2, 0);
  *(_BYTE *)(a1 + 41) = sub_1859630(a2, "inc_sat_backend", v2, 0);
  sub_18572D0(v2);
}

