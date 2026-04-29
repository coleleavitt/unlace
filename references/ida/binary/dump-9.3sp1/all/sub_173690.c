__int64 __fastcall sub_173690(__int64 *a1, __int64 a2)
{
  void *v2; // r13
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __m128i si128; // xmm0
  __int64 v8; // rdi
  __int64 v9; // r12
  __m128i v10[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = nullptr;
  result = (__int64)sub_648D0(a1, (__int64 *)a2);
  v6 = *(_QWORD *)(a2 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v6 )
  {
    v10[0] = si128;
    v9 = 16 * v6;
    v2 = (void *)qalloc_or_throw(v9, a2, v9, v5);
    result = (__int64)memcpy(v2, *(const void **)(a2 + 16), v9);
    si128 = _mm_load_si128(v10);
  }
  v8 = a1[2];
  if ( v8 )
  {
    a1[3] = 0;
    v10[0] = si128;
    result = qfree(v8);
    si128 = _mm_load_si128(v10);
  }
  a1[2] = (__int64)v2;
  *(__m128i *)(a1 + 3) = si128;
  return result;
}
