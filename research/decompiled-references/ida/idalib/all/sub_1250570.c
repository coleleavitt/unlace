const __m128i **__fastcall sub_1250570(const __m128i **a1, const __m128i **a2)
{
  const __m128i *v3; // r12
  const __m128i *v4; // rbx
  __m128i *v5; // rdi
  __int64 v6; // r13
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  char *v9; // rcx
  char *v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // rsi
  __m128i v13; // xmm0
  char v14; // cl
  const __m128i *v16; // r14
  const __m128i *v17; // rax
  const __m128i *i; // rdx
  __m128i v19; // xmm3
  const __m128i *v20; // rdx
  __m128i v21; // xmm1
  char v22; // r8
  __m128i v23; // xmm2

  if ( a2 != a1 )
  {
    v3 = a2[1];
    v4 = *a2;
    v5 = (__m128i *)*a1;
    v6 = (char *)v3 - (char *)*a2;
    v7 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 3);
    v8 = v7;
    if ( v7 > 0xAAAAAAAAAAAAAAABLL * (((char *)a1[2] - (char *)v5) >> 3) )
    {
      v16 = nullptr;
      if ( v7 )
      {
        if ( v7 > 0xAAAAAAAAAAAAAAALL )
          std::__throw_bad_alloc();
        v17 = (const __m128i *)operator new((char *)a2[1] - (char *)*a2);
        v5 = (__m128i *)*a1;
        v16 = v17;
      }
      for ( i = v16; v3 != v4; i[-1].m128i_i64[1] = v4[-1].m128i_i64[1] )
      {
        v19 = _mm_loadu_si128(v4);
        v4 = (const __m128i *)((char *)v4 + 24);
        i = (const __m128i *)((char *)i + 24);
        *(__m128i *)((char *)i - 24) = v19;
      }
      if ( v5 )
        operator delete(v5);
      *a1 = v16;
      a1[2] = (const __m128i *)((char *)v16 + v6);
      a1[1] = (const __m128i *)((char *)v16 + v6);
    }
    else
    {
      v9 = (char *)a1[1];
      v10 = &v5->m128i_i8[v6];
      v11 = v9 - (char *)v5;
      v12 = 0xAAAAAAAAAAAAAAABLL * ((v9 - (char *)v5) >> 3);
      if ( v8 <= v12 )
      {
        if ( v6 > 0 )
        {
          do
          {
            v13 = _mm_loadu_si128(v4);
            v14 = v4[1].m128i_i8[0];
            v5 = (__m128i *)((char *)v5 + 24);
            v4 = (const __m128i *)((char *)v4 + 24);
            *(__m128i *)((char *)v5 - 24) = v13;
            v5[-1].m128i_i8[8] = v14;
            --v8;
          }
          while ( v8 );
        }
LABEL_6:
        a1[1] = (const __m128i *)v10;
        return a1;
      }
      v20 = (const __m128i *)((char *)v4 + v11);
      if ( v11 > 0 )
      {
        do
        {
          v21 = _mm_loadu_si128(v4);
          v22 = v4[1].m128i_i8[0];
          v5 = (__m128i *)((char *)v5 + 24);
          v4 = (const __m128i *)((char *)v4 + 24);
          *(__m128i *)((char *)v5 - 24) = v21;
          v5[-1].m128i_i8[8] = v22;
          --v12;
        }
        while ( v12 );
      }
      if ( v20 == v3 )
        goto LABEL_6;
      do
      {
        v23 = _mm_loadu_si128(v20);
        v20 = (const __m128i *)((char *)v20 + 24);
        v9 += 24;
        *(__m128i *)(v9 - 24) = v23;
        *((_QWORD *)v9 - 1) = v20[-1].m128i_i64[1];
      }
      while ( v3 != v20 );
      a1[1] = (const __m128i *)v10;
    }
  }
  return a1;
}
