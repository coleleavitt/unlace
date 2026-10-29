void __fastcall sub_7D82E0(unsigned int *src, unsigned int *a2)
{
  __int64 v2; // rbx

  if ( (char *)a2 - (char *)src <= 15456 )
  {
    sub_7D2840(src, a2);
  }
  else
  {
    v2 = 276 * ((__int64)(0xF128CFC4A33F128DLL * (((char *)a2 - (char *)src) >> 4)) >> 1);
    sub_7D82E0(src);
    sub_7D82E0(&src[v2]);
    sub_7D8150(
      src,
      &src[v2],
      (__int64)a2,
      0xF128CFC4A33F128DLL * ((v2 * 4) >> 4),
      0xF128CFC4A33F128DLL * (((char *)a2 - (char *)&src[v2]) >> 4));
  }
}

