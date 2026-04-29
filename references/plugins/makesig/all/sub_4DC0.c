__int64 __fastcall sub_4DC0(
        unsigned int a1,
        __int64 a2,
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
        __m128 a14)
{
  _QWORD v15[10]; // [rsp+0h] [rbp-D8h] BYREF
  __m128 v16; // [rsp+50h] [rbp-88h]
  __m128 v17; // [rsp+60h] [rbp-78h]
  __m128 v18; // [rsp+70h] [rbp-68h]
  __m128 v19; // [rsp+80h] [rbp-58h]
  __m128 v20; // [rsp+90h] [rbp-48h]
  __m128 v21; // [rsp+A0h] [rbp-38h]
  __m128 v22; // [rsp+B0h] [rbp-28h]
  __m128 v23; // [rsp+C0h] [rbp-18h]

  v15[6] = a3;
  v15[7] = a4;
  v15[8] = a5;
  v15[9] = a6;
  v16 = a7;
  v17 = a8;
  v18 = a9;
  v19 = a10;
  v20 = a11;
  v21 = a12;
  v22 = a13;
  v23 = a14;
  return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64, unsigned int))callui)(
           28,
           0,
           0,
           0,
           a1,
           a2,
           (unsigned int)v15);
}
