__int64 (__fastcall *__fastcall sub_15051E0(__int64 a1, const __m128i *a2, char a3))(__int64 a1, __m128i *a2)
{
  __int64 (__fastcall *result)(__int64, __m128i *); // rax

  *(_QWORD *)a1 = a2;
  *(__m128i *)(a1 + 8) = _mm_loadu_si128(a2 + 3);
  *(__m128i *)(a1 + 24) = _mm_loadu_si128(a2 + 4);
  *(_QWORD *)(a1 + 40) = a2[5].m128i_i64[0];
  *(__m128i *)(a1 + 48) = _mm_loadu_si128(a2 + 1);
  *(_DWORD *)(a1 + 64) = a2[2].m128i_i32[0];
  *(_QWORD *)(a1 + 72) = a2[169].m128i_u32[2];
  *(_WORD *)(a1 + 80) = a2[5].m128i_i16[4];
  *(_WORD *)(a1 + 82) = a2[5].m128i_i16[5];
  *(_WORD *)(a1 + 84) = a2[5].m128i_i16[6];
  result = sub_1418D30(a2->m128i_i64[1], a3);
  *(_BYTE *)(a1 + 86) = 1;
  return result;
}
