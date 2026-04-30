double __fastcall sub_551FC0(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // rdi

  v3 = a1[8];
  if ( v3 )
  {
    a1[9] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[5];
  if ( v5 )
  {
    a1[6] = 0;
    result = qfree(v5, a2);
  }
  v6 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v6, a2);
  }
  return result;
}
