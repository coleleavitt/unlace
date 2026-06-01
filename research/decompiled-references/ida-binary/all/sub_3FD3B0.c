__int64 __fastcall sub_3FD3B0(const QT::QObject **a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, *a1);
  result = 0;
  if ( v1 )
  {
    sub_3FD2A0(v1);
    return 1;
  }
  return result;
}
