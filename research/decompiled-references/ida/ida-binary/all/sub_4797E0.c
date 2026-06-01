__int64 __fastcall sub_4797E0(__int64 a1, char a2, int a3)
{
  if ( QT::QCoreApplication::self )
    return sub_4795B0((__int64)(QT::QCoreApplication::self + 2), a1, a2, a3);
  else
    return -1;
}
