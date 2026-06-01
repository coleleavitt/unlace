void __fastcall sub_B90A0(_QWORD *a1)
{
  *a1 = &off_2306B8;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x28u);
}

