double __fastcall fh_entries_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rdi

  *a1 = fh_entries_chooser_t___vtable;
  v3 = a1[23];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = a1[25];
  a1[23] = 0;
  if ( v4 )
  {
    v5 = a1[26];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 80 * i);
        v8 = v7[5];
        if ( v8 )
        {
          v7[6] = 0;
          qfree(v8, a2);
        }
        v9 = v7[2];
        if ( v9 )
        {
          v7[3] = 0;
          qfree(v9, a2);
        }
        v4 = a1[25];
      }
    }
    a1[26] = 0;
    qfree(v4, a2);
  }
  v10 = a1 + 22;
  *a1 = &stru_86F6A0;
  do
  {
    v11 = *(v10 - 3);
    v10 -= 3;
    if ( v11 )
    {
      v10[1] = 0;
      qfree(v11, a2);
    }
  }
  while ( a1 + 10 != v10 );
  return qfree(a1, a2);
}
