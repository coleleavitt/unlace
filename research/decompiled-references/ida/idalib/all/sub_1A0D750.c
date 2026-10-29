__m128i *__fastcall sub_1A0D750(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i *v8; // rbp
  __int64 v9; // rax
  __m128i *v10; // rdi
  unsigned __int64 v11; // rdx
  __m128i *v12; // r15
  __m128i *v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __m128i *v20; // rbp
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rdx
  __m128i *result; // rax
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rsi
  char *v28; // r15
  __m128i *v29; // [rsp+8h] [rbp-70h]
  __m128i v30; // [rsp+10h] [rbp-68h] BYREF
  __int64 v31; // [rsp+20h] [rbp-58h]

  v6 = *(_QWORD *)(a3 + 16);
  v7 = *(unsigned int *)(a1 + 16);
  v30.m128i_i64[1] = 0;
  v8 = *(__m128i **)(a1 + 8);
  v30.m128i_i32[0] = 17;
  v30.m128i_i64[1] = *(_QWORD *)(*(_QWORD *)v6 + 8LL);
  v9 = 40 * v7;
  v10 = (__m128i *)((char *)v8 + 40 * v7);
  if ( v8 == v10 )
  {
    sub_1A0C040(a1 + 8, &v30);
  }
  else
  {
    v11 = v7 + 1;
    v12 = &v30;
    v13 = &v30;
    if ( v11 > *(unsigned int *)(a1 + 20) )
    {
      v27 = a1 + 24;
      if ( &v30 < v8 || v10 <= &v30 )
      {
        sub_2237220(a1 + 8, v27, v11, 40);
        v8 = *(__m128i **)(a1 + 8);
        v13 = &v30;
        v9 = 40LL * *(unsigned int *)(a1 + 16);
        v10 = (__m128i *)((char *)v8 + v9);
      }
      else
      {
        v28 = (char *)((char *)&v30 - (char *)v8);
        sub_2237220(a1 + 8, v27, v11, 40);
        v8 = *(__m128i **)(a1 + 8);
        v13 = (__m128i *)&v28[(_QWORD)v8];
        v9 = 40LL * *(unsigned int *)(a1 + 16);
        v12 = (__m128i *)&v28[(_QWORD)v8];
        v10 = (__m128i *)((char *)v8 + v9);
      }
    }
    *v10 = _mm_loadu_si128((__m128i *)((char *)v8 + v9 - 40));
    v10[1] = _mm_loadu_si128((__m128i *)((char *)v8 + v9 - 24));
    v10[2].m128i_i64[0] = v8->m128i_i64[(unsigned __int64)v9 / 8 - 1];
    v14 = *(_QWORD *)(a1 + 8);
    v15 = *(unsigned int *)(a1 + 16);
    if ( v14 + 40 * v15 - 40 - (__int64)v8 > 0 )
    {
      v29 = v13;
      v16 = -8 * ((v14 + 40 * v15 - 40 - (__int64)v8) >> 3);
      memmove(
        (void *)(v14 + v16 + 40 * v15),
        (const void *)(v16 + v14 + 40 * v15 - 40),
        v14 + 40 * v15 - 40 - (_QWORD)v8);
      LODWORD(v15) = *(_DWORD *)(a1 + 16);
      v14 = *(_QWORD *)(a1 + 8);
      v13 = v29;
    }
    v17 = (unsigned int)(v15 + 1);
    *(_DWORD *)(a1 + 16) = v17;
    if ( v12 >= v8 && v14 + 40 * v17 > (unsigned __int64)v12 )
      v13 = (__m128i *)((char *)v13 + 40);
    *v8 = _mm_loadu_si128(v13);
    v8[1] = _mm_loadu_si128(v13 + 1);
    v8[2].m128i_i64[0] = v13[2].m128i_i64[0];
  }
  v18 = *(unsigned int *)(a1 + 16);
  v19 = *(unsigned int *)(a1 + 20);
  v30.m128i_i64[1] = a2;
  v20 = &v30;
  v21 = *(_QWORD *)(a1 + 8);
  v30.m128i_i32[0] = 18;
  v22 = v18 + 1;
  v31 = a3;
  result = (__m128i *)(v21 + 40 * v18);
  if ( v22 > v19 )
  {
    v24 = a1 + 24;
    v25 = a1 + 8;
    if ( v21 > (unsigned __int64)&v30 || result <= &v30 )
    {
      sub_2237220(v25, v24, v22, 40);
      v20 = &v30;
      result = (__m128i *)(*(_QWORD *)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16));
    }
    else
    {
      sub_2237220(v25, v24, v22, 40);
      v26 = *(_QWORD *)(a1 + 8);
      v20 = (__m128i *)((char *)&v30 + v26 - v21);
      result = (__m128i *)(v26 + 40LL * *(unsigned int *)(a1 + 16));
    }
  }
  *result = _mm_loadu_si128(v20);
  result[1] = _mm_loadu_si128(v20 + 1);
  result[2].m128i_i64[0] = v20[2].m128i_i64[0];
  ++*(_DWORD *)(a1 + 16);
  return result;
}
