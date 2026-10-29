__int64 __fastcall sub_1A0040(_QWORD *a1)
{
  *a1 = &off_236608;
  if ( a1[7] )
  {
    a1[8] = 0;
    qfree();
  }
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  *a1 = &off_236C80;
  return qsem_free();
}

