__int64 invalidate_visea_cache()
{
  __int64 result; // rax

  result = *(_QWORD *)(qword_2CCB598 + 1672);
  *(__m128i *)(result + 1584) = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  *(_OWORD *)(result + 1600) = -1;
  return result;
}
