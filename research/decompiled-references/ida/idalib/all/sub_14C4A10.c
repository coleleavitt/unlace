__int64 __fastcall sub_14C4A10(const __m128i *a1, __m128i a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rbp

  v2 = a1[6].m128i_i64[0];
  sub_18C74E0(v2, 0, 0, 4);
  v3 = sub_14BDA20((__int64)a1, 0, 0, 0, 0, nullptr, a2);
  v4 = sub_14BE680(a1, v3, 4, a2);
  v7 = v4;
  if ( v4 > 1 && !(unsigned __int8)sub_174DEF0(a1[6].m128i_i64[0], (unsigned int)v4 & 0xFFFFFFFE, 0, 0, v5, v6, 0, 0, 0) )
    v7 = 1;
  sub_190D5E0(v2);
  return v7;
}
