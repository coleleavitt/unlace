void __fastcall sub_62AED0(void **a1)
{
  qfree(a1[3]);
  qfree(a1[4]);
  qfree(a1[5]);
  if ( a1[8] )
  {
    qfree(a1[7]);
    qfree(a1[8]);
  }
  operator delete(a1, 0x50u);
}

