unsigned __int64 __fastcall sub_346390(QT::QWidget *a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  *((_QWORD *)a1 + 5) = a2;
  sub_346190(a1, *(_DWORD *)(a2 + 40));
  QT::QObject::connect(&v3, *((_QWORD *)a1 + 5), "2dockStatusChanged(int)", a1, "1dockChanged(int)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v3);
  return v4 - __readfsqword(0x28u);
}
