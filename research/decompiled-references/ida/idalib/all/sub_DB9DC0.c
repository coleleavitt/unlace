__int64 __fastcall sub_DB9DC0(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbp
  __m128i *v3; // rax
  __int64 v4; // rdi
  __m128i v6; // [rsp+0h] [rbp-38h] BYREF
  __m128i v7[2]; // [rsp+10h] [rbp-28h] BYREF

  v1 = *a1;
  v7[0] = _mm_loadu_si128((const __m128i *)sub_E21760(*a1, 16));
  sub_E21790(v1, 16);
  v2 = *a1;
  v6 = _mm_loadu_si128((const __m128i *)sub_E21760(*a1, 16));
  sub_E21790(v2, 16);
  v3 = (__m128i *)sub_E216C0(*a1, 16);
  v4 = *a1;
  *v3 = _mm_load_si128(v7);
  *(__m128i *)sub_E216C0(v4, 16) = _mm_load_si128(&v6);
  return 1;
}
