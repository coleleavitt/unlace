void __fastcall sub_4E90F0(
        __int64 *src,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 *v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r9

  v8 = (char *)a2 - (char *)src;
  if ( (char *)a2 - (char *)src <= 112 )
  {
    sub_4E6A20(src, a2, a3, v8, a5, a6, a7, a8, SBYTE8(a8));
  }
  else
  {
    v9 = v8 >> 4;
    v10 = &src[v9];
    v11 = (8 * v9) >> 3;
    sub_4E90F0(src, (__int128)_mm_loadu_si128((const __m128i *)&a7), (__int128)_mm_loadu_si128((const __m128i *)&a8));
    sub_4E90F0(v10, (__int128)_mm_loadu_si128((const __m128i *)&a7), (__int128)_mm_loadu_si128((const __m128i *)&a8));
    sub_4E8E90(src, v10, (__int64)a2, v11, a2 - v10, v12, a7, a8);
  }
}
