void __fastcall vault_credentials_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  *a1 = &vault_credentials_t___vtable;
  v3 = a1[22];
  if ( v3 )
  {
    a1[23] = 0;
    qfree(v3, a2);
  }
  v4 = a1[18];
  *a1 = &login_credentials_t___vtable;
  if ( v4 )
  {
    a1[19] = 0;
    qfree(v4, a2);
  }
  v5 = a1[15];
  if ( v5 )
  {
    a1[16] = 0;
    qfree(v5, a2);
  }
  v6 = a1[11];
  if ( v6 )
  {
    a1[12] = 0;
    qfree(v6, a2);
  }
  v7 = a1[8];
  if ( v7 )
  {
    a1[9] = 0;
    qfree(v7, a2);
  }
  v8 = a1[5];
  if ( v8 )
  {
    a1[6] = 0;
    qfree(v8, a2);
  }
  v9 = a1[1];
  if ( v9 )
  {
    a1[2] = 0;
    qfree(v9, a2);
  }
  operator delete(a1, 0xC8u);
}
