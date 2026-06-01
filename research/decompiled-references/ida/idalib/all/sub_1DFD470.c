__int64 __fastcall sub_1DFD470(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128i a9,
        __m128i a10,
        double a11,
        double a12,
        __m128 a13,
        __m128i a14)
{
  __int64 v14; // rbx
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+8h] [rbp-40h]
  __int64 v18; // [rsp+10h] [rbp-38h]
  unsigned int v19; // [rsp+18h] [rbp-30h]
  __int64 v20; // [rsp+20h] [rbp-28h]
  int v21; // [rsp+28h] [rbp-20h]
  __int64 v22; // [rsp+30h] [rbp-18h]
  __int16 v23; // [rsp+38h] [rbp-10h]
  char v24; // [rsp+3Ah] [rbp-Eh]

  v14 = 0;
  if ( a2 )
  {
    v16 = a1;
    v20 = a3;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 1;
    v24 = 0;
    v14 = sub_1DF6720(&v16, a2, nullptr, a7, a8, a9, a10, a11, a12, a13, a14, a4, a5, a6);
    operator delete(v17, 16LL * v19, 8);
  }
  return v14;
}
