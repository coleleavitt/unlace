void __fastcall sub_123D1D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __m128 a7,
        __m128i a8,
        __m128i a9,
        __m128i a10)
{
  const char *v12; // [rsp+8h] [rbp-C0h] BYREF
  void *ptr; // [rsp+10h] [rbp-B8h]
  __int64 v14; // [rsp+18h] [rbp-B0h]
  _OWORD v15[10]; // [rsp+20h] [rbp-A8h] BYREF

  sub_123CD60(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  v12 = "--spirv-ext=+all";
  ptr = v15;
  v15[0] = _mm_loadh_ps((const double *)&v12);
  v12 = "--spirv-lower-const-expr";
  v15[1] = _mm_loadh_ps((const double *)&v12);
  v12 = "--spirv-debug-info-version=nonsemantic-shader-200";
  v14 = 0x1000000006LL;
  v15[2] = _mm_loadh_ps((const double *)&v12);
  sub_12B3580(a2, a1, a3, a5, a5);
  if ( ptr != v15 )
    free(ptr);
}
