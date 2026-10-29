__int64 __fastcall sub_2C0C10(__int64 *a1)
{
  int v1; // eax
  __int64 is_digit; // rax

  sub_26B5C0(a1, 1);
  v1 = sub_26B5C0(a1, 0);
  is_digit = Z3_mk_char_is_digit(v1);
  return sub_26B3D0(a1, is_digit);
}

