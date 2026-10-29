void __fastcall sub_1C45E0(int a1, void *a2)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( QT::QCoreApplication::self[14] )
        (*(void (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[85] + 96LL))(QT::QCoreApplication::self + 85);
      sub_310F80(1);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
