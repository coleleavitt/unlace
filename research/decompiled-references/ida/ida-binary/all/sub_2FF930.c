void __fastcall desktops_merge_handler_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = &merge_handler_t___vtable;
  merge_handler_dtr();
  v3 = a1[12];
  if ( v3 )
  {
    a1[13] = 0;
    qfree(v3, a2);
  }
  v4 = a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    qfree(v4, a2);
  }
  operator delete(a1, 0x98u);
}
