double __fastcall path_details_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 i; // r12
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  _QWORD *v13; // rbp
  __int64 v14; // rdi

  *a1 = path_details_chooser_t___vtable;
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
      v7 = 0;
      for ( i = 0; i != v6; ++i )
      {
        v9 = (__int64 *)(v5 + v7);
        v10 = *(_QWORD *)(v5 + v7 + 24);
        if ( v10 )
        {
          v9[4] = 0;
          qfree(v10, a2);
        }
        v11 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v11, a2);
        }
        v5 = a1[23];
        v7 += 56;
      }
    }
    a1[24] = 0;
    result = qfree(v5, a2);
  }
  v12 = a1 + 22;
  v13 = a1 + 10;
  *(v13 - 10) = &stru_86F6A0;
  do
  {
    v14 = *(v12 - 3);
    v12 -= 3;
    if ( v14 )
    {
      v12[1] = 0;
      result = qfree(v14, a2);
    }
  }
  while ( v13 != v12 );
  return result;
}
