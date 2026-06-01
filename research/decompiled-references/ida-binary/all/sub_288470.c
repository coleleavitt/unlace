__int64 __fastcall sub_288470(
        __int64 a1,
        unsigned int a2,
        int a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // r13
  double v13; // xmm4_8
  double v14; // xmm5_8
  int v15; // ebx
  _BYTE v17[64]; // [rsp+0h] [rbp-F8h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v19[120]; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v20; // [rsp+C8h] [rbp-30h]

  v11 = *(_QWORD *)a1;
  v20 = __readfsqword(0x28u);
  sub_283F90((__int64)v17, v11);
  v15 = sub_288200(v11, a3, a2, (__int64)v17, a4, a5, a6, a7, v13, v14, a10, a11);
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v19);
  QT::QFont::~QFont((QT::QFont *)v18);
  if ( v15 > 0 )
    *(_BYTE *)(a1 + 8) = 1;
  return (unsigned int)v15;
}
