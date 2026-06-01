__int64 (__fastcall **__fastcall sub_9BEC0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 i; // rbp
  _QWORD *v7; // rbx

  result = off_22E5C8;
  *a1 = off_22E5C8;
  v3 = a1[8];
  if ( v3 )
  {
    v4 = a1[9];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (_QWORD *)(v3 + v5);
        if ( *(_QWORD *)(v3 + v5 + 32) )
        {
          v7[5] = 0;
          qfree();
        }
        if ( v7[1] )
        {
          v7[2] = 0;
          qfree();
        }
        v3 = a1[8];
        v5 += 56;
      }
    }
    a1[9] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

