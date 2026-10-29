void __fastcall sub_110AFC0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  const __m128i *v5; // rdx
  __m128i *v6; // rbp
  __int64 v7; // rbx
  const __m128i *v8; // rax
  unsigned __int64 v9; // rcx
  __m128i *v10; // rdx
  __m128i *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  const __m128i *v16; // rcx
  const __m128i *v17; // r15
  void **v18; // rdi
  void **v19; // rax
  void **v20; // r14
  void *v21; // rdi
  int v22; // r14d
  void **v23; // [rsp+8h] [rbp-50h]
  __int64 v24[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = a1 + 16;
  v4 = sub_2237400(a1, a1 + 16, a2, 56, v24);
  v5 = *(const __m128i **)a1;
  v6 = (__m128i *)v4;
  v7 = *(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v7 )
  {
    v8 = v5 + 1;
    v9 = 7 * (((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)(v7 - (_QWORD)v5 - 56) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1);
    v10 = v6;
    v11 = (__m128i *)((char *)v6 + 8 * v9);
    do
    {
      v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
      v16 = (const __m128i *)v8[-1].m128i_i64[0];
      if ( v8 == v16 )
      {
        v10[1] = _mm_loadu_si128(v8);
      }
      else
      {
        v10->m128i_i64[0] = (__int64)v16;
        v10[1].m128i_i64[0] = v8->m128i_i64[0];
      }
      v10 = (__m128i *)((char *)v10 + 56);
      v10[-3].m128i_i64[0] = v8[-1].m128i_i64[1];
      v8->m128i_i8[0] = 0;
      v8[-1].m128i_i64[0] = (__int64)v8;
      v8 = (const __m128i *)((char *)v8 + 56);
      v8[-4].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v10[-2] + 8) = 0;
      v10[-1].m128i_i64[1] = 0;
      v10[-2].m128i_i64[1] = v8[-3].m128i_i64[1];
      v12 = v8[-2].m128i_i64[0];
      v8[-3].m128i_i64[1] = 0;
      v13 = v10[-1].m128i_i64[0];
      v10[-1].m128i_i64[0] = v12;
      v14 = v8[-2].m128i_i64[1];
      v8[-2].m128i_i64[0] = v13;
      v15 = v10[-1].m128i_i64[1];
      v10[-1].m128i_i64[1] = v14;
      v8[-2].m128i_i64[1] = v15;
    }
    while ( v10 != v11 );
    v17 = *(const __m128i **)a1;
    v7 = *(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 56;
          v18 = *(void ***)(v7 + 32);
          v19 = *(void ***)(v7 + 40);
          v20 = v18;
          if ( v19 != v18 )
          {
            do
            {
              while ( 1 )
              {
                v21 = *v20;
                if ( *v20 == v20 + 2 )
                  break;
                v23 = v19;
                v20 += 4;
                operator delete(v21);
                v19 = v23;
                if ( v20 == v23 )
                  goto LABEL_11;
              }
              v20 += 4;
            }
            while ( v19 != v20 );
LABEL_11:
            v18 = *(void ***)(v7 + 32);
          }
          if ( v18 )
            operator delete(v18);
          if ( *(_QWORD *)v7 == v7 + 16 )
            break;
          operator delete(*(void **)v7);
          if ( (const __m128i *)v7 == v17 )
          {
            v7 = *(_QWORD *)a1;
            goto LABEL_17;
          }
        }
      }
      while ( (const __m128i *)v7 != v17 );
      v7 = *(_QWORD *)a1;
    }
  }
LABEL_17:
  v22 = v24[0];
  if ( v3 != v7 )
    free((void *)v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v22;
}
