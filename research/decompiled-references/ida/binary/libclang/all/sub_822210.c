void __fastcall sub_822210(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rbp
  __int64 v10; // rbx
  _QWORD *v11; // rbx
  _QWORD *v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // [rsp+0h] [rbp-58h]
  _QWORD *v15; // [rsp+8h] [rbp-50h]
  _QWORD *v16; // [rsp+10h] [rbp-48h]
  __int64 v17; // [rsp+18h] [rbp-40h]
  __int64 v18; // [rsp+18h] [rbp-40h]

  v16 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v14 = (_QWORD *)v16[3];
      if ( v14 )
      {
        while ( 1 )
        {
          v15 = (_QWORD *)v14[3];
          if ( v15 )
          {
            while ( 1 )
            {
              v1 = v15[3];
              if ( v1 )
              {
                while ( 1 )
                {
                  v2 = *(_QWORD *)(v1 + 24);
                  if ( v2 )
                  {
                    while ( 1 )
                    {
                      v3 = *(_QWORD *)(v2 + 24);
                      if ( v3 )
                      {
                        while ( 1 )
                        {
                          v4 = *(_QWORD *)(v3 + 24);
                          if ( v4 )
                          {
                            while ( 1 )
                            {
                              v5 = *(_QWORD *)(v4 + 24);
                              if ( v5 )
                              {
                                while ( 1 )
                                {
                                  v6 = *(_QWORD *)(v5 + 24);
                                  if ( v6 )
                                  {
                                    while ( 1 )
                                    {
                                      sub_822210(*(_QWORD *)(v6 + 24));
                                      v17 = *(_QWORD *)(v6 + 16);
                                      if ( *(_DWORD *)(v6 + 40) > 1u )
                                        sub_69F740(v6 + 40);
                                      operator delete((void *)v6, 0x68u);
                                      if ( !v17 )
                                        break;
                                      v6 = v17;
                                    }
                                  }
                                  v7 = *(_QWORD *)(v5 + 16);
                                  if ( *(_DWORD *)(v5 + 40) > 1u )
                                    sub_69F740(v5 + 40);
                                  operator delete((void *)v5, 0x68u);
                                  if ( !v7 )
                                    break;
                                  v5 = v7;
                                }
                              }
                              v18 = *(_QWORD *)(v4 + 16);
                              if ( *(_DWORD *)(v4 + 40) > 1u )
                                sub_69F740(v4 + 40);
                              operator delete((void *)v4, 0x68u);
                              if ( !v18 )
                                break;
                              v4 = v18;
                            }
                          }
                          v9 = *(_QWORD *)(v3 + 16);
                          if ( *(_DWORD *)(v3 + 40) > 1u )
                            sub_69F740(v3 + 40);
                          operator delete((void *)v3, 0x68u);
                          if ( !v9 )
                            break;
                          v3 = v9;
                        }
                      }
                      v8 = *(_QWORD *)(v2 + 16);
                      if ( *(_DWORD *)(v2 + 40) > 1u )
                        sub_69F740(v2 + 40);
                      operator delete((void *)v2, 0x68u);
                      if ( !v8 )
                        break;
                      v2 = v8;
                    }
                  }
                  v10 = *(_QWORD *)(v1 + 16);
                  if ( *(_DWORD *)(v1 + 40) > 1u )
                    sub_69F740(v1 + 40);
                  operator delete((void *)v1, 0x68u);
                  if ( !v10 )
                    break;
                  v1 = v10;
                }
              }
              v11 = (_QWORD *)v15[2];
              if ( *((_DWORD *)v15 + 10) > 1u )
              {
                sub_69F740((__int64)(v15 + 5));
                operator delete(v15, 0x68u);
                if ( !v11 )
                  break;
              }
              else
              {
                operator delete(v15, 0x68u);
                if ( !v11 )
                  break;
              }
              v15 = v11;
            }
          }
          v12 = (_QWORD *)v14[2];
          if ( *((_DWORD *)v14 + 10) > 1u )
          {
            sub_69F740((__int64)(v14 + 5));
            operator delete(v14, 0x68u);
            if ( !v12 )
              break;
          }
          else
          {
            operator delete(v14, 0x68u);
            if ( !v12 )
              break;
          }
          v14 = v12;
        }
      }
      v13 = (_QWORD *)v16[2];
      if ( *((_DWORD *)v16 + 10) > 1u )
      {
        sub_69F740((__int64)(v16 + 5));
        operator delete(v16, 0x68u);
        if ( !v13 )
          return;
      }
      else
      {
        operator delete(v16, 0x68u);
        if ( !v13 )
          return;
      }
      v16 = v13;
    }
  }
}

