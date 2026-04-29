void __fastcall sub_3A3690(_QWORD *a1)
{
  *a1 = &off_4E6CD0;
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  operator delete(a1, 0x38u);
}
