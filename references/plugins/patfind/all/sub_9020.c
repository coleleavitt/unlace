__int64 __fastcall sub_9020(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 j; // r15
  __int64 *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 k; // r15
  __int64 *v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v22; // [rsp+8h] [rbp-40h]

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    v22 = *(_QWORD *)(result + 8);
    if ( v22 )
    {
      v3 = 0;
      for ( i = 0; i != v22; ++i )
      {
        v5 = (__int64 *)(v2 + v3);
        v6 = *(_QWORD *)(v2 + v3 + 48);
        if ( v6 )
        {
          v7 = v5[7];
          if ( v7 )
          {
            for ( j = 0; j != v7; ++j )
            {
              v9 = (__int64 *)(v6 + 80 * j);
              v10 = v9[6];
              if ( v10 )
              {
                v9[7] = 0;
                qfree(v10);
              }
              v11 = v9[3];
              if ( v11 )
              {
                v9[4] = 0;
                qfree(v11);
              }
              v12 = *v9;
              if ( *v9 )
              {
                v9[1] = 0;
                qfree(v12);
              }
              v6 = v5[6];
            }
          }
          v5[7] = 0;
          qfree(v6);
        }
        v13 = v5[3];
        if ( v13 )
        {
          v14 = v5[4];
          if ( v14 )
          {
            for ( k = 0; k != v14; ++k )
            {
              v16 = (__int64 *)(v13 + 80 * k);
              v17 = v16[6];
              if ( v17 )
              {
                v16[7] = 0;
                qfree(v17);
              }
              v18 = v16[3];
              if ( v18 )
              {
                v16[4] = 0;
                qfree(v18);
              }
              v19 = *v16;
              if ( *v16 )
              {
                v16[1] = 0;
                qfree(v19);
              }
              v13 = v5[3];
            }
          }
          v5[4] = 0;
          qfree(v13);
        }
        v20 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v20);
        }
        v3 += 88;
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}
