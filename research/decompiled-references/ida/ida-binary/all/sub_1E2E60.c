__int64 sub_1E2E60()
{
  __int64 v0; // rbp
  __int64 v1; // rbx

  v0 = xmmword_8CB528;
  if ( !(_QWORD)xmmword_8CB528 )
    return 0;
  v1 = 0;
  while ( !QT::QMetaObject::cast((QT::QMetaObject *)&off_882B40, *(const QT::QObject **)(qword_8CB520 + 8 * v1)) )
  {
    if ( v0 == ++v1 )
      return 0;
  }
  return 1;
}
