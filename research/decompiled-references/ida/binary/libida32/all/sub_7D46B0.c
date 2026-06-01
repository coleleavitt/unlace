void __fastcall sub_7D46B0(__m128i *dest, __m128i *src, __m128i *a3, __m128i *a4)
{
  sub_7D30B0(dest, src, a4);
  sub_7D30B0(src, a3, a4);
  sub_7D4440(
    dest,
    src,
    a3,
    0xAAAAAAAAAAAAAAABLL * (((char *)src - (char *)dest) >> 3),
    0xAAAAAAAAAAAAAAABLL * (((char *)a3 - (char *)src) >> 3),
    a4);
}

