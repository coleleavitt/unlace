__int64 __fastcall sub_2CA620(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 ground_sat_answer; // rax

  v1 = sub_26B5C0(a1, 1);
  v2 = sub_26B5C0(a1, 0);
  ground_sat_answer = Z3_fixedpoint_get_ground_sat_answer(v2, v1);
  return sub_26B3D0(a1, ground_sat_answer);
}

