void __fastcall sub_CF240(_QWORD *a1)
{
  *a1 = &off_4DC420;
  qfree();
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}
