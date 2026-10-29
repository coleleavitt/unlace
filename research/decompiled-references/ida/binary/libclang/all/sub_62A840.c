void __fastcall sub_62A840(unsigned __int16 **src, unsigned __int16 **a2, __m128i *a3, __int64 a4)
{
  __int64 v6; // r14
  unsigned __int16 **v7; // r12
  __int64 v8; // r14

  v6 = 2 * (((((char *)a2 - (char *)src) >> 4) + 1) / 2);
  v7 = &src[v6];
  v8 = (v6 * 8) >> 4;
  if ( ((((char *)a2 - (char *)src) >> 4) + 1) / 2 <= a4 )
  {
    sub_629C90(src, v7, a3->m128i_i8);
    sub_629C90(v7, a2, a3->m128i_i8);
    sub_629E90((const __m128i *)src, (__m128i *)v7, (__m128i *)a2, v8, ((char *)a2 - (char *)v7) >> 4, a3);
  }
  else
  {
    sub_62A840(src);
    sub_62A840(v7);
    sub_62A300((__m128i *)src, (__m128i *)v7, (__m128i *)a2, v8, ((char *)a2 - (char *)v7) >> 4, a3, a4);
  }
}

