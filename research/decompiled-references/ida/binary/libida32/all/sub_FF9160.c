void __fastcall sub_FF9160(__m128i *a1, const __m128i *a2)
{
  const __m128i *v2; // rdx
  unsigned __int32 v3; // r9d
  __m128i v4; // xmm6
  __m128i *v5; // rax
  __int64 v6; // r10
  __m128i v7; // xmm7
  __int64 v8; // rcx
  const __m128i *v9; // rax
  unsigned __int64 v10; // rcx
  __m128i v11; // xmm2
  const __m128i *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rcx
  __m128i v18; // xmm3
  __int64 v19; // rax
  __int64 v20; // r8
  __m128i v21; // xmm4
  __int64 v22; // r8
  __m128i v23; // [rsp+0h] [rbp-28h] BYREF
  __m128i v24; // [rsp+10h] [rbp-18h]

  if ( a1 != a2 )
  {
    v2 = a1 + 2;
    if ( a2 != &a1[2] )
    {
      do
      {
        while ( 1 )
        {
          v9 = v2;
          v10 = v2[1].m128i_u64[1];
          if ( v10 > a1[1].m128i_i64[1] )
            break;
          v3 = v2->m128i_u32[2];
          if ( v10 == a1[1].m128i_i64[1] && a1->m128i_i32[2] > v3 )
            break;
          v4 = _mm_loadu_si128(v2 + 1);
          v5 = (__m128i *)v2;
          v6 = v2->m128i_i64[0];
          v23.m128i_i64[1] = _mm_loadu_si128(v2).m128i_i64[1];
          v24 = v4;
          while ( v10 > v5[-1].m128i_i64[1] || v10 == v5[-1].m128i_i64[1] && v5[-2].m128i_i32[2] > v3 )
          {
            v20 = v5[-2].m128i_i64[0];
            v21 = _mm_loadu_si128((__m128i *)((char *)v5 - 24));
            v5 -= 2;
            v5[2].m128i_i64[0] = v20;
            v22 = v5[1].m128i_i64[1];
            *(__m128i *)((char *)v5 + 40) = v21;
            v5[3].m128i_i64[1] = v22;
          }
          v7 = _mm_loadu_si128((const __m128i *)&v23.m128i_u64[1]);
          v8 = v24.m128i_i64[1];
          v5->m128i_i64[0] = v6;
          v2 += 2;
          *(__m128i *)((char *)v5 + 8) = v7;
          v5[1].m128i_i64[1] = v8;
          if ( a2 == v2 )
            return;
        }
        v11 = _mm_loadu_si128(v2 + 1);
        v12 = v2 + 2;
        v13 = v2->m128i_i64[0];
        v14 = (char *)v2 - (char *)a1;
        v23.m128i_i64[1] = _mm_loadu_si128(v2).m128i_i64[1];
        v15 = ((char *)v2 - (char *)a1) >> 5;
        v24 = v11;
        if ( v14 > 0 )
        {
          do
          {
            v9 -= 2;
            v16 = _mm_loadu_si128((const __m128i *)&v9->m128i_u64[1]);
            v9[2].m128i_i64[0] = v9->m128i_i64[0];
            v17 = v9[1].m128i_i64[1];
            *(__m128i *)((char *)v9 + 40) = v16;
            v9[3].m128i_i64[1] = v17;
            --v15;
          }
          while ( v15 );
        }
        v18 = _mm_loadu_si128((const __m128i *)&v23.m128i_u64[1]);
        v19 = v24.m128i_i64[1];
        a1->m128i_i64[0] = v13;
        v2 = v12;
        *(__m128i *)((char *)a1 + 8) = v18;
        a1[1].m128i_i64[1] = v19;
      }
      while ( a2 != v12 );
    }
  }
}

