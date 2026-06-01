double __fastcall snapman_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rbp
  double v8; // xmm0_8
  __int64 *v9; // rbx
  __int64 v10; // rdi

  *a1 = snapman_t___vtable;
  v3 = a1[1068];
  if ( v3 )
  {
    a1[1069] = 0;
    qfree(v3, a2);
  }
  v4 = a1[1066];
  v5 = (__int64 *)a1[1065];
  v6 = v5;
  if ( 8 * v4 )
  {
    do
    {
      v7 = *v6;
      if ( *v6 )
      {
        v8 = sub_319CD0(*v6);
        qfree(v7, a2, v8);
        v5 = (__int64 *)a1[1065];
        v4 = a1[1066];
      }
      ++v6;
    }
    while ( v6 != &v5[v4] );
  }
  if ( v5 )
  {
    a1[1066] = 0;
    qfree(v5, a2);
  }
  v9 = a1 + 19;
  *a1 = &stru_86F6A0;
  do
  {
    v10 = *v9;
    if ( *v9 )
    {
      v9[1] = 0;
      qfree(v10, a2);
    }
    v9 -= 3;
  }
  while ( a1 + 7 != v9 );
  return qfree(a1, a2);
}
