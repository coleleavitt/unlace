__int64 __fastcall add_bpt_ah_t__::vfunc_5(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10,
        __int64 *a11)
{
  _BOOL4 v12; // eax
  unsigned int v13; // ebp
  __int64 v15; // rsi
  __m128i si128; // xmm0
  __int64 v17; // rax

  v12 = sub_19C7C0(0, a11, a1, a2, a3, a4, a5, a6, a7, a8);
  v13 = v12;
  if ( !v12 )
    return 0;
  v15 = *a10;
  if ( (unsigned __int64)a10[2] <= 0x1A )
  {
    v17 = qvector_reserve(a10, v15, 27, 1);
    *a10 = v17;
    v15 = v17;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC520);
  a10[1] = 27;
  *(__m128i *)v15 = si128;
  *(__m128i *)(v15 + 10) = _mm_load_si128((const __m128i *)&xmmword_5DC540);
  *(_BYTE *)(*a10 + 26) = 0;
  return v13;
}
