__m128i *__fastcall sub_63EA20(__int64 *a1, __int64 a2, __int32 a3)
{
  _QWORD *v5; // rax
  size_t v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i *result; // rax
  __int64 v12; // rbp
  __int64 v13; // rdx
  __m128i v14; // xmm1
  __m128i si128; // xmm2
  __m128i v16; // xmm0
  void *v17; // rax
  const void *v18; // rsi

  v5 = (_QWORD *)operator new(0x98u);
  v6 = a1[2];
  v7 = v5;
  *v5 = &off_2B26160;
  v8 = *a1;
  v7[2] = 0;
  v7[1] = v8;
  *(_OWORD *)(v7 + 3) = 0;
  if ( v6 )
  {
    v17 = (void *)qalloc_or_throw(v6);
    v7[2] = v17;
    v18 = (const void *)a1[1];
    v7[4] = v6;
    memcpy(v17, v18, v6);
    v7[3] = v6;
  }
  v9 = a1[4];
  v7[15] = -1;
  v7[5] = v9;
  LODWORD(v9) = *((_DWORD *)a1 + 10);
  v7[16] = -1;
  *((_DWORD *)v7 + 12) = v9;
  v7[17] = -1;
  v7[18] = 0;
  *(_OWORD *)(v7 + 7) = 0;
  *(_OWORD *)(v7 + 9) = 0;
  *(_OWORD *)(v7 + 11) = 0;
  *(_OWORD *)(v7 + 13) = 0;
  merge_handler_ctr(v7, a2);
  v10 = v7[1];
  v7[9] = 0;
  result = (__m128i *)*(unsigned int *)(v10 + 28);
  if ( (int)result > 0 )
  {
    v12 = 0;
    do
    {
      result = (__m128i *)operator new(0x30u);
      v13 = v7[1];
      v14 = _mm_cvtsi32_si128(v12);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v16 = _mm_cvtsi32_si128(*(_DWORD *)(v13 + 4LL * (int)v12 + 16));
      v7[v12++ + 7] = result;
      result[2].m128i_i64[0] = v13;
      result->m128i_i64[0] = (__int64)off_2B36DB0;
      result[2].m128i_i32[2] = a3;
      result[1] = si128;
      result->m128i_i64[1] = _mm_unpacklo_epi32(v16, v14).m128i_u64[0];
    }
    while ( *(_DWORD *)(v13 + 28) > (int)v12 );
  }
  return result;
}
