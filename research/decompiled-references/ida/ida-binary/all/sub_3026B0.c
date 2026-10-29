double __fastcall edit_type_form_data_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rdi
  double result; // xmm0_8
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 j; // rbp
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi

  v3 = a1 + 38;
  *(v3 - 38) = &edit_type_form_data_t___vtable;
  clear_tinfo_t(v3);
  v4 = a1[34];
  if ( v4 )
  {
    a1[35] = 0;
    result = qfree(v4, a2);
  }
  v6 = a1[27];
  *a1 = &unk_872A10;
  if ( v6 )
  {
    v7 = a1[28];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 24 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10, a2);
          v6 = a1[27];
        }
      }
    }
    a1[28] = 0;
    result = qfree(v6, a2);
  }
  v11 = a1[24];
  if ( v11 )
  {
    a1[25] = 0;
    result = qfree(v11, a2);
  }
  v12 = a1[21];
  if ( v12 )
  {
    a1[22] = 0;
    result = qfree(v12, a2);
  }
  v13 = a1[18];
  if ( v13 )
  {
    a1[19] = 0;
    result = qfree(v13, a2);
  }
  clear_tinfo_t(a1 + 17);
  v14 = a1[12];
  if ( v14 )
  {
    v15 = a1[13];
    if ( v15 )
    {
      for ( j = 0; j != v15; ++j )
      {
        v17 = (__int64 *)(v14 + 24 * j);
        v18 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v18, a2);
          v14 = a1[12];
        }
      }
    }
    a1[13] = 0;
    result = qfree(v14, a2);
  }
  v19 = a1[8];
  if ( v19 )
  {
    a1[9] = 0;
    result = qfree(v19, a2);
  }
  v20 = a1[1];
  if ( v20 )
  {
    a1[2] = 0;
    return qfree(v20, a2);
  }
  return result;
}
