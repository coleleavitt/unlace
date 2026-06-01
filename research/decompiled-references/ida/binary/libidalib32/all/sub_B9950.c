void __fastcall sub_B9950(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  __int64 *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 j; // rbx
  _QWORD *v9; // rax

  *a1 = &off_22F6D8;
  v2 = a1[7];
  if ( v2 )
  {
    v3 = a1[8];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 24 * i);
        v6 = *v5;
        if ( *v5 )
        {
          v7 = v5[1];
          if ( v7 )
          {
            for ( j = 0; j != v7; ++j )
            {
              v9 = (_QWORD *)(v6 + 32 * j);
              if ( *v9 )
              {
                v9[1] = 0;
                qfree();
                v6 = *v5;
              }
            }
          }
          v5[1] = 0;
          qfree();
          v2 = a1[7];
        }
      }
    }
    a1[8] = 0;
    qfree();
  }
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  operator delete(a1, 0x50u);
}

