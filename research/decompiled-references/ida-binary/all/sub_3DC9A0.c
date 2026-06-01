double __fastcall root_node_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rdi
  double result; // xmm0_8
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi

  *a1 = &unk_874988;
  v3 = a1[3];
  if ( (int)v3 > 0 )
  {
    v4 = 0;
    v5 = 8LL * (unsigned int)(v3 - 1) + 8;
    do
    {
      v6 = *(_QWORD *)(a1[2] + v4);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v4 += 8;
    }
    while ( v4 != v5 );
  }
  v7 = a1[41];
  a1[5] = 0;
  if ( v7 )
  {
    a1[42] = 0;
    result = qfree(v7, a2);
  }
  v9 = a1[34];
  if ( v9 )
  {
    a1[35] = 0;
    result = qfree(v9, a2);
  }
  v10 = a1[30];
  if ( v10 )
  {
    a1[31] = 0;
    result = qfree(v10, a2);
  }
  v11 = a1[27];
  if ( v11 )
  {
    a1[28] = 0;
    result = qfree(v11, a2);
  }
  v12 = a1[22];
  if ( v12 )
  {
    a1[23] = 0;
    result = qfree(v12, a2);
  }
  v13 = a1[18];
  if ( v13 )
  {
    a1[19] = 0;
    result = qfree(v13, a2);
  }
  v14 = a1[15];
  if ( v14 )
  {
    a1[16] = 0;
    result = qfree(v14, a2);
  }
  cleanup_argloc(a1 + 13);
  v15 = a1[10];
  if ( v15 )
  {
    a1[11] = 0;
    result = qfree(v15, a2);
  }
  clear_tinfo_t(a1 + 9);
  v16 = a1[2];
  if ( v16 )
  {
    a1[3] = 0;
    return qfree(v16, a2);
  }
  return result;
}
