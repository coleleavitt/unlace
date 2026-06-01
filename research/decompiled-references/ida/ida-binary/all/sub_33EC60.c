void __fastcall sub_33EC60(char *src, char *a2)
{
  char *i; // rbx
  __int64 *v4; // rdi
  __m128i v5[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( src != a2 )
  {
    for ( i = src + 32; a2 != i; *(__m128i *)(src + 9) = _mm_loadu_si128((const __m128i *)((char *)&v5[0].m128i_u64[1]
                                                                                         + 1)) )
    {
      while ( *(_QWORD *)src < *(_QWORD *)i
           || *(_QWORD *)i == *(_QWORD *)src && *((_QWORD *)i + 1) >= *((_QWORD *)src + 1) )
      {
        v4 = (__int64 *)i;
        i += 32;
        sub_33EBE0(v4);
        if ( a2 == i )
          return;
      }
      v5[0] = _mm_loadu_si128((const __m128i *)i);
      v5[1] = _mm_loadu_si128((const __m128i *)i + 1);
      if ( i - src <= 32 )
      {
        if ( i - src == 32 )
        {
          *(__m128i *)i = _mm_loadu_si128((const __m128i *)src);
          *(__m128i *)(i + 9) = _mm_loadu_si128((const __m128i *)(src + 9));
        }
      }
      else
      {
        memmove(src + 32, src, i - src);
      }
      i += 32;
      *(__m128i *)src = _mm_load_si128(v5);
    }
  }
}
