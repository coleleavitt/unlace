void *__fastcall sub_173690(__int64 *a1, __int64 a2)
{
  void *v2; // r13
  void *result; // rax
  unsigned __int64 v5; // rdx
  __m128i si128; // xmm0
  __int64 v7; // rdi
  size_t v8; // r12
  __m128i v9[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = nullptr;
  result = sub_648D0(a1, (__int64 *)a2);
  v5 = *(_QWORD *)(a2 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( v5 )
  {
    v9[0] = si128;
    v8 = 16 * v5;
    v2 = (void *)qalloc_or_throw(16 * v5);
    result = memcpy(v2, *(const void **)(a2 + 16), v8);
    si128 = _mm_load_si128(v9);
  }
  v7 = a1[2];
  if ( v7 )
  {
    a1[3] = 0;
    v9[0] = si128;
    result = (void *)qfree(v7);
    si128 = _mm_load_si128(v9);
  }
  a1[2] = (__int64)v2;
  *(__m128i *)(a1 + 3) = si128;
  return result;
}
