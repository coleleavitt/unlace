void __fastcall sub_488550(__int64 *src, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // r9

  if ( (char *)a2 - (char *)src <= 112 )
  {
    sub_487920(src, a2, a3, a4);
  }
  else
  {
    v6 = ((char *)a2 - (char *)src) >> 4;
    sub_488550(src);
    sub_488550(&src[v6]);
    sub_488350(src, &src[v6], (__int64)a2, (v6 * 8) >> 3, a2 - &src[v6], v7, a3, a4);
  }
}
