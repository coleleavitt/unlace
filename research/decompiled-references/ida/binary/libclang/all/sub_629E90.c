void __fastcall sub_629E90(const __m128i *dest, __m128i *a2, __m128i *a3, __int64 a4, __int64 a5, __m128i *a6)
{
  __m128i *v6; // r14
  __m128i *v7; // r12
  __m128i *v8; // rbp
  __m128i *v9; // rbx
  size_t v10; // r13
  __m128i *v11; // r13
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  size_t v14; // r15
  __m128i *v15; // r13
  __m128i *v16; // rbx
  __m128i *v17; // r13
  signed __int64 v18; // rdx
  __m128i *v19; // rsi
  __m128i *v20; // rdi
  __m128i v21; // xmm0

  v6 = (__m128i *)dest;
  v7 = a6;
  v8 = a3;
  v9 = a2;
  if ( a4 > a5 )
  {
    v14 = (char *)a3 - (char *)a2;
    if ( (char *)a3 - (char *)a2 <= 16 )
    {
      if ( (char *)a3 - (char *)a2 == 16 )
      {
        v21 = _mm_loadu_si128(a2);
        v15 = a6 + 1;
        *a6 = v21;
        if ( a2 == dest )
        {
          a3[-1] = v21;
          return;
        }
      }
      else
      {
        v15 = (__m128i *)((char *)a6 + v14);
        if ( a2 == dest )
          return;
      }
    }
    else
    {
      v15 = (__m128i *)((char *)a6 + v14);
      memmove(a6, a2, (char *)a3 - (char *)a2);
      if ( a2 == dest )
      {
        memmove(a2, v7, v14);
        return;
      }
    }
    if ( v7 == v15 )
      return;
    v16 = a2 - 1;
    v17 = v15 - 1;
    while ( 1 )
    {
      if ( (unsigned __int8)sub_6299B0((unsigned __int16 *)v17->m128i_i64[1], (unsigned __int16 *)v16->m128i_i64[1]) )
      {
        v8[-1] = _mm_loadu_si128(v16);
        if ( dest == v16 )
        {
          v18 = (char *)&v17[1] - (char *)v7;
          if ( v18 <= 16 )
          {
            if ( v18 == 16 )
              v8[-2] = _mm_loadu_si128(v7);
          }
          else
          {
            v20 = (__m128i *)((char *)v8 - v18 - 16);
            v19 = v7;
LABEL_25:
            memmove(v20, v19, v18);
          }
          return;
        }
        --v16;
      }
      else
      {
        v8[-1] = _mm_loadu_si128(v17);
        if ( v7 == v17 )
          return;
        --v17;
      }
      --v8;
    }
  }
  v10 = (char *)a2 - (char *)dest;
  if ( (char *)a2 - (char *)dest <= 16 )
  {
    if ( (char *)a2 - (char *)dest == 16 )
      *a6 = _mm_loadu_si128(dest);
  }
  else
  {
    memmove(a6, dest, v10);
  }
  v11 = (__m128i *)((char *)v7 + v10);
  if ( a2 != v8 && v7 != v11 )
  {
    do
    {
      if ( (unsigned __int8)sub_6299B0((unsigned __int16 *)v9->m128i_i64[1], (unsigned __int16 *)v7->m128i_i64[1]) )
      {
        v12 = _mm_loadu_si128(v9);
        ++v6;
        ++v9;
        v6[-1] = v12;
        if ( v11 == v7 )
          return;
      }
      else
      {
        v13 = _mm_loadu_si128(v7++);
        ++v6;
        v6[-1] = v13;
        if ( v11 == v7 )
          return;
      }
    }
    while ( v8 != v9 );
  }
  if ( v11 != v7 )
  {
    v18 = (char *)v11 - (char *)v7;
    if ( (char *)v11 - (char *)v7 > 16 )
    {
      v19 = v7;
      v20 = v6;
      goto LABEL_25;
    }
    if ( (char *)v11 - (char *)v7 == 16 )
      *v6 = _mm_loadu_si128(v7);
  }
}

