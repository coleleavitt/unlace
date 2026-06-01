__int64 __fastcall sub_21A8C30(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v5; // r15
  __m128i *v6; // r13
  __int8 *v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r12
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm7
  __m128i v16; // xmm7
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
  if ( !(0x4EC4EC4EC4EC4EC5LL * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 3)) )
  {
    v8 = 1;
    goto LABEL_17;
  }
  v8 = 0x9D89D89D89D89D8ALL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v9 = -16;
  if ( 0x4EC4EC4EC4EC4EC5LL * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 3) > 0x9D89D89D89D89D8ALL
                                                                              * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 3)
    || v8 > 0x276276276276276LL )
  {
    goto LABEL_3;
  }
  if ( v8 )
  {
LABEL_17:
    v9 = 104 * v8;
LABEL_3:
    v25 = a3;
    v23 = (__int64)v7;
    v10 = operator new(v9);
    a3 = v25;
    v11 = v10;
    v24 = v10 + v9;
    v12 = v10 + 104;
    goto LABEL_4;
  }
  v12 = 104;
  v11 = 0;
  v24 = 0;
LABEL_4:
  v13 = _mm_loadu_si128(a3 + 4);
  v14 = a3[6].m128i_i64[0];
  *(__m128i *)&v7[v11] = _mm_loadu_si128(a3);
  v15 = _mm_loadu_si128(a3 + 1);
  *(__m128i *)&v7[v11 + 64] = v13;
  *(__m128i *)&v7[v11 + 16] = v15;
  v16 = _mm_loadu_si128(a3 + 2);
  *(_QWORD *)&v7[v11 + 96] = v14;
  *(__m128i *)&v7[v11 + 32] = v16;
  *(__m128i *)&v7[v11 + 48] = _mm_loadu_si128(a3 + 3);
  *(__m128i *)&v7[v11 + 80] = _mm_loadu_si128(a3 + 5);
  if ( a2 != v6 )
  {
    v17 = v6;
    v18 = v11;
    do
    {
      v19 = _mm_loadu_si128(v17);
      v17 = (const __m128i *)((char *)v17 + 104);
      v18 += 104;
      *(__m128i *)(v18 - 104) = v19;
      *(__m128i *)(v18 - 88) = _mm_loadu_si128((const __m128i *)((char *)v17 - 88));
      *(__m128i *)(v18 - 72) = _mm_loadu_si128((const __m128i *)((char *)v17 - 72));
      *(__m128i *)(v18 - 56) = _mm_loadu_si128((const __m128i *)((char *)v17 - 56));
      *(__m128i *)(v18 - 40) = _mm_loadu_si128((const __m128i *)((char *)v17 - 40));
      *(__m128i *)(v18 - 24) = _mm_loadu_si128((const __m128i *)((char *)v17 - 24));
      *(_QWORD *)(v18 - 8) = v17[-1].m128i_i64[1];
    }
    while ( a2 != v17 );
    v12 = v11
        + 104
        * (((0xEC4EC4EC4EC4EC5LL * ((unsigned __int64)((char *)&a2[-7].m128i_u64[1] - (char *)v6) >> 3))
          & 0x1FFFFFFFFFFFFFFFLL)
         + 2);
  }
  if ( a2 != v5 )
  {
    v20 = (void *)v12;
    v21 = 104
        * (((0xEC4EC4EC4EC4EC5LL * ((unsigned __int64)((char *)v5 - (char *)a2 - 104) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1);
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
