__int64 __fastcall sub_310650(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rbp

  result = QT::QMetaObject::cast((QT::QMetaObject *)&off_86E240, *(const QT::QObject **)(a2[1] + 16LL));
  v3 = result;
  if ( a2 )
    result = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  return result;
}
