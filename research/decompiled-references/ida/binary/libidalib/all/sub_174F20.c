__int64 __fastcall sub_174F20(_QWORD *a1)
{
  *a1 = &off_235AB0;
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
  *a1 = &off_236C80;
  return qsem_free();
}

