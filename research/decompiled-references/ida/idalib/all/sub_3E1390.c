void __fastcall sub_3E1390(__m128i *src, __m128i *a2)
{
  __m128i *i; // rbx
  __int64 *v4; // rdi
  __int8 v5; // al
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h]

  if ( src != a2 )
  {
    for ( i = (__m128i *)((char *)src + 24); a2 != i; *src = v7 )
    {
      while ( 1 )
      {
        v5 = src->m128i_i8[8];
        if ( i->m128i_i8[8] < v5
          || i->m128i_i8[8] <= v5
          && (i->m128i_i64[0] < (unsigned __int64)src->m128i_i64[0]
           || src->m128i_i64[0] >= (unsigned __int64)i->m128i_i64[0]
           && i[1].m128i_i8[0] < (unsigned int)src[1].m128i_i8[0]) )
        {
          break;
        }
        v4 = (__int64 *)i;
        i = (__m128i *)((char *)i + 24);
        sub_3E1320(v4);
        if ( a2 == i )
          return;
      }
      v6 = _mm_loadu_si128(i);
      v9 = i[1].m128i_i64[0];
      v8 = v6;
      if ( (char *)i - (char *)src <= 24 )
      {
        if ( (char *)i - (char *)src == 24 )
        {
          *i = _mm_loadu_si128(src);
          i[1].m128i_i8[0] = src[1].m128i_i8[0];
        }
      }
      else
      {
        memmove(&src[1].m128i_u64[1], src, (char *)i - (char *)src);
      }
      v7 = _mm_load_si128(&v8);
      i = (__m128i *)((char *)i + 24);
      src[1].m128i_i8[0] = v9;
    }
  }
}
