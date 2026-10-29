void __fastcall sub_7F6CC0(
        const __m128i *dest,
        const __m128i *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6)
{
  const __m128i *v6; // r12
  __m128i *v7; // rbp
  const __m128i *v8; // rbx
  size_t v9; // r13
  __m128i *v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  signed __int64 v13; // rdx
  signed __int64 v14; // r13
  __m128i *v15; // rcx
  const __m128i *v16; // rsi
  const __m128i *v17; // rcx
  __int8 *v18; // rdi
  signed __int64 v19; // rdx
  __m128i v20; // xmm0

  v6 = a2;
  v7 = (__m128i *)dest;
  v8 = a3;
  if ( a4 > a5 )
  {
    v14 = (char *)a3 - (char *)a2;
    if ( (char *)a3 - (char *)a2 <= 24 )
    {
      if ( (char *)a3 - (char *)a2 == 24 )
      {
        v20 = _mm_loadu_si128(a2);
        v15 = (__m128i *)((char *)a6 + 24);
        *a6 = v20;
        a6[1].m128i_i64[0] = a2[1].m128i_i64[0];
        if ( dest == a2 )
        {
          *(__m128i *)((char *)a3 - 24) = v20;
          a3[-1].m128i_i64[1] = a6[1].m128i_i64[0];
          return;
        }
      }
      else
      {
        v15 = (__m128i *)((char *)a6 + v14);
        if ( dest == a2 )
          return;
      }
    }
    else
    {
      a6 = (__m128i *)memmove(a6, a2, (char *)a3 - (char *)a2);
      v15 = (__m128i *)((char *)a6 + v14);
      if ( dest == a2 )
      {
        v13 = v14;
        goto LABEL_13;
      }
    }
    if ( a6 == v15 )
      return;
    v16 = (const __m128i *)((char *)a2 - 24);
    v17 = (__m128i *)((char *)v15 - 24);
    while ( 1 )
    {
      v18 = &v8[-2].m128i_i8[8];
      if ( v17->m128i_u32[1] + ((unsigned __int64)v17->m128i_u32[0] << 32) < v16->m128i_u32[1]
                                                                           + ((unsigned __int64)v16->m128i_u32[0] << 32) )
      {
        *(const __m128i *)((char *)&v8[-2] + 8) = _mm_loadu_si128(v16);
        *((_QWORD *)v18 + 2) = v16[1].m128i_i64[0];
        if ( v7 == v16 )
        {
          v19 = (char *)&v17[1].m128i_u64[1] - (char *)a6;
          if ( v19 <= 24 )
          {
            if ( v19 == 24 )
            {
              v8[-3] = _mm_loadu_si128(a6);
              v8[-2].m128i_i64[0] = a6[1].m128i_i64[0];
            }
          }
          else
          {
            memmove(&v18[-v19], a6, v19);
          }
          return;
        }
        v16 = (const __m128i *)((char *)v16 - 24);
      }
      else
      {
        *(const __m128i *)((char *)&v8[-2] + 8) = _mm_loadu_si128(v17);
        *((_QWORD *)v18 + 2) = v17[1].m128i_i64[0];
        if ( a6 == v17 )
          return;
        v17 = (const __m128i *)((char *)v17 - 24);
      }
      v8 = (const __m128i *)((char *)v8 - 24);
    }
  }
  v9 = (char *)a2 - (char *)dest;
  if ( (char *)a2 - (char *)dest <= 24 )
  {
    if ( (char *)a2 - (char *)dest == 24 )
    {
      *a6 = _mm_loadu_si128(dest);
      a6[1].m128i_i64[0] = dest[1].m128i_i64[0];
    }
  }
  else
  {
    a6 = (__m128i *)memmove(a6, dest, v9);
  }
  v10 = (__m128i *)((char *)a6 + v9);
  if ( a2 != v8 && a6 != v10 )
  {
    do
    {
      if ( v6->m128i_u32[1] + ((unsigned __int64)v6->m128i_u32[0] << 32) < a6->m128i_u32[1]
                                                                         + ((unsigned __int64)a6->m128i_u32[0] << 32) )
      {
        v11 = _mm_loadu_si128(v6);
        v7 = (__m128i *)((char *)v7 + 24);
        v6 = (const __m128i *)((char *)v6 + 24);
        *(__m128i *)((char *)v7 - 24) = v11;
        v7[-1].m128i_i64[1] = v6[-1].m128i_i64[1];
        if ( a6 == v10 )
          break;
      }
      else
      {
        v12 = _mm_loadu_si128(a6);
        a6 = (__m128i *)((char *)a6 + 24);
        v7 = (__m128i *)((char *)v7 + 24);
        *(__m128i *)((char *)v7 - 24) = v12;
        v7[-1].m128i_i64[1] = a6[-1].m128i_i64[1];
        if ( a6 == v10 )
          break;
      }
    }
    while ( v8 != v6 );
  }
  if ( v10 != a6 )
  {
    v13 = (char *)v10 - (char *)a6;
    if ( v13 <= 24 )
    {
      if ( v13 == 24 )
      {
        *v7 = _mm_loadu_si128(a6);
        v7[1].m128i_i64[0] = a6[1].m128i_i64[0];
      }
      return;
    }
LABEL_13:
    memmove(v7, a6, v13);
  }
}
