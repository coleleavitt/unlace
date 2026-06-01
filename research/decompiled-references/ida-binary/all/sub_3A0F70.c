double __fastcall tchooser_persistence_helper_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax
  double result; // xmm0_8

  *a1 = &tchooser_persistence_helper_t___vtable;
  v2 = a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    return qfree(v2, a2);
  }
  return result;
}
