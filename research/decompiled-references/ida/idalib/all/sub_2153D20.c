void __fastcall sub_2153D20(__int64 a1, __m128i *a2)
{
  const __m128i *v2; // rbp
  __int64 v3; // r13
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __m128i *v9; // rax
  const __m128i *v10; // rdx
  const __m128i *v11; // rsi
  __int64 v12; // rax
  const __m128i *v13; // rbp
  __int64 v14; // rbx
  void *v15; // rdi
  size_t v16; // rdx

  v2 = *(const __m128i **)a1;
  v3 = *(_QWORD *)a1 + 112LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    v5 = 0;
    do
    {
      v7 = v2->m128i_i64[0];
      a2[1].m128i_i64[0] = 0;
      a2[1].m128i_i64[1] = 64;
      a2->m128i_i64[0] = v7;
      v8 = v2[1].m128i_u64[0];
      v9 = a2 + 2;
      a2->m128i_i64[1] = (__int64)a2[2].m128i_i64;
      if ( v8 && &a2->m128i_u64[1] != &v2->m128i_u64[1] )
      {
        v10 = (const __m128i *)v2->m128i_i64[1];
        v11 = v2 + 2;
        if ( v10 == &v2[2] )
        {
          v16 = v8;
          if ( v8 <= 0x40
            || (sub_2236E10(&a2->m128i_u64[1], &a2[2], v8, 1),
                v16 = v2[1].m128i_u64[0],
                v9 = (__m128i *)a2->m128i_i64[1],
                v5 = 0,
                v11 = (const __m128i *)v2->m128i_i64[1],
                v16) )
          {
            memcpy(v9, v11, v16);
            v5 = 0;
          }
          a2[1].m128i_i64[0] = v8;
          v2[1].m128i_i64[0] = 0;
        }
        else
        {
          a2[1].m128i_i64[0] = v8;
          v12 = v2[1].m128i_i64[1];
          a2->m128i_i64[1] = (__int64)v10;
          a2[1].m128i_i64[1] = v12;
          v2->m128i_i64[1] = (__int64)v11;
          v2[1] = v5;
        }
      }
      v6 = _mm_loadu_si128(v2 + 6);
      v2 += 7;
      a2 += 7;
      a2[-1] = v6;
    }
    while ( (const __m128i *)v3 != v2 );
    v13 = *(const __m128i **)a1;
    v14 = *(_QWORD *)a1 + 112LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v14 )
    {
      do
      {
        while ( 1 )
        {
          v14 -= 112;
          v15 = *(void **)(v14 + 8);
          if ( v15 == (void *)(v14 + 32) )
            break;
          free(v15);
          if ( (const __m128i *)v14 == v13 )
            return;
        }
      }
      while ( (const __m128i *)v14 != v13 );
    }
  }
}
