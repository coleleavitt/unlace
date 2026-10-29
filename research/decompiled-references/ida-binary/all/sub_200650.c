unsigned __int64 __fastcall sub_200650(
        __int64 a1,
        const __m128i *a2,
        unsigned __int8 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  _OWORD v16[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+20h] [rbp-18h]
  unsigned __int64 v18; // [rsp+28h] [rbp-10h]

  v12 = _mm_loadu_si128(a2);
  v18 = __readfsqword(0x28u);
  v13 = a2[2].m128i_i64[0];
  v16[0] = v12;
  v14 = _mm_loadu_si128(a2 + 1);
  v17 = v13;
  v16[1] = v14;
  sub_2004D0(a1, (const char *)v16, a3, a4, *(double *)v14.m128i_i64, a6, a7, a8, a9, a10, a11, a12);
  return v18 - __readfsqword(0x28u);
}
