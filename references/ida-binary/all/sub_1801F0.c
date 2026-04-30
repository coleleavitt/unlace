void __fastcall sub_1801F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 i; // r12
  _QWORD *v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 j; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // [rsp+8h] [rbp-40h]

  v6 = *a1;
  if ( v6 )
  {
    v17 = a1[1];
    if ( v17 )
    {
      v7 = 0;
      for ( i = 0; i != v17; ++i )
      {
        v9 = (_QWORD *)(v6 + v7);
        v10 = *(_QWORD *)(v6 + v7 + 128);
        if ( v10 )
        {
          v9[17] = 0;
          qfree(v10, a2, a3, a4, a5);
        }
        a3 = v9[10];
        if ( a3 )
        {
          v11 = v9[11];
          if ( v11 )
          {
            for ( j = 0; j != v11; ++j )
            {
              v13 = (__int64 *)(a3 + 24 * j);
              v14 = *v13;
              if ( *v13 )
              {
                v13[1] = 0;
                qfree(v14, a2, a3, a4, a5);
                a3 = v9[10];
              }
            }
          }
          v9[11] = 0;
          qfree(a3, a2, a3, a4, a5);
        }
        v15 = v9[7];
        if ( v15 )
        {
          v9[8] = 0;
          qfree(v15, a2, a3, a4, a5);
        }
        v16 = v9[4];
        if ( v16 )
        {
          v9[5] = 0;
          qfree(v16, a2, a3, a4, a5);
        }
        v6 = *a1;
        v7 += 152;
      }
    }
    a1[1] = 0;
    qfree(v6, a2, a3, a4, a5);
  }
}
