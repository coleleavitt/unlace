__m128i *__fastcall sub_B39920(__int64 a1, int a2)
{
  void *v3; // rdi
  size_t v4; // rbp
  void *v5; // rax
  __m128i *result; // rax
  __m128i v7; // xmm0

  v3 = *(void **)(a1 + 24);
  if ( v3 )
    sub_186B220(v3);
  *(_DWORD *)(a1 + 16) = a2;
  v4 = (unsigned int)(8 * a2 + 112);
  v5 = (void *)sub_186B270(v4);
  *(_QWORD *)(a1 + 24) = v5;
  result = (__m128i *)memset(v5, 0, v4);
  v7 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
  result[2].m128i_i8[13] |= 1u;
  result[1].m128i_i64[0] = (__int64)result;
  result[2].m128i_i32[0] = 1;
  result[2].m128i_i32[2] = -1;
  *result = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)result);
  return result;
}

