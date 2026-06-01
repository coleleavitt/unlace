void __fastcall sub_210680(__int64 *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 j; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi

  v3 = a1[9];
  if ( v3 )
  {
    v4 = a1[10];
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
          v3 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v3, a2);
  }
  v8 = a1[6];
  if ( v8 )
  {
    a1[7] = 0;
    qfree(v8, a2);
  }
  v9 = a1[3];
  if ( v9 )
  {
    v10 = a1[4];
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = (__int64 *)(v9 + 24 * j);
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v13, a2);
          v9 = a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree(v9, a2);
  }
  v14 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    qfree(v14, a2);
  }
}
