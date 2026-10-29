__int64 *__fastcall sub_114320(
        unsigned int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128i a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  __m128i v16; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v17[6]; // [rsp+20h] [rbp-B8h] BYREF
  __m128 v18; // [rsp+50h] [rbp-88h]
  __m128i v19; // [rsp+60h] [rbp-78h]
  __m128 v20; // [rsp+70h] [rbp-68h]
  __m128 v21; // [rsp+80h] [rbp-58h]
  __m128 v22; // [rsp+90h] [rbp-48h]
  __m128 v23; // [rsp+A0h] [rbp-38h]
  __m128 v24; // [rsp+B0h] [rbp-28h]
  __m128 v25; // [rsp+C0h] [rbp-18h]

  v17[5] = a6;
  v18 = a7;
  v19 = a8;
  v20 = a9;
  v21 = a10;
  v22 = a11;
  v23 = a12;
  v24 = a13;
  v25 = a14;
  return sub_10E7A0(
           1,
           a1,
           &v16,
           a4,
           a5,
           a6,
           *(double *)a7.m128_u64,
           a8,
           a9,
           *(double *)a10.m128_u64,
           *(double *)a11.m128_u64,
           *(double *)a12.m128_u64,
           a13,
           a14,
           8,
           (int)&a15,
           (int)v17,
           __readfsqword(0x28u),
           v17[0],
           a2,
           a3,
           a4,
           a5);
}

