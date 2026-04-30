double __fastcall rs_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rdi

  *a1 = rs_chooser_t___vtable;
  v3 = a1[26];
  if ( v3 )
  {
    a1[27] = 0;
    qfree(v3, a2);
  }
  v4 = a1[23];
  if ( v4 )
  {
    v5 = a1[24];
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
          v4 = a1[23];
        }
      }
    }
    a1[24] = 0;
    qfree(v4, a2);
  }
  v9 = a1 + 22;
  *a1 = &stru_86F6A0;
  do
  {
    v10 = *(v9 - 3);
    v9 -= 3;
    if ( v10 )
    {
      v9[1] = 0;
      qfree(v10, a2);
    }
  }
  while ( a1 + 10 != v9 );
  return qfree(a1, a2);
}
