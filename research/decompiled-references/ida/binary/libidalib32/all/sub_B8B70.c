void __fastcall sub_B8B70(_QWORD *a1)
{
  *a1 = &off_22F6B0;
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  operator delete(a1, 0x48u);
}

