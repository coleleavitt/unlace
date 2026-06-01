void __fastcall sub_4F4410(__m128i *src, __m128i *a2)
{
  __m128i *i; // rbx
  __int64 *v4; // rdi
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h]

  if ( src != a2 )
  {
    for ( i = (__m128i *)((char *)src + 24); a2 != i; *src = v6 )
    {
      while ( (unsigned __int128)*i >= (unsigned __int128)*src )
      {
        v4 = (__int64 *)i;
        i = (__m128i *)((char *)i + 24);
        sub_4F4200(v4);
        if ( a2 == i )
          return;
      }
      v5 = _mm_loadu_si128(i);
      v8 = i[1].m128i_i64[0];
      v7 = v5;
      if ( (char *)i - (char *)src <= 24 )
      {
        if ( (char *)i - (char *)src == 24 )
        {
          *i = _mm_loadu_si128(src);
          i[1].m128i_i32[0] = src[1].m128i_i32[0];
        }
      }
      else
      {
        memmove(&src[1].m128i_u64[1], src, (char *)i - (char *)src);
      }
      v6 = _mm_load_si128(&v7);
      i = (__m128i *)((char *)i + 24);
      src[1].m128i_i32[0] = v8;
    }
  }
}
