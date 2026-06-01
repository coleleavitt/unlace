void __fastcall sub_1AFF000(__int64 a1, __int64 a2)
{
  char *v2; // r12
  __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // r14
  char *v7; // rbx
  char *v8; // rbx
  const __m128i *v9; // rdx
  __m128i *v10; // rcx
  unsigned __int64 v11; // rsi
  const __m128i *v12; // rax
  char *v13; // r13
  char *v14; // rdi
  int v15; // r13d
  __int64 v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (char *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 40, v16);
  v5 = *(char **)a1;
  v6 = v4;
  v7 = (char *)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
  if ( *(char **)a1 != v7 )
  {
    v8 = (char *)(v7 - v5);
    v9 = (const __m128i *)(v5 + 24);
    v10 = (__m128i *)v4;
    v11 = v4 + 8 * ((unsigned __int64)(v8 - 40) >> 3) + 40;
    do
    {
      while ( 1 )
      {
        v10->m128i_i64[0] = v9[-2].m128i_i64[1];
        v10->m128i_i64[1] = (__int64)&v10[1].m128i_i64[1];
        v12 = (const __m128i *)v9[-1].m128i_i64[0];
        if ( v9 == v12 )
          break;
        v10->m128i_i64[1] = (__int64)v12;
        v10 = (__m128i *)((char *)v10 + 40);
        v10[-1].m128i_i64[0] = v9->m128i_i64[0];
        v10[-2].m128i_i64[1] = v9[-1].m128i_i64[1];
        v9[-1].m128i_i64[0] = (__int64)v9;
        v9 = (const __m128i *)((char *)v9 + 40);
        v9[-3].m128i_i64[0] = 0;
        v9[-3].m128i_i8[8] = 0;
        if ( v10 == (__m128i *)v11 )
          goto LABEL_5;
      }
      v10 = (__m128i *)((char *)v10 + 40);
      v10[-1] = _mm_loadu_si128(v9);
      v10[-2].m128i_i64[1] = v9[-1].m128i_i64[1];
      v9[-1].m128i_i64[0] = (__int64)v9;
      v9 = (const __m128i *)((char *)v9 + 40);
      v9[-3].m128i_i64[0] = 0;
      v9[-3].m128i_i8[8] = 0;
    }
    while ( (__m128i *)v11 != v10 );
LABEL_5:
    v13 = *(char **)a1;
    v7 = (char *)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
    if ( v7 != *(char **)a1 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 40;
          v14 = *((char **)v7 + 1);
          if ( v14 == v7 + 24 )
            break;
          operator delete(v14);
          if ( v7 == v13 )
            goto LABEL_8;
        }
      }
      while ( v7 != v13 );
LABEL_8:
      v7 = *(char **)a1;
    }
  }
  v15 = v16[0];
  if ( v2 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v15;
}
