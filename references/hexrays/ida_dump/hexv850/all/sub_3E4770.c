__int64 __fastcall sub_3E4770(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = &off_4BD320;
  v2 = a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
  }
  v3 = a1[4];
  *a1 = &off_4AF718;
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
