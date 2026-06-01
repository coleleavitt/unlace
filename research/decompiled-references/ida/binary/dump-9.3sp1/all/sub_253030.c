__int64 __fastcall sub_253030(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // r13
  __int64 v6; // rdx
  __int64 *v7; // rbp
  __m128i si128; // xmm0
  __int64 v9; // rdi
  size_t v10; // r12
  __m128i v11[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 72) != a2 )
    return 0;
  v5 = nullptr;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(__int64 **)(a1 + 64);
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v6);
  if ( v6 )
  {
    v10 = 8 * v6;
    v11[0] = si128;
    v5 = (void *)qalloc_or_throw(8 * v6, a2, v6, a4);
    memcpy(v5, *(const void **)(a1 + 16), v10);
    si128 = _mm_load_si128(v11);
  }
  v9 = *v7;
  if ( *v7 )
  {
    v7[1] = 0;
    v11[0] = si128;
    qfree(v9);
    si128 = _mm_load_si128(v11);
  }
  *v7 = (__int64)v5;
  *(__m128i *)(v7 + 1) = si128;
  return 1;
}
