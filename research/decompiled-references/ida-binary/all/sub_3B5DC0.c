double __fastcall atl_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 i; // r12
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  double result; // xmm0_8
  _QWORD *v11; // rbx
  _QWORD *v12; // rbp
  __int64 v13; // rdi

  *a1 = atl_chooser_t___vtable;
  v3 = a1[24];
  if ( v3 )
  {
    v4 = a1[25];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (__int64 *)(v3 + v5);
        v8 = *(_QWORD *)(v3 + v5 + 24);
        if ( v8 )
        {
          v7[4] = 0;
          qfree(v8, a2);
        }
        v9 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v9, a2);
        }
        v3 = a1[24];
        v5 += 56;
      }
    }
    a1[25] = 0;
    result = qfree(v3, a2);
  }
  v11 = a1 + 22;
  v12 = a1 + 10;
  *(v12 - 10) = &stru_86F6A0;
  do
  {
    v13 = *(v11 - 3);
    v11 -= 3;
    if ( v13 )
    {
      v11[1] = 0;
      result = qfree(v13, a2);
    }
  }
  while ( v12 != v11 );
  return result;
}
