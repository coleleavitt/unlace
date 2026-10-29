unsigned __int64 __fastcall sub_1C59FC0(__m128i *a1, __m128i *a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  const __m128i *v8; // r15

  v6 = (__int64)(0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 3) + 1) / 2;
  v7 = 24 * v6;
  v8 = (__m128i *)((char *)a1 + 24 * v6);
  if ( v6 <= a4 )
  {
    sub_1C594D0((__int64)a1, (__m128i *)((char *)a1 + 24 * v6), (__int64)a3);
    sub_1C594D0((__int64)v8, a2, (__int64)a3);
  }
  else
  {
    sub_1C59FC0(a1, (char *)a1 + 24 * v6, a3);
    sub_1C59FC0(v8, a2, a3);
  }
  return sub_1C59950(
           a1,
           v8,
           a2,
           0xAAAAAAAAAAAAAAABLL * (v7 >> 3),
           0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)v8) >> 3),
           a3,
           a4);
}
