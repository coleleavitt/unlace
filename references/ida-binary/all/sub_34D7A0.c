void __fastcall sub_34D7A0(__int64 *a1, const char *a2)
{
  __int64 v2; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 j; // rbp
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 k; // rbp
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi

  v2 = *a1;
  *((_DWORD *)a1 + 36) = -1;
  if ( v2 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v2 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7, a2);
          v2 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v2, a2);
    *a1 = 0;
    a1[2] = 0;
  }
  v8 = a1[6];
  if ( v8 )
  {
    v9 = a1[7];
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
          v8 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree(v8, a2);
    a1[6] = 0;
    a1[8] = 0;
  }
  v13 = a1[3];
  if ( v13 )
  {
    v14 = a1[4];
    if ( v14 )
    {
      for ( k = 0; k != v14; ++k )
      {
        v16 = (__int64 *)(v13 + 24 * k);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, a2);
          v13 = a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree(v13, a2);
    a1[3] = 0;
    a1[5] = 0;
  }
  v18 = a1[9];
  if ( v18 )
  {
    a1[10] = 0;
    qfree(v18, a2);
    a1[9] = 0;
    a1[11] = 0;
  }
}
