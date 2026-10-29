double __fastcall sub_26AD70(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  double result; // xmm0_8

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (__int64 *)(v3 + v5);
        v8 = *(_QWORD *)(v3 + v5 + 32);
        if ( v8 )
        {
          v7[5] = 0;
          qfree(v8, a2);
        }
        v9 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v9, a2);
        }
        v3 = *a1;
        v5 += 56;
      }
    }
    a1[1] = 0;
    return qfree(v3, a2);
  }
  return result;
}
