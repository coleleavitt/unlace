_QWORD *__fastcall sub_9C7D70(_QWORD *a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  __m128i v4; // [rsp+0h] [rbp-18h] BYREF

  v2 = _mm_loadu_si128(a2 + 1);
  a1[1] = 0x100000000LL;
  *a1 = a1 + 2;
  v4 = v2;
  sub_22134E0(a1, a1 + 2, 2, 8);
  *(__m128i *)(*a1 + 8LL * *((unsigned int *)a1 + 2)) = _mm_load_si128(&v4);
  *((_DWORD *)a1 + 2) += 2;
  return a1;
}

