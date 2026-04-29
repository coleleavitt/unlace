__int64 __fastcall sub_FE6D0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  *a1 = off_4BDBB0;
  v2 = a1[17];
  if ( v2 )
  {
    a1[18] = 0;
    qfree(v2);
  }
  qfree(a1[15]);
  v3 = a1[12];
  if ( v3 )
  {
    a1[13] = 0;
    qfree(v3);
  }
  v4 = a1[9];
  if ( v4 )
  {
    a1[10] = 0;
    qfree(v4);
  }
  v5 = a1[6];
  if ( v5 )
  {
    a1[7] = 0;
    qfree(v5);
  }
  return j__qfree(a1);
}
