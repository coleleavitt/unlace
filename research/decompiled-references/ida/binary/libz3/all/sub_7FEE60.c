char *__fastcall sub_7FEE60(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-40h] BYREF
  __m128i v4[3]; // [rsp+10h] [rbp-38h] BYREF

  sub_180C5A0(&v3, "euf");
  v4[0].m128i_i64[1] = a1;
  v4[0].m128i_i64[0] = v3;
  sub_7FEA60(a2 + 16, v4);
  sub_180C5A0(&v3, "smt");
  v4[0].m128i_i64[1] = a1;
  v4[0].m128i_i64[0] = v3;
  return sub_7FEA60(a2 + 16, v4);
}

