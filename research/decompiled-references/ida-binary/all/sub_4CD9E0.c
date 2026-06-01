__int64 __fastcall sub_4CD9E0(__int64 a1)
{
  const QT::QObject *v1; // rbx

  v1 = *(const QT::QObject **)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( !v1 )
    return 0;
  while ( (_UNKNOWN ****)(**(__int64 (__fastcall ***)(const QT::QObject *))v1)(v1) != &off_86E1C0 )
  {
    v1 = *(const QT::QObject **)(*((_QWORD *)v1 + 1) + 16LL);
    if ( !v1 )
      return 0;
  }
  return QT::QMetaObject::cast((QT::QMetaObject *)&off_86E1C0, v1);
}
