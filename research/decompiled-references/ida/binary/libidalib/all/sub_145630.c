struct _Unwind_Exception *__fastcall sub_145630(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 i; // r12
  _QWORD *v6; // rbx
  struct _Unwind_Exception *result; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  __int64 v10; // rdi

  *a1 = off_239D90;
  v2 = a1[24];
  if ( v2 )
  {
    v3 = a1[25];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = (_QWORD *)(v2 + v4);
        if ( *(_QWORD *)(v2 + v4 + 24) )
        {
          v6[4] = 0;
          qfree();
        }
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
        }
        v2 = a1[24];
        v4 += 56;
      }
    }
    a1[25] = 0;
    qfree();
  }
  result = &stru_236898;
  v8 = a1 + 22;
  v9 = a1 + 10;
  *(v9 - 10) = &stru_236898;
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

