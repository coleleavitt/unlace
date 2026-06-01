void __fastcall sub_1AED40(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 j; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 k; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdi

  v3 = a1[9];
  if ( v3 )
  {
    v4 = a1[10];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 80 * i);
        v7 = v6[4];
        if ( v7 )
        {
          v6[5] = 0;
          qfree(v7, a2);
        }
        v8 = v6[1];
        if ( v8 )
        {
          v6[2] = 0;
          qfree(v8, a2);
        }
        v3 = a1[9];
      }
    }
    a1[10] = 0;
    qfree(v3, a2);
  }
  v9 = a1[6];
  if ( v9 )
  {
    a1[7] = 0;
    qfree(v9, a2);
  }
  v10 = a1[3];
  if ( v10 )
  {
    v11 = a1[4];
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (__int64 *)(v10 + 24 * j);
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          qfree(v14, a2);
          v10 = a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree(v10, a2);
  }
  v15 = *a1;
  if ( *a1 )
  {
    v16 = a1[1];
    if ( v16 )
    {
      for ( k = 0; k != v16; ++k )
      {
        v18 = (__int64 *)(v15 + 24 * k);
        v19 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v19, a2);
          v15 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v15, a2);
  }
}
