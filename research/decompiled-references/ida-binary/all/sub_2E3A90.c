double __fastcall idp_dirspec_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  double result; // xmm0_8
  __int64 v12; // rdi

  *a1 = &idp_dirspec_t___vtable;
  v3 = a1[5];
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 96 * i);
        v7 = v6[9];
        if ( v7 )
        {
          v6[10] = 0;
          qfree(v7, a2);
        }
        v8 = v6[6];
        if ( v8 )
        {
          v6[7] = 0;
          qfree(v8, a2);
        }
        v9 = v6[3];
        if ( v9 )
        {
          v6[4] = 0;
          qfree(v9, a2);
        }
        v10 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v10, a2);
        }
        v3 = a1[5];
      }
    }
    a1[6] = 0;
    result = qfree(v3, a2);
  }
  v12 = a1[2];
  *a1 = &unk_8725A0;
  if ( v12 )
  {
    a1[3] = 0;
    return qfree(v12, a2);
  }
  return result;
}
