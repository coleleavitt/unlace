__int64 __fastcall sub_1FCF60(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = off_4BF5E8;
  v2 = a1[20];
  if ( v2 )
  {
    a1[21] = 0;
    qfree(v2);
  }
  qfree(a1[18]);
  v3 = a1[15];
  if ( v3 )
  {
    a1[16] = 0;
    qfree(v3);
  }
  qfree(a1[13]);
  v4 = a1[10];
  if ( v4 )
  {
    a1[11] = 0;
    qfree(v4);
  }
  return j__qfree(a1);
}
