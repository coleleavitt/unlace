void __fastcall sub_12EE8B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  void **v3; // rax
  void **v4; // rbx
  const __m128i *v5; // rdx
  __m128i *v6; // rcx
  __m128i *v7; // rax
  const __m128i *v8; // rsi
  __m128i v9; // xmm2
  void **v10; // r14
  int v11; // r14d
  __m128i v12; // xmm1
  __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 48, v13);
  v3 = *(void ***)a1;
  v4 = (void **)(*(_QWORD *)a1 + 48LL * *(unsigned int *)(a1 + 8));
  if ( *(void ***)a1 != v4 )
  {
    v5 = (const __m128i *)(v3 + 2);
    v6 = (__m128i *)v2;
    v7 = (__m128i *)(v2
                   + 16
                   * (3
                    * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)v4 - (char *)v3 - 48) >> 4))
                     & 0xFFFFFFFFFFFFFFFLL)
                    + 3));
    do
    {
      while ( 1 )
      {
        v6->m128i_i64[0] = (__int64)v6[1].m128i_i64;
        v8 = (const __m128i *)v5[-1].m128i_i64[0];
        if ( v8 == v5 )
          break;
        v6->m128i_i64[0] = (__int64)v8;
        v6 += 3;
        v6[-2].m128i_i64[0] = v5->m128i_i64[0];
        v6[-3].m128i_i64[1] = v5[-1].m128i_i64[1];
        v9 = _mm_loadu_si128(v5 + 1);
        v5[-1].m128i_i64[0] = (__int64)v5;
        v5 += 3;
        v5[-4].m128i_i64[1] = 0;
        v5[-3].m128i_i8[0] = 0;
        v6[-1] = v9;
        if ( v6 == v7 )
          goto LABEL_5;
      }
      v6 += 3;
      v6[-2] = _mm_loadu_si128(v5);
      v6[-3].m128i_i64[1] = v5[-1].m128i_i64[1];
      v12 = _mm_loadu_si128(v5 + 1);
      v5[-1].m128i_i64[0] = (__int64)v5;
      v5 += 3;
      v5[-4].m128i_i64[1] = 0;
      v5[-3].m128i_i8[0] = 0;
      v6[-1] = v12;
    }
    while ( v7 != v6 );
LABEL_5:
    v10 = *(void ***)a1;
    v4 = (void **)(*(_QWORD *)a1 + 48LL * *(unsigned int *)(a1 + 8));
    if ( v4 != *(void ***)a1 )
    {
      do
      {
        while ( 1 )
        {
          v4 -= 6;
          if ( *v4 == v4 + 2 )
            break;
          operator delete(*v4);
          if ( v4 == v10 )
            goto LABEL_8;
        }
      }
      while ( v4 != v10 );
LABEL_8:
      v4 = *(void ***)a1;
    }
  }
  v11 = v13[0];
  if ( (void **)(a1 + 16) != v4 )
    free(v4);
  *(_QWORD *)a1 = v2;
  *(_DWORD *)(a1 + 12) = v11;
}
