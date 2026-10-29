void __fastcall sub_CF760(_QWORD *a1)
{
  *a1 = off_4DC470;
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
  *a1 = off_4DB318;
  qfree();
  operator delete(a1, 0x90u);
}
