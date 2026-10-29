void __fastcall sub_A6AE0(const __m128i *a1)
{
  __m128i v1; // xmm3
  __m128i v2; // xmm2
  __m128i v3; // xmm1
  __m128i v4; // xmm0
  _OWORD v5[2]; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-10h]

  v1 = _mm_loadu_si128(a1 + 3);
  v2 = _mm_loadu_si128(a1 + 4);
  v7 = __readfsqword(0x28u);
  v3 = _mm_loadu_si128(a1 + 1);
  v4 = _mm_loadu_si128(a1 + 2);
  v5[0] = v1;
  v5[1] = v2;
  v6[0] = v3;
  v6[1] = v4;
  sub_9F130((__int64 *)v6, (__int64 *)v5);
  sub_A6930((__int64)a1);
}

