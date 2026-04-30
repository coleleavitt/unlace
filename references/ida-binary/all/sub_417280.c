__m128i *__fastcall sub_417280(__int64 a1, __int64 a2)
{
  __m128i *result; // rax
  __int64 v3; // rdx
  __m128i v4; // xmm0

  result = *(__m128i **)(a1 + 32);
  v3 = *(_QWORD *)a2;
  v4 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a2 = result[12].m128i_i64[1];
  *(_QWORD *)(a2 + 8) = result[13].m128i_i64[0];
  *(_QWORD *)(a2 + 16) = result[13].m128i_i64[1];
  result[12].m128i_i64[1] = v3;
  result[13] = v4;
  return result;
}
