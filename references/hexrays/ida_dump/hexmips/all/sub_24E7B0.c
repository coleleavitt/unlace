__int64 __fastcall sub_24E7B0(__int64 a1, __int64 a2)
{
  void *v3; // r13
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rbp
  __m128i si128; // xmm0
  __int64 v7; // rdi
  size_t v8; // r12
  __m128i v9[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 72) != a2 )
    return 0;
  v3 = nullptr;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD **)(a1 + 64);
  si128 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v4 )
  {
    v8 = 8 * v4;
    v9[0] = si128;
    v3 = (void *)qalloc_or_throw(8 * v4);
    memcpy(v3, *(const void **)(a1 + 16), v8);
    si128 = _mm_load_si128(v9);
  }
  v7 = *v5;
  if ( *v5 )
  {
    v5[1] = 0;
    v9[0] = si128;
    qfree(v7);
    si128 = _mm_load_si128(v9);
  }
  *v5 = v3;
  *(__m128i *)(v5 + 1) = si128;
  return 1;
}
