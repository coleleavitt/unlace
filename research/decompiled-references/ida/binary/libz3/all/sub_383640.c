__int64 __fastcall sub_383640(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v6[8]; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v7[6]; // [rsp+18h] [rbp-30h] BYREF

  v5 = 0;
  sub_180C5A0(v7, "QF_LIA");
  sub_180C5A0(v6, "smt.logic");
  sub_1862F10(&v5, v6, v7);
  sub_1862370(&v5, "arith.branch_cut_ratio", 10000000);
  sub_1862370(&v5, "random_seed", a2);
  v7[0] = 0;
  v2 = sub_3885C0(a1, 0, v7);
  sub_EE8E00(v2, &v5);
  v3 = sub_EE8E80("no-cut-smt-tactic");
  sub_18572D0(v7);
  sub_18572D0(&v5);
  return v3;
}

