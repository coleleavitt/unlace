__int64 __fastcall sub_2656D0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  *a1 = off_4B3250;
  v2 = a1[13];
  if ( v2 )
  {
    a1[14] = 0;
    qfree(v2);
  }
  v3 = a1[10];
  if ( v3 )
  {
    a1[11] = 0;
    qfree(v3);
  }
  v4 = a1[5];
  *a1 = off_4AE778;
  if ( v4 )
  {
    a1[6] = 0;
    qfree(v4);
  }
  v5 = a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    qfree(v5);
  }
  return j__qfree(a1);
}
