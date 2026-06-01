void __fastcall sub_629BA0(unsigned __int16 **src, unsigned __int16 **a2)
{
  unsigned __int16 **i; // rbx
  unsigned __int16 *v3; // rbp
  char v4; // al
  __int32 v5; // r14d
  unsigned __int16 *v6; // r12
  const __m128i *j; // r15
  unsigned __int16 *v8; // rsi
  __m128i *v9; // rbp

  if ( src != a2 )
  {
    for ( i = src + 2; a2 != i; src[1] = v3 )
    {
      while ( 1 )
      {
        v4 = sub_6299B0(i[1], src[1]);
        v5 = *(_DWORD *)i;
        if ( v4 )
          break;
        v6 = i[1];
        for ( j = (const __m128i *)i; ; j[1] = _mm_loadu_si128(j) )
        {
          v8 = (unsigned __int16 *)j[-1].m128i_i64[1];
          v9 = (__m128i *)j--;
          if ( !(unsigned __int8)sub_6299B0(v6, v8) )
            break;
        }
        v9->m128i_i32[0] = v5;
        i += 2;
        v9->m128i_i64[1] = (__int64)v6;
        if ( a2 == i )
          return;
      }
      v3 = i[1];
      if ( (char *)i - (char *)src <= 16 )
      {
        if ( (char *)i - (char *)src == 16 )
          *(__m128i *)i = _mm_loadu_si128((const __m128i *)src);
      }
      else
      {
        memmove(src + 2, src, (char *)i - (char *)src);
      }
      *(_DWORD *)src = v5;
      i += 2;
    }
  }
}

