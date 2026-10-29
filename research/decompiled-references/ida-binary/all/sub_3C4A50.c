void __fastcall edit_argloc_dialog_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbp
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  _QWORD *v13; // rbp
  _QWORD *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 j; // rbp
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi

  *a1 = &edit_argloc_dialog_t___vtable;
  v3 = a1[47];
  if ( v3 )
  {
    a1[48] = 0;
    qfree(v3, a2);
  }
  v4 = a1[42];
  if ( v4 )
  {
    a1[43] = 0;
    qfree(v4, a2);
  }
  v5 = a1[39];
  if ( v5 )
  {
    a1[40] = 0;
    qfree(v5, a2);
  }
  clear_tinfo_t(a1 + 38);
  cleanup_argloc(a1 + 36);
  v6 = a1[33];
  if ( v6 )
  {
    a1[34] = 0;
    qfree(v6, a2);
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
    qfree(v7, a2);
  }
  v12 = a1[26];
  if ( v12 )
  {
    a1[27] = 0;
    qfree(v12, a2);
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
    qfree(v14, a2);
  }
  v15 = a1[18];
  *a1 = &forms::abstract_form_desc_t___vtable;
  if ( v15 )
  {
    a1[19] = 0;
    qfree(v15, a2);
  }
  v16 = a1[15];
  *a1 = &forms::container_t___vtable;
  if ( v16 )
  {
    a1[16] = 0;
    qfree(v16, a2);
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
    qfree(v18, a2);
  }
  v23 = a1[7];
  if ( v23 )
  {
    a1[8] = 0;
    qfree(v23, a2);
  }
  operator delete(a1, 0x198u);
}
