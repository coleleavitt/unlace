void *__fastcall sub_4EA110(
        __int64 *dest,
        __int64 *src,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        const __m128i a7,
        __int128 a8)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  sub_4E9FA0(
    dest,
    src,
    (__int64)a4,
    (__int64)a4,
    a5,
    a6,
    _mm_loadu_si128((const __m128i *)&a8),
    (__int128)_mm_loadu_si128(&a7));
  sub_4E9FA0(src, a3, (__int64)a4, v10, v11, v12, _mm_loadu_si128((const __m128i *)&a8), (__int128)_mm_loadu_si128(&a7));
  return sub_4E6750(dest, src, a3, src - dest, a3 - src, a4, *(_OWORD *)&a7, a8);
}
