double __fastcall sub_20E790(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi

  v3 = a1[5];
  if ( v3 )
  {
    a1[6] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    return qfree(v5, a2);
  }
  return result;
}
