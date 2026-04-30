double __fastcall proc_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  double result; // xmm0_8
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  __int64 v11; // rdi

  v3 = a1[23];
  *a1 = proc_chooser_t___vtable;
  if ( v3 )
  {
    v4 = a1[24];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 32 * i;
        v7 = *(_QWORD *)(v6 + 8);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 16) = 0;
          qfree(v7, a2);
          v3 = a1[23];
        }
      }
    }
    a1[24] = 0;
    result = qfree(v3, a2);
  }
  v9 = a1 + 22;
  v10 = a1 + 10;
  *(v10 - 10) = &stru_86F6A0;
  do
  {
    v11 = *(v9 - 3);
    v9 -= 3;
    if ( v11 )
    {
      v9[1] = 0;
      result = qfree(v11, a2);
    }
  }
  while ( v10 != v9 );
  return result;
}
