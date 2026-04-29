__int64 __fastcall sub_8D480(_QWORD *a1)
{
  __int64 v2; // rdi

  v2 = a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2);
  }
  return qfree(*a1);
}
