__int64 __fastcall sub_4E9FA0(
        __int64 *src,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const __m128i a7,
        __int128 a8)
{
  __int64 *v8; // r13
  __int64 v9; // r14
  __int64 *v11; // r12
  __int64 *v12; // r15
  __int64 *v13; // rdi
  __m128i v14; // xmm0
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128i si128; // [rsp+10h] [rbp-78h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int128 v24; // [rsp+30h] [rbp-58h] BYREF
  __int64 v25[2]; // [rsp+40h] [rbp-48h] BYREF

  v8 = (__int64 *)(a3 + (char *)a2 - (char *)src);
  v9 = a2 - src;
  v23 = (char *)a2 - (char *)src;
  v24 = (__int128)_mm_loadu_si128(&a7);
  *(__m128i *)v25 = _mm_loadu_si128((const __m128i *)&a8);
  if ( (char *)a2 - (char *)src <= 48 )
    return sub_4E6A20(src, a2, a3, a4, a5, a6, *(_OWORD *)&a7, a8, SBYTE8(a8));
  v11 = (__int64 *)a3;
  v12 = src;
  do
  {
    v13 = v12;
    v12 += 7;
    si128 = _mm_load_si128((const __m128i *)v25);
    sub_4E6A20(
      v13,
      v12,
      a3,
      a4,
      a5,
      a6,
      (__int128)_mm_load_si128((const __m128i *)&v24),
      si128.m128i_i64[0],
      si128.m128i_i8[8]);
    a3 = (char *)a2 - (char *)v12;
  }
  while ( (char *)a2 - (char *)v12 > 48 );
  v14 = _mm_load_si128((const __m128i *)v25);
  result = sub_4E6A20(
             v12,
             a2,
             a3,
             a4,
             a5,
             a6,
             (__int128)_mm_load_si128((const __m128i *)&v24),
             v14.m128i_i64[0],
             v14.m128i_i8[8]);
  if ( v23 > 56 )
  {
    v18 = 7;
    do
    {
      sub_4E9EF0(src, a2, v11, v18, v16, v17, _mm_loadu_si128((const __m128i *)&a8));
      v19 = 2 * v18;
      v18 *= 4;
      result = sub_4E9EF0(v11, v8, src, v19, v20, v21, _mm_loadu_si128((const __m128i *)&a8));
    }
    while ( v9 > v18 );
  }
  return result;
}
