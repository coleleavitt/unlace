void __fastcall _base_app_mixin_t::push_wait_dialog_request(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  *a1 = &_base_app_mixin_t::push_wait_dialog_request;
  v3 = a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    qfree(v3, a2);
  }
  v4 = a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    qfree(v4, a2);
  }
  v5 = a1[2];
  *a1 = &off_86FF78;
  qsem_free(v5);
  operator delete(a1, 0x60u);
}
