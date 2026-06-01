void __fastcall sub_3A3650(_QWORD *a1)
{
  *a1 = &off_4E7098;
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x60u);
}
