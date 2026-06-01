void __fastcall sub_7B50E0(__m128i *src, __m128i *a2)
{
  __int64 v2; // rcx
  __m128i *v3; // r13
  __int64 v4; // rbx

  if ( (char *)a2 - (char *)src <= 224 )
  {
    sub_7B5000(src, a2);
  }
  else
  {
    v2 = ((char *)a2 - (char *)src) >> 5;
    v3 = &src[v2];
    v4 = (16 * v2) >> 4;
    sub_7B50E0(src);
    sub_7B50E0(v3);
    sub_7B4C30(src, v3, (__int64)a2, v4, a2 - v3);
  }
}

