__int64 __fastcall sub_1F6A5C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 i; // r11
  __m128i *v8; // r9
  __int64 v9; // r11
  const __m128i *j; // r10
  __int64 v11; // rdx
  __int64 v12; // rdx

  result = a3 - 1;
  v6 = (a3 - 1) / 2;
  if ( a2 < v6 )
  {
    for ( i = a2; ; i = result )
    {
      result = 2 * (i + 1);
      v8 = (__m128i *)(a1 + 32 * (i + 1));
      if ( v8[-1].m128i_i64[0] > (unsigned __int64)v8->m128i_i64[0] )
      {
        --result;
        v8 = (__m128i *)(a1 + 16 * result);
        *(__m128i *)(a1 + 16 * i) = _mm_loadu_si128(v8);
        if ( v6 <= result )
          goto LABEL_7;
      }
      else
      {
        *(__m128i *)(a1 + 16 * i) = _mm_loadu_si128(v8);
        if ( v6 <= result )
        {
LABEL_7:
          if ( (a3 & 1) != 0 )
            goto LABEL_8;
          goto LABEL_16;
        }
      }
    }
  }
  v8 = (__m128i *)(a1 + 16 * a2);
  if ( (a3 & 1) == 0 )
  {
    result = a2;
LABEL_16:
    if ( (a3 - 2) / 2 == result )
    {
      v12 = result + 1;
      result = 2 * (result + 1) - 1;
      *v8 = _mm_loadu_si128((const __m128i *)(a1 + 32 * v12 - 16));
      v8 = (__m128i *)(a1 + 16 * result);
    }
LABEL_8:
    v9 = (result - 1) / 2;
    if ( result > a2 )
    {
      for ( j = (const __m128i *)(a1 + 16 * v9); j->m128i_i64[0] < a4; j = (const __m128i *)(a1 + 16 * v11) )
      {
        *(__m128i *)(a1 + 16 * result) = _mm_loadu_si128(j);
        result = v9 - 1;
        v8 = (__m128i *)(a1 + 16 * v9);
        v11 = (v9 - 1) / 2;
        if ( a2 >= v9 )
          break;
        result = v9;
        v9 = (v9 - 1) / 2;
      }
    }
  }
  v8->m128i_i64[0] = a4;
  v8->m128i_i64[1] = a5;
  return result;
}
