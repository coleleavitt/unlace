__int64 __fastcall sub_A0E50(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4DBF00;
  v2 = a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  return j__qfree((__int64)a1);
}
