void __fastcall sub_201A7F0(__int64 a1, __int64 a2)
{
  __m128i *v3; // rbp
  __int64 v4; // r13
  const __m128i *v5; // rax
  __m128i *v6; // rbx
  const __m128i *v7; // rdx
  __m128i *v8; // rcx
  unsigned __int64 v9; // rax
  __m128i v10; // xmm0
  const __m128i *v11; // rsi
  __m128i *v12; // r14
  __m128i *v13; // rdi
  int v14; // r14d
  __int64 v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (__m128i *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 48, v15);
  v5 = *(const __m128i **)a1;
  v6 = (__m128i *)(*(_QWORD *)a1 + 48LL * *(unsigned int *)(a1 + 8));
  if ( *(__m128i **)a1 != v6 )
  {
    v7 = v5 + 2;
    v8 = (__m128i *)v4;
    v9 = v4
       + 16
       * (3 * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)v6 - (char *)v5 - 48) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 3);
    do
    {
      while ( 1 )
      {
        v10 = _mm_loadu_si128(v7 - 2);
        v8[1].m128i_i64[0] = (__int64)v8[2].m128i_i64;
        *v8 = v10;
        v11 = (const __m128i *)v7[-1].m128i_i64[0];
        if ( v7 == v11 )
          break;
        v8[1].m128i_i64[0] = (__int64)v11;
        v8 += 3;
        v8[-1].m128i_i64[0] = v7->m128i_i64[0];
        v8[-2].m128i_i64[1] = v7[-1].m128i_i64[1];
        v7[-1].m128i_i64[0] = (__int64)v7;
        v7 += 3;
        v7[-4].m128i_i64[1] = 0;
        v7[-3].m128i_i8[0] = 0;
        if ( v8 == (__m128i *)v9 )
          goto LABEL_5;
      }
      v8 += 3;
      v8[-1] = _mm_loadu_si128(v7);
      v8[-2].m128i_i64[1] = v7[-1].m128i_i64[1];
      v7[-1].m128i_i64[0] = (__int64)v7;
      v7 += 3;
      v7[-4].m128i_i64[1] = 0;
      v7[-3].m128i_i8[0] = 0;
    }
    while ( (__m128i *)v9 != v8 );
LABEL_5:
    v12 = *(__m128i **)a1;
    v6 = (__m128i *)(*(_QWORD *)a1 + 48LL * *(unsigned int *)(a1 + 8));
    if ( v6 != *(__m128i **)a1 )
    {
      do
      {
        while ( 1 )
        {
          v6 -= 3;
          v13 = (__m128i *)v6[1].m128i_i64[0];
          if ( v13 == &v6[2] )
            break;
          operator delete(v13);
          if ( v6 == v12 )
            goto LABEL_8;
        }
      }
      while ( v6 != v12 );
LABEL_8:
      v6 = *(__m128i **)a1;
    }
  }
  v14 = v15[0];
  if ( v3 != v6 )
    free(v6);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v14;
}
