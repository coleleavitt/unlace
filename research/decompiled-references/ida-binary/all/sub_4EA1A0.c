void *__fastcall sub_4EA1A0(
        __int64 *dest,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __int128 a8,
        __int128 a9)
{
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 *v12; // r14

  v10 = (a2 - dest + 1) / 2;
  v11 = 8 * v10;
  v12 = &dest[v10];
  if ( v10 <= a4 )
    return sub_4EA110(dest, &dest[v10], a2, a3, a5, a6, a7, a8);
  sub_4EA1A0(dest, (__int128)_mm_loadu_si128((const __m128i *)&a8), (__int128)_mm_loadu_si128((const __m128i *)&a9));
  sub_4EA1A0(v12, (__int128)_mm_loadu_si128((const __m128i *)&a8), (__int128)_mm_loadu_si128((const __m128i *)&a9));
  return sub_4E93C0(
           dest,
           v12,
           a2,
           v11 >> 3,
           a2 - v12,
           a3,
           a4,
           (__int128)_mm_loadu_si128((const __m128i *)&a8),
           (__int128)_mm_loadu_si128((const __m128i *)&a9));
}
