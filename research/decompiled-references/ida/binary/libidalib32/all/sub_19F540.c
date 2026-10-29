void __fastcall sub_19F540(_QWORD *a1)
{
  *a1 = &off_235608;
  if ( a1[7] )
  {
    a1[8] = 0;
    qfree();
  }
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  *a1 = &off_235C80;
  qsem_free();
  operator delete(a1, 0x60u);
}

