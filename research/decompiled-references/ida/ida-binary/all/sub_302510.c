void __fastcall add_type_form_data_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 j; // rbp
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi

  *a1 = &add_type_form_data_t___vtable;
  v3 = a1[33];
  if ( v3 )
  {
    a1[34] = 0;
    qfree(v3, a2);
  }
  v4 = a1[27];
  *a1 = &unk_872A10;
  if ( v4 )
  {
    v5 = a1[28];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)(v4 + 24 * i);
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v8, a2);
          v4 = a1[27];
        }
      }
    }
    a1[28] = 0;
    qfree(v4, a2);
  }
  v9 = a1[24];
  if ( v9 )
  {
    a1[25] = 0;
    qfree(v9, a2);
  }
  v10 = a1[21];
  if ( v10 )
  {
    a1[22] = 0;
    qfree(v10, a2);
  }
  v11 = a1[18];
  if ( v11 )
  {
    a1[19] = 0;
    qfree(v11, a2);
  }
  clear_tinfo_t(a1 + 17);
  v12 = a1[12];
  if ( v12 )
  {
    v13 = a1[13];
    if ( v13 )
    {
      for ( j = 0; j != v13; ++j )
      {
        v15 = (__int64 *)(v12 + 24 * j);
        v16 = *v15;
        if ( *v15 )
        {
          v15[1] = 0;
          qfree(v16, a2);
          v12 = a1[12];
        }
      }
    }
    a1[13] = 0;
    qfree(v12, a2);
  }
  v17 = a1[8];
  if ( v17 )
  {
    a1[9] = 0;
    qfree(v17, a2);
  }
  v18 = a1[1];
  if ( v18 )
  {
    a1[2] = 0;
    qfree(v18, a2);
  }
  operator delete(a1, 0x128u);
}
