struct _Unwind_Exception *__fastcall sub_106E90(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r12
  _QWORD *v7; // rbx
  struct _Unwind_Exception *result; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  __int64 v11; // rdi

  *a1 = off_2317D8;
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
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v3 + v5);
        if ( *(_QWORD *)(v3 + v5 + 144) )
        {
          v7[19] = 0;
          qfree();
        }
        if ( v7[14] )
        {
          v7[15] = 0;
          qfree();
        }
        if ( v7[10] )
        {
          v7[11] = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( v7[5] )
        {
          v7[6] = 0;
          qfree();
        }
        if ( v7[1] )
        {
          v7[2] = 0;
          qfree();
        }
        ++v6;
        v5 += 200;
        clear_tinfo_t();
        v3 = a1[23];
      }
      while ( v4 != v6 );
    }
    a1[24] = 0;
    qfree();
  }
  result = &stru_236898;
  v9 = a1 + 22;
  v10 = a1 + 10;
  *(v10 - 10) = &stru_236898;
  do
  {
    v11 = *(v9 - 3);
    v9 -= 3;
    if ( v11 )
    {
      v9[1] = 0;
      result = (struct _Unwind_Exception *)qfree();
    }
  }
  while ( v10 != v9 );
  return result;
}

