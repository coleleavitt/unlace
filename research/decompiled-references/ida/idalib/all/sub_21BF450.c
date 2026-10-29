__int64 __fastcall sub_21BF450(void **a1, const __m128i **a2, int a3)
{
  const __m128i *v4; // rbp
  __m128i *v5; // rax
  __int64 v6; // rdx

  if ( a3 == 2 )
  {
    v4 = *a2;
    v5 = (__m128i *)operator new(0x18u);
    *v5 = _mm_loadu_si128(v4);
    v6 = v4[1].m128i_i64[0];
    *a1 = v5;
    v5[1].m128i_i64[0] = v6;
    return 0;
  }
  else if ( a3 == 3 )
  {
    operator delete(*a1, 0x18u);
    return 0;
  }
  else
  {
    if ( a3 == 1 )
      *a1 = (void *)*a2;
    return 0;
  }
}
