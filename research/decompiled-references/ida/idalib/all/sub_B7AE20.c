__int64 __fastcall sub_B7AE20(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        const __m128i *a7,
        __int64 a8)
{
  __int64 v10; // r12
  const __m128i *v11; // rdx
  __int64 v12; // rsi
  __m128i v13; // xmm0

  v10 = sub_B902D0(56, a1, a2, 60 * a8);
  sub_B725B0(v10, 0x4Fu, a2, a3);
  v11 = a7;
  *(_QWORD *)(v10 + 40) = a4;
  *(_DWORD *)(v10 + 52) = a8;
  *(_QWORD *)v10 = &off_2B4A5B0;
  *(_DWORD *)(v10 + 48) = a5;
  if ( (const __m128i *)((char *)v11 + 60 * a8) != v11 )
  {
    v12 = v10 + 56;
    do
    {
      v13 = _mm_loadu_si128(v11);
      v11 = (const __m128i *)((char *)v11 + 60);
      v12 += 60;
      *(__m128i *)(v12 - 60) = v13;
      *(__m128i *)(v12 - 44) = _mm_loadu_si128((const __m128i *)((char *)v11 - 44));
      *(__m128i *)(v12 - 28) = _mm_loadu_si128((const __m128i *)((char *)v11 - 28));
      *(_QWORD *)(v12 - 12) = *(__int64 *)((char *)v11[-1].m128i_i64 + 4);
      *(_DWORD *)(v12 - 4) = v11[-1].m128i_i32[3];
    }
    while ( (const __m128i *)((char *)a7 + 60 * a8) != v11 );
  }
  return v10;
}
