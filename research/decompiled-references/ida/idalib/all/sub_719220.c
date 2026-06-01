__int64 __fastcall sub_719220(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned int v18; // r12d
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // rbx
  __int64 v27; // r13
  int *v28; // rbx
  int *v29; // r13

  v11 = *(_QWORD *)a2;
  if ( !(unsigned __int8)sub_718340(a1, v11, *(_QWORD *)(a2 + 8), a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v20 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  v18 = sub_719170(
          a1,
          *(double *)v20.m128i_i64,
          a4,
          a5,
          a6,
          v16,
          v17,
          a9,
          a10,
          v11,
          v12,
          v13,
          v14,
          v15,
          v20.m128i_i64[0],
          v20.m128i_i32[2],
          *(__int64 **)(a2 + 40));
  if ( !(_BYTE)v18 )
    return 0;
  v26 = *(_QWORD *)(a2 + 64);
  if ( v26 )
  {
    v27 = *(unsigned int *)(v26 + 8);
    if ( (_DWORD)v27 )
    {
      v28 = (int *)(v26 + 16);
      v29 = &v28[8 * v27];
      while ( (unsigned __int8)sub_718840(
                                 a1,
                                 v28,
                                 v21,
                                 v22,
                                 v23,
                                 *(double *)v20.m128i_i64,
                                 a4,
                                 a5,
                                 a6,
                                 v24,
                                 v25,
                                 a9,
                                 a10) )
      {
        v28 += 8;
        if ( v28 == v29 )
          return v18;
      }
      return 0;
    }
  }
  return v18;
}
