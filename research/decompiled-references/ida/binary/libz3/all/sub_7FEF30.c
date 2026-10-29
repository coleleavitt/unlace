char *__fastcall sub_7FEF30(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-30h] BYREF
  __m128i v4; // [rsp+10h] [rbp-28h] BYREF

  sub_180C5A0(&v3, "alldiff");
  v4.m128i_i64[1] = a1;
  v4.m128i_i64[0] = v3;
  return sub_7FEA60(a2 + 16, &v4);
}

