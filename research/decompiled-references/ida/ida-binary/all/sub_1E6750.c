__int64 (__fastcall **__fastcall place_sync_pos_t__::vfunc_0(_QWORD *a1, const char *a2))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi

  result = &place_sync_pos_t___vtable;
  *a1 = &place_sync_pos_t___vtable;
  v3 = a1[1];
  if ( v3 )
    return (__int64 (__fastcall **)())qfree(v3, a2);
  return result;
}
