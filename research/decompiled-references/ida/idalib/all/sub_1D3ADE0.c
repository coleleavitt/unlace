__m128i *__fastcall sub_1D3ADE0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  unsigned int v8; // r13d
  __m128i v10[4]; // [rsp+0h] [rbp-48h] BYREF

  v8 = a4;
  sub_A80DE0((__int64)v10, *(_QWORD *)(a2 + 248), a3, a4, a5, a6);
  sub_1D37A30(a1, a2, v10, 0, v8, 0, a7, a8);
  return a1;
}
