__int64 __fastcall sub_288F50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  int v13; // r12d
  __int64 v14; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rdi
  __int16 v18; // bp
  QT::QFontMetricsF *v19; // rsi
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  const __m128i *v25; // rax
  __int64 v26; // rcx
  double v27; // xmm4_8
  double v28; // xmm5_8

  v13 = *(_DWORD *)(a1 + 176);
  v14 = sub_1EA680(*(_QWORD *)(a1 + 16) + 384LL, a2, a3, a4, a5);
  v17 = *(_QWORD *)(v14 + 40);
  v18 = *(_WORD *)(v14 + 30);
  if ( v17 )
  {
    v19 = (QT::QFontMetricsF *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    sub_288C60(
      a1,
      v19,
      v18,
      a5,
      *(double *)a6.m128_u64,
      *(double *)a7.m128_u64,
      *(double *)a8.m128_u64,
      v20,
      v21,
      a11,
      a12);
    if ( v19 )
      a5 = qfree(v19, (const char *)v19);
  }
  else
  {
    v19 = nullptr;
    sub_288C60(
      a1,
      nullptr,
      v18,
      a5,
      *(double *)a6.m128_u64,
      *(double *)a7.m128_u64,
      *(double *)a8.m128_u64,
      v15,
      v16,
      a11,
      a12);
  }
  if ( v13 != *(_DWORD *)(a1 + 176) )
  {
    v24 = *(_QWORD *)(a1 + 16);
    v25 = (const __m128i *)sub_1EA6A0(v24 + 384, (__int64)v19, v22, v23, a5);
    sub_200650(v24, v25, 0, v26, a5, a6, a7, a8, v27, v28, a11, a12);
  }
  return 1;
}
