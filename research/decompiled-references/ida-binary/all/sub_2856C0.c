unsigned __int64 __fastcall sub_2856C0(__int64 a1)
{
  __int64 v1; // r13
  _BYTE v3[16]; // [rsp+8h] [rbp-E8h] BYREF
  __m128i v4[4]; // [rsp+18h] [rbp-D8h] BYREF
  _BYTE v5[16]; // [rsp+58h] [rbp-98h] BYREF
  _BYTE v6[40]; // [rsp+68h] [rbp-88h] BYREF
  unsigned __int64 v7; // [rsp+C0h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 16);
  memset(v4, 0, sizeof(v4));
  QT::QFont::QFont((QT::QFont *)v5);
  QT::QFont::QFont((QT::QFont *)v3);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v6, (const QT::QFont *)v3);
  QT::QFont::~QFont((QT::QFont *)v3);
  sub_1C8200(v4, v1, (__m128d)0x3FF0000000000000uLL);
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v6);
  QT::QFont::~QFont((QT::QFont *)v5);
  return v7 - __readfsqword(0x28u);
}
