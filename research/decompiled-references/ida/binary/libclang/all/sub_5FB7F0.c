__m128i *__fastcall sub_5FB7F0(__m128i **a1, __int64 *a2)
{
  __m128i *result; // rax
  __int64 v4; // r12
  __int64 v5; // rcx
  __m128i v6; // xmm0
  __int64 v7; // rax
  const __m128i *v8; // r13
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __m128i *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rcx
  const __m128i *v17; // rbp
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  char *v24; // rbp
  char *v25; // r13
  __int64 v26; // [rsp+0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+18h] [rbp-50h]
  __m128i v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+30h] [rbp-38h]
  int v32; // [rsp+38h] [rbp-30h]

  result = *a1;
  if ( *a2 )
  {
    v4 = result->m128i_i64[0];
    v5 = result[2].m128i_i64[0];
    v26 = *a2;
    v6 = _mm_loadu_si128(result + 1);
    v7 = result->m128i_i64[1];
    v8 = (const __m128i *)&v26;
    v32 = 1;
    v9 = *(unsigned int *)(v4 + 8);
    v31 = v5;
    v10 = *(unsigned int *)(v4 + 12);
    v29 = v7;
    v11 = v9 + 1;
    v12 = *(_QWORD *)v4;
    v30 = v6;
    v27 = 0;
    v28 = 0;
    if ( v10 < v9 + 1 )
    {
      if ( (unsigned __int64)&v26 < v12 || (unsigned __int64)&v26 >= v12 + (v9 << 6) )
      {
        sub_25D6060(v4, v4 + 16, v11, 64);
        v12 = *(_QWORD *)v4;
        v9 = *(unsigned int *)(v4 + 8);
      }
      else
      {
        v25 = (char *)&v26 - v12;
        sub_25D6060(v4, v4 + 16, v11, 64);
        v12 = *(_QWORD *)v4;
        v9 = *(unsigned int *)(v4 + 8);
        v8 = (const __m128i *)&v25[*(_QWORD *)v4];
      }
    }
    v13 = (__m128i *)((v9 << 6) + v12);
    *v13 = _mm_loadu_si128(v8);
    v13[1] = _mm_loadu_si128(v8 + 1);
    v13[2] = _mm_loadu_si128(v8 + 2);
    v13[3] = _mm_loadu_si128(v8 + 3);
    ++*(_DWORD *)(v4 + 8);
    result = *a1;
  }
  v14 = a2[2];
  if ( v14 )
  {
    v15 = result->m128i_i64[0];
    v16 = result[2].m128i_i64[0];
    v26 = v14;
    v17 = (const __m128i *)&v26;
    v18 = _mm_loadu_si128(result + 1);
    v19 = result->m128i_i64[1];
    v32 = 1;
    v20 = *(unsigned int *)(v15 + 8);
    v31 = v16;
    v21 = *(unsigned int *)(v15 + 12);
    v29 = v19;
    v22 = v20 + 1;
    v23 = *(_QWORD *)v15;
    v30 = v18;
    v27 = 0;
    v28 = 0;
    if ( v21 < v20 + 1 )
    {
      if ( (unsigned __int64)&v26 < v23 || (unsigned __int64)&v26 >= v23 + (v20 << 6) )
      {
        sub_25D6060(v15, v15 + 16, v22, 64);
        v23 = *(_QWORD *)v15;
        v20 = *(unsigned int *)(v15 + 8);
      }
      else
      {
        v24 = (char *)&v26 - v23;
        sub_25D6060(v15, v15 + 16, v22, 64);
        v23 = *(_QWORD *)v15;
        v20 = *(unsigned int *)(v15 + 8);
        v17 = (const __m128i *)&v24[*(_QWORD *)v15];
      }
    }
    result = (__m128i *)((v20 << 6) + v23);
    *result = _mm_loadu_si128(v17);
    result[1] = _mm_loadu_si128(v17 + 1);
    result[2] = _mm_loadu_si128(v17 + 2);
    result[3] = _mm_loadu_si128(v17 + 3);
    ++*(_DWORD *)(v15 + 8);
  }
  return result;
}

