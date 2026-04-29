void __fastcall sub_10800(_QWORD *a1)
{
  *a1 = &off_3C108;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x28u);
}
