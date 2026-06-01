void __fastcall sub_7F52C0(char *src, char *a2)
{
  signed __int64 v2; // rbx

  if ( a2 - src <= 336 )
  {
    sub_7F5180(src, a2);
  }
  else
  {
    v2 = 8
       * (((0xAAAAAAAAAAAAAAABLL * ((a2 - src) >> 3)) & 0xFFFFFFFFFFFFFFFELL)
        + ((__int64)(0xAAAAAAAAAAAAAAABLL * ((a2 - src) >> 3)) >> 1));
    sub_7F52C0(src);
    sub_7F52C0(&src[v2]);
    sub_7F48F0(
      (unsigned int *)src,
      (__m128i *)&src[v2],
      (__int64)a2,
      0xAAAAAAAAAAAAAAABLL * (v2 >> 3),
      0xAAAAAAAAAAAAAAABLL * ((a2 - &src[v2]) >> 3));
  }
}
