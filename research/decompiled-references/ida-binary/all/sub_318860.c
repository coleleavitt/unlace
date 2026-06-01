double __fastcall rs_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // rbp
  __int64 v12; // rdi

  *a1 = rs_chooser_t___vtable;
  v3 = a1[26];
  if ( v3 )
  {
    a1[27] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[23];
  if ( v5 )
  {
    v6 = a1[24];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 24 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9, a2);
          v5 = a1[23];
        }
      }
    }
    a1[24] = 0;
    result = qfree(v5, a2);
  }
  v10 = a1 + 22;
  v11 = a1 + 10;
  *(v11 - 10) = &stru_86F6A0;
  do
  {
    v12 = *(v10 - 3);
    v10 -= 3;
    if ( v12 )
    {
      v10[1] = 0;
      result = qfree(v12, a2);
    }
  }
  while ( v11 != v10 );
  return result;
}
