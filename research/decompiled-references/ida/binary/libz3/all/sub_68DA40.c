void __fastcall sub_68DA40(__int64 a1, __int64 a2)
{
  int v2; // r12d
  unsigned __int8 v4; // al
  char v5; // al
  const void *v6; // rdi
  __int64 v7; // rsi
  char v8; // r13
  _BYTE v9[8]; // [rsp+18h] [rbp-48h] BYREF
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v11[56]; // [rsp+28h] [rbp-38h] BYREF

  v2 = a1 + 4392;
  sub_1863170(a1 + 4392, a2);
  sub_17F9A60(v9, "sat");
  v4 = sub_1859630(a2, "cardinality.solver", v9, 1);
  sub_1862300(a1 + 4392, "keep_cardinality_constraints", v4);
  sub_180C5A0(&v10, "solver");
  v10 = sub_185A820(a2, "pb.solver", v9, &v10);
  sub_18625B0(a1 + 4392, "pb.solver", &v10);
  sub_11B7290(a1 + 96, a1 + 4392);
  v5 = *(_BYTE *)(a1 + 385);
  if ( v5 )
  {
    v10 = a1 + 4392;
    sub_17F9A60(v11, "sat");
    v8 = sub_1859630(v10, "override_incremental", v11, 0);
    sub_18572D0(v11);
    v5 = v8 ^ 1;
  }
  *(_BYTE *)(a1 + 385) = v5;
  if ( (unsigned __int8)sub_1859630(a2, "euf", v9, 0) )
  {
    v6 = *(const void **)(a1 + 624);
    if ( !v6
      || !__dynamic_cast(
            v6,
            (const struct __class_type_info *)&`typeinfo for'sat::extension,
            (const struct __class_type_info *)&`typeinfo for'euf::solver,
            0) )
    {
      v7 = *(_QWORD *)(a1 + 8);
      sub_786C50(a1 + 4376, v7, v2, a1 + 96, a1 + 4480, a1 + 4840, *(unsigned __int8 *)(a1 + 385));
      ((void (__fastcall *)(__int64, __int64))sub_787220)(a1 + 4376, v7);
    }
  }
  sub_18572D0(v9);
}

