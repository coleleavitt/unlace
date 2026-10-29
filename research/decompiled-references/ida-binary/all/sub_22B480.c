void __fastcall debnames_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // rdi

  v3 = a1[28];
  *a1 = debnames_chooser_t___vtable;
  a1[23] = &debnames_chooser_t___vtable_at__184;
  if ( v3 )
  {
    v4 = a1[29];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 32 * i;
        v7 = *(_QWORD *)(v6 + 8);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 16) = 0;
          qfree(v7, a2);
          v3 = a1[28];
        }
      }
    }
    a1[29] = 0;
    qfree(v3, a2);
  }
  v8 = a1[25];
  if ( v8 )
  {
    a1[26] = 0;
    qfree(v8, a2);
  }
  v9 = a1 + 19;
  v10 = a1 + 7;
  *(v10 - 7) = (__int64)&stru_86F6A0;
  do
  {
    v11 = *v9;
    if ( *v9 )
    {
      v9[1] = 0;
      qfree(v11, a2);
    }
    v9 -= 3;
  }
  while ( v9 != v10 );
}
