void __fastcall sub_1E00130(const __m128i **a1)
{
  const __m128i *v1; // rdx
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __m128i v7; // xmm2
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __m128i *v15; // rdi
  void **v16; // rbp
  unsigned __int64 v17; // r12
  void *v18; // rdi

  v1 = *a1;
  v3 = (__int64)a1[4];
  v4 = (__int64)a1[5];
  v5 = (__int64)a1[6];
  v6 = (__int64)a1[7];
  *((__m128i *)a1 + 2) = _mm_loadu_si128(v1 + 976);
  *((__m128i *)a1 + 3) = _mm_loadu_si128(v1 + 977);
  v7 = _mm_loadu_si128(v1 + 978);
  v1[976].m128i_i64[0] = v3;
  v1[976].m128i_i64[1] = v4;
  v1[977].m128i_i64[0] = v5;
  v1[977].m128i_i64[1] = v6;
  v8 = (__int64)a1[9];
  v9 = (__int64)a1[10];
  v10 = (__int64)a1[11];
  v11 = (__int64)a1[8];
  *((__m128i *)a1 + 4) = v7;
  *((__m128i *)a1 + 5) = _mm_loadu_si128(v1 + 979);
  v1[978].m128i_i64[1] = v8;
  v1[979].m128i_i64[0] = v9;
  v12 = v1[975].m128i_i64[0];
  v1[978].m128i_i64[0] = v11;
  v1[979].m128i_i64[1] = v10;
  v13 = (__int64)a1[2];
  a1[2] = (const __m128i *)v12;
  v1[975].m128i_i64[0] = v13;
  v14 = (__int64)a1[3];
  v15 = (__m128i *)a1[2];
  a1[3] = (const __m128i *)v1[975].m128i_i64[1];
  v1[975].m128i_i64[1] = v14;
  if ( v15 )
  {
    v16 = (void **)a1[7];
    v17 = (unsigned __int64)&a1[11]->m128i_u64[1];
    if ( v17 > (unsigned __int64)v16 )
    {
      do
      {
        v18 = *v16++;
        operator delete(v18);
      }
      while ( v17 > (unsigned __int64)v16 );
      v15 = (__m128i *)a1[2];
    }
    operator delete(v15);
  }
}
