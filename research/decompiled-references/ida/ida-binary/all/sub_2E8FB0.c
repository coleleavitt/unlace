double __fastcall sub_2E8FB0(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbx
  __int64 *v6; // rbp
  __int64 v7; // rdi
  double result; // xmm0_8

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 40 * i);
        jvalue_t_clear(v6 + 3);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7, a2);
        }
        v3 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v3, a2);
  }
  return result;
}
