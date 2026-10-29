__int64 __fastcall sub_FAAC0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rax

  result = linearray_t_dtr();
  if ( a1[6] )
  {
    a1[7] = 0;
    result = qfree();
  }
  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

