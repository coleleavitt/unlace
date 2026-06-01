__int64 __fastcall sub_2CA450(__int64 a1)
{
  unsigned __int8 v1; // bp
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rax

  v1 = sub_26B450(a1, 3);
  v2 = sub_26B7F0(a1, 2);
  v3 = sub_26B5C0(a1, 1);
  v4 = sub_26B5C0(a1, 0);
  return Z3_fpa_get_numeral_exponent_int64(v4, v3, v2, v1);
}

