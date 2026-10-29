void __fastcall sub_14C5C0(_QWORD *a1)
{
  *a1 = &off_233B78;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x20u);
}

