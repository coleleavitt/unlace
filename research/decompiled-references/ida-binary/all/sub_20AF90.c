double __fastcall qflow_chart_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  double result; // xmm0_8
  __int64 v10; // rdi

  *a1 = qflow_chart_t___vtable;
  v3 = a1[9];
  if ( v3 )
  {
    v4 = a1[10];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + (i << 6));
        v7 = v6[5];
        if ( v7 )
        {
          v6[6] = 0;
          qfree(v7, a2);
        }
        v8 = v6[2];
        if ( v8 )
        {
          v6[3] = 0;
          qfree(v8, a2);
        }
        v3 = a1[9];
      }
    }
    a1[10] = 0;
    result = qfree(v3, a2);
  }
  v10 = a1[2];
  if ( v10 )
  {
    a1[3] = 0;
    return qfree(v10, a2);
  }
  return result;
}
