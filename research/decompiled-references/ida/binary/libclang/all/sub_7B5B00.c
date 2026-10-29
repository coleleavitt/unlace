void __fastcall sub_7B5B00(__m128i *src, __m128i *a2, __m128i *a3, __int64 a4)
{
  __int64 v6; // r14
  __m128i *v7; // r12
  __int64 v8; // r14

  v6 = (a2 - src + 1) / 2;
  v7 = &src[v6];
  v8 = (v6 * 16) >> 4;
  if ( (a2 - src + 1) / 2 <= a4 )
  {
    sub_7B5160(src, v7, a3);
    sub_7B5160(v7, a2, a3);
    sub_7B53E0(src, v7, a2, v8, a2 - v7, a3);
  }
  else
  {
    sub_7B5B00(src);
    sub_7B5B00(v7);
    sub_7B5600(src, v7, a2, v8, a2 - v7, a3, a4);
  }
}

