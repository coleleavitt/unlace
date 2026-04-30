double __fastcall sa_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rdi

  *a1 = sa_chooser_t___vtable;
  v3 = a1[29];
  if ( v3 )
  {
    a1[30] = 0;
    qfree(v3, a2);
  }
  v4 = a1[27];
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = *(_QWORD *)(a1[26] + 8 * i);
      qfree(v6, a2);
    }
  }
  v7 = a1[26];
  if ( v7 )
  {
    a1[27] = 0;
    qfree(v7, a2);
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
