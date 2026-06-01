__int64 __fastcall add_watch_ah_t__::vfunc_4(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const char *v15; // rsi
  double v16; // xmm4_8
  double v17; // xmm5_8
  const char *v19; // [rsp+0h] [rbp-28h] BYREF
  __int128 v20; // [rsp+8h] [rbp-20h]
  unsigned __int64 v21; // [rsp+18h] [rbp-10h]

  v15 = nullptr;
  v21 = __readfsqword(0x28u);
  v20 = 0;
  if ( (unsigned __int8)sub_196F50(
                          (int)&v19,
                          0,
                          (int)"Please enter a variable or expression to watch",
                          a12,
                          a13,
                          a14,
                          (__m128)0LL,
                          a2,
                          a3,
                          a4,
                          a5,
                          a6,
                          a7,
                          a8,
                          0)
    && (unsigned __int64)v20 > 1 )
  {
    v15 = v19;
    sub_3E6EF0(a10, v19, 0.0, a2, a3, a4, v16, v17, a7, a8);
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19, v15);
  }
  return 0;
}
