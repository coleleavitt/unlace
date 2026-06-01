void __fastcall sub_CF5D0(_QWORD *a1)
{
  *a1 = &off_4DCBE0;
  qfree();
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}
