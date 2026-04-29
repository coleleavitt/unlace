__int64 __fastcall sub_3E5EA0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  *a1 = &off_4CA190;
  v2 = a1[12];
  if ( v2 )
  {
    a1[13] = 0;
    qfree(v2);
  }
  v3 = a1[9];
  if ( v3 )
  {
    a1[10] = 0;
    qfree(v3);
  }
  v4 = a1[4];
  *a1 = &off_4BC4B8;
  if ( v4 )
  {
    a1[5] = 0;
    qfree(v4);
  }
  v5 = a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    qfree(v5);
  }
  return j__qfree(a1);
}
