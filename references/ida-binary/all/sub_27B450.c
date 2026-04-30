double __fastcall interactive_graph_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 j; // rbp
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 k; // rbp
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 m; // rbp
  __int64 *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi

  *a1 = interactive_graph_t___vtable;
  sub_293930();
  v3 = a1[28];
  if ( v3 )
  {
    a1[29] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[25];
  if ( v5 )
  {
    v6 = a1[26];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 24 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9, a2);
          v5 = a1[25];
        }
      }
    }
    a1[26] = 0;
    result = qfree(v5, a2);
  }
  v10 = a1[22];
  if ( v10 )
  {
    v11 = a1[23];
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
          v10 = a1[22];
        }
      }
    }
    a1[23] = 0;
    result = qfree(v10, a2);
  }
  v15 = a1[19];
  if ( v15 )
  {
    v16 = a1[20];
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
          v15 = a1[19];
        }
      }
    }
    a1[20] = 0;
    result = qfree(v15, a2);
  }
  v20 = a1[16];
  if ( v20 )
  {
    v21 = a1[17];
    if ( v21 )
    {
      for ( m = 0; m != v21; ++m )
      {
        v23 = (__int64 *)(v20 + 24 * m);
        v24 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          qfree(v24, a2);
          v20 = a1[16];
        }
      }
    }
    a1[17] = 0;
    result = qfree(v20, a2);
  }
  v25 = a1[13];
  if ( v25 )
  {
    a1[14] = 0;
    result = qfree(v25, a2);
  }
  v26 = a1[10];
  if ( v26 )
  {
    a1[11] = 0;
    result = qfree(v26, a2);
  }
  v27 = a1[1];
  *a1 = &unk_871288;
  if ( v27 )
  {
    a1[2] = 0;
    return qfree(v27, a2);
  }
  return result;
}
