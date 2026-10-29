void __fastcall sub_7D5D40(__m128i *dest, __m128i *a2, __m128i *a3, __int64 a4)
{
  __int64 v5; // rdx
  signed __int64 v6; // rbx

  v5 = (__int64)(0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)dest) >> 3) + 1) / 2;
  v6 = 8
     * (((0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)dest) >> 3)
        + 1
        + ((0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)dest) >> 3) + 1) >> 63))
       & 0xFFFFFFFFFFFFFFFELL)
      + v5);
  if ( v5 <= a4 )
  {
    sub_7D43B0(dest, (__m128i *)((char *)dest + v6), a2, a3);
  }
  else
  {
    sub_7D5D40(dest);
    sub_7D5D40(&dest->m128i_i8[v6]);
    sub_7D5880(
      dest,
      (__m128i *)((char *)dest + v6),
      a2,
      0xAAAAAAAAAAAAAAABLL * (v6 >> 3),
      0xAAAAAAAAAAAAAAABLL * (((char *)a2 - &dest->m128i_i8[v6]) >> 3),
      a3,
      a4);
  }
}

