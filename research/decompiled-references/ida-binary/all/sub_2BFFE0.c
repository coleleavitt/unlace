void __fastcall sub_2BFFE0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  char v18; // [rsp+0h] [rbp-38h]
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v15 = (__m128)*a3;
  v16 = (__m128)a3[1];
  v17 = (__m128)a3[2];
  if ( *(double *)v15.m128_u64 != *(double *)a2
    || *(double *)v16.m128_u64 != *(double *)(a2 + 8)
    || *(double *)v17.m128_u64 != *(double *)(a2 + 16) )
  {
    if ( !byte_8CC998 && a1 == qword_8CC990 && qword_8CC990 )
    {
      v19 = a3[2];
      sub_169700(
        (int)"Coherency check failed: !miniview.valid() || (void*) this != miniview.o<void*>()\n",
        a2,
        (__int64)a3,
        a4,
        a5,
        a6,
        v15,
        v16,
        v17,
        a10,
        a11,
        a12,
        a13,
        a14,
        v18);
      v17.m128_u64[0] = v19;
    }
    sub_2BFE60(
      a1,
      0,
      (__int64)"%d.%02d%%",
      (int)(*(double *)v15.m128_u64 * 100.0),
      (int)(10000.0 * *(double *)v15.m128_u64) % 100);
    sub_2BFE60(a1, 1, (__int64)"(%d,%d)", (int)*(double *)v16.m128_u64, (int)*(double *)v17.m128_u64);
    sub_1F4880(*(QT::QAbstractScrollArea **)(a1 + 16), 0);
    sub_466DE0(a1);
  }
  if ( *(_DWORD *)(a2 + 24) != *((_DWORD *)a3 + 6) )
    sub_466E00(a1);
}
