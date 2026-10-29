__int64 __fastcall sub_388650(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-78h]
  __int64 v6; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v7[8]; // [rsp+18h] [rbp-60h] BYREF
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v11[8]; // [rsp+38h] [rbp-40h] BYREF

  v6 = 0;
  sub_1862300(&v6, "arith.greatest_error_pivot", 1);
  sub_1858590(v7, a2);
  sub_1862300(v7, "elim_and", 1);
  sub_1862300(v7, "som", 1);
  sub_1862300(v7, "blast_distinct", 1);
  v8 = 0;
  sub_1862370(&v8, "max_depth", 30);
  sub_1862370(&v8, "max_steps", 5000000);
  v9 = 0;
  sub_1862300(&v9, "arith_lhs", 1);
  sub_1862300(&v9, "eq2ineq", 1);
  v10 = 0;
  sub_1862300(&v10, "elim_to_real", 1);
  v11[0] = 0;
  v2 = sub_388500(a1, (__int64)v11);
  v3 = sub_EE8E00(v2, &v6);
  v5 = sub_EE8E00(v3, a2);
  sub_18572D0(v11);
  sub_18572D0(&v10);
  sub_18572D0(&v9);
  sub_18572D0(&v8);
  sub_18572D0(v7);
  sub_18572D0(&v6);
  return v5;
}

