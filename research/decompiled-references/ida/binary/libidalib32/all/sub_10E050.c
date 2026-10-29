__int64 __fastcall sub_10E050(_QWORD *a1)
{
  *a1 = &off_234BF8;
  if ( a1[15] )
  {
    a1[16] = 0;
    qfree();
  }
  if ( a1[12] )
  {
    a1[13] = 0;
    qfree();
  }
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  *a1 = &off_235C80;
  return qsem_free();
}

