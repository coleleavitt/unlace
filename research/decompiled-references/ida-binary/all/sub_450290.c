double __fastcall commit_files_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rdi

  v3 = a1[23];
  *a1 = commit_files_chooser_t___vtable;
  if ( v3 )
  {
    v4 = a1[24];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 80 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7, a2);
          v3 = a1[23];
        }
      }
    }
    a1[24] = 0;
    qfree(v3, a2);
  }
  v8 = a1 + 22;
  *a1 = &stru_86F6A0;
  do
  {
    v9 = *(v8 - 3);
    v8 -= 3;
    if ( v9 )
    {
      v8[1] = 0;
      qfree(v9, a2);
    }
  }
  while ( a1 + 10 != v8 );
  return qfree(a1, a2);
}
