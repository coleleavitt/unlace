void __fastcall ida_singleton_desktop_widget_factory_t__::vfunc_1(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi

  v6 = a1[1];
  *a1 = &unk_8941C8;
  if ( v6 )
  {
    v7 = a1[2];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 24 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10, a2, v6, a4, a5);
          v6 = a1[1];
        }
      }
    }
    a1[2] = 0;
    qfree(v6, a2, v6, a4, a5);
  }
  operator delete(a1, 0x38u);
}
