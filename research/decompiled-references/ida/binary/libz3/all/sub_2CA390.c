__int64 __fastcall sub_2CA390(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax

  v1 = sub_26B5C0(a1, 1);
  v2 = sub_26B5C0(a1, 0);
  return Z3_fpa_get_numeral_significand_string(v2, v1);
}

