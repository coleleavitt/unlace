unsigned __int64 __fastcall sub_2C4210(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rcx
  __int64 v11; // rcx
  double v12; // xmm4_8
  double v13; // xmm5_8
  __m128d v14; // [rsp+0h] [rbp-88h] BYREF
  __int64 v15; // [rsp+10h] [rbp-78h]
  _BYTE v16[72]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v14 = 0;
  v15 = 0;
  if ( (unsigned __int8)sub_2B9200(a1, &v14, byte_8CCA9B, nullptr) )
  {
    sub_2B4480((__int64)v16, a1, (__int64)&v14, v9);
    sub_2C29E0(a1, (__int64)v16, 0, v11, 0.0, a3, a4, a5, v12, v13, a8, a9);
  }
  return v17 - __readfsqword(0x28u);
}
