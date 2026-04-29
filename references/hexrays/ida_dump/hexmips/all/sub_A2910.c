__int64 __fastcall sub_A2910(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  v2 = a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    qfree(v2);
  }
  qfree(a1[7]);
  v3 = a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3);
  }
  qfree(a1[2]);
  return sub_118BA0(a1);
}
