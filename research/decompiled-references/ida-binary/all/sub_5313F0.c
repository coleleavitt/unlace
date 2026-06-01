__int64 __fastcall sub_5313F0(unsigned __int64 a1)
{
  _QWORD *v2; // rdi

  if ( !QT::QCoreApplication::self )
    return 0;
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 32LL))(QT::QCoreApplication::self + 2);
  if ( v2 )
    return sub_530FC0(v2, a1);
  else
    return 0;
}
