__int64 __fastcall sub_10770(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v6; // xmm0
  __int64 v7; // rax
  __m128i v8; // xmm0
  __m128i v10[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+20h] [rbp-18h]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v6 = _mm_loadu_si128(a2);
  v12 = __readfsqword(0x28u);
  v7 = a2[2].m128i_i64[0];
  v10[0] = v6;
  v8 = _mm_loadu_si128(a2 + 1);
  v11 = v7;
  v10[1] = v8;
  sub_103B0(a1, v10, a3, a4, a5, a6);
  return v10[0].m128i_u8[5];
}
