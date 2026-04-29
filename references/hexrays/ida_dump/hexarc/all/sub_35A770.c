void __fastcall sub_35A770(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 *v8; // rdx
  __int64 *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 j; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 k; // rbx
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+8h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = v2 + v4;
        v7 = *(_QWORD *)(v2 + v4 + 8);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 16) = 0;
          qfree(v7);
        }
        v8 = *(__int64 **)v6;
        if ( *(_QWORD *)v6 )
        {
          if ( (*((_DWORD *)v8 + 26))-- == 1 )
          {
            v10 = *(__int64 **)v6;
            if ( *(_QWORD *)v6 )
            {
              sub_2515F0(*(__int64 **)v6);
              v11 = v10[23];
              if ( v11 )
              {
                v12 = v10[24];
                if ( v12 )
                {
                  for ( j = 0; j != v12; ++j )
                  {
                    v14 = (__int64 *)(v11 + 24 * j);
                    v15 = *v14;
                    if ( *v14 )
                    {
                      v14[1] = 0;
                      v22 = v12;
                      qfree(v15);
                      v11 = v10[23];
                      v12 = v22;
                    }
                  }
                }
                v10[24] = 0;
                qfree(v11);
              }
              v16 = v10[20];
              if ( v16 )
              {
                v10[21] = 0;
                qfree(v16);
              }
              v17 = v10[16];
              if ( v17 )
              {
                v18 = v10[17];
                if ( v18 )
                {
                  for ( k = 0; k != v18; ++k )
                  {
                    v20 = (__int64 *)(v17 + 32 * k);
                    v21 = *v20;
                    if ( *v20 )
                    {
                      v20[1] = 0;
                      v23 = v18;
                      qfree(v21);
                      v17 = v10[16];
                      v18 = v23;
                    }
                  }
                }
                v10[17] = 0;
                qfree(v17);
              }
              sub_24DCD0((__int64)(v10 + 2));
              j__qfree(v10);
            }
          }
        }
        v2 = *a1;
        v4 += 120;
      }
    }
    a1[1] = 0;
    qfree(v2);
  }
}
