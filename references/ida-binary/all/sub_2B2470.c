double __fastcall graph_model_reload_strategy_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax
  double result; // xmm0_8

  *a1 = &graph_model_reload_strategy_t___vtable;
  v2 = a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    return qfree(v2, a2);
  }
  return result;
}
