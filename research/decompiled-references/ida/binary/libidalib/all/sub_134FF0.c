struct _Unwind_Exception *__fastcall sub_134FF0(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 i; // rbx
  struct _Unwind_Exception *result; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rdi

  *a1 = off_2328C0;
  if ( a1[29] )
  {
    a1[30] = 0;
    qfree();
  }
  v1 = a1[27];
  if ( v1 )
  {
    for ( i = 0; i != v1; ++i )
      qfree();
  }
  if ( a1[26] )
  {
    a1[27] = 0;
    qfree();
  }
  result = &stru_236898;
  v4 = a1 + 22;
  v5 = a1 + 10;
  *a1 = &stru_236898;
  do
  {
    v6 = *(v4 - 3);
    v4 -= 3;
    if ( v6 )
    {
      v4[1] = 0;
      result = (struct _Unwind_Exception *)qfree();
    }
  }
  while ( v5 != v4 );
  return result;
}

