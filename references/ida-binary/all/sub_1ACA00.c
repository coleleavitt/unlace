__int64 __fastcall strpath_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 j; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 v14; // rdi

  v3 = a1[30];
  *a1 = strpath_chooser_t___vtable;
  if ( v3 )
  {
    v4 = a1[31];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7, a2);
          v3 = a1[30];
        }
      }
    }
    a1[31] = 0;
    qfree(v3, a2);
  }
  v8 = a1[27];
  if ( v8 )
  {
    v9 = a1[28];
    if ( v9 )
    {
      for ( j = 0; j != v9; ++j )
      {
        v11 = (__int64 *)(v8 + 24 * j);
        v12 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v12, a2);
          v8 = a1[27];
        }
      }
    }
    a1[28] = 0;
    qfree(v8, a2);
  }
  v13 = a1 + 19;
  *a1 = &stru_86F6A0;
  do
  {
    v14 = *v13;
    if ( *v13 )
    {
      v13[1] = 0;
      qfree(v14, a2);
    }
    v13 -= 3;
  }
  while ( v13 != a1 + 7 );
  return qfree(a1, a2);
}
