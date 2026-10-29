__int64 __fastcall sub_2CA6A0(__int64 a1)
{
  void *v1; // rax

  sub_26B5C0(a1, 1);
  v1 = (void *)sub_26B5C0(a1, 0);
  return Z3_fixedpoint_get_rule_names_along_trace(v1);
}

