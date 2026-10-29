__int64 __fastcall sub_2C7B00(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp
  __int64 v3; // rax

  v1 = sub_26B5C0(a1, 2);
  v2 = sub_26B5C0(a1, 1);
  v3 = sub_26B5C0(a1, 0);
  return Z3_rcf_neq(v3, v2, v1);
}

