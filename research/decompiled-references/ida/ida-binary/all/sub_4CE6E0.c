__int64 __fastcall sub_4CE6E0(__int64 a1)
{
  const QT::QObject *v1; // rbx
  __int64 result; // rax

  v1 = *(const QT::QObject **)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    result = QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v1);
    if ( result )
      break;
    v1 = *(const QT::QObject **)(*((_QWORD *)v1 + 1) + 16LL);
    if ( !v1 )
      return 0;
  }
  return result;
}
