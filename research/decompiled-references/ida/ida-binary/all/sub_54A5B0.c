void __fastcall sub_54A5B0(__int64 a1, double a2, int a3, int a4)
{
  if ( !a3 )
  {
    if ( a4 == 2 )
    {
      sub_4CD480((QT::QObject *)a1);
    }
    else if ( a4 > 2 )
    {
      if ( a4 == 3 )
        sub_4CDB70((QT::QWidget *)a1, a2);
    }
    else if ( a4 )
    {
      if ( a4 == 1 )
        sub_4CD4A0(a1, a2);
    }
    else
    {
      sub_4CD540(a1);
    }
  }
}
