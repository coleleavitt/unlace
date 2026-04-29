__int64 __fastcall sub_323570(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = off_4E3388;
  qfree(a1[11]);
  qfree(a1[9]);
  v2 = a1[5];
  *a1 = off_4DBCF8;
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  v3 = a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
  }
  return j__qfree(a1);
}
