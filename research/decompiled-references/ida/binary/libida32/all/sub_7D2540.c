void __fastcall sub_7D2540(char *src, char *a2)
{
  signed __int64 v2; // rbx

  if ( a2 - src <= 336 )
  {
    sub_7D2400(src, a2);
  }
  else
  {
    v2 = 8
       * (((0xAAAAAAAAAAAAAAABLL * ((a2 - src) >> 3)) & 0xFFFFFFFFFFFFFFFELL)
        + ((__int64)(0xAAAAAAAAAAAAAAABLL * ((a2 - src) >> 3)) >> 1));
    sub_7D2540(src);
    sub_7D2540(&src[v2]);
    sub_7D1AB0(
      (unsigned int *)src,
      (__m128i *)&src[v2],
      (__int64)a2,
      0xAAAAAAAAAAAAAAABLL * (v2 >> 3),
      0xAAAAAAAAAAAAAAABLL * ((a2 - &src[v2]) >> 3));
  }
}

