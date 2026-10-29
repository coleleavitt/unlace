__int64 __fastcall sub_529A10(QT::QWidget *this, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // r12
  int v4; // eax
  __int64 v6; // r12
  QT::QHBoxLayout *v7; // r12
  __int64 v8; // r12
  __int64 v9; // rax
  __m128i si128; // xmm0
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 18) == 0;
  v11[1] = __readfsqword(0x28u);
  if ( v2 )
  {
    v6 = operator new(0x28u);
    QT::QWidget::QWidget(v6, 0, 0);
    *((_QWORD *)this + 18) = v6;
    v7 = (QT::QHBoxLayout *)operator new(0x20u);
    QT::QHBoxLayout::QHBoxLayout(v7);
    *((_QWORD *)this + 19) = v7;
    QT::QBoxLayout::setSpacing(v7, 0);
    QT::QLayout::setContentsMargins(*((QT::QLayout **)this + 19), 0, 0, 0, 0);
    v8 = *((_QWORD *)this + 19);
    v9 = operator new(0x28u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
    *(_DWORD *)(v9 + 8) = 0;
    *(_DWORD *)(v9 + 20) = (_DWORD)&unk_770000;
    *(__m128i *)(v9 + 24) = si128;
    *(_QWORD *)v9 = (char *)&`vtable for'QT::QSpacerItem + 16;
    *(_QWORD *)(v9 + 12) = 0x100000001LL;
    QT::QBoxLayout::addSpacerItem(v8);
    QT::QWidget::setParent(*((QT::QWidget **)this + 18), this);
    QT::QWidget::setAutoFillBackground(*((QT::QWidget **)this + 18), 0);
    QT::QWidget::setLayout(this, *((QT::QLayout **)this + 19));
  }
  v3 = *((_QWORD *)this + 19);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 200LL))(v3);
  QT::QBoxLayout::insertWidget(v3, (unsigned int)(v4 - 1), a2, 0, 0);
  QT::QObject::connect(v11, a2, "2visibility_changed(bool)", this, "1sync_viewport_margins()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v11);
  return sub_527DF0(this);
}
