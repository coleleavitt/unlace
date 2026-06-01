__int64 __fastcall sub_221ED0(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 i; // rbx
  __int64 result; // rax

  if ( *a1 )
  {
    v1 = a1[1];
    if ( v1 )
    {
      for ( i = 0; i != v1; ++i )
        qfree();
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}
