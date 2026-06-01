__m128i *__fastcall sub_9707E0(__m128i **a1, const __m128i *a2)
{
  __m128i *v2; // rbx
  __m128i *v4; // r14
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __m128i *v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // rcx
  const __m128i *v14; // rdx
  __m128i *v15; // rcx
  __m128i v16; // xmm1
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  __m128i *v18; // [rsp+8h] [rbp-40h]

  v2 = a1[1];
  if ( v2 != a1[2] )
  {
    *v2 = _mm_load_si128(a2);
    v2[1].m128i_i64[0] = a2[1].m128i_i64[0];
    a1[1] = (__m128i *)((char *)v2 + 24);
    return v2;
  }
  v4 = *a1;
  v6 = (char *)v2 - (char *)*a1;
  v7 = v6 >> 3;
  if ( 0xAAAAAAAAAAAAAAABLL * (v6 >> 3) )
  {
    v8 = 0x5555555555555556LL * v7;
    v9 = -16;
    if ( 0xAAAAAAAAAAAAAAABLL * v7 <= 0x5555555555555556LL * v7 && v8 <= 0xAAAAAAAAAAAAAAALL )
    {
      if ( !v8 )
      {
        v17 = 24;
        v12 = 0;
        v11 = nullptr;
        goto LABEL_7;
      }
      v9 = 16 * v7;
    }
  }
  else
  {
    v9 = 24;
  }
  v18 = (__m128i *)((char *)v2 - (char *)*a1);
  v10 = operator new(v9);
  v6 = (__int64)v18;
  v11 = (__m128i *)v10;
  v12 = v10 + v9;
  v17 = v10 + 24;
LABEL_7:
  v13 = a2[1].m128i_i64[0];
  *(__m128i *)((char *)v11 + v6) = _mm_load_si128(a2);
  *(__int64 *)((char *)v11[1].m128i_i64 + v6) = v13;
  if ( v2 == v4 )
  {
    v2 = v11;
  }
  else
  {
    v14 = v4;
    v15 = v11;
    do
    {
      v16 = _mm_loadu_si128(v14);
      v14 = (const __m128i *)((char *)v14 + 24);
      v15 = (__m128i *)((char *)v15 + 24);
      *(__m128i *)((char *)v15 - 24) = v16;
      v15[-1].m128i_i64[1] = v14[-1].m128i_i64[1];
    }
    while ( v2 != v14 );
    v2 = (__m128i *)((char *)v11 + 8 * ((unsigned __int64)((char *)&v2[-2].m128i_u64[1] - (char *)v4) >> 3) + 24);
    v17 = (__int64)&v2[1].m128i_i64[1];
  }
  if ( v4 )
    operator delete(v4);
  v18 = v11;
  a1[2] = (__m128i *)v12;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v17);
  return v2;
}

