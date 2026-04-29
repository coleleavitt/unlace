void __fastcall sub_8EE40(__m128i *a1, const __m128i *a2, __int64 a3)
{
  a1->m128i_i64[0] = 0;
  a1->m128i_i64[1] = 0;
  sub_8EB00(a1, a2, &a2[a3]);
}
