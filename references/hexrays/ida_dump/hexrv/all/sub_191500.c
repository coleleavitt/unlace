__int64 __fastcall sub_191500(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4B0CE0;
  v2 = a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
  }
  return j__qfree(a1);
}
