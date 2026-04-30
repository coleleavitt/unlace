void __fastcall funcs_desktop_widget_factory_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi

  v3 = a1[1];
  *a1 = &unk_8941C8;
  if ( v3 )
  {
    v4 = a1[2];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7, a2);
          v3 = a1[1];
        }
      }
    }
    a1[2] = 0;
    qfree(v3, a2);
  }
  operator delete(a1, 0x38u);
}
