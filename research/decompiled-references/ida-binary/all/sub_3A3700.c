unsigned __int64 __fastcall sub_3A3700(QT::QObject *a1)
{
  _QWORD *v1; // r14
  __int64 v2; // rax
  _BYTE v4[8]; // [rsp+8h] [rbp-48h] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  sub_498A40(a1);
  *((_QWORD *)a1 + 2) = tchooser_dirtree_widget_t___vtable_at__16;
  *(_QWORD *)a1 = &tchooser_dirtree_widget_t___vtable;
  v1 = QT::QCoreApplication::self;
  if ( QT::QCoreApplication::self )
  {
    v5[1] = 0;
    v5[0] = sub_467990;
    v2 = operator new(0x18u);
    *(_DWORD *)v2 = 1;
    *(_QWORD *)(v2 + 16) = a1;
    *(_QWORD *)(v2 + 8) = sub_3A3690;
    QT::QObject::connectImpl(v4, v1, v5, a1, 0, v2, 0, 0, &off_887520);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v4);
  }
  return v6 - __readfsqword(0x28u);
}
