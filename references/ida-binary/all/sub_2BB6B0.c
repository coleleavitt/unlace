__int64 __fastcall sub_2BB6B0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebp
  __int64 v17; // r12
  const __m128i *v18; // rax
  __int64 v19; // rcx
  double v20; // xmm4_8
  double v21; // xmm5_8

  v12 = *(_QWORD *)(a1 + 440);
  if ( v12 )
    v12 = *(_QWORD *)(v12 + 8);
  v15 = sub_2BB620(a1, v12, a11, a12);
  if ( (_BYTE)v15 )
  {
    v17 = *(_QWORD *)(a1 + 16);
    v18 = (const __m128i *)sub_1EA6A0(v17 + 384, v12, v13, v14, a2);
    sub_200650(v17, v18, 0, v19, a2, a3, a4, a5, v20, v21, a8, a9);
    sub_1F4880(*(QT::QAbstractScrollArea **)(a1 + 16), 0);
    sub_466DD0(a1);
  }
  return v15;
}
