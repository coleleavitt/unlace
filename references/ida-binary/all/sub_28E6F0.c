void __fastcall sub_28E6F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // rax

  v1 = xmmword_8CB528;
  if ( (_QWORD)xmmword_8CB528 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_884740, *(const QT::QObject **)(qword_8CB520 + 8 * v2));
      if ( v3 )
      {
        if ( a1 == *(_QWORD *)(v3 + 1016) )
          break;
      }
      if ( v1 == ++v2 )
        return;
    }
    sub_482660(QT::QCoreApplication::self + 2, v3, 0);
  }
}
