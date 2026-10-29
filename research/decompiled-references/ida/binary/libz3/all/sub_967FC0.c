_QWORD *__fastcall sub_967FC0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __m128i v3; // xmm0
  _QWORD *result; // rax
  __m128i v5[2]; // [rsp+0h] [rbp-28h] BYREF

  v5[0] = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a3);
  sub_180C0A0(a1);
  *(__m128i *)(a1 + 40) = _mm_load_si128(v5);
  v3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 40), (__m128i)(unsigned __int64)(a1 + 48));
  *(__m128i *)(a1 + 56) = v3;
  *(__m128i *)(a1 + 72) = v3;
  result = (_QWORD *)sub_186B270(0xC0u);
  *result = 0;
  result[3] = 0;
  result[6] = 0;
  result[9] = 0;
  result[12] = 0;
  result[15] = 0;
  result[18] = 0;
  result[21] = 0;
  *(_QWORD *)(a1 + 88) = result;
  *(_QWORD *)(a1 + 96) = 8;
  *(_DWORD *)(a1 + 104) = 0;
  return result;
}

