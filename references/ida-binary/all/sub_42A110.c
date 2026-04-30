void __fastcall filtered_widget_mixin_update_strategy_t__::vfunc_1(char *a1, const char *a2)
{
  char *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // rax

  v3 = a1 + 32;
  *((_QWORD *)v3 - 4) = &filtered_widget_mixin_update_strategy_t___vtable;
  sub_4DE2C0(v3);
  v4 = *((_QWORD *)a1 + 1);
  if ( v4 )
  {
    v5 = *((_QWORD *)a1 + 2);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = i;
        sub_4DE2C0(32 * v7 + v4);
        v4 = *((_QWORD *)a1 + 1);
      }
    }
    *((_QWORD *)a1 + 2) = 0;
    qfree(v4, a2);
  }
  operator delete(a1, 0x48u);
}
