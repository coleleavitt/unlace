__m128i *__fastcall sub_222AD0(__m128i *a1, __int64 a2, __int64 a3, __m128i *a4, double a5, double a6, __m128 a7)
{
  __int64 v7; // rax
  __int64 v9; // r15
  __int64 v10; // rbx
  __m128 v11; // xmm0
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r13
  const char *v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 *v21; // rcx
  __int64 v23; // [rsp+8h] [rbp-50h]

  v7 = a3 - a2;
  v9 = (a3 - a2) >> 5;
  v10 = a3;
  v11 = (__m128)_mm_loadu_si128(a4);
  v12 = v11.m128_u64[0];
  v13 = _mm_movehl_ps(a7, v11).m128_u64[0];
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v14 = v12;
      v15 = (__int64)(v12 - v13) >> 5;
      v16 = v15;
      if ( v12 == v13 )
      {
        v16 = 16;
        v14 = *(_QWORD *)(a4[1].m128i_i64[1] - 8) + 512LL;
      }
      if ( v9 <= v16 )
        v16 = v9;
      v17 = (const char *)(32 * v16);
      v23 = v10 - 32 * v16;
      if ( 32 * v16 > 0 )
      {
        v18 = v10 - 32 * ((32 * v16) >> 5);
        do
        {
          v14 -= 32;
          v10 -= 32;
          sub_20DAF0(v14, v17);
          v17 = (const char *)v10;
          sub_20DD80(v14, v10);
        }
        while ( v10 != v18 );
        v12 = a4->m128i_i64[0];
        v13 = a4->m128i_u64[1];
        v15 = (__int64)(a4->m128i_i64[0] - v13) >> 5;
      }
      v19 = v15 - v16;
      if ( v19 < 0 )
      {
        v20 = ~((unsigned __int64)~v19 >> 4);
      }
      else
      {
        if ( v19 <= 15 )
        {
          v9 -= v16;
          v12 += -32 * v16;
          a4->m128i_i64[0] = v12;
          if ( v9 <= 0 )
            goto LABEL_16;
          goto LABEL_13;
        }
        v20 = v19 >> 4;
      }
      v9 -= v16;
      v21 = (unsigned __int64 *)(a4[1].m128i_i64[1] + 8 * v20);
      a4[1].m128i_i64[1] = (__int64)v21;
      v13 = *v21;
      v12 = v13 + 32 * (v19 - 16 * v20);
      a4->m128i_i64[0] = v12;
      *(__m128i *)((char *)a4 + 8) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)(v13 + 512));
      if ( v9 <= 0 )
      {
LABEL_16:
        v11 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)v13);
        break;
      }
LABEL_13:
      v10 = v23;
    }
  }
  *a1 = (__m128i)v11;
  a1[1] = _mm_loadu_si128(a4 + 1);
  return a1;
}
