__int64 __fastcall sub_2CA660(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 rules_along_trace; // rax

  v1 = sub_26B5C0(a1, 1);
  v2 = sub_26B5C0(a1, 0);
  rules_along_trace = Z3_fixedpoint_get_rules_along_trace(v2, v1);
  return sub_26B3D0(a1, rules_along_trace);
}

