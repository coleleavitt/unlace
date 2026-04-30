double __fastcall sa_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  __int64 v11; // rdi

  *a1 = sa_chooser_t___vtable;
  v3 = a1[29];
  if ( v3 )
  {
    a1[30] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[27];
  if ( v5 )
  {
    for ( i = 0; i != v5; ++i )
    {
      v7 = *(_QWORD *)(a1[26] + 8 * i);
      result = qfree(v7, a2);
    }
  }
  v8 = a1[26];
  if ( v8 )
  {
    a1[27] = 0;
    result = qfree(v8, a2);
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
