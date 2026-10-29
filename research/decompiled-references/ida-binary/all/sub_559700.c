double __fastcall liblicui::menu_license_manager_borrow(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 j; // rbx
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdi

  *a1 = &liblicui::menu_license_manager_borrow;
  v3 = a1[32];
  if ( v3 )
  {
    a1[33] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[29];
  *a1 = &forms::dialog_desc_t___vtable;
  if ( v5 )
  {
    v6 = a1[30];
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
          v5 = a1[29];
        }
      }
    }
    a1[30] = 0;
    result = qfree(v5, a2);
  }
  v10 = a1[26];
  if ( v10 )
  {
    a1[27] = 0;
    result = qfree(v10, a2);
  }
  v11 = (_QWORD *)a1[22];
  v12 = &v11[a1[23]];
  if ( v11 != v12 )
  {
    do
    {
      if ( *v11 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 8LL))(*v11);
      ++v11;
    }
    while ( v12 != v11 );
    v12 = (_QWORD *)a1[22];
  }
  if ( v12 )
  {
    a1[23] = 0;
    result = qfree(v12, a2);
  }
  v13 = a1[18];
  *a1 = &forms::abstract_form_desc_t___vtable;
  if ( v13 )
  {
    a1[19] = 0;
    result = qfree(v13, a2);
  }
  v14 = a1[15];
  *a1 = &forms::container_t___vtable;
  if ( v14 )
  {
    a1[16] = 0;
    result = qfree(v14, a2);
  }
  v15 = a1[13];
  *a1 = &forms::abstract_container_t___vtable;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = a1[10];
  a1[13] = 0;
  *a1 = &forms::element_t___vtable;
  if ( v16 )
  {
    v17 = a1[11];
    if ( v17 )
    {
      for ( j = 0; j != v17; ++j )
      {
        v19 = (__int64 *)(v16 + 24 * j);
        v20 = *v19;
        if ( *v19 )
        {
          v19[1] = 0;
          qfree(v20, a2);
          v16 = a1[10];
        }
      }
    }
    a1[11] = 0;
    result = qfree(v16, a2);
  }
  v21 = a1[7];
  if ( v21 )
  {
    a1[8] = 0;
    return qfree(v21, a2);
  }
  return result;
}
