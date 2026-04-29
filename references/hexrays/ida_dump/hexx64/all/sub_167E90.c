__int64 __fastcall sub_167E90(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4DDD78;
  v2 = a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
  }
  return j__qfree(a1);
}
