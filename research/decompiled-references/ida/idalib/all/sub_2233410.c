__int64 __fastcall sub_2233410(int a1)
{
  const __m128i *v1; // r14

  if ( a1 < 0 )
    goto LABEL_6;
  if ( a1 <= 1 )
    return 6;
  if ( a1 > 3 )
  {
LABEL_6:
    *(__m128i *)&dword_0 = _mm_loadu_si128(v1);
    BUG();
  }
  return 2;
}
