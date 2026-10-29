double __fastcall sub_507F10(
        __int64 a1,
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
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  __int64 v19; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-C0h]
  _BYTE v21[8]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-B0h]
  __int64 v23; // [rsp+30h] [rbp-A8h]
  __int64 v24; // [rsp+38h] [rbp-A0h]
  __int64 v25; // [rsp+40h] [rbp-98h]
  __int64 v26; // [rsp+48h] [rbp-90h]
  __m128 v27; // [rsp+50h] [rbp-88h]
  __m128 v28; // [rsp+60h] [rbp-78h]
  __m128 v29; // [rsp+70h] [rbp-68h]
  __m128 v30; // [rsp+80h] [rbp-58h]
  __m128 v31; // [rsp+90h] [rbp-48h]
  __m128 v32; // [rsp+A0h] [rbp-38h]
  __m128 v33; // [rsp+B0h] [rbp-28h]
  __m128 v34; // [rsp+C0h] [rbp-18h]

  v22 = a2;
  v23 = a3;
  v24 = a4;
  v25 = a5;
  v26 = a6;
  v27 = a7;
  v28 = a8;
  v29 = a9;
  v30 = a10;
  v31 = a11;
  v32 = a12;
  v33 = a13;
  v34 = a14;
  v20 = __readfsqword(0x28u);
  v15 = itext(a1, a2, a3);
  return callui(30, v15, (unsigned int)&v19, (unsigned int)&callui, v16, v17, 0x3000000008LL, &a15, v21, v20);
}
