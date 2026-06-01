__int64 sub_305180()
{
  __int64 v0; // rbp
  __int64 v1; // rbx
  __int64 v2; // rax

  v0 = xmmword_8CB528;
  if ( !(_QWORD)xmmword_8CB528 )
    return 0;
  v1 = 0;
  while ( 1 )
  {
    v2 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87CC60, *(const QT::QObject **)(qword_8CB520 + 8 * v1));
    if ( v2 )
      break;
    if ( ++v1 == v0 )
      return 0;
  }
  return *(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL);
}
