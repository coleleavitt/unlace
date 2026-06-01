void __fastcall forms::dialog_desc_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  _QWORD *v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 j; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi

  v3 = a1[29];
  *a1 = &forms::dialog_desc_t___vtable;
  if ( v3 )
  {
    v4 = a1[30];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7, a2);
          v3 = a1[29];
        }
      }
    }
    a1[30] = 0;
    qfree(v3, a2);
  }
  v8 = a1[26];
  if ( v8 )
  {
    a1[27] = 0;
    qfree(v8, a2);
  }
  v9 = (_QWORD *)a1[22];
  v10 = &v9[a1[23]];
  if ( v9 != v10 )
  {
    do
    {
      if ( *v9 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
      ++v9;
    }
    while ( v10 != v9 );
    v10 = (_QWORD *)a1[22];
  }
  if ( v10 )
  {
    a1[23] = 0;
    qfree(v10, a2);
  }
  v11 = a1[18];
  *a1 = &forms::abstract_form_desc_t___vtable;
  if ( v11 )
  {
    a1[19] = 0;
    qfree(v11, a2);
  }
  v12 = a1[15];
  *a1 = &forms::container_t___vtable;
  if ( v12 )
  {
    a1[16] = 0;
    qfree(v12, a2);
  }
  v13 = a1[13];
  *a1 = &forms::abstract_container_t___vtable;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = a1[10];
  a1[13] = 0;
  *a1 = &forms::element_t___vtable;
  if ( v14 )
  {
    v15 = a1[11];
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
          v14 = a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v14, a2);
  }
  v19 = a1[7];
  if ( v19 )
  {
    a1[8] = 0;
    qfree(v19, a2);
  }
  operator delete(a1, 0x100u);
}
