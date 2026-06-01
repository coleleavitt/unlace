void __fastcall sub_3EEBA0(__int64 a1, const __m128i *a2)
{
  const __m128i *i; // rbx
  signed __int64 v4; // rax
  __m128i v5; // xmm1
  __int64 *v6; // rcx
  __int64 v7; // r14
  __int64 v8; // r13
  int v9; // esi
  const __m128i *v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdx

  if ( (const __m128i *)a1 != a2 )
  {
    for ( i = (const __m128i *)(a1 + 24); a2 != i; *(_QWORD *)a1 = v5.m128i_i64[0] )
    {
      while ( 1 )
      {
        v5 = _mm_loadl_epi64(i);
        v6 = (__int64 *)i;
        i = (const __m128i *)((char *)i + 24);
        v7 = i[-1].m128i_i64[0];
        v8 = i[-1].m128i_i64[1];
        v9 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v5, 229));
        if ( *(_DWORD *)(a1 + 4) > v9 )
          break;
        if ( v9 < i[-3].m128i_i32[1] )
        {
          v10 = i - 3;
          do
          {
            v11 = _mm_loadu_si128(v10);
            v12 = v10[1].m128i_i64[0];
            v6 = (__int64 *)v10;
            v10 = (const __m128i *)((char *)v10 - 24);
            v10[3] = v11;
            v10[4].m128i_i64[0] = v12;
          }
          while ( v10->m128i_i32[1] > v9 );
        }
        v6[1] = v7;
        v6[2] = v8;
        *v6 = v5.m128i_i64[0];
        if ( a2 == i )
          return;
      }
      if ( (__int64)v6 - a1 > 0 )
      {
        v4 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v6 - a1) >> 3) - 1;
        if ( v4 < 0 )
          v4 = 0;
        memmove((char *)&i[-1] - 24 * v4 - 8, &v6[-3 * v4 - 3], 8 * (3 * v4 + 3));
      }
      *(_QWORD *)(a1 + 8) = v7;
      *(_QWORD *)(a1 + 16) = v8;
    }
  }
}
