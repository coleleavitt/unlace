__int64 __fastcall sub_323570(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4E3388;
  qfree();
  qfree();
  v2 = a1[5];
  *a1 = off_4DBCF8;
  if ( v2 )
  {
    a1[6] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  return j__qfree();
}
