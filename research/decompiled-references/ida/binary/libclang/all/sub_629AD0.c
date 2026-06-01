__int64 __fastcall sub_629AD0(char *src, char *a2, __int64 a3, __int64 a4, __m128i *a5)
{
  char *v8; // rbx
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  size_t v11; // r14
  signed __int64 v12; // r13
  __m128i *v13; // rbp

  v8 = src;
  if ( src != a2 )
  {
    while ( a3 != a4 )
    {
      if ( (unsigned __int8)sub_6299B0(*(unsigned __int16 **)(a3 + 8), *((unsigned __int16 **)v8 + 1)) )
      {
        v9 = _mm_loadu_si128((const __m128i *)a3);
        ++a5;
        a3 += 16;
        a5[-1] = v9;
        if ( v8 == a2 )
          break;
      }
      else
      {
        v10 = _mm_loadu_si128((const __m128i *)v8);
        v8 += 16;
        ++a5;
        a5[-1] = v10;
        if ( v8 == a2 )
          break;
      }
    }
  }
  v11 = a2 - v8;
  if ( a2 - v8 <= 16 )
  {
    if ( v11 == 16 )
      *a5 = _mm_loadu_si128((const __m128i *)v8);
  }
  else
  {
    memmove(a5, v8, v11);
  }
  v12 = a4 - a3;
  v13 = (__m128i *)((char *)a5 + v11);
  if ( v12 <= 16 )
  {
    if ( v12 == 16 )
      *v13 = _mm_loadu_si128((const __m128i *)a3);
  }
  else
  {
    memmove(v13, (const void *)a3, v12);
  }
  return (__int64)v13 + v12;
}

