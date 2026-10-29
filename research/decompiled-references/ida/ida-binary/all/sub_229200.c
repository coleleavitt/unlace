void __fastcall sub_229200(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 j; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 k; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + (i << 8));
        v7 = v6[24];
        if ( v7 )
        {
          v6[25] = 0;
          qfree(v7, a2);
        }
        v8 = v6[15];
        if ( v8 )
        {
          v6[16] = 0;
          qfree(v8, a2);
        }
        v9 = v6[11];
        if ( v9 )
        {
          v6[12] = 0;
          qfree(v9, a2);
        }
        v10 = v6[8];
        if ( v10 )
        {
          v11 = v6[9];
          if ( v11 )
          {
            for ( j = 0; j != v11; ++j )
            {
              v13 = v10 + 32 * j;
              if ( *(int *)v13 >= -1 )
              {
                v14 = *(_QWORD *)(v13 + 8);
                if ( v14 )
                {
                  *(_QWORD *)(v13 + 16) = 0;
                  qfree(v14, a2);
                  v10 = v6[8];
                }
              }
            }
          }
          v6[9] = 0;
          qfree(v10, a2);
        }
        v15 = v6[5];
        if ( v15 )
        {
          v16 = v6[6];
          if ( v16 )
          {
            for ( k = 0; k != v16; ++k )
            {
              v18 = v15 + 32 * k;
              if ( *(int *)v18 >= -1 )
              {
                v19 = *(_QWORD *)(v18 + 8);
                if ( v19 )
                {
                  *(_QWORD *)(v18 + 16) = 0;
                  qfree(v19, a2);
                  v15 = v6[5];
                }
              }
            }
          }
          v6[6] = 0;
          qfree(v15, a2);
        }
        v20 = v6[1];
        if ( v20 )
        {
          v6[2] = 0;
          qfree(v20, a2);
        }
        v3 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v3, a2);
  }
}
