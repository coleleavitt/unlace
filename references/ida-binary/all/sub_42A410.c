void __fastcall hvui_merge_handler_t__::vfunc_2(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  *a1 = hvui_merge_handler_t___vtable;
  a1[4] = &local_site_t___vtable;
  a1[11] = 0;
  v3 = a1[8];
  if ( v3 )
  {
    a1[9] = 0;
    qfree(v3, a2);
  }
  v4 = a1[5];
  if ( v4 )
  {
    a1[6] = 0;
    qfree(v4, a2);
  }
  v5 = a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    qfree(v5, a2);
  }
  operator delete(a1, 0x60u);
}
