__int64 __fastcall sub_9C780(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4AF9A8;
  v2 = a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
  }
  qfree(a1[6]);
  return j__qfree(a1);
}
