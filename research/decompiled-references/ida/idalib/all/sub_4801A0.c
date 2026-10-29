__int64 __fastcall sub_4801A0(const __m128i **a1, const __m128i *a2, int a3)
{
  switch ( a3 )
  {
    case 1:
      *a1 = a2;
      break;
    case 2:
      *(__m128i *)a1 = _mm_loadu_si128(a2);
      break;
    case 0:
      *a1 = nullptr;
      break;
  }
  return 0;
}
