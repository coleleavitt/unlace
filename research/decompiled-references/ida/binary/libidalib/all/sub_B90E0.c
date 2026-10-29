void __fastcall sub_B90E0(_QWORD *a1)
{
  *a1 = &off_230730;
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  operator delete(a1, 0x48u);
}

