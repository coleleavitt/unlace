__int64 __fastcall sub_395560(
        __m128i *a1,
        __m128i *a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 v6; // rdx
  signed __int64 v7; // rbx

  v6 = (__int64)(0xAAAAAAAAAAAAAAABLL * (a2 - a1) + 1) / 2;
  v7 = ((0xAAAAAAAAAAAAAAABLL * (a2 - a1) + 1 + ((0xAAAAAAAAAAAAAAABLL * (a2 - a1) + 1) >> 63)) & 0xFFFFFFFFFFFFFFFELL)
     + v6;
  if ( v6 <= a4 )
    return sub_3954E0(a1, &a1[v7], a2, a3, a5);
  sub_395560(a1, &a1[v7], a3);
  sub_395560(&a1[v7], a2, a3);
  return sub_394830(
           a1->m128i_i64,
           a1[v7].m128i_i8,
           a2->m128i_i64,
           0xAAAAAAAAAAAAAAABLL * ((v7 * 16) >> 4),
           0xAAAAAAAAAAAAAAABLL * (a2 - &a1[v7]),
           (const char **)a3,
           a4,
           (unsigned __int8 (__fastcall *)(unsigned __int64, __int64))a5);
}
