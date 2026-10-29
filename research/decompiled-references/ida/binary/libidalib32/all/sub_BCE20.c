struct _Unwind_Exception *__fastcall sub_BCE20(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  __int64 v4; // rax
  struct _Unwind_Exception *result; // rax
  _QWORD *v6; // rbx

  v1 = a1[28];
  *a1 = off_22F498;
  a1[23] = &off_22F560;
  if ( v1 )
  {
    v2 = a1[29];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = v1 + 32 * i;
        if ( *(_QWORD *)(v4 + 8) )
        {
          *(_QWORD *)(v4 + 16) = 0;
          qfree();
          v1 = a1[28];
        }
      }
    }
    a1[29] = 0;
    qfree();
  }
  if ( a1[25] )
  {
    a1[26] = 0;
    qfree();
  }
  result = &stru_235898;
  v6 = a1 + 19;
  *a1 = &stru_235898;
  do
  {
    if ( *v6 )
    {
      v6[1] = 0;
      result = (struct _Unwind_Exception *)qfree();
    }
    v6 -= 3;
  }
  while ( v6 != a1 + 7 );
  return result;
}

