__m128i *__fastcall sub_5F9750(const __m128i **a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __m128i *result; // rax
  _QWORD *i; // r13
  const __m128i *v6; // rax
  const __m128i *v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rcx
  __m128i v10; // xmm0
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  char *v16; // r12
  _QWORD v17[4]; // [rsp+0h] [rbp-78h] BYREF
  __m128i v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-48h]
  int v20; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD **)(a2 + 24);
  result = *(__m128i **)(a2 + 32);
  for ( i = &v2[(_QWORD)result]; i != v2; ++v2 )
  {
    if ( *v2 )
    {
      v6 = *a1;
      v17[0] = *v2;
      v7 = (const __m128i *)v17;
      v20 = 1;
      v8 = v6->m128i_i64[0];
      v9 = v6[2].m128i_i64[0];
      v17[1] = 0;
      v17[2] = 0;
      v10 = _mm_loadu_si128(v6 + 1);
      v11 = *(unsigned int *)(v8 + 12);
      v12 = v6->m128i_i64[1];
      v19 = v9;
      v13 = *(unsigned int *)(v8 + 8);
      v18 = v10;
      v17[3] = v12;
      v14 = *(_QWORD *)v8;
      v15 = v13 + 1;
      if ( v11 < v13 + 1 )
      {
        if ( (unsigned __int64)v17 < v14 || (unsigned __int64)v17 >= v14 + (v13 << 6) )
        {
          sub_25D6060(v8, v8 + 16, v15, 64);
          v14 = *(_QWORD *)v8;
          v13 = *(unsigned int *)(v8 + 8);
          v7 = (const __m128i *)v17;
        }
        else
        {
          v16 = (char *)v17 - v14;
          sub_25D6060(v8, v8 + 16, v15, 64);
          v14 = *(_QWORD *)v8;
          v13 = *(unsigned int *)(v8 + 8);
          v7 = (const __m128i *)&v16[*(_QWORD *)v8];
        }
      }
      result = (__m128i *)((v13 << 6) + v14);
      *result = _mm_loadu_si128(v7);
      result[1] = _mm_loadu_si128(v7 + 1);
      result[2] = _mm_loadu_si128(v7 + 2);
      result[3] = _mm_loadu_si128(v7 + 3);
      ++*(_DWORD *)(v8 + 8);
    }
  }
  return result;
}

