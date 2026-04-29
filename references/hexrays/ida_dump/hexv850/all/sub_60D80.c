__int64 __fastcall sub_60D80(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4AF570;
  v2 = a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
  }
  return j__qfree(a1);
}
