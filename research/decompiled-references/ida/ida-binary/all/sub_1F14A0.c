unsigned __int64 __fastcall sub_1F14A0(
        const __m128i *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __m128i v6; // xmm0
  __int64 v7; // rax
  __m128i v8; // xmm0
  __m128i v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  unsigned __int64 v13; // [rsp+38h] [rbp-10h]

  v6 = _mm_loadu_si128(a2);
  v13 = __readfsqword(0x28u);
  v7 = a2[2].m128i_i64[0];
  v12 = 0;
  v10[0] = v6;
  v8 = _mm_loadu_si128(a2 + 1);
  v11 = v7;
  v10[1] = v8;
  sub_1F1190(a1, v10, 2, a4, a5, a6, v8);
  return v13 - __readfsqword(0x28u);
}
