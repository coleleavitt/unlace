__int64 __fastcall sub_2BC880(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double *a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  QT::QAbstractScrollArea *v18; // rdi
  QT::QCursor *v20; // rax
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __m128i v24; // [rsp+0h] [rbp-48h] BYREF

  v18 = (QT::QAbstractScrollArea *)a1[2];
  v24.m128i_i64[1] = __readfsqword(0x28u);
  v20 = (QT::QCursor *)QT::QAbstractScrollArea::viewport(v18);
  v24.m128i_i64[0] = sub_1C7B10(v20);
  return sub_2BC760(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, v21, v22, a13, a14, &v24, 1u);
}
