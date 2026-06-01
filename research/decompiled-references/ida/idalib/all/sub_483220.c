__int64 __fastcall sub_483220(__int64 **a1, const __m128i *a2)
{
  __int64 *v2; // rbx
  __m128i v3; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 *v7; // rdi
  __m128i v8; // [rsp+0h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = _mm_loadu_si128(a2);
  v4 = (*a1)[1];
  v5 = **a1;
  result = v4 + 1;
  if ( (*a1)[2] < (unsigned __int64)(v4 + 1) )
  {
    v7 = *a1;
    v8 = v3;
    result = qvector_reserve(v7, v5, v4 + 1, 16);
    v4 = v2[1];
    v3 = _mm_load_si128(&v8);
    *v2 = result;
    v5 = result;
  }
  *(__m128i *)(v5 + 16 * v4) = v3;
  ++v2[1];
  return result;
}
