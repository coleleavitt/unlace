const char *__fastcall sub_531430(unsigned __int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax

  if ( !QT::QCoreApplication::self )
    return nullptr;
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 32LL))(QT::QCoreApplication::self + 2);
  if ( !v2 )
    return nullptr;
  v3 = sub_530FC0(v2, a1);
  if ( !v3 )
    return nullptr;
  if ( *(_QWORD *)(v3 + 40) )
    return *(const char **)(v3 + 32);
  return &s1;
}
