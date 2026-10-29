void __fastcall sub_19F6300(__m128 *a1, __m128 *a2)
{
  const __m128i *v2; // rdx
  double v3; // r11
  const __m128i *v4; // rbx
  unsigned int v5; // r8d
  __int64 v6; // rcx
  __m128i *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  double v10[2]; // [rsp+0h] [rbp-10h] BYREF

  if ( a1 != a2 )
  {
    v2 = (const __m128i *)&a1[1];
    if ( a2 != &a1[1] )
    {
      do
      {
        v3 = *(double *)&v2->m128i_i64[1];
        v4 = v2 + 1;
        v5 = 4 * (*(_DWORD *)(*(_QWORD *)&v3 + 44LL) + 4 * *(_DWORD *)(*(_QWORD *)&v3 + 40LL));
        if ( v5 < 4 * (*(_DWORD *)(a1->m128_u64[1] + 44) + 4 * *(_DWORD *)(a1->m128_u64[1] + 40)) )
        {
          v9 = ((char *)v2 - (char *)a1) >> 4;
          if ( (char *)v2 - (char *)a1 > 0 )
          {
            do
            {
              --v2;
              v2[1] = _mm_loadu_si128(v2);
              --v9;
            }
            while ( v9 );
          }
          v10[0] = v3;
          *a1 = _mm_loadh_ps(v10);
        }
        else
        {
          v6 = v2[-1].m128i_i64[1];
          v7 = (__m128i *)&v2[-1];
          if ( v5 < 4 * (*(_DWORD *)(v6 + 44) + 4 * *(_DWORD *)(v6 + 40)) )
          {
            while ( 1 )
            {
              v8 = v7->m128i_i64[0];
              v7[1].m128i_i64[1] = v6;
              v6 = v7[-1].m128i_i64[1];
              v7[1].m128i_i64[0] = v8;
              if ( v5 >= 4 * (*(_DWORD *)(v6 + 44) + 4 * *(_DWORD *)(v6 + 40)) )
                break;
              --v7;
            }
          }
          else
          {
            v7 = (__m128i *)v2;
          }
          v10[0] = v3;
          *(__m128 *)v7 = _mm_loadh_ps(v10);
        }
        v2 = v4;
      }
      while ( a2 != (__m128 *)v4 );
    }
  }
}
