__int64 __fastcall sub_15AE90(__int64 *a1)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 i; // rbx
  void *v5; // rdi

  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  v2 = a1[1];
  result = *a1;
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v5 = *(void **)(result + 8 * i);
      if ( v5 )
      {
        operator delete(v5, 0x18u);
        result = *a1;
      }
    }
  }
  if ( result )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}

