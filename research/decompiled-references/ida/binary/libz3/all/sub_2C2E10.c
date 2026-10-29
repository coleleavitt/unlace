__int64 __fastcall sub_2C2E10(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax

  v1 = sub_26B5C0(a1, 1);
  v2 = sub_26B5C0(a1, 0);
  return Z3_is_quantifier_exists(v2, v1);
}

