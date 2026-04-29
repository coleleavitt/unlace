void __fastcall sub_3B5E80(_QWORD *a1)
{
  *a1 = &off_4E6AE8;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x20u);
}
