double __fastcall sub_48A520(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi

  v3 = a1[3];
  if ( v3 )
  {
    a1[4] = 0;
    result = qfree(v3, a2);
  }
  v5 = *a1;
  if ( *a1 )
  {
    v6 = a1[1];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 40 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9, a2);
          v5 = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree(v5, a2);
  }
  return result;
}
