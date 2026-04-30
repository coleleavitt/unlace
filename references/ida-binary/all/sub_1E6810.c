void __fastcall place_sync_pos_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi

  *a1 = &place_sync_pos_t___vtable;
  v3 = a1[1];
  if ( v3 )
    qfree(v3, a2);
  operator delete(a1, 0x10u);
}
