/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4130C0
// Address: 0x00000000004130C0

//----- (00000000004130C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_4130C0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  __int64 v16; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-C0h]
  _BYTE v18[16]; // [rsp+20h] [rbp-B8h] BYREF
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

  v19 = a11;
  v20 = a12;
  v21 = a13;
  v22 = a14;
  v23 = a1;
  v24 = a2;
  v25 = a3;
  v26 = a4;
  v27 = a5;
  v28 = a6;
  v29 = a7;
  v30 = a8;
  v17 = __readfsqword(0x28u);
  if ( (dword_4C94E4 & 0x10000) != 0 )
    off_4C7FB0(
      23,
      a10,
      (unsigned int)&v16,
      (unsigned int)&off_4C7FB0,
      a13,
      a14,
      *(double *)a1.m128_u64,
      *(double *)a2.m128_u64,
      *(double *)a3.m128_u64,
      *(double *)a4.m128_u64,
      *(double *)a5.m128_u64,
      *(double *)a6.m128_u64,
      *(double *)a7.m128_u64,
      *(double *)a8.m128_u64,
      0x3000000010LL,
      &a15,
      v18);
  return v17 - __readfsqword(0x28u);
}
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
// 4C94E4: using guessed type int dword_4C94E4;
