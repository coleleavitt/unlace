double __fastcall hvui_progressor_t__::vfunc_3(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax
  double result; // xmm0_8

  *a1 = &hvui_progressor_t___vtable;
  v2 = a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    return qfree(v2, a2);
  }
  return result;
}
