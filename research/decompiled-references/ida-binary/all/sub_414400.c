double __fastcall event_source_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8

  *a1 = &event_source_t___vtable;
  unbind_event_source_all();
  v3 = a1[1];
  if ( v3 )
  {
    a1[2] = 0;
    return qfree(v3, a2);
  }
  return result;
}
