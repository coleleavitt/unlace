__m128i *__fastcall sub_183E390(__int64 *a1, __int64 a2, __int64 a3, int a4, __m128 a5, __m128i a6)
{
  __m128i *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v13[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  v7 = (__m128i *)sub_B7AAF0(a1[31], a1[68], a4);
  v13[0] = 1;
  sub_1836B60(a1, a2, v7, a3, v13, a5, a6);
  sub_B94AD0((__m128i *)a1[68], (__int64)v7, v8, v9, v10, v11);
  return v7;
}
