void __fastcall sub_8F5E0(_QWORD *a1)
{
  *a1 = &off_22F338;
  if ( a1[16] )
  {
    a1[17] = 0;
    qfree();
  }
  if ( a1[13] )
  {
    a1[14] = 0;
    qfree();
  }
  if ( a1[10] )
  {
    a1[11] = 0;
    qfree();
  }
  if ( a1[7] )
  {
    a1[8] = 0;
    qfree();
  }
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0xC8u);
}

