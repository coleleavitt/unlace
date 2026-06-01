void __fastcall sub_3CF430(_QWORD *a1)
{
  *a1 = &off_4E8E18;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}
