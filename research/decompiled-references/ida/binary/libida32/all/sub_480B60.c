__int64 __fastcall sub_480B60(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // rbp
  __m128i v3; // xmm0
  size_t v4; // r12
  size_t v5; // r12
  __m128i v6; // xmm0
  __int64 v7; // rdx
  __int64 result; // rax
  __m128i v9; // xmm0
  void *v10; // rax
  void *v11; // rax
  const void *v12; // rsi

  v2 = a2;
  v3 = _mm_loadu_si128(a2);
  *(_QWORD *)(a1 + 16) = 0;
  *(__m128i *)a1 = v3;
  *(_OWORD *)(a1 + 24) = 0;
  v4 = a2[1].m128i_u64[1];
  if ( v4 )
  {
    v10 = (void *)qalloc_or_throw(a2[1].m128i_i64[1], a2->m128i_i8);
    *(_QWORD *)(a1 + 32) = v4;
    a2 = (const __m128i *)a2[1].m128i_i64[0];
    *(_QWORD *)(a1 + 16) = v10;
    memcpy(v10, a2, v4);
    *(_QWORD *)(a1 + 24) = v4;
  }
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v5 = v2[3].m128i_u64[0];
  if ( v5 )
  {
    v11 = (void *)qalloc_or_throw(v2[3].m128i_i64[0], a2->m128i_i8);
    *(_QWORD *)(a1 + 40) = v11;
    v12 = (const void *)v2[2].m128i_i64[1];
    *(_QWORD *)(a1 + 56) = v5;
    memcpy(v11, v12, v5);
    *(_QWORD *)(a1 + 48) = v5;
  }
  *(_QWORD *)(a1 + 64) = 0;
  copy_tinfo_t(a1 + 64);
  v6 = _mm_loadu_si128((const __m128i *)((char *)v2 + 72));
  v7 = v2[7].m128i_i64[0];
  *(_QWORD *)(a1 + 104) = v2[6].m128i_i64[1];
  result = v2[7].m128i_u8[8];
  *(__m128i *)(a1 + 72) = v6;
  v9 = _mm_loadu_si128((const __m128i *)((char *)v2 + 88));
  *(_QWORD *)(a1 + 112) = v7;
  *(_BYTE *)(a1 + 120) = result;
  *(__m128i *)(a1 + 88) = v9;
  return result;
}

