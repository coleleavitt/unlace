void __fastcall sub_7F7530(__m128i *dest, __m128i *src, __m128i *a3, __m128i *a4)
{
  sub_7F5FA0(dest, src, a4);
  sub_7F5FA0(src, a3, a4);
  sub_7F72C0(
    dest,
    src,
    a3,
    0xAAAAAAAAAAAAAAABLL * (((char *)src - (char *)dest) >> 3),
    0xAAAAAAAAAAAAAAABLL * (((char *)a3 - (char *)src) >> 3),
    a4);
}
