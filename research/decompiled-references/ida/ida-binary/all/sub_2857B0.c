unsigned __int64 __fastcall sub_2857B0(__int64 a1, int *a2, int *a3, unsigned __int8 a4)
{
  __int64 v5; // rax
  QT::QAbstractSlider *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v11; // [rsp+0h] [rbp-108h]
  int v12; // [rsp+0h] [rbp-108h]
  _BYTE v14[16]; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v15[4]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v17[24]; // [rsp+70h] [rbp-98h] BYREF
  double v18; // [rsp+88h] [rbp-80h]
  double v19; // [rsp+98h] [rbp-70h]
  unsigned __int64 v20; // [rsp+C8h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 16);
  memset(v15, 0, sizeof(v15));
  v11 = v5;
  QT::QFont::QFont((QT::QFont *)v16);
  QT::QFont::QFont((QT::QFont *)v14);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v17, (const QT::QFont *)v14);
  QT::QFont::~QFont((QT::QFont *)v14);
  sub_1C8200(v15, v11, (__m128d)0x3FF0000000000000uLL);
  *a3 = (int)((double)*a3 / v19);
  if ( a2 )
  {
    v6 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(*(QT::QAbstractScrollArea **)(a1 + 16));
    v12 = QT::QAbstractSlider::value(v6);
    v7 = sub_284860(a1, *a3);
    v8 = (unsigned int)*a2;
    if ( v7 )
      v9 = sub_1784C0(a1, v7, v8, (__int64)v15, a4);
    else
      v9 = (int)((double)((int)v8 + v12) / v18);
    *a2 = v9;
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v17);
  QT::QFont::~QFont((QT::QFont *)v16);
  return v20 - __readfsqword(0x28u);
}
