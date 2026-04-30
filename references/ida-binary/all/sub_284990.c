__int64 __fastcall sub_284990(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  double v7; // xmm0_8
  __m128d v9; // xmm1
  __int64 v10; // [rsp+8h] [rbp-100h]
  _BYTE v11[16]; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v12[4]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v13[16]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v14[88]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v15; // [rsp+C8h] [rbp-40h]

  v3 = a2;
  v15 = __readfsqword(0x28u);
  v4 = sub_284860(a1, a3);
  if ( v4 )
  {
    v5 = v4;
    v6 = *(_QWORD *)(a1 + 16);
    memset(v12, 0, sizeof(v12));
    v10 = v6;
    QT::QFont::QFont((QT::QFont *)v13);
    QT::QFont::QFont((QT::QFont *)v11);
    QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v14, (const QT::QFont *)v11);
    QT::QFont::~QFont((QT::QFont *)v11);
    v7 = 1.0;
    sub_1C8200(v12, v10, (__m128d)0x3FF0000000000000uLL);
    sub_178260(a1, v5, a2, (__int64)v12);
    if ( 1.0 < 4.503599627370496e15 )
    {
      v9.m128d_f64[0] = (double)(int)1.0;
      v7 = v9.m128d_f64[0]
         + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd((__m128d)0x3FF0000000000000uLL, v9).m128d_f64[0] & 0x3FF0000000000000LL);
    }
    v3 = (int)v7;
    QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v14);
    QT::QFont::~QFont((QT::QFont *)v13);
  }
  return v3;
}
