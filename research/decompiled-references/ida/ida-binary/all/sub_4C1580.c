double __fastcall move_to_folder_dialog_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  void (__fastcall *v5)(_QWORD *, _QWORD *, __int64); // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  _QWORD *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 j; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi

  *a1 = &move_to_folder_dialog_t___vtable;
  v3 = a1[41];
  if ( v3 )
  {
    a1[42] = 0;
    result = qfree(v3, a2);
  }
  *a1 = &standalone_dirtree_widget_dialog_t___vtable;
  v5 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[39];
  if ( v5 )
  {
    a2 = (const char *)(a1 + 37);
    v5(a1 + 37, a1 + 37, 3);
  }
  v6 = a1[32];
  if ( v6 )
  {
    a1[33] = 0;
    result = qfree(v6, a2);
  }
  v7 = a1[29];
  *a1 = &forms::dialog_desc_t___vtable;
  if ( v7 )
  {
    v8 = a1[30];
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = (__int64 *)(v7 + 24 * i);
        v11 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v11, a2);
          v7 = a1[29];
        }
      }
    }
    a1[30] = 0;
    result = qfree(v7, a2);
  }
  v12 = a1[26];
  if ( v12 )
  {
    a1[27] = 0;
    result = qfree(v12, a2);
  }
  v13 = (_QWORD *)a1[22];
  v14 = &v13[a1[23]];
  if ( v13 != v14 )
  {
    do
    {
      if ( *v13 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 8LL))(*v13);
      ++v13;
    }
    while ( v14 != v13 );
    v14 = (_QWORD *)a1[22];
  }
  if ( v14 )
  {
    a1[23] = 0;
    result = qfree(v14, a2);
  }
  v15 = a1[18];
  *a1 = &forms::abstract_form_desc_t___vtable;
  if ( v15 )
  {
    a1[19] = 0;
    result = qfree(v15, a2);
  }
  v16 = a1[15];
  *a1 = &forms::container_t___vtable;
  if ( v16 )
  {
    a1[16] = 0;
    result = qfree(v16, a2);
  }
  v17 = a1[13];
  *a1 = &forms::abstract_container_t___vtable;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  v18 = a1[10];
  a1[13] = 0;
  *a1 = &forms::element_t___vtable;
  if ( v18 )
  {
    v19 = a1[11];
    if ( v19 )
    {
      for ( j = 0; j != v19; ++j )
      {
        v21 = (__int64 *)(v18 + 24 * j);
        v22 = *v21;
        if ( *v21 )
        {
          v21[1] = 0;
          qfree(v22, a2);
          v18 = a1[10];
        }
      }
    }
    a1[11] = 0;
    result = qfree(v18, a2);
  }
  v23 = a1[7];
  if ( v23 )
  {
    a1[8] = 0;
    return qfree(v23, a2);
  }
  return result;
}
