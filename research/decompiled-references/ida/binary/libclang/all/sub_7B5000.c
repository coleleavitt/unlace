void __fastcall sub_7B5000(__m128i *src, __m128i *a2)
{
  __m128i *i; // rbx
  unsigned __int64 v3; // rbp
  __int64 v4; // r14
  const __m128i *v5; // rax
  __m128i v6; // xmm0
  _QWORD *m128i_i64; // rdx

  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; src->m128i_i64[1] = v4 )
    {
      while ( 1 )
      {
        v3 = i->m128i_i64[0];
        v4 = i->m128i_i64[1];
        if ( i->m128i_i64[0] < (unsigned __int64)src->m128i_i64[0] )
          break;
        v5 = i - 1;
        if ( v3 >= i[-1].m128i_i64[0] )
        {
          i->m128i_i64[0] = v3;
          i->m128i_i64[1] = v4;
        }
        else
        {
          do
          {
            v6 = _mm_loadu_si128(v5);
            m128i_i64 = v5->m128i_i64;
            --v5;
            v5[2] = v6;
          }
          while ( v3 < v5->m128i_i64[0] );
          *m128i_i64 = v3;
          m128i_i64[1] = v4;
        }
        if ( a2 == ++i )
          return;
      }
      if ( (char *)i - (char *)src <= 16 )
      {
        if ( (char *)i - (char *)src == 16 )
          *i = _mm_loadu_si128(src);
      }
      else
      {
        memmove(&src[1], src, (char *)i - (char *)src);
      }
      ++i;
      src->m128i_i64[0] = v3;
    }
  }
}

