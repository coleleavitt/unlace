__int64 __fastcall sub_179DC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const QT::QObject *v3; // rbx
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  v3 = (const QT::QObject *)v2;
  if ( v2 )
    return v2 + 104;
  if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 63) <= 9 )
    v3 = *(const QT::QObject **)(a2 + 328);
  if ( strncmp(*(const char **)(a2 + 72), "Actins", 6u) )
  {
    v3 = *(const QT::QObject **)(a2 + 168);
    if ( !v3 )
      v3 = *(const QT::QObject **)a2;
  }
  result = QT::QMetaObject::cast((QT::QMetaObject *)&off_89D580, v3);
  if ( result )
    result += 304;
  return result;
}
