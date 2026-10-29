__int64 __fastcall sub_4CDAB0(__int64 a1)
{
  __int64 result; // rax
  const QT::QObject *v2; // rbx
  __int64 v3; // rax

  result = *(_QWORD *)(a1 + 8);
  v2 = *(const QT::QObject **)(result + 16);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v2);
      if ( v3 )
        break;
      result = *((_QWORD *)v2 + 1);
      v2 = *(const QT::QObject **)(result + 16);
      if ( !v2 )
        return result;
    }
    return sub_4C6530(v3);
  }
  return result;
}
