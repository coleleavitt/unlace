__int64 __fastcall sub_A0D80(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4D6688;
  v2 = a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
  }
  qfree(a1[6]);
  return j__qfree(a1);
}
