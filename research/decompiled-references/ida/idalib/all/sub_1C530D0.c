unsigned __int64 __fastcall sub_1C530D0(const __m128i *a1, const __m128i *a2, const __m128i *a3)
{
  __int8 *v3; // rbx
  signed __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  const __m128i *v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __int64 v13; // r11
  __int64 v14; // rdx
  __m128i *v15; // rcx
  __int64 *v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // r11
  const __m128i *v23; // rdx
  const __m128i *v24; // rax
  __int64 v25; // r8
  __m128i v26; // xmm2
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx

  if ( a1 == a2 )
    return (unsigned __int64)a3;
  if ( a2 == a3 )
    return (unsigned __int64)a1;
  v3 = &a1->m128i_i8[(char *)a3 - (char *)a2];
  v4 = 0xAAAAAAAAAAAAAAABLL * (((char *)a3 - (char *)a1) >> 3);
  v5 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 3);
  if ( v5 == v4 - v5 )
  {
    v23 = a2;
    v24 = a1;
    do
    {
      v25 = v24->m128i_i64[0];
      v26 = _mm_loadu_si128(v23);
      v24 = (const __m128i *)((char *)v24 + 24);
      v23 = (const __m128i *)((char *)v23 + 24);
      v27 = v24[-1].m128i_i64[0];
      *(__m128i *)((char *)v24 - 24) = v26;
      v23[-2].m128i_i64[1] = v25;
      v28 = v23[-1].m128i_i64[1];
      v23[-1].m128i_i64[0] = v27;
      v29 = v24[-1].m128i_i64[1];
      v24[-1].m128i_i64[1] = v28;
      v23[-1].m128i_i64[1] = v29;
    }
    while ( a2 != v24 );
    return (unsigned __int64)&a1[1].m128i_u64[((unsigned __int64)((char *)&a2[-2].m128i_u64[1] - (char *)a1) >> 3) + 1];
  }
  else
  {
    v6 = v4 - v5;
    if ( v5 >= v4 - v5 )
      goto LABEL_12;
    while ( 1 )
    {
      v7 = (const __m128i *)((char *)a1 + 24 * v5);
      if ( v6 > 0 )
      {
        v8 = (__int64 *)a1;
        v9 = 0;
        do
        {
          v10 = *v8;
          v11 = v8[1];
          ++v9;
          v8 += 3;
          v12 = _mm_loadu_si128(v7);
          v7 = (const __m128i *)((char *)v7 + 24);
          *(__m128i *)(v8 - 3) = v12;
          v7[-2].m128i_i64[1] = v10;
          v13 = v7[-1].m128i_i64[1];
          v7[-1].m128i_i64[0] = v11;
          v14 = *(v8 - 1);
          *(v8 - 1) = v13;
          v7[-1].m128i_i64[1] = v14;
        }
        while ( v6 != v9 );
        a1 = (const __m128i *)((char *)a1 + 24 * v6);
      }
      if ( !(v4 % v5) )
        break;
      v6 = v5;
      v5 -= v4 % v5;
      while ( 1 )
      {
        v4 = v6;
        v6 -= v5;
        if ( v5 < v6 )
          break;
LABEL_12:
        v15 = (__m128i *)((char *)a1 + 24 * v4);
        a1 = (__m128i *)((char *)v15 - 24 * v6);
        if ( v5 > 0 )
        {
          v16 = &v15->m128i_i64[-3 * v6];
          v17 = 0;
          do
          {
            v16 -= 3;
            v15 = (__m128i *)((char *)v15 - 24);
            v18 = *v16;
            v19 = v16[1];
            ++v17;
            *(__m128i *)v16 = _mm_loadu_si128(v15);
            v15->m128i_i64[0] = v18;
            v20 = v15[1].m128i_i64[0];
            v15->m128i_i64[1] = v19;
            v21 = v16[2];
            v16[2] = v20;
            v15[1].m128i_i64[0] = v21;
          }
          while ( v5 != v17 );
          a1 = (const __m128i *)((char *)a1 - 24 * v5);
        }
        v5 = v4 % v6;
        if ( !(v4 % v6) )
          return (unsigned __int64)v3;
      }
    }
    return (unsigned __int64)v3;
  }
}
