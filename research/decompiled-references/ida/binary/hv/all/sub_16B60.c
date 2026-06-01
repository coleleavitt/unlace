__int64 __fastcall sub_16B60(
        int a1,
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
        __m128 a14,
        char a15)
{
  _QWORD v16[4]; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v17[8]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+28h] [rbp-B0h]
  __int64 v19; // [rsp+30h] [rbp-A8h]
  __int64 v20; // [rsp+38h] [rbp-A0h]
  __int64 v21; // [rsp+40h] [rbp-98h]
  __int64 v22; // [rsp+48h] [rbp-90h]
  __m128 v23; // [rsp+50h] [rbp-88h]
  __m128 v24; // [rsp+60h] [rbp-78h]
  __m128 v25; // [rsp+70h] [rbp-68h]
  __m128 v26; // [rsp+80h] [rbp-58h]
  __m128 v27; // [rsp+90h] [rbp-48h]
  __m128 v28; // [rsp+A0h] [rbp-38h]
  __m128 v29; // [rsp+B0h] [rbp-28h]
  __m128 v30; // [rsp+C0h] [rbp-18h]

  v18 = a2;
  v19 = a3;
  v20 = a4;
  v21 = a5;
  v22 = a6;
  v23 = a7;
  v24 = a8;
  v25 = a9;
  v26 = a10;
  v27 = a11;
  v28 = a12;
  v29 = a13;
  v30 = a14;
  v16[3] = __readfsqword(0x28u);
  return off_165640(23, a1, (unsigned int)v16, (unsigned int)&off_165640, a5, a6, 0x3000000008LL, &a15, v17);
}

