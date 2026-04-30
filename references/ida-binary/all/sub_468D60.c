__int64 __fastcall sub_468D60(__int64 a1, __int64 a2, __int64 *a3)
{
  __m128i v3; // xmm0
  __int64 result; // rax

  v3 = _mm_loadu_si128((const __m128i *)(a3 + 1));
  result = *a3;
  *a3 = 0;
  *(__m128i *)(a2 + 8) = v3;
  *(_QWORD *)a2 = result;
  *(_OWORD *)(a3 + 1) = 0;
  return result;
}
