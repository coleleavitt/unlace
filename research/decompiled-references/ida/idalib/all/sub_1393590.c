void __fastcall sub_1393590(__int64 a1, __int64 a2)
{
  __m128i *v3; // rbp
  __int64 v4; // r13
  const __m128i *v5; // rax
  __m128i *v6; // rbx
  const __m128i *v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  const __m128i *v10; // rsi
  __m128i *v11; // r14
  __m128i *v12; // rdi
  int v13; // r14d
  __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (__m128i *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 48, v14);
  v5 = *(const __m128i **)a1;
  v6 = (__m128i *)(*(_QWORD *)a1 + 48LL * *(unsigned int *)(a1 + 8));
  if ( *(__m128i **)a1 != v6 )
  {
    v7 = v5 + 2;
    v8 = v4;
    v9 = v4
       + 16
       * (3 * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)v6 - (char *)v5 - 48) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 3);
    do
    {
      while ( 1 )
      {
        *(_QWORD *)v8 = v7[-2].m128i_i64[0];
        *(_DWORD *)(v8 + 8) = v7[-2].m128i_i32[2];
        *(_DWORD *)(v8 + 12) = v7[-2].m128i_i32[3];
        *(_QWORD *)(v8 + 16) = v8 + 32;
        v10 = (const __m128i *)v7[-1].m128i_i64[0];
        if ( v7 == v10 )
          break;
        *(_QWORD *)(v8 + 16) = v10;
        v8 += 48;
        *(_QWORD *)(v8 - 16) = v7->m128i_i64[0];
        *(_QWORD *)(v8 - 24) = v7[-1].m128i_i64[1];
        v7[-1].m128i_i64[0] = (__int64)v7;
        v7 += 3;
        v7[-4].m128i_i64[1] = 0;
        v7[-3].m128i_i8[0] = 0;
        if ( v8 == v9 )
          goto LABEL_5;
      }
      v8 += 48;
      *(__m128i *)(v8 - 16) = _mm_loadu_si128(v7);
      *(_QWORD *)(v8 - 24) = v7[-1].m128i_i64[1];
      v7[-1].m128i_i64[0] = (__int64)v7;
      v7 += 3;
      v7[-4].m128i_i64[1] = 0;
      v7[-3].m128i_i8[0] = 0;
    }
    while ( v9 != v8 );
LABEL_5:
    v11 = *(__m128i **)a1;
    v6 = (__m128i *)(*(_QWORD *)a1 + 48LL * *(unsigned int *)(a1 + 8));
    if ( v6 != *(__m128i **)a1 )
    {
      do
      {
        while ( 1 )
        {
          v6 -= 3;
          v12 = (__m128i *)v6[1].m128i_i64[0];
          if ( v12 == &v6[2] )
            break;
          operator delete(v12);
          if ( v6 == v11 )
            goto LABEL_8;
        }
      }
      while ( v6 != v11 );
LABEL_8:
      v6 = *(__m128i **)a1;
    }
  }
  v13 = v14[0];
  if ( v3 != v6 )
    free(v6);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v13;
}
