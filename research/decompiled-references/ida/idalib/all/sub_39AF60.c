void __fastcall sub_39AF60(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r14
  char *v4; // rbx
  char *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 i; // r15
  char *v9; // r13
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  __int64 v14; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+18h] [rbp-40h]

  if ( a1 )
  {
    v2 = (char *)a1[1];
    if ( v2 )
    {
      v16 = a1[2];
      if ( v16 )
      {
        v14 = 0;
        v3 = 0;
        do
        {
          v4 = &v2[v3];
          v5 = *(char **)&v2[v3 + 56];
          if ( v5 )
          {
            v6 = *((_QWORD *)v4 + 8);
            if ( v6 )
            {
              v7 = 0;
              for ( i = 0; i != v6; ++i )
              {
                v9 = &v5[v7];
                v10 = *(void **)&v5[v7 + 24];
                if ( v10 )
                {
                  *((_QWORD *)v9 + 4) = 0;
                  qfree(v10);
                }
                v11 = *(void **)v9;
                if ( *(_QWORD *)v9 )
                {
                  *((_QWORD *)v9 + 1) = 0;
                  qfree(v11);
                }
                v5 = *((char **)v4 + 7);
                v7 += 56;
              }
            }
            *((_QWORD *)v4 + 8) = 0;
            qfree(v5);
          }
          v12 = *((void **)v4 + 4);
          if ( v12 )
          {
            *((_QWORD *)v4 + 5) = 0;
            qfree(v12);
          }
          v13 = *(void **)v4;
          if ( *(_QWORD *)v4 )
          {
            *((_QWORD *)v4 + 1) = 0;
            qfree(v13);
          }
          ++v14;
          v3 += 88;
          v2 = (char *)a1[1];
        }
        while ( v16 != v14 );
      }
      a1[2] = 0;
      qfree(v2);
    }
    operator delete(a1, 0x48u);
  }
}
