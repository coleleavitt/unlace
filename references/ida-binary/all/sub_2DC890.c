unsigned __int64 __fastcall sub_2DC890(QT::QObject *a1, QT::QObject *a2)
{
  _QWORD *v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  _BYTE v6[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+10h] [rbp-38h] BYREF
  __int64 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  sub_524020(a1, a2);
  v2 = QT::QCoreApplication::self;
  if ( (unsigned __int8)sub_521140(a1, 0x40000) )
  {
    v8 = 0;
    v7 = sub_4679A0;
    v4 = operator new(0x18u);
    *(_DWORD *)v4 = 1;
    *(_QWORD *)(v4 + 16) = a1;
    *(_QWORD *)(v4 + 8) = sub_2DB500;
    QT::QObject::connectImpl(v6, v2, &v7, a1, 0, v4, 0, 0, &off_887520);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v6);
  }
  if ( (unsigned __int8)sub_521140(a1, &stru_50000) )
  {
    v8 = 0;
    v7 = sub_467A00;
    v5 = operator new(0x18u);
    *(_DWORD *)v5 = 1;
    *(_QWORD *)(v5 + 16) = a1;
    *(_QWORD *)(v5 + 8) = sub_2DB4B0;
    QT::QObject::connectImpl(v6, v2, &v7, a1, 0, v5, 0, 0, &off_887520);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v6);
  }
  return v9 - __readfsqword(0x28u);
}
