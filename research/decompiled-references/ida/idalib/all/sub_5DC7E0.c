void __fastcall sub_5DC7E0(__int64 a1)
{
  _BYTE *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  void *v6; // rdi
  char *v7; // rbx
  char v8; // al
  char *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 j; // r15
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // [rsp+0h] [rbp-48h]

  v2 = *(_BYTE **)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v7 = &v2[v4];
        v8 = v2[v4 + 97];
        if ( v8 == 2 )
        {
          v9 = *((char **)v7 + 3);
          if ( v9 )
          {
            v10 = *((_QWORD *)v7 + 4);
            if ( v10 )
            {
              v11 = 0;
              for ( j = 0; j != v10; ++j )
              {
                v13 = *(void **)&v9[v11];
                if ( v13 )
                {
                  *(_QWORD *)&v9[v11 + 8] = 0;
                  v16 = v11;
                  qfree(v13);
                  v9 = *((char **)v7 + 3);
                  v11 = v16;
                }
                v11 += 56;
              }
            }
            *((_QWORD *)v7 + 4) = 0;
            qfree(v9);
          }
        }
        else if ( v8 == 1 )
        {
          v14 = *((void **)v7 + 8);
          if ( v14 )
          {
            *((_QWORD *)v7 + 9) = 0;
            qfree(v14);
          }
          v15 = *((void **)v7 + 3);
          if ( v15 )
          {
            *((_QWORD *)v7 + 4) = 0;
            qfree(v15);
          }
        }
        v6 = *(void **)v7;
        v7[97] = 0;
        if ( v6 )
        {
          *((_QWORD *)v7 + 1) = 0;
          qfree(v6);
        }
        v2 = *(_BYTE **)a1;
        v4 += 104;
      }
    }
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
  }
}
