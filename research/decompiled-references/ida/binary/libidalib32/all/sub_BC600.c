struct _Unwind_Exception *__fastcall sub_BC600(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  __int64 v4; // rax
  struct _Unwind_Exception *result; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rdi

  v1 = a1[23];
  *a1 = off_22F228;
  if ( v1 )
  {
    v2 = a1[24];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = v1 + 32 * i;
        if ( *(_QWORD *)(v4 + 8) )
        {
          *(_QWORD *)(v4 + 16) = 0;
          qfree();
          v1 = a1[23];
        }
      }
    }
    a1[24] = 0;
    qfree();
  }
  result = &stru_235898;
  v6 = a1 + 22;
  v7 = a1 + 10;
  *a1 = &stru_235898;
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

