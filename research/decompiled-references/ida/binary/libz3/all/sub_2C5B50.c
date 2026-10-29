__int64 __fastcall sub_2C5B50(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rax

  v1 = sub_26B5C0(a1, 3);
  v2 = sub_26B5C0(a1, 2);
  v3 = sub_26B5C0(a1, 1);
  v4 = sub_26B5C0(a1, 0);
  return Z3_solver_assert_and_track(v4, v3, v2, v1);
}

