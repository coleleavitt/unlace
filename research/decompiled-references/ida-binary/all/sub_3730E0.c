double __fastcall xref_path_handler__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax
  double result; // xmm0_8

  *a1 = xref_path_handler___vtable;
  v2 = a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    return qfree(v2, a2);
  }
  return result;
}
