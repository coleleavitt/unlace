void __fastcall sub_7FB460(unsigned int *src, unsigned int *a2)
{
  __int64 v2; // rbx

  if ( (char *)a2 - (char *)src <= 30688 )
  {
    sub_7F59C0(src, a2);
  }
  else
  {
    v2 = 548 * ((__int64)(0xE21A291C077975B9LL * (((char *)a2 - (char *)src) >> 4)) >> 1);
    sub_7FB460(src);
    sub_7FB460(&src[v2]);
    sub_7FB2D0(
      src,
      &src[v2],
      (__int64)a2,
      0xE21A291C077975B9LL * ((v2 * 4) >> 4),
      0xE21A291C077975B9LL * (((char *)a2 - (char *)&src[v2]) >> 4));
  }
}
