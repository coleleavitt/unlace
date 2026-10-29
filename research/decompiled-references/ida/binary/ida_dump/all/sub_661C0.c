void __fastcall sub_661C0(_QWORD *a1)
{
  *a1 = off_4DBBF8;
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  qfree();
  qfree();
  *a1 = off_4DBB18;
  qfree();
  operator delete(a1, 0x60u);
}
