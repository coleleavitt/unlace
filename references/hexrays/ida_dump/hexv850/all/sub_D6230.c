__int64 __fastcall sub_D6230(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4B0798;
  v2 = a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    qfree(v2);
  }
  qfree(a1[7]);
  return j__qfree(a1);
}
