__int64 __fastcall sub_3E7350(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = &off_4D6BC8;
  v2 = a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    qfree(v2);
  }
  v3 = a1[4];
  *a1 = &off_4C8E98;
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3);
  }
  v4 = a1[1];
  if ( v4 )
  {
    a1[2] = 0;
    qfree(v4);
  }
  return j__qfree(a1);
}
