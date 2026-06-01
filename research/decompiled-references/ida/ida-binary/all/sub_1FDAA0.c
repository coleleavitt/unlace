unsigned __int64 __fastcall sub_1FDAA0(
        __int64 a1,
        const char *a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rdi
  double v13; // xmm0_8
  __int64 v14; // rdi
  double v15; // xmm0_8
  __int64 v16; // rdi
  double v17; // xmm4_8
  double v18; // xmm5_8

  v12 = *(_QWORD *)(a1 + 224);
  if ( !v12 )
    return sub_1FD9B0(a1, (unsigned __int8)a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  v13 = qfree(v12, a2);
  v14 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  v15 = qfree(v14, a2, v13);
  v16 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  return sub_1FD320(v16, v15, a5, a6, a7, v17, v18, a10, a11);
}
