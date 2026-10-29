void __fastcall local_site_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = &local_site_t___vtable;
  a1[7] = 0;
  v3 = a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3, a2);
  }
  v4 = a1[1];
  if ( v4 )
  {
    a1[2] = 0;
    qfree(v4, a2);
  }
  operator delete(a1, 0x40u);
}
