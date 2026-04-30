double __fastcall sub_31D040(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rax
  __int64 v6; // rdi

  v3 = a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[3];
  if ( v5 )
    --*(_DWORD *)(v5 + 12);
  v6 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v6, a2);
  }
  return result;
}
