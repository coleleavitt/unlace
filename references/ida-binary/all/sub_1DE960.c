unsigned __int64 __fastcall sub_1DE960(QT::QWidget *this, __int64 a2)
{
  __int64 *v3; // rax
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_53A8A0(this, a2, 0);
  *(_QWORD *)this = &CopyrightDialog___vtable;
  *((_QWORD *)this + 2) = CopyrightDialog___vtable_at__16;
  v3 = (__int64 *)operator new(0x28u);
  *((_QWORD *)this + 6) = v3;
  sub_1DE6D0(v3, this);
  QT::QWidget::setLayout(this, *(QT::QLayout **)(*((_QWORD *)this + 6) + 8LL));
  QT::QObject::connect(&v5, *(_QWORD *)(*((_QWORD *)this + 6) + 32LL), "2clicked()", this, "1reject()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v5);
  QT::QObject::connect(&v5, *(_QWORD *)(*((_QWORD *)this + 6) + 24LL), "2clicked()", this, "1accept()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v5);
  QT::QWidget::setWindowFlags(this, *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0xFFFEFFFF);
  return v6 - __readfsqword(0x28u);
}
