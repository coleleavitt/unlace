void __fastcall sub_141CE0(_QWORD *a1)
{
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  if ( *a1 )
  {
    a1[1] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}
