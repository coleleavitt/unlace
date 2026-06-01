unsigned __int64 __fastcall sub_4CE280(QT::QWidget *this)
{
  __int64 v1; // r12
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax
  _BYTE v6[8]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v7[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  QT::QPainter::QPainter((QT::QPainter *)v6, (QT::QWidget *)((char *)this + 16));
  v1 = QT::QWidget::palette(this);
  v2 = QT::QWidget::backgroundRole(this);
  v3 = *(_QWORD *)QT::QPalette::brush(v1, 4, v2);
  v4 = *((_QWORD *)this + 4);
  v7[0] = 0;
  v7[1] = _mm_sub_epi32(_mm_loadl_epi64((const __m128i *)(v4 + 28)), _mm_loadl_epi64((const __m128i *)(v4 + 20))).m128i_u64[0];
  QT::QPainter::fillRect(v6, v7, v3 + 8);
  QT::QPainter::~QPainter((QT::QPainter *)v6);
  return v8 - __readfsqword(0x28u);
}
