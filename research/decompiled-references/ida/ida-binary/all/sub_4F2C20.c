void __fastcall sub_4F2C20(QT::QObject *a1)
{
  const QT::QObject *v1; // rax
  __int64 v2; // rax

  v1 = (const QT::QObject *)QT::QObject::sender(a1);
  v2 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8974E0, v1);
  if ( v2 )
  {
    if ( *(char *)(v2 + 1784) >= 0 )
      sub_4F2BB0((__int64)a1, v2);
  }
}
