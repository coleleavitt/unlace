void __fastcall sub_7B53E0(
        const __m128i *dest,
        const __m128i *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6)
{
  __m128i *v6; // r12
  const __m128i *v7; // rbp
  const __m128i *v8; // rbx
  size_t v9; // r13
  __m128i *v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  signed __int64 v13; // r13
  __m128i *v14; // rdx
  const __m128i *v15; // rax
  const __m128i *v16; // rdx
  signed __int64 v17; // rdx
  signed __int64 v18; // rdx
  __m128i v19; // xmm0

  v6 = (__m128i *)dest;
  v7 = a3;
  v8 = a2;
  if ( a4 > a5 )
  {
    v13 = (char *)a3 - (char *)a2;
    if ( (char *)a3 - (char *)a2 <= 16 )
    {
      if ( (char *)a3 - (char *)a2 == 16 )
      {
        v19 = _mm_loadu_si128(a2);
        v14 = a6 + 1;
        *a6 = v19;
        if ( dest == a2 )
        {
          v7[-1] = v19;
          return;
        }
      }
      else
      {
        v14 = (__m128i *)((char *)a6 + v13);
        if ( dest == a2 )
          return;
      }
    }
    else
    {
      a6 = (__m128i *)memmove(a6, a2, (char *)a3 - (char *)a2);
      v14 = (__m128i *)((char *)a6 + v13);
      if ( dest == a2 )
      {
        v17 = v13;
        goto LABEL_24;
      }
    }
    if ( a6 == v14 )
      return;
    v15 = a2 - 1;
    v16 = v14 - 1;
    while ( 1 )
    {
      if ( v16->m128i_i64[0] < (unsigned __int64)v15->m128i_i64[0] )
      {
        v7[-1] = _mm_loadu_si128(v15);
        if ( dest == v15 )
        {
          v18 = (char *)&v16[1] - (char *)a6;
          if ( v18 <= 16 )
          {
            if ( v18 == 16 )
              v7[-2] = _mm_loadu_si128(a6);
          }
          else
          {
            memmove((char *)&v7[-1] - v18, a6, v18);
          }
          return;
        }
        --v15;
      }
      else
      {
        v7[-1] = _mm_loadu_si128(v16);
        if ( a6 == v16 )
          return;
        --v16;
      }
      --v7;
    }
  }
  v9 = (char *)a2 - (char *)dest;
  if ( (char *)a2 - (char *)dest <= 16 )
  {
    if ( (char *)a2 - (char *)dest == 16 )
      *a6 = _mm_loadu_si128(dest);
  }
  else
  {
    a6 = (__m128i *)memmove(a6, dest, v9);
  }
  v10 = (__m128i *)((char *)a6 + v9);
  if ( a2 != v7 && a6 != v10 )
  {
    do
    {
      if ( v8->m128i_i64[0] < (unsigned __int64)a6->m128i_i64[0] )
      {
        v11 = _mm_loadu_si128(v8);
        ++v6;
        ++v8;
        v6[-1] = v11;
        if ( v10 == a6 )
          return;
      }
      else
      {
        v12 = _mm_loadu_si128(a6++);
        ++v6;
        v6[-1] = v12;
        if ( v10 == a6 )
          return;
      }
    }
    while ( v7 != v8 );
  }
  if ( v10 != a6 )
  {
    v17 = (char *)v10 - (char *)a6;
    if ( v17 <= 16 )
    {
      if ( v17 == 16 )
        *v6 = _mm_loadu_si128(a6);
      return;
    }
LABEL_24:
    memmove(v6, a6, v17);
  }
}

