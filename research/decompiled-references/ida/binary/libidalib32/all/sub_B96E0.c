void __fastcall sub_B96E0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 i; // rbx
  _QWORD *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 j; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 k; // r14
  __int64 v13; // rax
  __int64 v14; // [rsp+8h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v14 = a1[1];
    if ( v14 )
    {
      v3 = 0;
      for ( i = 0; i != v14; ++i )
      {
        v5 = (_QWORD *)(v2 + v3);
        if ( *(_QWORD *)(v2 + v3 + 176) )
        {
          v5[23] = 0;
          qfree();
        }
        if ( v5[15] )
        {
          v5[16] = 0;
          qfree();
        }
        if ( v5[11] )
        {
          v5[12] = 0;
          qfree();
        }
        v6 = v5[8];
        if ( v6 )
        {
          v7 = v5[9];
          if ( v7 )
          {
            for ( j = 0; j != v7; ++j )
            {
              v9 = v6 + 32 * j;
              if ( *(int *)v9 >= -1 && *(_QWORD *)(v9 + 8) )
              {
                *(_QWORD *)(v9 + 16) = 0;
                qfree();
                v6 = v5[8];
              }
            }
          }
          v5[9] = 0;
          qfree();
        }
        v10 = v5[5];
        if ( v10 )
        {
          v11 = v5[6];
          if ( v11 )
          {
            for ( k = 0; k != v11; ++k )
            {
              v13 = v10 + 32 * k;
              if ( *(int *)v13 >= -1 && *(_QWORD *)(v13 + 8) )
              {
                *(_QWORD *)(v13 + 16) = 0;
                qfree();
                v10 = v5[5];
              }
            }
          }
          v5[6] = 0;
          qfree();
        }
        if ( v5[1] )
        {
          v5[2] = 0;
          qfree();
        }
        v2 = *a1;
        v3 += 232;
      }
    }
    a1[1] = 0;
    qfree();
  }
}

