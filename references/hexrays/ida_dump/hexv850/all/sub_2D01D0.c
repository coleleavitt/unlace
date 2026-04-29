__int64 __fastcall sub_2D01D0(__m128i *a1, __m128i *a2, unsigned __int64 a3)
{
  __m128i v3; // xmm0
  __int64 result; // rax
  __m128 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v3 = _mm_loadl_epi64(a2);
  v6 = __readfsqword(0x28u);
  v5 = (__m128)_mm_unpacklo_epi64(v3, (__m128i)a3);
  result = sub_2CF600(a1, (char **)&v5, nullptr, v5);
  a2->m128i_i64[0] = v5.m128_u64[0];
  return result;
}
