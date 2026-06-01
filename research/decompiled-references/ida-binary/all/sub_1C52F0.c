void __fastcall sub_1C52F0(int a1, void *a2)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      sub_396FD0();
      sub_1FC430();
      sub_301F20(QT::QCoreApplication::self, 1);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
