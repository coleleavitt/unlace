void __fastcall sub_18F850(_QWORD *a1)
{
  *a1 = &off_23D2A8;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x20u);
}

