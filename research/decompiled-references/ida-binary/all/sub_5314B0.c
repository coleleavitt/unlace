__int64 __fastcall sub_5314B0(__int64 a1)
{
  if ( QT::QCoreApplication::self )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(QT::QCoreApplication::self[2] + 96LL))(
             QT::QCoreApplication::self + 2,
             a1);
  else
    return 0;
}
