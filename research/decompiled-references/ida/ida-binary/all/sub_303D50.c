void __fastcall hvui_common_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  const char *v11; // rsi
  __int64 v12; // rdi

  *a1 = &hvui_common_t___vtable;
  a1[8] = &vault_credentials_t___vtable;
  v3 = a1[30];
  if ( v3 )
  {
    a1[31] = 0;
    qfree(v3, a2);
  }
  v4 = a1[26];
  a1[8] = &login_credentials_t___vtable;
  if ( v4 )
  {
    a1[27] = 0;
    qfree(v4, a2);
  }
  v5 = a1[23];
  if ( v5 )
  {
    a1[24] = 0;
    qfree(v5, a2);
  }
  v6 = a1[19];
  if ( v6 )
  {
    a1[20] = 0;
    qfree(v6, a2);
  }
  v7 = a1[16];
  if ( v7 )
  {
    a1[17] = 0;
    qfree(v7, a2);
  }
  v8 = a1[13];
  if ( v8 )
  {
    a1[14] = 0;
    qfree(v8, a2);
  }
  v9 = a1[9];
  if ( v9 )
  {
    a1[10] = 0;
    qfree(v9, a2);
  }
  v10 = a1[5];
  if ( v10 )
  {
    a1[6] = 0;
    qfree(v10, a2);
  }
  v11 = (const char *)a1[4];
  if ( v11 )
    sub_416E40(a1 + 4);
  *a1 = &unk_8729E8;
  unbind_event_handler_all(a1);
  v12 = a1[1];
  if ( v12 )
  {
    a1[2] = 0;
    qfree(v12, v11);
  }
  operator delete(a1, 0x108u);
}
