double __fastcall forms::field_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  double result; // xmm0_8
  __int64 v9; // rdi

  v3 = a1[10];
  *a1 = &forms::element_t___vtable;
  if ( v3 )
  {
    v4 = a1[11];
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
          v3 = a1[10];
        }
      }
    }
    a1[11] = 0;
    result = qfree(v3, a2);
  }
  v9 = a1[7];
  if ( v9 )
  {
    a1[8] = 0;
    return qfree(v9, a2);
  }
  return result;
}
