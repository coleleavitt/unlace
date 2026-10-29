void __fastcall sub_14CD70(_QWORD *a1)
{
  *a1 = &off_234B78;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x20u);
}

