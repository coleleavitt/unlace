double __fastcall forms::abstract_container_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  double result; // xmm0_8
  __int64 v10; // rdi

  *a1 = &forms::abstract_container_t___vtable;
  v3 = a1[13];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = a1[10];
  a1[13] = 0;
  *a1 = &forms::element_t___vtable;
  if ( v4 )
  {
    v5 = a1[11];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)(v4 + 24 * i);
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v8, a2);
          v4 = a1[10];
        }
      }
    }
    a1[11] = 0;
    result = qfree(v4, a2);
  }
  v10 = a1[7];
  if ( v10 )
  {
    a1[8] = 0;
    return qfree(v10, a2);
  }
  return result;
}
