void __fastcall sub_7F7E30(unsigned int *dest, unsigned int *src, unsigned int *a3, unsigned int *a4)
{
  sub_7F6A10(dest, src, a4);
  sub_7F6A10(src, a3, a4);
  sub_7F7BC0(
    dest,
    src,
    a3,
    0xE21A291C077975B9LL * (((char *)src - (char *)dest) >> 4),
    0xE21A291C077975B9LL * (((char *)a3 - (char *)src) >> 4),
    a4);
}
