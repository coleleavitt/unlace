__m128i *__fastcall sub_222C90(
        __m128i *a1,
        __int64 a2,
        __m128i a3,
        __m128i a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 *a12,
        __m128i a13,
        __m128i a14)
{
  __int64 v14; // rdx
  __int64 *v17; // r15
  __m128i v21; // [rsp+10h] [rbp-88h] BYREF
  __m128i v22; // [rsp+20h] [rbp-78h] BYREF
  __m128i v23; // [rsp+30h] [rbp-68h] BYREF
  __m128i v24; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v14 = a9;
  v17 = a12;
  v25 = __readfsqword(0x28u);
  if ( a12 == a8 )
  {
    v24 = a14;
    v23 = a13;
    sub_222AD0(&v21, a2, a9, &v23, *(double *)a3.m128i_i64, *(double *)a4.m128i_i64, a5);
  }
  else
  {
    v22 = a14;
    v21 = a13;
    while ( 1 )
    {
      --v17;
      sub_222AD0(&v23, a10, v14, &v21, *(double *)a3.m128i_i64, *(double *)a4.m128i_i64, a5);
      a4 = _mm_load_si128(&v23);
      a3 = _mm_load_si128(&v24);
      if ( a8 == v17 )
        break;
      a10 = *v17;
      v21 = a4;
      v22 = a3;
      v14 = a10 + 512;
    }
    v23 = a4;
    v24 = a3;
    sub_222AD0(&v21, a2, a7, &v23, *(double *)a3.m128i_i64, *(double *)a4.m128i_i64, a5);
  }
  *a1 = _mm_load_si128(&v21);
  a1[1] = _mm_load_si128(&v22);
  return a1;
}
