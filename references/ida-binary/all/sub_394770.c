void __fastcall sub_394770(__m128i *a1, __m128i *a2, unsigned __int8 (__fastcall *a3)(__int64 *, __int64 *))
{
  signed __int64 v4; // rbx

  if ( (char *)a2 - (char *)a1 <= 672 )
  {
    sub_394250(a1, a2, a3);
  }
  else
  {
    v4 = ((0xAAAAAAAAAAAAAAABLL * (a2 - a1)) & 0xFFFFFFFFFFFFFFFELL)
       + ((__int64)(0xAAAAAAAAAAAAAAABLL * (a2 - a1)) >> 1);
    sub_394770(a1, &a1[v4], a3);
    sub_394770(&a1[v4], a2, a3);
    sub_3944F0(
      (__int64)a1,
      (__int64)a1[v4].m128i_i64,
      (__int64)a2,
      0xAAAAAAAAAAAAAAABLL * ((v4 * 16) >> 4),
      0xAAAAAAAAAAAAAAABLL * (a2 - &a1[v4]),
      (__int64)a3);
  }
}
