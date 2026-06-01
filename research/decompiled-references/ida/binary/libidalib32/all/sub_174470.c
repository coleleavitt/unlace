void __fastcall sub_174470(_QWORD *a1)
{
  *a1 = &off_234AB0;
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  *a1 = &off_235C80;
  qsem_free();
  operator delete(a1, 0x58u);
}

