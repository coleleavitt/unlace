__int64 __fastcall sub_74260(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = off_4A8538;
  v2 = a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  v3 = a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
  }
  return j__qfree(a1);
}
