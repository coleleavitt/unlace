void __fastcall forms::file_picker_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi

  *a1 = &forms::file_picker_t___vtable;
  v3 = a1[22];
  if ( v3 )
  {
    a1[23] = 0;
    qfree(v3, a2);
  }
  v4 = a1[19];
  if ( v4 )
  {
    a1[20] = 0;
    qfree(v4, a2);
  }
  v5 = a1[13];
  *a1 = &forms::base_text_input_t___vtable;
  if ( v5 )
  {
    a1[14] = 0;
    qfree(v5, a2);
  }
  v6 = a1[10];
  *a1 = &forms::element_t___vtable;
  if ( v6 )
  {
    v7 = a1[11];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 24 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10, a2);
          v6 = a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v6, a2);
  }
  v11 = a1[7];
  if ( v11 )
  {
    a1[8] = 0;
    qfree(v11, a2);
  }
  operator delete(a1, 0xC8u);
}
