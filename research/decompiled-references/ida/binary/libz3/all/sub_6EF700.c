void __fastcall sub_6EF700(_QWORD *a1, __int64 a2)
{
  _BYTE *v2; // rbp
  __int64 v3; // rbx
  _BYTE v4[32]; // [rsp+8h] [rbp-20h] BYREF

  v2 = (_BYTE *)*a1;
  v3 = *a1 + 8LL;
  sub_1863170(v3, a2);
  v2[40] = sub_1859610(v3, "reduce_all_selects", 0);
  v2[41] = sub_1859610(v3, "dont_sub", 0);
  sub_17F9A60(v4, "smt");
  sub_1863170(v3, v4);
  v2[42] = sub_1859610(v3, "qsat_use_qel", 1);
  sub_18572D0(v4);
}

