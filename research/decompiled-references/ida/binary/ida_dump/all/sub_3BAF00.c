void __fastcall sub_3BAF00(_QWORD *a1)
{
  *a1 = &off_4E7588;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x20u);
}
