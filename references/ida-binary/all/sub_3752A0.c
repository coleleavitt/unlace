double __fastcall path_details_ah_t__::vfunc_3(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi

  *a1 = path_details_ah_t___vtable;
  v3 = a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3, a2);
  }
  return qfree(a1, a2);
}
