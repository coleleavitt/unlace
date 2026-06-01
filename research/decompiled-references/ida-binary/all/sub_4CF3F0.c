QT::QObject *__fastcall sub_4CF3F0(QT::QObject *a1)
{
  QT::QObject *v1; // rbx

  if ( !a1 )
    return nullptr;
  v1 = a1;
  do
  {
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_86E240, v1) )
      return v1;
    v1 = *(QT::QObject **)(*((_QWORD *)v1 + 1) + 16LL);
  }
  while ( v1 );
  return nullptr;
}
