unsigned __int64 __fastcall sub_16B600(__int64 *a1, const __m128i *a2, char a3)
{
  __m128i v3; // xmm0
  __int64 v4; // rax
  __m128i v5; // xmm0
  _OWORD v7[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+20h] [rbp-18h]
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v3 = _mm_loadu_si128(a2);
  v9 = __readfsqword(0x28u);
  v4 = a2[2].m128i_i64[0];
  v7[0] = v3;
  v5 = _mm_loadu_si128(a2 + 1);
  v8 = v4;
  v7[1] = v5;
  sub_16B4D0(a1, (__int64)v7, a3);
  return v9 - __readfsqword(0x28u);
}

