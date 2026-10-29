unsigned __int64 __fastcall sub_10DDF0(
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
  int v16; // r8d
  int v17; // r9d
  int v18; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-C0h]
  int v20; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+28h] [rbp-B0h]
  __int64 v22; // [rsp+30h] [rbp-A8h]
  __int64 v23; // [rsp+38h] [rbp-A0h]
  __int64 v24; // [rsp+40h] [rbp-98h]
  __int64 v25; // [rsp+48h] [rbp-90h]
  __m128 v26; // [rsp+50h] [rbp-88h]
  __m128 v27; // [rsp+60h] [rbp-78h]
  __m128 v28; // [rsp+70h] [rbp-68h]
  __m128 v29; // [rsp+80h] [rbp-58h]
  __m128 v30; // [rsp+90h] [rbp-48h]
  __m128 v31; // [rsp+A0h] [rbp-38h]
  __m128 v32; // [rsp+B0h] [rbp-28h]
  __m128 v33; // [rsp+C0h] [rbp-18h]

  v21 = a2;
  v22 = a3;
  v23 = a4;
  v24 = a5;
  v25 = a6;
  v26 = a7;
  v27 = a8;
  v28 = a9;
  v29 = a10;
  v30 = a11;
  v31 = a12;
  v32 = a13;
  v33 = a14;
  v19 = __readfsqword(0x28u);
  if ( !batch && !(unsigned __int8)sub_10DD60(a1, a2) )
    sub_1A0240(
      TProgram::application + 136,
      a1,
      (unsigned int)&v18,
      1,
      v16,
      v17,
      8,
      (unsigned int)&a15,
      (unsigned int)&v20,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26.m128_i32[0],
      v26.m128_i32[2],
      v27.m128_i32[0],
      v27.m128_i32[2],
      v28.m128_i32[0],
      v28.m128_i32[2],
      v29.m128_i64[0]);
  return v19 - __readfsqword(0x28u);
}

