__int64 __fastcall sub_1927F0(const QT::QObject **a1)
{
  __int64 v1; // rax

  v1 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, *a1);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, const QT::QObject **))(*(_QWORD *)v1 + 864LL))(v1, a1);
  else
    return 0;
}
