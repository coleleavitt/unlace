double __fastcall sub_294350(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi

  v3 = a1[3];
  if ( v3 )
  {
    a1[4] = 0;
    result = qfree(v3, a2);
  }
  v5 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v5, a2);
  }
  return result;
}
