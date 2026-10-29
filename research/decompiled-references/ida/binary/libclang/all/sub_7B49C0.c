const __m128i *__fastcall sub_7B49C0(__m128i *a1, const __m128i *a2, const __m128i *a3)
{
  __m128i *v4; // r11
  __m128i *v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  const __m128i *v10; // rcx
  __m128i *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rdi
  __m128i v15; // xmm0
  __m128i *v16; // rcx
  __m128i *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rdx
  __m128i v21; // xmm0
  const __m128i *v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rcx
  __int64 v26; // rdx

  if ( a1 == a2 )
    return a3;
  v4 = a1;
  if ( a2 == a3 )
    return a1;
  v6 = a1;
  v7 = a3 - a1;
  v8 = a2 - a1;
  if ( v8 == v7 - v8 )
  {
    v23 = a2;
    do
    {
      v24 = _mm_loadu_si128(v23);
      v25 = v4->m128i_i64[0];
      ++v4;
      ++v23;
      v26 = v4[-1].m128i_i64[1];
      v4[-1] = v24;
      v23[-1].m128i_i64[0] = v25;
      v23[-1].m128i_i64[1] = v26;
    }
    while ( a2 != v4 );
    return a2;
  }
  else
  {
    v9 = v7 - v8;
    if ( v8 >= (__int64)(v7 - v8) )
      goto LABEL_12;
    while ( 1 )
    {
      v10 = &v6[v8];
      if ( v9 > 0 )
      {
        v11 = v6;
        v12 = 0;
        do
        {
          v13 = v11->m128i_i64[0];
          v14 = v11->m128i_i64[1];
          ++v12;
          ++v11;
          v15 = _mm_loadu_si128(v10++);
          v11[-1] = v15;
          v10[-1].m128i_i64[0] = v13;
          v10[-1].m128i_i64[1] = v14;
        }
        while ( v9 != v12 );
        v6 += v9;
      }
      if ( !(v7 % v8) )
        break;
      v9 = v8;
      v8 -= v7 % v8;
      while ( 1 )
      {
        v7 = v9;
        v9 -= v8;
        if ( v8 < v9 )
          break;
LABEL_12:
        v16 = &v6[v7];
        v6 = &v16[-v9];
        if ( v8 > 0 )
        {
          v17 = &v16[-v9];
          v18 = 0;
          do
          {
            v19 = v17[-1].m128i_i64[0];
            v20 = v17[-1].m128i_i64[1];
            ++v18;
            --v17;
            v21 = _mm_loadu_si128(--v16);
            *v17 = v21;
            v16->m128i_i64[0] = v19;
            v16->m128i_i64[1] = v20;
          }
          while ( v8 != v18 );
          v6 -= v8;
        }
        v8 = v7 % v9;
        if ( !(v7 % v9) )
          return (__m128i *)((char *)v4 + (char *)a3 - (char *)a2);
      }
    }
    return (__m128i *)((char *)v4 + (char *)a3 - (char *)a2);
  }
}

