void __fastcall liblicui::menu_license_manager_borrow(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 j; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi

  *a1 = &liblicui::menu_license_manager_borrow;
  v3 = a1[32];
  if ( v3 )
  {
    a1[33] = 0;
    qfree(v3, a2);
  }
  v4 = a1[29];
  *a1 = &forms::dialog_desc_t___vtable;
  if ( v4 )
  {
    v5 = a1[30];
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
          v4 = a1[29];
        }
      }
    }
    a1[30] = 0;
    qfree(v4, a2);
  }
  v9 = a1[26];
  if ( v9 )
  {
    a1[27] = 0;
    qfree(v9, a2);
  }
  v10 = (_QWORD *)a1[22];
  v11 = &v10[a1[23]];
  if ( v10 != v11 )
  {
    do
    {
      if ( *v10 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 8LL))(*v10);
      ++v10;
    }
    while ( v11 != v10 );
    v11 = (_QWORD *)a1[22];
  }
  if ( v11 )
  {
    a1[23] = 0;
    qfree(v11, a2);
  }
  v12 = a1[18];
  *a1 = &forms::abstract_form_desc_t___vtable;
  if ( v12 )
  {
    a1[19] = 0;
    qfree(v12, a2);
  }
  v13 = a1[15];
  *a1 = &forms::container_t___vtable;
  if ( v13 )
  {
    a1[16] = 0;
    qfree(v13, a2);
  }
  v14 = a1[13];
  *a1 = &forms::abstract_container_t___vtable;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = a1[10];
  a1[13] = 0;
  *a1 = &forms::element_t___vtable;
  if ( v15 )
  {
    v16 = a1[11];
    if ( v16 )
    {
      for ( j = 0; j != v16; ++j )
      {
        v18 = (__int64 *)(v15 + 24 * j);
        v19 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v19, a2);
          v15 = a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v15, a2);
  }
  v20 = a1[7];
  if ( v20 )
  {
    a1[8] = 0;
    qfree(v20, a2);
  }
  operator delete(a1, 0x148u);
}
