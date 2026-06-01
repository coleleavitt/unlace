__int64 __fastcall sub_2C26A0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax

  v1 = sub_26B5C0(a1, 1);
  v2 = sub_26B5C0(a1, 0);
  return Z3_get_bool_value(v2, v1);
}

