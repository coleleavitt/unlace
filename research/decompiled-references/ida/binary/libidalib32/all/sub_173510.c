void __fastcall sub_173510(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  _QWORD *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r15
  __int64 j; // rbx
  _QWORD *v9; // rax
  __int64 v10; // [rsp+8h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v10 = a1[1];
    if ( v10 )
    {
      v3 = 0;
      for ( i = 0; i != v10; ++i )
      {
        v5 = (_QWORD *)(v2 + v3);
        if ( *(_QWORD *)(v2 + v3 + 128) )
        {
          v5[17] = 0;
          qfree();
        }
        v6 = v5[10];
        if ( v6 )
        {
          v7 = v5[11];
          if ( v7 )
          {
            for ( j = 0; j != v7; ++j )
            {
              v9 = (_QWORD *)(v6 + 24 * j);
              if ( *v9 )
              {
                v9[1] = 0;
                qfree();
                v6 = v5[10];
              }
            }
          }
          v5[11] = 0;
          qfree();
        }
        if ( v5[7] )
        {
          v5[8] = 0;
          qfree();
        }
        if ( v5[4] )
        {
          v5[5] = 0;
          qfree();
        }
        v2 = *a1;
        v3 += 152;
      }
    }
    a1[1] = 0;
    qfree();
  }
}

