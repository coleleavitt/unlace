void __fastcall sub_1C59440(const __m128i *a1, __int64 a2)
{
  __int64 v2; // rbx

  if ( a2 - (__int64)a1 <= 336 )
  {
    sub_1C53400((__int64)a1, a2);
  }
  else
  {
    v2 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)a1) >> 3)) >> 1);
    sub_1C59440(a1, &a1->m128i_i8[v2]);
    sub_1C59440(&a1->m128i_i8[v2], a2);
    sub_1C59090(
      a1,
      (__m128i *)((char *)a1 + v2),
      a2,
      0xAAAAAAAAAAAAAAABLL * (v2 >> 3),
      0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)&a1->m128i_i64[(unsigned __int64)v2 / 8]) >> 3));
  }
}
