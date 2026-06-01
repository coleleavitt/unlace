void __fastcall ida_syntax_highlighter_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // r12
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 j; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 k; // rbx
  __int64 *v19; // rax
  __int64 v20; // rdi

  *a1 = &ida_syntax_highlighter_t___vtable;
  v3 = a1[17];
  if ( v3 )
  {
    a1[18] = 0;
    qfree(v3, a2);
  }
  v4 = a1[11];
  if ( v4 )
  {
    v5 = a1[12];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)(v4 + 48 * i);
        v8 = v7[3];
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
        v4 = a1[11];
      }
    }
    a1[12] = 0;
    qfree(v4, a2);
  }
  v10 = a1[8];
  if ( v10 )
  {
    a1[9] = 0;
    qfree(v10, a2);
  }
  v11 = a1[5];
  if ( v11 )
  {
    v12 = a1[6];
    if ( v12 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v14 = (__int64 *)(v11 + 32 * j);
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v15, a2);
          v11 = a1[5];
        }
      }
    }
    a1[6] = 0;
    qfree(v11, a2);
  }
  v16 = a1[2];
  if ( v16 )
  {
    v17 = a1[3];
    if ( v17 )
    {
      for ( k = 0; k != v17; ++k )
      {
        v19 = (__int64 *)(v16 + 24 * k);
        v20 = *v19;
        if ( *v19 )
        {
          v19[1] = 0;
          qfree(v20, a2);
          v16 = a1[2];
        }
      }
    }
    a1[3] = 0;
    qfree(v16, a2);
  }
}
