__int64 __fastcall sub_79C50(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4DB588;
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  v2 = a1[5];
  *a1 = off_4DB4D0;
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
