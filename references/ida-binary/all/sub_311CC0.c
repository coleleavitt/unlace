__int64 __fastcall sub_311CC0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v3[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v4; // [rsp+10h] [rbp-48h]
  char v5; // [rsp+18h] [rbp-40h]
  unsigned __int64 v6; // [rsp+28h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 168);
  sub_479220(QT::QCoreApplication::self + 2, v1);
  QT::QObject::QObject((QT::QObject *)v3, nullptr);
  v4 = 0;
  sub_478D00((char *)v3, (__int64)&object_lifecycle_monitor_t___vtable);
  if ( (unsigned __int8)sub_4ECDE0(qword_8CD748, v1) && !v5 && v4 )
    QT::QWidget::setFocus(v4, 7);
  v3[0] = (__int64)&object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)v3);
  return 1;
}
