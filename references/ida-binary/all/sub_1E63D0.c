unsigned __int64 __fastcall sub_1E63D0(QT::QWidget *this, __int64 a2)
{
  QT::QWidget **v3; // rax
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_53A8A0(this, a2, 0);
  *(_QWORD *)this = &CustomHelpDialog___vtable;
  *((_QWORD *)this + 2) = CustomHelpDialog___vtable_at__16;
  v3 = (QT::QWidget **)operator new(0x20u);
  *((_QWORD *)this + 6) = v3;
  sub_1E5F70(v3, this);
  QT::QLayout::setContentsMargins(*(QT::QLayout **)(*((_QWORD *)this + 6) + 8LL), 10, 10, 10, 10);
  QT::QWidget::setLayout(this, *(QT::QLayout **)(*((_QWORD *)this + 6) + 8LL));
  QT::QObject::connect(&v5, *(_QWORD *)(*((_QWORD *)this + 6) + 24LL), "2accepted()", this, "1accept()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v5);
  return v6 - __readfsqword(0x28u);
}
