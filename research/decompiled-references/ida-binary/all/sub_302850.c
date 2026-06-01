void __fastcall edit_type_form_data_t__::vfunc_1(char *a1, const char *a2)
{
  char *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 j; // rbp
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi

  v3 = a1 + 304;
  *((_QWORD *)v3 - 38) = &edit_type_form_data_t___vtable;
  clear_tinfo_t(v3);
  v4 = *((_QWORD *)a1 + 34);
  if ( v4 )
  {
    *((_QWORD *)a1 + 35) = 0;
    qfree(v4, a2);
  }
  v5 = *((_QWORD *)a1 + 27);
  *(_QWORD *)a1 = &unk_872A10;
  if ( v5 )
  {
    v6 = *((_QWORD *)a1 + 28);
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
          v5 = *((_QWORD *)a1 + 27);
        }
      }
    }
    *((_QWORD *)a1 + 28) = 0;
    qfree(v5, a2);
  }
  v10 = *((_QWORD *)a1 + 24);
  if ( v10 )
  {
    *((_QWORD *)a1 + 25) = 0;
    qfree(v10, a2);
  }
  v11 = *((_QWORD *)a1 + 21);
  if ( v11 )
  {
    *((_QWORD *)a1 + 22) = 0;
    qfree(v11, a2);
  }
  v12 = *((_QWORD *)a1 + 18);
  if ( v12 )
  {
    *((_QWORD *)a1 + 19) = 0;
    qfree(v12, a2);
  }
  clear_tinfo_t(a1 + 136);
  v13 = *((_QWORD *)a1 + 12);
  if ( v13 )
  {
    v14 = *((_QWORD *)a1 + 13);
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = (__int64 *)(v13 + 24 * j);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, a2);
          v13 = *((_QWORD *)a1 + 12);
        }
      }
    }
    *((_QWORD *)a1 + 13) = 0;
    qfree(v13, a2);
  }
  v18 = *((_QWORD *)a1 + 8);
  if ( v18 )
  {
    *((_QWORD *)a1 + 9) = 0;
    qfree(v18, a2);
  }
  v19 = *((_QWORD *)a1 + 1);
  if ( v19 )
  {
    *((_QWORD *)a1 + 2) = 0;
    qfree(v19, a2);
  }
  operator delete(a1, 0x140u);
}
