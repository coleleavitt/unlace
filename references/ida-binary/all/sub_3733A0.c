void __fastcall xref_path_handler__::vfunc_2(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi

  *a1 = xref_path_handler___vtable;
  v3 = a1[3];
  if ( v3 )
  {
    a1[4] = 0;
    qfree(v3, a2);
  }
  operator delete(a1, 0x30u);
}
