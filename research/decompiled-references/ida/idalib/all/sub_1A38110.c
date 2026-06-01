__int64 __fastcall sub_1A38110(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 i; // r11
  __m128i *v8; // r9
  __int64 v9; // r10
  const __m128i *j; // r11
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13[4]; // [rsp+0h] [rbp-20h] BYREF

  result = a3 - 1;
  v13[0] = a4;
  v6 = (a3 - 1) / 2;
  if ( a2 < v6 )
  {
    for ( i = a2; ; i = result )
    {
      result = 2 * (i + 1);
      v8 = (__m128i *)(a1 + 32 * (i + 1));
      if ( v8[-1].m128i_i64[1] > (unsigned __int64)v8->m128i_i64[1] )
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
      for ( j = (const __m128i *)(a1 + 16 * v9); j->m128i_i64[1] < a5; j = (const __m128i *)(a1 + 16 * v11) )
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
  v13[0] = a5;
  *(__m128 *)v8 = _mm_loadh_ps((const double *)v13);
  return result;
}
