void __fastcall sub_113B0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // rdi
  __int64 *v7; // rbx
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 j; // r15
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // [rsp+0h] [rbp-48h]

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v7 = (__int64 *)(v2 + v4);
        v8 = *(_BYTE *)(v2 + v4 + 97);
        if ( v8 == 2 )
        {
          v9 = v7[3];
          if ( v9 )
          {
            v10 = v7[4];
            if ( v10 )
            {
              v11 = 0;
              for ( j = 0; j != v10; ++j )
              {
                v13 = *(_QWORD *)(v9 + v11);
                if ( v13 )
                {
                  *(_QWORD *)(v9 + v11 + 8) = 0;
                  v16 = v11;
                  qfree(v13);
                  v9 = v7[3];
                  v11 = v16;
                }
                v11 += 56;
              }
            }
            v7[4] = 0;
            qfree(v9);
          }
        }
        else if ( v8 == 1 )
        {
          v14 = v7[8];
          if ( v14 )
          {
            v7[9] = 0;
            qfree(v14);
          }
          v15 = v7[3];
          if ( v15 )
          {
            v7[4] = 0;
            qfree(v15);
          }
        }
        v6 = *v7;
        *((_BYTE *)v7 + 97) = 0;
        if ( v6 )
        {
          v7[1] = 0;
          qfree(v6);
        }
        v2 = *a1;
        v4 += 104;
      }
    }
    a1[1] = 0;
    qfree(v2);
  }
}
