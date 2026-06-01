double __fastcall forms::file_picker_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi

  *a1 = &forms::file_picker_t___vtable;
  v3 = a1[22];
  if ( v3 )
  {
    a1[23] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[19];
  if ( v5 )
  {
    a1[20] = 0;
    result = qfree(v5, a2);
  }
  v6 = a1[13];
  *a1 = &forms::base_text_input_t___vtable;
  if ( v6 )
  {
    a1[14] = 0;
    result = qfree(v6, a2);
  }
  v7 = a1[10];
  *a1 = &forms::element_t___vtable;
  if ( v7 )
  {
    v8 = a1[11];
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = (__int64 *)(v7 + 24 * i);
        v11 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v11, a2);
          v7 = a1[10];
        }
      }
    }
    a1[11] = 0;
    result = qfree(v7, a2);
  }
  v12 = a1[7];
  if ( v12 )
  {
    a1[8] = 0;
    return qfree(v12, a2);
  }
  return result;
}
