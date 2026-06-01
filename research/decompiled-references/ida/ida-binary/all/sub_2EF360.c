__int64 __fastcall sub_2EF360(
        int a1,
        int a2,
        __int64 a3,
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
  _BYTE v17[16]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-A8h]
  __int64 v19; // [rsp+38h] [rbp-A0h]
  __int64 v20; // [rsp+40h] [rbp-98h]
  __int64 v21; // [rsp+48h] [rbp-90h]
  __m128 v22; // [rsp+50h] [rbp-88h]
  __m128 v23; // [rsp+60h] [rbp-78h]
  __m128 v24; // [rsp+70h] [rbp-68h]
  __m128 v25; // [rsp+80h] [rbp-58h]
  __m128 v26; // [rsp+90h] [rbp-48h]
  __m128 v27; // [rsp+A0h] [rbp-38h]
  __m128 v28; // [rsp+B0h] [rbp-28h]
  __m128 v29; // [rsp+C0h] [rbp-18h]

  v18 = a3;
  v19 = a4;
  v20 = a5;
  v21 = a6;
  v22 = a7;
  v23 = a8;
  v24 = a9;
  v25 = a10;
  v26 = a11;
  v27 = a12;
  v28 = a13;
  v29 = a14;
  return callui(
           116,
           a1,
           a2,
           (unsigned int)&v16,
           (unsigned int)&callui,
           a6,
           0x3000000010LL,
           &a15,
           v17,
           __readfsqword(0x28u));
}
