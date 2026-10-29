void __fastcall sub_1F36990(__int64 a1, __int64 a2)
{
  __m128i *v3; // r13
  __int64 v4; // rax
  const __m128i *v5; // rbp
  __int64 v6; // r14
  __m128i *v7; // rbx
  __m128i *v8; // r12
  __m128i v9; // xmm0
  __int64 m128i_i64; // rsi
  __int64 v11; // rdi
  const __m128i *v12; // rbp
  __m128i *v13; // rdi
  int v14; // ebp
  __int64 v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = (__m128i *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 96, v15);
  v5 = *(const __m128i **)a1;
  v6 = v4;
  v7 = (__m128i *)(*(_QWORD *)a1 + 96LL * *(unsigned int *)(a1 + 8));
  if ( *(__m128i **)a1 != v7 )
  {
    v8 = (__m128i *)v4;
    do
    {
      while ( 1 )
      {
        v9 = _mm_loadu_si128(v5);
        v8[1].m128i_i32[2] = 0;
        v8[1].m128i_i64[0] = (__int64)v8[2].m128i_i64;
        *v8 = v9;
        v8[1].m128i_i32[3] = 4;
        if ( v5[1].m128i_i32[2] )
          break;
        v5 += 6;
        v8 += 6;
        if ( v7 == v5 )
          goto LABEL_6;
      }
      m128i_i64 = (__int64)v5[1].m128i_i64;
      v11 = (__int64)v8[1].m128i_i64;
      v5 += 6;
      v8 += 6;
      sub_1F35E40(v11, m128i_i64);
    }
    while ( v7 != v5 );
LABEL_6:
    v12 = *(const __m128i **)a1;
    v7 = (__m128i *)(*(_QWORD *)a1 + 96LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 6;
          v13 = (__m128i *)v7[1].m128i_i64[0];
          if ( v13 == &v7[2] )
            break;
          free(v13);
          if ( v7 == v12 )
          {
            v7 = *(__m128i **)a1;
            goto LABEL_10;
          }
        }
      }
      while ( v7 != v12 );
      v7 = *(__m128i **)a1;
    }
  }
LABEL_10:
  v14 = v15[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v14;
}
