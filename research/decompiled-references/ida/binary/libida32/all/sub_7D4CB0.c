void __fastcall sub_7D4CB0(unsigned int *dest, unsigned int *src, unsigned int *a3, unsigned int *a4)
{
  sub_7D3890(dest, src, a4);
  sub_7D3890(src, a3, a4);
  sub_7D4A40(
    dest,
    src,
    a3,
    0xF128CFC4A33F128DLL * (((char *)src - (char *)dest) >> 4),
    0xF128CFC4A33F128DLL * (((char *)a3 - (char *)src) >> 4),
    a4);
}

