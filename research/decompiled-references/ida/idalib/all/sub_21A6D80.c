__int64 __fastcall sub_21A6D80(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v5; // r14
  __m128i *v6; // r12
  __int8 *v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r13
  __m128i v14; // xmm6
  __m128i v15; // xmm7
  __m128i v16; // xmm5
  const __m128i *v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm1
  void *v20; // rdi
  size_t v21; // rdx
  __int64 result; // rax
  unsigned __int64 v23; // [rsp+8h] [rbp-50h] BYREF
  __int64 v24; // [rsp+10h] [rbp-48h]
  const __m128i *v25; // [rsp+18h] [rbp-40h]

  v5 = *(const __m128i **)(a1 + 8);
  v6 = *(__m128i **)a1;
  v7 = &a2->m128i_i8[-*(_QWORD *)a1];
  v8 = ((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 6;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_17;
  }
  v9 = 2 * v8;
  v10 = -64;
  if ( v8 > 2 * v8 || v9 > 0x3FFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_17:
    v10 = v9 << 6;
LABEL_3:
    v25 = a3;
    v23 = (unsigned __int64)v7;
    v11 = operator new(v10);
    a3 = v25;
    v12 = v11;
    v24 = v11 + v10;
    v13 = v11 + 64;
    goto LABEL_4;
  }
  v13 = 64;
  v12 = 0;
  v24 = 0;
LABEL_4:
  v14 = _mm_loadu_si128(a3 + 1);
  v15 = _mm_loadu_si128(a3 + 2);
  *(__m128i *)&v7[v12] = _mm_loadu_si128(a3);
  v16 = _mm_loadu_si128(a3 + 3);
  *(__m128i *)&v7[v12 + 16] = v14;
  *(__m128i *)&v7[v12 + 32] = v15;
  *(__m128i *)&v7[v12 + 48] = v16;
  if ( a2 != v6 )
  {
    v17 = v6;
    v18 = v12;
    do
    {
      v19 = _mm_loadu_si128(v17);
      v17 += 4;
      v18 += 64;
      *(__m128i *)(v18 - 64) = v19;
      *(__m128i *)(v18 - 48) = _mm_loadu_si128(v17 - 3);
      *(__m128i *)(v18 - 32) = _mm_loadu_si128(v17 - 2);
      *(__m128i *)(v18 - 16) = _mm_loadu_si128(v17 - 1);
    }
    while ( a2 != v17 );
    v13 = v12 + (((char *)&a2[-4] - (char *)v6) & 0xFFFFFFFFFFFFFFC0LL) + 128;
  }
  if ( a2 != v5 )
  {
    v20 = (void *)v13;
    v21 = (((char *)v5 - (char *)a2 - 64) & 0xFFFFFFFFFFFFFFC0LL) + 64;
    v13 += v21;
    memcpy(v20, a2, v21);
  }
  if ( v6 )
    operator delete(v6);
  v23 = v13;
  result = v24;
  *(_QWORD *)(a1 + 16) = v24;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v23);
  return result;
}
