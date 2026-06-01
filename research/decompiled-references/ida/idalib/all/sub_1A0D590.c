__m128i *__fastcall sub_1A0D590(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __m128i *v6; // rbx
  __int64 v7; // rax
  __m128i *v8; // rcx
  __m128i *v9; // r12
  unsigned __int64 v10; // rdx
  __m128i *v11; // r13
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __m128i *result; // rax
  __int64 v17; // rsi
  char *v18; // r12
  __m128i v19[5]; // [rsp+0h] [rbp-58h] BYREF

  v3 = a1 + 8;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(unsigned int *)(a1 + 16);
  v19[0].m128i_i64[1] = 0;
  v6 = *(__m128i **)(a1 + 8);
  v19[0].m128i_i32[0] = 17;
  v19[0].m128i_i64[1] = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
  v7 = 40 * v5;
  v8 = (__m128i *)((char *)v6 + 40 * v5);
  if ( v6 == v8 )
    return sub_1A0C040(v3, v19);
  v9 = v19;
  v10 = v5 + 1;
  v11 = v19;
  if ( v10 > *(unsigned int *)(a1 + 20) )
  {
    v17 = a1 + 24;
    if ( v6 <= v19 && v8 > v19 )
    {
      v18 = (char *)((char *)v19 - (char *)v6);
      sub_2237220(v3, v17, v10, 40);
      v6 = *(__m128i **)(a1 + 8);
      v11 = (__m128i *)&v18[(_QWORD)v6];
      v7 = 40LL * *(unsigned int *)(a1 + 16);
      v9 = (__m128i *)&v18[(_QWORD)v6];
      v8 = (__m128i *)((char *)v6 + v7);
    }
    else
    {
      sub_2237220(v3, v17, v10, 40);
      v6 = *(__m128i **)(a1 + 8);
      v7 = 40LL * *(unsigned int *)(a1 + 16);
      v8 = (__m128i *)((char *)v6 + v7);
    }
  }
  *v8 = _mm_loadu_si128((__m128i *)((char *)v6 + v7 - 40));
  v8[1] = _mm_loadu_si128((__m128i *)((char *)v6 + v7 - 24));
  v8[2].m128i_i64[0] = v6->m128i_i64[(unsigned __int64)v7 / 8 - 1];
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(unsigned int *)(a1 + 16);
  if ( v12 + 40 * v13 - 40 - (__int64)v6 > 0 )
  {
    v14 = -8 * ((v12 + 40 * v13 - 40 - (__int64)v6) >> 3);
    memmove((void *)(v12 + v14 + 40 * v13), (const void *)(v14 + v12 + 40 * v13 - 40), v12 + 40 * v13 - 40 - (_QWORD)v6);
    LODWORD(v13) = *(_DWORD *)(a1 + 16);
    v12 = *(_QWORD *)(a1 + 8);
  }
  v15 = (unsigned int)(v13 + 1);
  *(_DWORD *)(a1 + 16) = v15;
  if ( v6 <= v9 && v12 + 40 * v15 > (unsigned __int64)v9 )
    v11 = (__m128i *)((char *)v11 + 40);
  *v6 = _mm_loadu_si128(v11);
  v6[1] = _mm_loadu_si128(v11 + 1);
  result = (__m128i *)v11[2].m128i_i64[0];
  v6[2].m128i_i64[0] = (__int64)result;
  return result;
}
