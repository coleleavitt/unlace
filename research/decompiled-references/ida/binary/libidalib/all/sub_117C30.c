struct _Unwind_Exception *__fastcall sub_117C30(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax
  struct _Unwind_Exception *result; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rdi

  *a1 = off_231D58;
  if ( a1[26] )
  {
    a1[27] = 0;
    qfree();
  }
  v1 = a1[23];
  if ( v1 )
  {
    v2 = a1[24];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = a1[23];
        }
      }
    }
    a1[24] = 0;
    qfree();
  }
  result = &stru_236898;
  v6 = a1 + 22;
  v7 = a1 + 10;
  *a1 = &stru_236898;
  do
  {
    v8 = *(v6 - 3);
    v6 -= 3;
    if ( v8 )
    {
      v6[1] = 0;
      result = (struct _Unwind_Exception *)qfree();
    }
  }
  while ( v7 != v6 );
  return result;
}

