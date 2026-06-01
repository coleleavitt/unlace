__int64 __fastcall sub_733970(__int64 a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  __m128i v4; // xmm2
  __m128i v5; // xmm3
  __m128i v7[4]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h]
  __int64 v9; // [rsp+50h] [rbp-18h]
  unsigned __int64 v10; // [rsp+58h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  if ( !a2 )
    return sub_733130(a1, nullptr, 1);
  v2 = _mm_loadu_si128(a2);
  v3 = _mm_loadu_si128(a2 + 1);
  v8 = 0;
  v4 = _mm_loadu_si128(a2 + 2);
  v5 = _mm_loadu_si128(a2 + 3);
  v9 = 0;
  v7[0] = v2;
  v7[1] = v3;
  v7[2] = v4;
  v7[3] = v5;
  return sub_733130(a1, v7, 1);
}

