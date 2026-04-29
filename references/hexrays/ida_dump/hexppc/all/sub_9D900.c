__int64 __fastcall sub_9D900(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4C9128;
  v2 = a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
  }
  qfree(a1[6]);
  return j__qfree(a1);
}
