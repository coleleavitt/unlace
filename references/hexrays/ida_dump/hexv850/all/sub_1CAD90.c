unsigned __int64 __fastcall sub_1CAD90(unsigned int a1)
{
  __m128i v1; // xmm0
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  __m128i v4; // [rsp+8h] [rbp-30h] BYREF
  __int64 v5; // [rsp+18h] [rbp-20h]
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4 = 0;
  v3 = 32;
  v5 = 0;
  get_stkarg_area_info(&v3, a1);
  v1 = _mm_loadu_si128(&v4);
  return _mm_add_epi64(v1, _mm_srli_si128(v1, 8)).m128i_u64[0];
}
