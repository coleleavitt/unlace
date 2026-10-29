__int64 (__fastcall **__fastcall sub_B89E0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 j; // rbx
  _QWORD *v10; // rax

  result = &off_22F6D8;
  *a1 = &off_22F6D8;
  v3 = a1[7];
  if ( v3 )
  {
    v4 = a1[8];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v8 = v6[1];
          if ( v8 )
          {
            for ( j = 0; j != v8; ++j )
            {
              v10 = (_QWORD *)(v7 + 32 * j);
              if ( *v10 )
              {
                v10[1] = 0;
                qfree();
                v7 = *v6;
              }
            }
          }
          v6[1] = 0;
          qfree();
          v3 = a1[7];
        }
      }
    }
    a1[8] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[4] )
  {
    a1[5] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

