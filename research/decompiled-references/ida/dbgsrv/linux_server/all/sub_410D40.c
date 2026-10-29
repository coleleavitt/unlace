/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410D40
// Address: 0x0000000000410D40

//----- (0000000000410D40) ----------------------------------------------------
unsigned __int64 __fastcall sub_410D40(
        char *a1,
        unsigned __int64 a2,
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
  int v16; // [rsp+0h] [rbp-D8h] BYREF
  char *v17; // [rsp+8h] [rbp-D0h]
  char *v18; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v19; // [rsp+18h] [rbp-C0h]
  char v20; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-A0h]
  __int64 v22; // [rsp+40h] [rbp-98h]
  __int64 v23; // [rsp+48h] [rbp-90h]
  __m128 v24; // [rsp+50h] [rbp-88h]
  __m128 v25; // [rsp+60h] [rbp-78h]
  __m128 v26; // [rsp+70h] [rbp-68h]
  __m128 v27; // [rsp+80h] [rbp-58h]
  __m128 v28; // [rsp+90h] [rbp-48h]
  __m128 v29; // [rsp+A0h] [rbp-38h]
  __m128 v30; // [rsp+B0h] [rbp-28h]
  __m128 v31; // [rsp+C0h] [rbp-18h]

  v21 = a4;
  v22 = a5;
  v23 = a6;
  v24 = a7;
  v25 = a8;
  v26 = a9;
  v27 = a10;
  v28 = a11;
  v29 = a12;
  v30 = a13;
  v31 = a14;
  v19 = __readfsqword(0x28u);
  v17 = &a15;
  v18 = &v20;
  sub_476670(
    a1,
    a2,
    a3,
    (int)&v16,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    *(double *)a11.m128_u64,
    *(double *)a12.m128_u64,
    a13,
    a14,
    24);
  return v19 - __readfsqword(0x28u);
}
