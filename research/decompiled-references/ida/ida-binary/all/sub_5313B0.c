__int64 __fastcall sub_5313B0(__int64 (__fastcall ***a1)(_QWORD, _QWORD))
{
  _QWORD *v1; // rax

  if ( !QT::QCoreApplication::self )
    return 0;
  v1 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 32LL))(QT::QCoreApplication::self + 2);
  return sub_531030(v1, a1);
}
