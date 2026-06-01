double __fastcall sub_249660(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  double result; // xmm0_8

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 48 * i);
        v7 = v6[3];
        if ( v7 )
        {
          v6[4] = 0;
          qfree(v7, a2);
        }
        v8 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v8, a2);
        }
        v3 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v3, a2);
  }
  return result;
}
