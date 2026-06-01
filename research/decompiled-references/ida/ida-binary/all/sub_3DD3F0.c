double __fastcall precomp_node_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v2; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 *v6; // rax
  __int64 v7; // rdi
  double result; // xmm0_8
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi

  v2 = a1[51];
  *a1 = &precomp_node_t___vtable;
  if ( v2 )
  {
    v4 = a1[52];
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
          v2 = a1[51];
        }
      }
    }
    a1[52] = 0;
    result = qfree(v2, a2);
  }
  free_idcv(a1 + 47);
  *a1 = &unk_874988;
  v9 = a1[3];
  if ( (int)v9 > 0 )
  {
    v10 = 0;
    v11 = 8LL * (unsigned int)(v9 - 1) + 8;
    do
    {
      v12 = *(_QWORD *)(a1[2] + v10);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v10 += 8;
    }
    while ( v11 != v10 );
  }
  v13 = a1[41];
  a1[5] = 0;
  if ( v13 )
  {
    a1[42] = 0;
    result = qfree(v13, a2);
  }
  v14 = a1[34];
  if ( v14 )
  {
    a1[35] = 0;
    result = qfree(v14, a2);
  }
  v15 = a1[30];
  if ( v15 )
  {
    a1[31] = 0;
    result = qfree(v15, a2);
  }
  v16 = a1[27];
  if ( v16 )
  {
    a1[28] = 0;
    result = qfree(v16, a2);
  }
  v17 = a1[22];
  if ( v17 )
  {
    a1[23] = 0;
    result = qfree(v17, a2);
  }
  v18 = a1[18];
  if ( v18 )
  {
    a1[19] = 0;
    result = qfree(v18, a2);
  }
  v19 = a1[15];
  if ( v19 )
  {
    a1[16] = 0;
    result = qfree(v19, a2);
  }
  cleanup_argloc(a1 + 13);
  v20 = a1[10];
  if ( v20 )
  {
    a1[11] = 0;
    result = qfree(v20, a2);
  }
  clear_tinfo_t(a1 + 9);
  v21 = a1[2];
  if ( v21 )
  {
    a1[3] = 0;
    return qfree(v21, a2);
  }
  return result;
}
