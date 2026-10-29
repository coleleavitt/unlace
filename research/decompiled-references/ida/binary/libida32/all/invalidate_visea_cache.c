__int64 invalidate_visea_cache()
{
  __int64 result; // rax

  result = *(_QWORD *)(qword_2CA1698 + 1480);
  *(__m128i *)(result + 1532) = _mm_load_si128((const __m128i *)&xmmword_2383860);
  return result;
}

