__int64 __fastcall sub_173690(__int64 *a1, __int64 a2)
{
  void *v2; // r13
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  __m128i si128; // xmm0
  size_t v6; // r12
  __m128i v7[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = nullptr;
  result = (__int64)sub_648D0(a1, (__int64 *)a2);
  v4 = *(_QWORD *)(a2 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v4 )
  {
    v7[0] = si128;
    v6 = 16 * v4;
    v2 = (void *)qalloc_or_throw();
    result = (__int64)memcpy(v2, *(const void **)(a2 + 16), v6);
    si128 = _mm_load_si128(v7);
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    v7[0] = si128;
    result = qfree();
    si128 = _mm_load_si128(v7);
  }
  a1[2] = (__int64)v2;
  *(__m128i *)(a1 + 3) = si128;
  return result;
}
