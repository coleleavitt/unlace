void __fastcall sub_69AEB0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rsi
  __int64 v4; // [rsp+18h] [rbp-48h] BYREF
  __int64 v5; // [rsp+20h] [rbp-40h]
  _BYTE v6[56]; // [rsp+28h] [rbp-38h] BYREF

  sub_1863170(a1 + 4360, a2);
  v5 = a2;
  sub_17F9A60(v6, "sat");
  v2 = sub_1859630(a2, "cardinality.solver", v6, 1);
  sub_1862300(a1 + 4360, "keep_cardinality_constraints", v2);
  sub_180C5A0(&v4, "solver");
  v4 = sub_185A820(a2, "pb.solver", v6, &v4);
  sub_18625B0(a1 + 4360, "pb.solver", &v4);
  sub_11B7290(a1 + 96, a1 + 4360);
  *(_BYTE *)(a1 + 385) = 1;
  if ( (unsigned __int8)sub_1859630(v5, "smt", v6, 0) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    sub_786C50(a1 + 4544, v3, a1 + 4360, a1 + 96, a1 + 4648, a1 + 4504, 1);
    sub_787220(a1 + 4544, v3);
  }
  sub_18572D0(v6);
}

