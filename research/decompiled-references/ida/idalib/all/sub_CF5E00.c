__int64 __fastcall sub_CF5E00(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbp
  char v3; // r12
  __m128i *v4; // rax
  __int64 v5; // rdi
  __m128i v7[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *a1;
  v7[0] = _mm_loadu_si128((const __m128i *)sub_E21760(*a1, 16));
  sub_E21790(v1, 16);
  v2 = *a1;
  v3 = *(_BYTE *)sub_E21760(*a1, 8);
  sub_E21790(v2, 8);
  v4 = (__m128i *)sub_E216C0(*a1, 16);
  v5 = *a1;
  *v4 = _mm_load_si128(v7);
  *(_BYTE *)sub_E216C0(v5, 8) = v3;
  return 1;
}
