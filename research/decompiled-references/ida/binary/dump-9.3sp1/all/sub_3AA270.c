void __fastcall sub_3AA270(
        __m128 *a1,
        __m128 *a2,
        __m128i a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        __m128i a7,
        __m128 a8,
        __m128 si128)
{
  const __m128i *v9; // r15
  unsigned __int64 v11; // rax
  __m128i *v12; // rbx
  unsigned __int64 v13; // rax
  __m128i v14; // xmm2
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdi
  __m128i v21; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-60h]
  __m128i v23; // [rsp+20h] [rbp-58h] BYREF
  __m128i v24[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    v9 = (const __m128i *)&a1[2].m128_u16[4];
    while ( a2 != (__m128 *)v9 )
    {
      while ( 1 )
      {
        v11 = v9->m128i_u64[1];
        v12 = (__m128i *)v9;
        v9 = (const __m128i *)((char *)v9 + 40);
        if ( v11 >= a1->m128_u64[1] )
          break;
        a6 = (__m128i)v11;
        v13 = v9[-2].m128i_u64[1];
        v14 = _mm_loadl_epi64((const __m128i *)((char *)v9 - 40));
        a3.m128i_i64[0] = 0;
        a7 = _mm_loadu_si128(v9 - 1);
        v9[-2].m128i_i64[1] = 0;
        a4 = 0;
        v22 = v13;
        a5 = _mm_unpacklo_epi64(v14, a6);
        v23 = a5;
        v24[0] = a7;
        v9[-1] = 0;
        v15 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v12 - (char *)a1) >> 3);
        if ( (char *)v12 - (char *)a1 > 0 )
        {
          do
          {
            v16 = v12[-3].m128i_i64[1];
            v17 = v12[1].m128i_i64[0];
            v12 = (__m128i *)((char *)v12 - 40);
            v18 = v12[1].m128i_i64[0];
            a3 = _mm_loadu_si128((__m128i *)((char *)v12 + 24));
            *(__m128 *)((char *)v12 + 24) = a4;
            v12[2].m128i_i64[1] = v16;
            v19 = v12->m128i_i64[1];
            v12[1].m128i_i64[0] = 0;
            v12[3].m128i_i64[0] = v19;
            if ( v17 )
            {
              v12[4].m128i_i64[0] = 0;
              v21 = a3;
              qfree(v17);
              a3 = _mm_load_si128(&v21);
              a4 = 0;
            }
            v12[3].m128i_i64[1] = v18;
            v12[4] = a3;
            --v15;
          }
          while ( v15 );
        }
        a8 = (__m128)_mm_load_si128(&v23);
        v20 = a1[1].m128_i64[0];
        *a1 = a8;
        if ( v20 )
        {
          a1[1].m128_u64[1] = 0;
          qfree(v20);
        }
        si128 = (__m128)_mm_load_si128(v24);
        a1[1].m128_u64[0] = v22;
        *(__m128 *)((char *)a1 + 24) = si128;
        if ( a2 == (__m128 *)v9 )
          return;
      }
      sub_3AA180(
        v12->m128i_i64,
        *(double *)a3.m128i_i64,
        *(double *)a4.m128_u64,
        *(double *)a5.m128i_i64,
        *(double *)a6.m128i_i64,
        *(double *)a7.m128i_i64,
        *(double *)a8.m128_u64,
        si128);
    }
  }
}
