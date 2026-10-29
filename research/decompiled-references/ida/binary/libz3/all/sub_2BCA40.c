__int64 __fastcall sub_2BCA40(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp
  __int64 v3; // rax
  double v5; // [rsp+8h] [rbp-20h]

  v5 = sub_26B520(a1, 3);
  v1 = sub_26B590(a1, 2);
  v2 = sub_26B5C0(a1, 1);
  v3 = sub_26B5C0(a1, 0);
  return Z3_params_set_double(v3, v2, v1, v5);
}

