__int64 __fastcall sub_9D3E0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4C9038;
  v2 = a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
  }
  return j__qfree(a1);
}
