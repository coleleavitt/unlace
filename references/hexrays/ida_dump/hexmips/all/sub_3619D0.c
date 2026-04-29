__m128i *__fastcall sub_3619D0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12)
{
  __m128 v13; // [rsp+0h] [rbp-98h] BYREF
  __m128i v14; // [rsp+10h] [rbp-88h] BYREF
  __m128i v15; // [rsp+20h] [rbp-78h] BYREF
  __int64 v16; // [rsp+30h] [rbp-68h]
  __int64 v17; // [rsp+38h] [rbp-60h]
  __int64 v18[4]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v19[7]; // [rsp+60h] [rbp-38h] BYREF

  v19[5] = __readfsqword(0x28u);
  v19[0] = a2;
  v19[1] = a3;
  v15 = a10;
  v19[2] = a4;
  v18[0] = a6;
  v16 = a11;
  v19[3] = a5;
  v17 = a12;
  v18[1] = a7;
  v18[2] = a8;
  v18[3] = a9;
  sub_361890(&v13, (__int64)v19, v18, &v15);
  *a1 = _mm_load_si128((const __m128i *)&v13);
  a1[1] = _mm_load_si128(&v14);
  return a1;
}
