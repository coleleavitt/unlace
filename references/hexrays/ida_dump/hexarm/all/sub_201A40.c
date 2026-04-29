__int64 __fastcall sub_201A40(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4D94A0;
  v2 = a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
  }
  qfree(a1[5]);
  return j__qfree(a1);
}
