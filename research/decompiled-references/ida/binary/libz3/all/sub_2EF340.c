void __fastcall sub_2EF340(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // [rsp+0h] [rbp-68h] BYREF
  __int64 v6; // [rsp+8h] [rbp-60h] BYREF
  __int64 v7; // [rsp+10h] [rbp-58h]
  _BYTE v8[8]; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  _WORD v10[28]; // [rsp+30h] [rbp-38h] BYREF

  v7 = a1 + 288;
  sub_17F9A60(v8, "opt");
  sub_180C5A0(&v5, "symba");
  v1 = v7;
  sub_180C5A0(&v6, "basic");
  v2 = sub_185A820(v1, "optsmt_engine", v8, &v6);
  if ( v5 == v2
    || (sub_180C5A0(&v6, "farkas"),
        v3 = v7,
        sub_180C5A0(v9, "basic"),
        v4 = sub_185A820(v3, "optsmt_engine", v8, v9),
        v6 == v4) )
  {
    v9[1] = 1;
    v9[0] = v10;
    v10[0] = 53;
    sub_17FBCD0("smt.arith.solver", (unsigned int)v10);
    sub_233E40((__int64)v9);
  }
  sub_18572D0(v8);
}

