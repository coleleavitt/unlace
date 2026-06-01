unsigned __int64 __fastcall sub_18F4F0(QT::QWidget *a1, __int64 a2)
{
  void *v2; // rdx
  QT::QAbstractButton *v4; // rbp
  char v5; // al
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  QT::QWidget::QWidget(a1, a2, 0);
  *((_QWORD *)a1 + 5) = a2;
  *(_QWORD *)a1 = &DataContainer___vtable;
  *((_QWORD *)a1 + 2) = DataContainer___vtable_at__16;
  v2 = (void *)operator new(0xD8u);
  *((_QWORD *)a1 + 7) = v2;
  memset(v2, 0, 0xD8u);
  sub_18E970((__int64)v2, a1);
  sub_18E500(*((_QWORD **)a1 + 7), a1);
  QT::QObject::connect(&v7, *(_QWORD *)(*((_QWORD *)a1 + 7) + 144LL), "2stateChanged(int)", a1, "1refresh()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v7);
  QT::QObject::connect(&v7, *(_QWORD *)(*((_QWORD *)a1 + 7) + 136LL), "2stateChanged(int)", a1, "1refresh()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v7);
  QT::QObject::connect(&v7, *(_QWORD *)(*((_QWORD *)a1 + 7) + 152LL), "2stateChanged(int)", a1, "1refresh()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v7);
  v4 = *(QT::QAbstractButton **)(*((_QWORD *)a1 + 7) + 152LL);
  v5 = getinf_flag(3, 32);
  QT::QAbstractButton::setChecked(v4, v5);
  return v8 - __readfsqword(0x28u);
}
