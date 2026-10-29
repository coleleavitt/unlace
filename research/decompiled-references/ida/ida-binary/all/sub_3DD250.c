void __fastcall srcitem_node_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi

  v3 = a1[47];
  *a1 = &srcitem_node_t___vtable;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 8))-- == 1 )
      (**(void (__fastcall ***)(_QWORD))a1[47])(a1[47]);
  }
  *a1 = &unk_874988;
  v5 = a1[3];
  if ( (int)v5 > 0 )
  {
    v6 = 0;
    v7 = 8LL * (unsigned int)(v5 - 1) + 8;
    do
    {
      v8 = *(_QWORD *)(a1[2] + v6);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v6 += 8;
    }
    while ( v7 != v6 );
  }
  v9 = a1[41];
  a1[5] = 0;
  if ( v9 )
  {
    a1[42] = 0;
    qfree(v9, a2);
  }
  v10 = a1[34];
  if ( v10 )
  {
    a1[35] = 0;
    qfree(v10, a2);
  }
  v11 = a1[30];
  if ( v11 )
  {
    a1[31] = 0;
    qfree(v11, a2);
  }
  v12 = a1[27];
  if ( v12 )
  {
    a1[28] = 0;
    qfree(v12, a2);
  }
  v13 = a1[22];
  if ( v13 )
  {
    a1[23] = 0;
    qfree(v13, a2);
  }
  v14 = a1[18];
  if ( v14 )
  {
    a1[19] = 0;
    qfree(v14, a2);
  }
  v15 = a1[15];
  if ( v15 )
  {
    a1[16] = 0;
    qfree(v15, a2);
  }
  cleanup_argloc(a1 + 13);
  v16 = a1[10];
  if ( v16 )
  {
    a1[11] = 0;
    qfree(v16, a2);
  }
  clear_tinfo_t(a1 + 9);
  v17 = a1[2];
  if ( v17 )
  {
    a1[3] = 0;
    qfree(v17, a2);
  }
  operator delete(a1, 0x180u);
}
