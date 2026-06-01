__m128i *__fastcall sub_B3910(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 *a9,
        __m128 a10,
        __m128i a11)
{
  __int64 *v13; // r15
  __m128 si128; // xmm1
  __m128i v15; // xmm0
  __m128 v17; // [rsp+10h] [rbp-88h] BYREF
  __m128i v18; // [rsp+20h] [rbp-78h] BYREF
  __m128 v19; // [rsp+30h] [rbp-68h] BYREF
  __m128i v20; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( a9 == a5 )
  {
    v20 = a11;
    v19 = a10;
    sub_B37A0(&v17, a2, a6, (__int64)&v19);
  }
  else
  {
    v17 = a10;
    v13 = a5;
    v18 = a11;
    while ( 1 )
    {
      ++v13;
      sub_B37A0(&v19, a2, a4, (__int64)&v17);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v19);
      v15 = _mm_load_si128(&v20);
      if ( a9 == v13 )
        break;
      a2 = *v13;
      v17 = si128;
      v18 = v15;
      a4 = a2 + 512;
    }
    v19 = si128;
    v20 = v15;
    sub_B37A0(&v17, a7, a6, (__int64)&v19);
  }
  *a1 = _mm_load_si128((const __m128i *)&v17);
  a1[1] = _mm_load_si128(&v18);
  return a1;
}

