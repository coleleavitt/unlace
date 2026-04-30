double __fastcall path_details_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 i; // r12
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rdi

  *a1 = path_details_chooser_t___vtable;
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
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = (__int64 *)(v4 + v6);
        v9 = *(_QWORD *)(v4 + v6 + 24);
        if ( v9 )
        {
          v8[4] = 0;
          qfree(v9, a2);
        }
        v10 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v10, a2);
        }
        v4 = a1[23];
        v6 += 56;
      }
    }
    a1[24] = 0;
    qfree(v4, a2);
  }
  v11 = a1 + 22;
  *a1 = &stru_86F6A0;
  do
  {
    v12 = *(v11 - 3);
    v11 -= 3;
    if ( v12 )
    {
      v11[1] = 0;
      qfree(v12, a2);
    }
  }
  while ( a1 + 10 != v11 );
  return qfree(a1, a2);
}
