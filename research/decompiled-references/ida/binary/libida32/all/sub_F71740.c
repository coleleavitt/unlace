void __fastcall sub_F71740(void ***a1, unsigned __int64 a2)
{
  void **v2; // rbx
  void **v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r13
  signed __int64 v6; // r12
  const __m128i *v7; // rdx
  __m128i *v8; // rcx
  unsigned __int64 v9; // rsi
  const __m128i *v10; // rax
  void **v11; // r14
  void **v12; // rbx

  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::reserve");
  v2 = *a1;
  if ( a2 > ((char *)a1[2] - (char *)*a1) >> 5 )
  {
    v3 = a1[1];
    v4 = 0;
    v5 = 32 * a2;
    v6 = (char *)v3 - (char *)v2;
    if ( a2 )
      v4 = operator new(32 * a2);
    if ( v3 != v2 )
    {
      v7 = (const __m128i *)(v2 + 2);
      v8 = (__m128i *)v4;
      v9 = v4 + (((char *)(v3 - 4) - (char *)v2) & 0xFFFFFFFFFFFFFFE0LL) + 32;
      do
      {
        while ( 1 )
        {
          v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
          v10 = (const __m128i *)v7[-1].m128i_i64[0];
          if ( v10 == v7 )
            break;
          v8->m128i_i64[0] = (__int64)v10;
          v8 += 2;
          v8[-1].m128i_i64[0] = v7->m128i_i64[0];
          v8[-2].m128i_i64[1] = v7[-1].m128i_i64[1];
          v7[-1].m128i_i64[0] = (__int64)v7;
          v7 += 2;
          v7[-3].m128i_i64[1] = 0;
          v7[-2].m128i_i8[0] = 0;
          if ( v8 == (__m128i *)v9 )
            goto LABEL_9;
        }
        v8 += 2;
        v8[-1] = _mm_loadu_si128(v7);
        v8[-2].m128i_i64[1] = v7[-1].m128i_i64[1];
        v7[-1].m128i_i64[0] = (__int64)v7;
        v7 += 2;
        v7[-3].m128i_i64[1] = 0;
        v7[-2].m128i_i8[0] = 0;
      }
      while ( (__m128i *)v9 != v8 );
    }
LABEL_9:
    v11 = a1[1];
    v12 = *a1;
    if ( v11 != *a1 )
    {
      do
      {
        while ( *v12 != v12 + 2 )
        {
          operator delete(*v12);
          v12 += 4;
          if ( v11 == v12 )
            goto LABEL_12;
        }
        v12 += 4;
      }
      while ( v11 != v12 );
LABEL_12:
      v12 = *a1;
    }
    if ( v12 )
      operator delete(v12);
    *a1 = (void **)v4;
    a1[1] = (void **)(v4 + v6);
    a1[2] = (void **)(v5 + v4);
  }
}

