double __fastcall fh_entries_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  double result; // xmm0_8
  _QWORD *v11; // rbx
  _QWORD *v12; // r12
  __int64 v13; // rdi

  *a1 = fh_entries_chooser_t___vtable;
  v3 = a1[23];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = a1[25];
  a1[23] = 0;
  if ( v4 )
  {
    v5 = a1[26];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 80 * i);
        v8 = v7[5];
        if ( v8 )
        {
          v7[6] = 0;
          qfree(v8, a2);
        }
        v9 = v7[2];
        if ( v9 )
        {
          v7[3] = 0;
          qfree(v9, a2);
        }
        v4 = a1[25];
      }
    }
    a1[26] = 0;
    result = qfree(v4, a2);
  }
  v11 = a1 + 22;
  v12 = a1 + 10;
  *(v12 - 10) = &stru_86F6A0;
  do
  {
    v13 = *(v11 - 3);
    v11 -= 3;
    if ( v13 )
    {
      v11[1] = 0;
      result = qfree(v13, a2);
    }
  }
  while ( v12 != v11 );
  return result;
}
