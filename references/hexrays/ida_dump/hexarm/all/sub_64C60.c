__int64 __fastcall sub_64C60(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = off_4D62B8;
  v2 = a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    qfree(v2);
  }
  qfree(a1[7]);
  qfree(a1[5]);
  v3 = a1[1];
  *a1 = off_4D61D8;
  return qfree(v3);
}
