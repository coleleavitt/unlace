void __fastcall sub_1E5DC00(__m128 *a1, __m128 *a2)
{
  const __m128i *v2; // rdx
  unsigned __int64 v3; // r8
  double v4; // r10
  const __m128i *v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __m128 *v8; // rax
  unsigned __int64 v9; // rdx
  double v10[2]; // [rsp+0h] [rbp-10h] BYREF

  if ( a1 != a2 )
  {
    v2 = (const __m128i *)&a1[1];
    if ( a2 != &a1[1] )
    {
      do
      {
        v3 = v2->m128i_i64[0];
        v4 = *(double *)&v2->m128i_i64[1];
        v5 = v2 + 1;
        if ( a1->m128_u64[0] <= v2->m128i_i64[0] )
        {
          v7 = v2[-1].m128i_u64[0];
          v8 = (__m128 *)&v2[-1];
          if ( v7 > v3 )
          {
            while ( 1 )
            {
              v9 = v8->m128_u64[1];
              v8[1].m128_u64[0] = v7;
              v7 = v8[-1].m128_u64[0];
              v8[1].m128_u64[1] = v9;
              if ( v7 <= v3 )
                break;
              --v8;
            }
          }
          else
          {
            v8 = (__m128 *)v2;
          }
          v10[0] = v4;
          *v8 = _mm_loadh_ps(v10);
        }
        else
        {
          v6 = ((char *)v2 - (char *)a1) >> 4;
          if ( (char *)v2 - (char *)a1 > 0 )
          {
            do
            {
              --v2;
              v2[1] = _mm_loadu_si128(v2);
              --v6;
            }
            while ( v6 );
          }
          v10[0] = v4;
          *a1 = _mm_loadh_ps(v10);
        }
        v2 = v5;
      }
      while ( a2 != (__m128 *)v5 );
    }
  }
}
