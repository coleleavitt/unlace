struct _Unwind_Exception *__fastcall sub_119300(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  _QWORD **v4; // rbx
  __int64 v5; // rbp
  struct _Unwind_Exception *result; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // r12

  *a1 = off_231F18;
  if ( a1[1068] )
  {
    a1[1069] = 0;
    qfree();
  }
  v2 = a1[1066];
  v3 = a1[1065];
  v4 = (_QWORD **)a1[1065];
  if ( 8LL * a1[1066] )
  {
    do
    {
      v5 = (__int64)*v4;
      if ( *v4 )
      {
        sub_119040(*v4);
        if ( *(_QWORD *)(v5 + 4240) )
        {
          *(_QWORD *)(v5 + 4248) = 0;
          qfree();
        }
        qfree();
        v3 = a1[1065];
        v2 = a1[1066];
      }
      ++v4;
    }
    while ( v4 != (_QWORD **)(v3 + 8 * v2) );
  }
  if ( v3 )
  {
    a1[1066] = 0;
    qfree();
  }
  result = &stru_236898;
  v7 = a1 + 19;
  v8 = a1 + 7;
  *(v8 - 7) = &stru_236898;
  do
  {
    if ( *v7 )
    {
      v7[1] = 0;
      result = (struct _Unwind_Exception *)qfree();
    }
    v7 -= 3;
  }
  while ( v7 != v8 );
  return result;
}

