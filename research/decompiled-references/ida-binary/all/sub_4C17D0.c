void __fastcall move_to_folder_dialog_t__::vfunc_1(char *a1, const char *a2)
{
  __int64 v3; // rdi
  void (__fastcall *v4)(char *, char *, __int64); // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  _QWORD *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 j; // rbx
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi

  *(_QWORD *)a1 = &move_to_folder_dialog_t___vtable;
  v3 = *((_QWORD *)a1 + 41);
  if ( v3 )
  {
    *((_QWORD *)a1 + 42) = 0;
    qfree(v3, a2);
  }
  *(_QWORD *)a1 = &standalone_dirtree_widget_dialog_t___vtable;
  v4 = *((void (__fastcall **)(char *, char *, __int64))a1 + 39);
  if ( v4 )
  {
    a2 = a1 + 296;
    v4(a1 + 296, a1 + 296, 3);
  }
  v5 = *((_QWORD *)a1 + 32);
  if ( v5 )
  {
    *((_QWORD *)a1 + 33) = 0;
    qfree(v5, a2);
  }
  v6 = *((_QWORD *)a1 + 29);
  *(_QWORD *)a1 = &forms::dialog_desc_t___vtable;
  if ( v6 )
  {
    v7 = *((_QWORD *)a1 + 30);
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
          v6 = *((_QWORD *)a1 + 29);
        }
      }
    }
    *((_QWORD *)a1 + 30) = 0;
    qfree(v6, a2);
  }
  v11 = *((_QWORD *)a1 + 26);
  if ( v11 )
  {
    *((_QWORD *)a1 + 27) = 0;
    qfree(v11, a2);
  }
  v12 = *((_QWORD **)a1 + 22);
  v13 = &v12[*((_QWORD *)a1 + 23)];
  if ( v12 != v13 )
  {
    do
    {
      if ( *v12 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 8LL))(*v12);
      ++v12;
    }
    while ( v13 != v12 );
    v13 = *((_QWORD **)a1 + 22);
  }
  if ( v13 )
  {
    *((_QWORD *)a1 + 23) = 0;
    qfree(v13, a2);
  }
  v14 = *((_QWORD *)a1 + 18);
  *(_QWORD *)a1 = &forms::abstract_form_desc_t___vtable;
  if ( v14 )
  {
    *((_QWORD *)a1 + 19) = 0;
    qfree(v14, a2);
  }
  v15 = *((_QWORD *)a1 + 15);
  *(_QWORD *)a1 = &forms::container_t___vtable;
  if ( v15 )
  {
    *((_QWORD *)a1 + 16) = 0;
    qfree(v15, a2);
  }
  v16 = *((_QWORD *)a1 + 13);
  *(_QWORD *)a1 = &forms::abstract_container_t___vtable;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = *((_QWORD *)a1 + 10);
  *((_QWORD *)a1 + 13) = 0;
  *(_QWORD *)a1 = &forms::element_t___vtable;
  if ( v17 )
  {
    v18 = *((_QWORD *)a1 + 11);
    if ( v18 )
    {
      for ( j = 0; j != v18; ++j )
      {
        v20 = (__int64 *)(v17 + 24 * j);
        v21 = *v20;
        if ( *v20 )
        {
          v20[1] = 0;
          qfree(v21, a2);
          v17 = *((_QWORD *)a1 + 10);
        }
      }
    }
    *((_QWORD *)a1 + 11) = 0;
    qfree(v17, a2);
  }
  v22 = *((_QWORD *)a1 + 7);
  if ( v22 )
  {
    *((_QWORD *)a1 + 8) = 0;
    qfree(v22, a2);
  }
  operator delete(a1, 0x168u);
}
