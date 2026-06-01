__m128i *__fastcall sub_1DB7720(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __int64 a8)
{
  const __m128i *v8; // roff
  __int64 v9; // rdx
  __int64 v10; // rcx
  __m128i v11; // xmm1
  __m128i v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]

  v8 = (const __m128i *)(a7.m128i_i64[1] + 24LL * (unsigned int)(*(_DWORD *)(a2 + 12632) - 1));
  a7 = _mm_loadu_si128(v8);
  a8 = v8[1].m128i_i64[0];
  if ( sub_F1D570((__int64)&a7) )
  {
    sub_F1DF30((__int64)&v13, a7.m128i_i64, v9, v10);
    a7 = _mm_loadu_si128(&v13);
    a8 = v14;
  }
  v11 = _mm_loadu_si128(&a7);
  a1[1].m128i_i64[0] = a8;
  *a1 = v11;
  return a1;
}
