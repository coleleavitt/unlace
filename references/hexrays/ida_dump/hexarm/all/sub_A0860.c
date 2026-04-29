__int64 __fastcall sub_A0860(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4D6598;
  v2 = a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
  }
  return j__qfree(a1);
}
