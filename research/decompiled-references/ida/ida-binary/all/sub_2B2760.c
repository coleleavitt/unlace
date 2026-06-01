void __fastcall graph_model_reload_strategy_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi

  *a1 = &graph_model_reload_strategy_t___vtable;
  v3 = a1[3];
  if ( v3 )
  {
    a1[4] = 0;
    qfree(v3, a2);
  }
  operator delete(a1, 0x38u);
}
