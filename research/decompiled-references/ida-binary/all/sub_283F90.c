unsigned __int64 __fastcall sub_283F90(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  _DWORD *v3; // rcx
  double v4; // xmm2_8
  double v5; // xmm1_8
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbp
  _BYTE v11[24]; // [rsp+8h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+20h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  QT::QFont::QFont((QT::QFont *)(a1 + 64));
  QT::QFont::QFont((QT::QFont *)v11);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)(a1 + 80), (const QT::QFont *)v11);
  QT::QFont::~QFont((QT::QFont *)v11);
  sub_1C8200((__m128i *)a1, v2, (__m128d)0x3FF0000000000000uLL);
  v3 = *(_DWORD **)(QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a2 + 16)) + 32LL);
  v4 = *(double *)(a1 + 120);
  v5 = (double)(v3[8] + 1 - v3[6]);
  v6 = v3[7] + 1 - v3[5];
  v7 = v6;
  v8 = (unsigned int)(int)((double)v6 / *(double *)(a1 + 104));
  *(_QWORD *)(a1 + 160) = v7;
  *(_QWORD *)(a1 + 168) = v8;
  v9 = (unsigned int)(int)(v5 / v4);
  *(_QWORD *)(a1 + 176) = v9;
  *(_QWORD *)(a1 + 184) = v9 + (v5 - round((double)(int)v9 * v4) > 0.0);
  return v12 - __readfsqword(0x28u);
}
