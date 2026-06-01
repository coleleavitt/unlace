void __fastcall sub_1C5740(int a1, void *a2)
{
  char v2; // al

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v2 = 1;
      if ( !dword_8CAF04 )
      {
        mark_builtin_widgets(-1, -1, 1);
        sub_27F680(0);
        v2 = 0;
      }
      byte_8CAF00 = v2;
      sub_31D110(&xmmword_8CD9E0);
      sub_256B40();
      sub_2C9640();
      if ( QT::QCoreApplication::self )
        sub_467990();
      sub_4A95E0();
      sub_1F5CD0();
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
