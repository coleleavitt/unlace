__m128i *__fastcall watchplace_t__::vfunc_2(
        const __m128i *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128i *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  char v17; // [rsp+0h] [rbp-8h]

  result = (__m128i *)qalloc(16);
  if ( !result )
    sub_22DB40((int)"watchplace", a2, v11, v12, v13, v14, a3, a4, a5, a6, v15, v16, a9, a10, v17);
  *result = _mm_loadu_si128(a1);
  return result;
}
