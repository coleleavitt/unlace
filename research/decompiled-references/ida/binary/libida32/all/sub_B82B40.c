unsigned __int64 __fastcall sub_B82B40(__m128i *a1, const __m128i *a2, const __m128i *a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int8 *v5; // rbx
  __int64 v6; // r10
  const __m128i *v7; // rcx
  __m128i *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __m128i *v13; // rcx
  __m128i *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r11
  const __m128i *v19; // rdx
  __m128i *v20; // rax
  __m128i v21; // xmm2
  __int64 v22; // r8
  __int64 v23; // rcx

  if ( a1 == a2 )
    return (unsigned __int64)a3;
  if ( a2 == a3 )
    return (unsigned __int64)a1;
  v3 = a3 - a1;
  v4 = a2 - a1;
  v5 = &a1->m128i_i8[(char *)a3 - (char *)a2];
  if ( v4 == v3 - v4 )
  {
    v19 = a2;
    v20 = a1;
    do
    {
      v21 = _mm_loadu_si128(v19);
      v22 = v20->m128i_i64[0];
      ++v20;
      ++v19;
      v23 = v20[-1].m128i_i64[1];
      v20[-1] = v21;
      v19[-1].m128i_i64[0] = v22;
      v19[-1].m128i_i64[1] = v23;
    }
    while ( a2 != v20 );
    return (unsigned __int64)&a1[1] + (((char *)&a2[-1] - (char *)a1) & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    v6 = v3 - v4;
    if ( v4 >= v3 - v4 )
      goto LABEL_12;
    while ( 1 )
    {
      v7 = &a1[v4];
      if ( v6 > 0 )
      {
        v8 = a1;
        v9 = 0;
        do
        {
          v10 = v8->m128i_i64[0];
          v11 = v8->m128i_i64[1];
          ++v9;
          ++v8;
          v12 = _mm_loadu_si128(v7++);
          v8[-1] = v12;
          v7[-1].m128i_i64[0] = v10;
          v7[-1].m128i_i64[1] = v11;
        }
        while ( v6 != v9 );
        a1 += v6;
      }
      if ( !(v3 % v4) )
        break;
      v6 = v4;
      v4 -= v3 % v4;
      while ( 1 )
      {
        v3 = v6;
        v6 -= v4;
        if ( v4 < v6 )
          break;
LABEL_12:
        v13 = &a1[v3];
        a1 = &v13[-v6];
        if ( v4 > 0 )
        {
          v14 = &v13[-v6];
          v15 = 0;
          do
          {
            --v14;
            --v13;
            v16 = v14->m128i_i64[0];
            v17 = v14->m128i_i64[1];
            ++v15;
            *v14 = _mm_loadu_si128(v13);
            v13->m128i_i64[0] = v16;
            v13->m128i_i64[1] = v17;
          }
          while ( v4 != v15 );
          a1 -= v4;
        }
        v4 = v3 % v6;
        if ( !(v3 % v6) )
          return (unsigned __int64)v5;
      }
    }
    return (unsigned __int64)v5;
  }
}

