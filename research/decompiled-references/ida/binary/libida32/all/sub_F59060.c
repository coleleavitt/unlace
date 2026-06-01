__int64 __fastcall sub_F59060(const __m128i *a1, const __m128i *a2, const __m128i *a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v5; // r14
  const __m128i *v7; // rbp
  __m128 v9; // xmm0
  __m128i v10; // xmm7
  __m128i v11; // xmm2
  __int64 result; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm1
  __int64 v15; // r12
  __int64 v16; // rdx
  __m128i v17; // xmm4
  const __m128i *v18; // [rsp+0h] [rbp-78h] BYREF
  __int8 *v19; // [rsp+8h] [rbp-70h]
  __int8 *v20; // [rsp+10h] [rbp-68h]
  __m128 *v21; // [rsp+18h] [rbp-60h]
  __m128 v22; // [rsp+20h] [rbp-58h] BYREF
  __m128 v23; // [rsp+30h] [rbp-48h] BYREF

  v5 = a1;
  v7 = a3;
  if ( a4 != a3 && a2 != a1 )
  {
    v19 = &a1[1].m128i_i8[8];
    v20 = &a3[1].m128i_i8[8];
    v21 = &v22;
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = v5;
        v9 = _mm_loadh_ps((const double *)&v18);
        v18 = v7;
        v23 = v9;
        v22 = _mm_loadh_ps((const double *)&v18);
        if ( !(unsigned __int8)sub_F58800(v21, (__int64 **)&v23) )
          break;
        v10 = _mm_loadu_si128(v7);
        v7 = (const __m128i *)((char *)v7 + 56);
        a5 += 56;
        *(__m128i *)(a5 - 56) = v10;
        *(__m128i *)(a5 - 40) = _mm_loadu_si128((const __m128i *)((char *)v7 - 40));
        *(__m128i *)(a5 - 24) = _mm_loadu_si128((const __m128i *)((char *)v7 - 24));
        *(_QWORD *)(a5 - 8) = v7[-1].m128i_i64[1];
        if ( a4 == v7 || a2 == v5 )
          goto LABEL_11;
        v20 = &v7[1].m128i_i8[8];
      }
      v11 = _mm_loadu_si128(v5);
      v5 = (const __m128i *)((char *)v5 + 56);
      a5 += 56;
      *(__m128i *)(a5 - 56) = v11;
      *(__m128i *)(a5 - 40) = _mm_loadu_si128((const __m128i *)((char *)v5 - 40));
      *(__m128i *)(a5 - 24) = _mm_loadu_si128((const __m128i *)((char *)v5 - 24));
      *(_QWORD *)(a5 - 8) = v5[-1].m128i_i64[1];
      if ( a2 == v5 || a4 == v7 )
        break;
      v19 = &v5[1].m128i_i8[8];
    }
  }
LABEL_11:
  result = a5;
  v13 = 0x6DB6DB6DB6DB6DB7LL * (((char *)a2 - (char *)v5) >> 3);
  if ( (char *)a2 - (char *)v5 > 0 )
  {
    do
    {
      v14 = _mm_loadu_si128(v5);
      result += 56;
      v5 = (const __m128i *)((char *)v5 + 56);
      *(__m128i *)(result - 56) = v14;
      *(__m128i *)(result - 40) = _mm_loadu_si128((const __m128i *)((char *)v5 - 40));
      *(__m128i *)(result - 24) = _mm_loadu_si128((const __m128i *)((char *)v5 - 24));
      *(_QWORD *)(result - 8) = v5[-1].m128i_i64[1];
      --v13;
    }
    while ( v13 );
  }
  v15 = (char *)a4 - (char *)v7;
  v16 = 0x6DB6DB6DB6DB6DB7LL * (v15 >> 3);
  if ( v15 > 0 )
  {
    do
    {
      v17 = _mm_loadu_si128(v7);
      result += 56;
      v7 = (const __m128i *)((char *)v7 + 56);
      *(__m128i *)(result - 56) = v17;
      *(__m128i *)(result - 40) = _mm_loadu_si128((const __m128i *)((char *)v7 - 40));
      *(__m128i *)(result - 24) = _mm_loadu_si128((const __m128i *)((char *)v7 - 24));
      *(_QWORD *)(result - 8) = v7[-1].m128i_i64[1];
      --v16;
    }
    while ( v16 );
  }
  return result;
}

