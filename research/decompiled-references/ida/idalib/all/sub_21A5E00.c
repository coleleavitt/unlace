__int64 __fastcall sub_21A5E00(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v5; // r15
  __m128i *v6; // r13
  __int8 *v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r12
  __m128i v13; // xmm7
  __m128i v14; // xmm6
  __m128i v15; // xmm7
  __m128i v16; // xmm6
  const __m128i *v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm1
  void *v20; // rdi
  size_t v21; // rdx
  __int64 result; // rax
  __int64 v23; // [rsp+8h] [rbp-50h] BYREF
  __int64 v24; // [rsp+10h] [rbp-48h]
  const __m128i *v25; // [rsp+18h] [rbp-40h]

  v5 = *(const __m128i **)(a1 + 8);
  v6 = *(__m128i **)a1;
  v7 = &a2->m128i_i8[-*(_QWORD *)a1];
  if ( !(0xCCCCCCCCCCCCCCCDLL * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 4)) )
  {
    v8 = 1;
    goto LABEL_17;
  }
  v8 = 0x999999999999999ALL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  v9 = -16;
  if ( 0xCCCCCCCCCCCCCCCDLL * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 4) > 0x999999999999999ALL
                                                                              * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 4)
    || v8 > 0x333333333333333LL )
  {
    goto LABEL_3;
  }
  if ( v8 )
  {
LABEL_17:
    v9 = 80 * v8;
LABEL_3:
    v25 = a3;
    v23 = (__int64)v7;
    v10 = operator new(v9);
    a3 = v25;
    v11 = v10;
    v24 = v10 + v9;
    v12 = v10 + 80;
    goto LABEL_4;
  }
  v12 = 80;
  v11 = 0;
  v24 = 0;
LABEL_4:
  v13 = _mm_loadu_si128(a3 + 1);
  *(__m128i *)&v7[v11] = _mm_loadu_si128(a3);
  v14 = _mm_loadu_si128(a3 + 2);
  *(__m128i *)&v7[v11 + 16] = v13;
  v15 = _mm_loadu_si128(a3 + 3);
  *(__m128i *)&v7[v11 + 32] = v14;
  v16 = _mm_loadu_si128(a3 + 4);
  *(__m128i *)&v7[v11 + 48] = v15;
  *(__m128i *)&v7[v11 + 64] = v16;
  if ( a2 != v6 )
  {
    v17 = v6;
    v18 = v11;
    do
    {
      v19 = _mm_loadu_si128(v17);
      v17 += 5;
      v18 += 80;
      *(__m128i *)(v18 - 80) = v19;
      *(__m128i *)(v18 - 64) = _mm_loadu_si128(v17 - 4);
      *(__m128i *)(v18 - 48) = _mm_loadu_si128(v17 - 3);
      *(__m128i *)(v18 - 32) = _mm_loadu_si128(v17 - 2);
      *(__m128i *)(v18 - 16) = _mm_loadu_si128(v17 - 1);
    }
    while ( a2 != v17 );
    v12 = v11
        + 16
        * (5 * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)((char *)&a2[-5] - (char *)v6) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
         + 10);
  }
  if ( a2 != v5 )
  {
    v20 = (void *)v12;
    v21 = 16
        * (5 * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)((char *)v5 - (char *)a2 - 80) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
         + 5);
    v12 += v21;
    memcpy(v20, a2, v21);
  }
  if ( v6 )
    operator delete(v6);
  v23 = v12;
  result = v24;
  *(_QWORD *)(a1 + 16) = v24;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v23);
  return result;
}
