void __fastcall sub_B8B30(_QWORD *a1)
{
  *a1 = &off_22F638;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x28u);
}

