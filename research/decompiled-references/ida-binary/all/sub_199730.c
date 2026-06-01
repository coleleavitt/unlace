__int64 __fastcall add_bpt_ah_t__::vfunc_4(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __m128i si128; // xmm0
  __int64 v6; // rax

  v3 = *a2;
  if ( (unsigned __int64)a2[2] <= 0x1A )
  {
    v6 = qvector_reserve(a2, v3, 27, 1);
    *a2 = v6;
    v3 = v6;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC500);
  a2[1] = 27;
  *(__m128i *)v3 = si128;
  *(__m128i *)(v3 + 10) = _mm_load_si128((const __m128i *)&xmmword_5DC510);
  *(_BYTE *)(*a2 + 26) = 0;
  return 1;
}
