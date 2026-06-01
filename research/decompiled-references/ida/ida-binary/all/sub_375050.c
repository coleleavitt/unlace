double __fastcall path_details_ah_t__::vfunc_2(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax
  double result; // xmm0_8

  *a1 = path_details_ah_t___vtable;
  v2 = a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    return qfree(v2, a2);
  }
  return result;
}
