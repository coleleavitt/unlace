double __fastcall edit_argloc_dialog_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 i; // rbp
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  _QWORD *v14; // rbp
  _QWORD *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 j; // rbp
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi

  *a1 = &edit_argloc_dialog_t___vtable;
  v3 = a1[47];
  if ( v3 )
  {
    a1[48] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[42];
  if ( v5 )
  {
    a1[43] = 0;
    result = qfree(v5, a2);
  }
  v6 = a1[39];
  if ( v6 )
  {
    a1[40] = 0;
    result = qfree(v6, a2);
  }
  clear_tinfo_t(a1 + 38);
  cleanup_argloc(a1 + 36);
  v7 = a1[33];
  if ( v7 )
  {
    a1[34] = 0;
    result = qfree(v7, a2);
  }
  v8 = a1[29];
  *a1 = &forms::dialog_desc_t___vtable;
  if ( v8 )
  {
    v9 = a1[30];
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = (__int64 *)(v8 + 24 * i);
        v12 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v12, a2);
          v8 = a1[29];
        }
      }
    }
    a1[30] = 0;
    result = qfree(v8, a2);
  }
  v13 = a1[26];
  if ( v13 )
  {
    a1[27] = 0;
    result = qfree(v13, a2);
  }
  v14 = (_QWORD *)a1[22];
  v15 = &v14[a1[23]];
  if ( v14 != v15 )
  {
    do
    {
      if ( *v14 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 8LL))(*v14);
      ++v14;
    }
    while ( v15 != v14 );
    v15 = (_QWORD *)a1[22];
  }
  if ( v15 )
  {
    a1[23] = 0;
    result = qfree(v15, a2);
  }
  v16 = a1[18];
  *a1 = &forms::abstract_form_desc_t___vtable;
  if ( v16 )
  {
    a1[19] = 0;
    result = qfree(v16, a2);
  }
  v17 = a1[15];
  *a1 = &forms::container_t___vtable;
  if ( v17 )
  {
    a1[16] = 0;
    result = qfree(v17, a2);
  }
  v18 = a1[13];
  *a1 = &forms::abstract_container_t___vtable;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v19 = a1[10];
  a1[13] = 0;
  *a1 = &forms::element_t___vtable;
  if ( v19 )
  {
    v20 = a1[11];
    if ( v20 )
    {
      for ( j = 0; j != v20; ++j )
      {
        v22 = (__int64 *)(v19 + 24 * j);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v23, a2);
          v19 = a1[10];
        }
      }
    }
    a1[11] = 0;
    result = qfree(v19, a2);
  }
  v24 = a1[7];
  if ( v24 )
  {
    a1[8] = 0;
    return qfree(v24, a2);
  }
  return result;
}
