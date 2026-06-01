__int64 __fastcall sub_1794E0(__int64 a1, const QT::QObject **a2)
{
  const QT::QObject *v2; // rax
  const QT::QObject *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = (const QT::QObject *)QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, *a2);
  if ( !v2 )
    return 7;
  v3 = v2;
  if ( !(unsigned int)navstack_t_stack_index(*((_QWORD *)v2 + 64)) )
    return 7;
  v5 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87C660, v3);
  result = 3;
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 1080) )
      return 7;
  }
  return result;
}
