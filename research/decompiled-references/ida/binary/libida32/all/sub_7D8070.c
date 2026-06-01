void __fastcall sub_7D8070(unsigned int *dest, unsigned int *a2, unsigned int *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned int *desta; // [rsp+8h] [rbp-40h]

  v5 = (__int64)(0xF128CFC4A33F128DLL * (((char *)a2 - (char *)dest) >> 4) + 1) / 2;
  v6 = 1104 * v5;
  if ( v5 <= a4 )
  {
    sub_7D4CB0(dest, &dest[276 * v5], a2, a3);
  }
  else
  {
    desta = &dest[276 * v5];
    sub_7D8070(dest);
    sub_7D8070(desta);
    sub_7D7C10(
      dest,
      desta,
      a2,
      0xF128CFC4A33F128DLL * (v6 >> 4),
      0xF128CFC4A33F128DLL * (((char *)a2 - (char *)desta) >> 4),
      a3,
      a4);
  }
}

