unsigned __int64 __fastcall sub_478D00(char *a1, __int64 a2, double a3, __int64 a4, __int64 a5, const char *a6)
{
  QT::QObject *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  a1[24] = 0;
  v7 = *((QT::QObject **)a1 + 2);
  if ( v7 )
  {
    if ( !(unsigned __int8)QT::QObject::disconnect(
                             v7,
                             (const QT::QObject *)"2destroyed(QObject *)",
                             a1,
                             (const QT::QObject *)"1on_object_destroyed()",
                             a6) )
    {
      if ( !under_debugger )
        interr(40419, "2destroyed(QObject *)", v8, v9, a3);
      goto LABEL_13;
    }
    *((_QWORD *)a1 + 2) = 0;
  }
  if ( a2 )
  {
    *((_QWORD *)a1 + 2) = a2;
    QT::QObject::connect(&v13, a2, "2destroyed(QObject *)", a1, "1on_object_destroyed()", 1);
    if ( v13 && (unsigned __int8)QT::QMetaObject::Connection::isConnected_helper((QT::QMetaObject::Connection *)&v13) )
      goto LABEL_9;
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v13);
    if ( !under_debugger )
    {
      interr(40420, a2, v10, v11, a3);
LABEL_9:
      QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v13);
      return v14 - __readfsqword(0x28u);
    }
LABEL_13:
    BUG();
  }
  return v14 - __readfsqword(0x28u);
}
