double __fastcall standalone_dirtree_update_strategy_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 v9; // rax

  *a1 = &standalone_dirtree_update_strategy_t___vtable;
  v3 = a1[14];
  if ( v3 )
  {
    a1[15] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[9];
  if ( v5 )
  {
    a1[10] = 0;
    result = qfree(v5, a2);
  }
  *a1 = &filtered_widget_mixin_update_strategy_t___vtable;
  sub_4DE2C0(a1 + 4);
  v6 = a1[1];
  if ( v6 )
  {
    v7 = a1[2];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = i;
        sub_4DE2C0(32 * v9 + v6);
        v6 = a1[1];
      }
    }
    a1[2] = 0;
    return qfree(v6, a2);
  }
  return result;
}
