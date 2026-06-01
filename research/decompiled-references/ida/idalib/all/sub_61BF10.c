__int64 __fastcall sub_61BF10(char *src, char *a2)
{
  char *i; // rbx
  int *v4; // rdi
  __int64 result; // rax
  __m128i v6; // [rsp+0h] [rbp-58h] BYREF
  __m128i v7[4]; // [rsp+10h] [rbp-48h] BYREF

  if ( src != a2 )
  {
    for ( i = src + 48;
          a2 != i;
          *(__m128i *)(src + 28) = _mm_loadu_si128((const __m128i *)((char *)&v7[0].m128i_u64[1] + 4)) )
    {
      while ( 1 )
      {
        result = *(unsigned int *)src;
        if ( *(_DWORD *)i - (int)result < 0 )
          break;
        v4 = (int *)i;
        i += 48;
        result = (__int64)sub_61BE80(v4);
        if ( a2 == i )
          return result;
      }
      v6 = _mm_loadu_si128((const __m128i *)i);
      v7[0] = _mm_loadu_si128((const __m128i *)i + 1);
      v7[1] = _mm_loadu_si128((const __m128i *)i + 2);
      if ( i - src <= 48 )
      {
        if ( i - src == 48 )
        {
          *(__m128i *)i = _mm_loadu_si128((const __m128i *)src);
          *((__m128i *)i + 1) = _mm_loadu_si128((const __m128i *)src + 1);
          *(__m128i *)(i + 28) = _mm_loadu_si128((const __m128i *)(src + 28));
        }
      }
      else
      {
        result = (__int64)memmove(src + 48, src, i - src);
      }
      i += 48;
      *(__m128i *)src = _mm_load_si128(&v6);
      *((__m128i *)src + 1) = _mm_load_si128(v7);
    }
  }
  return result;
}
