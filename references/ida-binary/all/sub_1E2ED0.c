__int64 __fastcall sub_1E2ED0(unsigned int a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // edx

  v1 = xmmword_8CB528;
  if ( !(_QWORD)xmmword_8CB528 )
    return 0;
  v2 = 0;
  while ( 1 )
  {
    result = QT::QMetaObject::cast((QT::QMetaObject *)&off_882B40, *(const QT::QObject **)(qword_8CB520 + 8 * v2));
    if ( result )
    {
      v4 = *(unsigned __int8 *)(result + 1024);
      if ( _bittest(&v4, a1) )
        break;
    }
    if ( v1 == ++v2 )
      return 0;
  }
  return result;
}
