__m128i *__fastcall sub_5FA660(const __m128i *a1, __int64 a2)
{
  const __m128i *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __m128i *result; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  char *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rsi
  __m128i v20; // xmm0
  const __m128i *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __m128i *v28; // rax
  char *v29; // r14
  __int64 v30; // [rsp+0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+8h] [rbp-60h]
  __int64 v32; // [rsp+10h] [rbp-58h]
  __int64 v33; // [rsp+18h] [rbp-50h]
  __m128i v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+30h] [rbp-38h]
  int v36; // [rsp+38h] [rbp-30h]

  v3 = (const __m128i *)&v30;
  if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
  {
    v4 = 8LL * *(unsigned int *)(a2 + 4);
    if ( (*(_WORD *)a2 & 0x1FF) == 0x19 )
    {
      if ( !*(_DWORD *)(a2 + v4 + 64) )
        goto LABEL_4;
      v14 = *(_DWORD *)(a2 + v4 + 76);
      v15 = a2 + v4 + 80;
    }
    else
    {
      if ( !*(_DWORD *)(a2 + v4 + 80) )
        goto LABEL_4;
      v14 = *(_DWORD *)(a2 + v4 + 92);
      v15 = a2 + v4 + 96;
    }
    v17 = a1[2].m128i_i64[0];
    v18 = a1->m128i_i64[0];
    v30 = v15;
    v3 = (const __m128i *)&v30;
    v19 = a1->m128i_i64[1];
    v20 = _mm_loadu_si128(a1 + 1);
    v21 = (const __m128i *)&v30;
    v36 = 7;
    v35 = v17;
    v22 = v14;
    v23 = *(unsigned int *)(v18 + 8);
    v33 = v19;
    v24 = 32 * v22 + v15;
    v25 = v23 + 1;
    v26 = *(_QWORD *)v18;
    v32 = 0;
    v31 = v24;
    v27 = *(unsigned int *)(v18 + 12);
    v34 = v20;
    if ( v27 < v23 + 1 )
    {
      if ( (unsigned __int64)&v30 < v26 || (unsigned __int64)&v30 >= v26 + (v23 << 6) )
      {
        sub_25D6060(v18, v18 + 16, v25, 64);
        v26 = *(_QWORD *)v18;
        v23 = *(unsigned int *)(v18 + 8);
      }
      else
      {
        v29 = (char *)&v30 - v26;
        sub_25D6060(v18, v18 + 16, v25, 64);
        v26 = *(_QWORD *)v18;
        v23 = *(unsigned int *)(v18 + 8);
        v21 = (const __m128i *)&v29[*(_QWORD *)v18];
      }
    }
    v28 = (__m128i *)((v23 << 6) + v26);
    *v28 = _mm_loadu_si128(v21);
    v28[1] = _mm_loadu_si128(v21 + 1);
    v28[2] = _mm_loadu_si128(v21 + 2);
    v28[3] = _mm_loadu_si128(v21 + 3);
    ++*(_DWORD *)(v18 + 8);
  }
LABEL_4:
  v5 = a1->m128i_i64[0];
  v6 = a1->m128i_i64[1];
  v36 = 4;
  v7 = a1[2].m128i_i64[0];
  v8 = _mm_loadu_si128(a1 + 1);
  v30 = a2;
  v33 = v6;
  v9 = *(unsigned int *)(v5 + 8);
  v10 = *(unsigned int *)(v5 + 12);
  v35 = v7;
  v11 = v9 + 1;
  v12 = *(_QWORD *)v5;
  v34 = v8;
  v31 = 0;
  v32 = 0;
  if ( v10 < v9 + 1 )
  {
    if ( (unsigned __int64)&v30 < v12 || (unsigned __int64)&v30 >= v12 + (v9 << 6) )
    {
      sub_25D6060(v5, v5 + 16, v11, 64);
      v12 = *(_QWORD *)v5;
      v9 = *(unsigned int *)(v5 + 8);
    }
    else
    {
      v16 = (char *)&v30 - v12;
      sub_25D6060(v5, v5 + 16, v11, 64);
      v12 = *(_QWORD *)v5;
      v9 = *(unsigned int *)(v5 + 8);
      v3 = (const __m128i *)&v16[*(_QWORD *)v5];
    }
  }
  result = (__m128i *)((v9 << 6) + v12);
  *result = _mm_loadu_si128(v3);
  result[1] = _mm_loadu_si128(v3 + 1);
  result[2] = _mm_loadu_si128(v3 + 2);
  result[3] = _mm_loadu_si128(v3 + 3);
  ++*(_DWORD *)(v5 + 8);
  return result;
}

