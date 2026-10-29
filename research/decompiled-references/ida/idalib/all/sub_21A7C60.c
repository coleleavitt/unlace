__int64 __fastcall sub_21A7C60(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v6; // rsi
  __m128i *v7; // r13
  __int8 *v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r12
  __m128i v14; // xmm6
  __m128i v15; // xmm7
  __int64 v16; // rax
  __m128i v17; // xmm5
  const __m128i *v18; // rax
  __int64 v19; // rdx
  __m128i v20; // xmm1
  void *v21; // rdi
  size_t v22; // rdx
  __int64 result; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-50h] BYREF
  __int64 v25; // [rsp+10h] [rbp-48h]
  const __m128i *v26; // [rsp+18h] [rbp-40h]

  v6 = *(const __m128i **)(a1 + 8);
  v7 = *(__m128i **)a1;
  v8 = &a2->m128i_i8[-*(_QWORD *)a1];
  if ( !(0x8E38E38E38E38E39LL * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 3)) )
  {
    v9 = 1;
    goto LABEL_17;
  }
  v9 = 0x1C71C71C71C71C72LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v10 = -16;
  if ( 0x8E38E38E38E38E39LL * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 3) > 0x1C71C71C71C71C72LL
                                                                              * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 3)
    || v9 > 0x38E38E38E38E38ELL )
  {
    goto LABEL_3;
  }
  if ( v9 )
  {
LABEL_17:
    v10 = 72 * v9;
LABEL_3:
    v26 = a3;
    v24 = (unsigned __int64)v6;
    v11 = operator new(v10);
    a3 = v26;
    v12 = v11;
    v25 = v11 + v10;
    v13 = v11 + 72;
    goto LABEL_4;
  }
  v13 = 72;
  v12 = 0;
  v25 = 0;
LABEL_4:
  v14 = _mm_loadu_si128(a3 + 1);
  v15 = _mm_loadu_si128(a3 + 2);
  v16 = a3[4].m128i_i64[0];
  *(__m128i *)&v8[v12] = _mm_loadu_si128(a3);
  v17 = _mm_loadu_si128(a3 + 3);
  *(__m128i *)&v8[v12 + 16] = v14;
  *(__m128i *)&v8[v12 + 32] = v15;
  *(__m128i *)&v8[v12 + 48] = v17;
  *(_QWORD *)&v8[v12 + 64] = v16;
  if ( a2 != v7 )
  {
    v18 = v7;
    v19 = v12;
    do
    {
      v20 = _mm_loadu_si128(v18);
      v18 = (const __m128i *)((char *)v18 + 72);
      v19 += 72;
      *(__m128i *)(v19 - 72) = v20;
      *(__m128i *)(v19 - 56) = _mm_loadu_si128((const __m128i *)((char *)v18 - 56));
      *(__m128i *)(v19 - 40) = _mm_loadu_si128((const __m128i *)((char *)v18 - 40));
      *(__m128i *)(v19 - 24) = _mm_loadu_si128((const __m128i *)((char *)v18 - 24));
      *(_QWORD *)(v19 - 8) = v18[-1].m128i_i64[1];
    }
    while ( a2 != v18 );
    v13 = v12 + 8 * ((unsigned __int64)((char *)&a2[-5].m128i_u64[1] - (char *)v7) >> 3) + 144;
  }
  if ( a2 != v6 )
  {
    v21 = (void *)v13;
    v22 = 8 * ((unsigned __int64)((char *)v6 - (char *)a2 - 72) >> 3) + 72;
    v13 += v22;
    memcpy(v21, a2, v22);
  }
  if ( v7 )
    operator delete(v7);
  v24 = v13;
  result = v25;
  *(_QWORD *)(a1 + 16) = v25;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v24);
  return result;
}
