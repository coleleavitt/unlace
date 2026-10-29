void __fastcall sub_18EC50(_QWORD *a1)
{
  *a1 = &off_23C2A8;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x20u);
}

