double __fastcall filtered_widget_mixin_update_strategy_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  double result; // xmm0_8

  *a1 = &filtered_widget_mixin_update_strategy_t___vtable;
  ((void (*)(void))sub_4DE2C0)();
  v3 = a1[1];
  if ( v3 )
  {
    v4 = a1[2];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = i;
        sub_4DE2C0(32 * v6 + v3);
        v3 = a1[1];
      }
    }
    a1[2] = 0;
    return qfree(v3, a2);
  }
  return result;
}
