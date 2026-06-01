__int64 __fastcall sub_17CD60(
        unsigned __int8 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  __int64 v16; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v17[24]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-A0h]
  __int64 v19; // [rsp+40h] [rbp-98h]
  __int64 v20; // [rsp+48h] [rbp-90h]
  __m128 v21; // [rsp+50h] [rbp-88h]
  __m128 v22; // [rsp+60h] [rbp-78h]
  __m128 v23; // [rsp+70h] [rbp-68h]
  __m128 v24; // [rsp+80h] [rbp-58h]
  __m128 v25; // [rsp+90h] [rbp-48h]
  __m128 v26; // [rsp+A0h] [rbp-38h]
  __m128 v27; // [rsp+B0h] [rbp-28h]
  __m128 v28; // [rsp+C0h] [rbp-18h]

  v18 = a4;
  v19 = a5;
  v20 = a6;
  v21 = a7;
  v22 = a8;
  v23 = a9;
  v24 = a10;
  v25 = a11;
  v26 = a12;
  v27 = a13;
  v28 = a14;
  return callui(
           29,
           a1,
           a2,
           a3,
           (unsigned int)&v16,
           (unsigned int)&callui,
           0x3000000018LL,
           &a15,
           v17,
           __readfsqword(0x28u));
}
