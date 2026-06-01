void __fastcall ltypes_search_result_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = &search_result_t___vtable;
  v3 = a1[5];
  if ( v3 )
  {
    a1[6] = 0;
    qfree(v3, a2);
  }
  v4 = a1[1];
  if ( v4 )
  {
    a1[2] = 0;
    qfree(v4, a2);
  }
  operator delete(a1, 0x58u);
}
