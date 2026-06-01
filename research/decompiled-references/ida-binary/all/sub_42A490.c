void __fastcall standalone_dirtree_update_strategy_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 v8; // rax

  *a1 = &standalone_dirtree_update_strategy_t___vtable;
  v3 = a1[14];
  if ( v3 )
  {
    a1[15] = 0;
    qfree(v3, a2);
  }
  v4 = a1[9];
  if ( v4 )
  {
    a1[10] = 0;
    qfree(v4, a2);
  }
  *a1 = &filtered_widget_mixin_update_strategy_t___vtable;
  sub_4DE2C0(a1 + 4);
  v5 = a1[1];
  if ( v5 )
  {
    v6 = a1[2];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = i;
        sub_4DE2C0(32 * v8 + v5);
        v5 = a1[1];
      }
    }
    a1[2] = 0;
    qfree(v5, a2);
  }
  operator delete(a1, 0x90u);
}
