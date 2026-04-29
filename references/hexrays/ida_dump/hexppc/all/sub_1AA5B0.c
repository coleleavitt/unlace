__int64 __fastcall sub_1AA5B0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4CB538;
  v2 = a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  return j__qfree(a1);
}
