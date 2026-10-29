void __fastcall sub_2AF000(_QWORD *a1)
{
  *a1 = &off_4E1F18;
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}
