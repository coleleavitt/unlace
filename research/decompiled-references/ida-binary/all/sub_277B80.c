void __fastcall sub_277B80(__m128i *a1, const __m128i *a2, __int32 a3)
{
  __m128i v3; // xmm0

  v3 = _mm_loadu_si128(a2);
  a1[1].m128i_i32[0] = a3;
  *a1 = v3;
}
