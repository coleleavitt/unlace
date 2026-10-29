void __fastcall sub_698C70(__m128i *src, __m128i *a2, double a3, double a4, __m128 a5)
{
  __m128i *i; // rbx
  __m128i *j; // rax
  __m128 si128; // xmm1
  unsigned __int64 v8; // rdx
  __m128i v9[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; *j = (__m128i)si128 )
    {
      while ( 1 )
      {
        si128 = (__m128)_mm_loadu_si128(i);
        a5 = _mm_movehl_ps(a5, si128);
        if ( src->m128i_i64[0] < si128.m128_u64[0]
          || si128.m128_u64[0] == src->m128i_i64[0] && a5.m128_u64[0] >= src->m128i_i64[1] )
        {
          break;
        }
        if ( (char *)i - (char *)src <= 16 )
        {
          if ( (char *)i - (char *)src == 16 )
            *i = _mm_loadu_si128(src);
        }
        else
        {
          v9[0] = (__m128i)si128;
          memmove(&src[1], src, (char *)i - (char *)src);
          si128 = (__m128)_mm_load_si128(v9);
        }
        ++i;
        *src = (__m128i)si128;
        if ( a2 == i )
          return;
      }
      v8 = i[-1].m128i_u64[0];
      j = i;
      if ( v8 >= si128.m128_u64[0] )
      {
        for ( j = i - 1; si128.m128_u64[0] < v8 || a5.m128_u64[0] < j->m128i_i64[1]; --j )
        {
          v8 = j[-1].m128i_u64[0];
          j[1] = _mm_loadu_si128(j);
          if ( v8 < si128.m128_u64[0] )
            goto LABEL_6;
        }
        ++j;
      }
LABEL_6:
      ++i;
    }
  }
}
