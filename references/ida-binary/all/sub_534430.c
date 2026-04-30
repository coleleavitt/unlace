__int64 __fastcall sub_534430(const char *a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  __int64 result; // rax

  if ( !QT::QCoreApplication::self )
    return 0;
  v1 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 32LL))(QT::QCoreApplication::self + 2);
  v2 = v1;
  if ( !v1 )
    return 0;
  result = sub_531090(v1, a1);
  if ( !result )
    return sub_5342F0(v2, a1);
  return result;
}
