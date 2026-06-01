void __fastcall sub_7D49D0(__m128i *dest, __m128i *src, __m128i *a3, __m128i *a4)
{
  sub_7D35F0(dest, src, a4);
  sub_7D35F0(src, a3, a4);
  sub_7D4720(
    dest,
    src,
    a3,
    0xCCCCCCCCCCCCCCCDLL * (((char *)src - (char *)dest) >> 3),
    0xCCCCCCCCCCCCCCCDLL * (((char *)a3 - (char *)src) >> 3),
    a4);
}

