__int64 __fastcall sub_C100(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4D758;
  v2 = a1[14];
  if ( v2 )
  {
    a1[15] = 0;
    qfree(v2);
  }
  return qfree(a1);
}
