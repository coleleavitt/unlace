__int64 *__fastcall sub_217790(__int64 *a1, __int64 a2)
{
  __int64 *result; // rax
  __int64 v4; // r12
  __m128i si128; // xmm0
  __int64 v6; // rdi
  __m128i v7[2]; // [rsp+0h] [rbp-28h] BYREF

  result = sub_606D0(a1, (__int64 *)a2);
  v4 = *(_QWORD *)(a2 + 16);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v6 = a1[2];
  if ( v6 )
  {
    a1[3] = 0;
    v7[0] = si128;
    result = (__int64 *)qfree(v6);
    si128 = _mm_load_si128(v7);
  }
  a1[2] = v4;
  *(__m128i *)(a1 + 3) = si128;
  return result;
}
