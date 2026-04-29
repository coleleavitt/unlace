__int64 __fastcall sub_3658D0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = off_4C69E8;
  v2 = a1[10];
  if ( v2 )
  {
    a1[11] = 0;
    qfree(v2);
  }
  qfree(a1[8]);
  v3 = a1[5];
  *a1 = off_4BC478;
  if ( v3 )
  {
    a1[6] = 0;
    qfree(v3);
  }
  v4 = a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    qfree(v4);
  }
  return j__qfree(a1);
}
