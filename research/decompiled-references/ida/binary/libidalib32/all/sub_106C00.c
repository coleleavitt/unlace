struct _Unwind_Exception *__fastcall sub_106C00(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  struct _Unwind_Exception *result; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r12
  __int64 v10; // rdi

  *a1 = off_230798;
  v2 = a1[29];
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    a1[29] = 0;
  }
  if ( a1[26] )
  {
    a1[27] = 0;
    qfree();
  }
  v3 = a1[23];
  if ( v3 )
  {
    v4 = a1[24];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 192 * i);
        if ( v6[18] )
        {
          v6[19] = 0;
          qfree();
        }
        if ( v6[14] )
        {
          v6[15] = 0;
          qfree();
        }
        if ( v6[10] )
        {
          v6[11] = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( v6[5] )
        {
          v6[6] = 0;
          qfree();
        }
        if ( v6[1] )
        {
          v6[2] = 0;
          qfree();
        }
        clear_tinfo_t();
        v3 = a1[23];
      }
    }
    a1[24] = 0;
    qfree();
  }
  result = &stru_235898;
  v8 = a1 + 22;
  v9 = a1 + 10;
  *(v9 - 10) = &stru_235898;
  do
  {
    v10 = *(v8 - 3);
    v8 -= 3;
    if ( v10 )
    {
      v8[1] = 0;
      result = (struct _Unwind_Exception *)qfree();
    }
  }
  while ( v9 != v8 );
  return result;
}

