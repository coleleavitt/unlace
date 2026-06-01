void __fastcall sub_69E630(_QWORD *a1)
{
  _QWORD *v1; // r15
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  _QWORD *v4; // r14
  _QWORD *v5; // rbp
  _QWORD *v6; // r13
  _QWORD *v7; // rax
  _DWORD *v8; // rdi
  bool v9; // zf
  _DWORD *v10; // rdi
  _QWORD *v11; // rbp
  _DWORD *v12; // rdi
  _QWORD *v13; // r13
  _DWORD *v14; // rdi
  _QWORD *v15; // rbp
  _DWORD *v16; // rdi
  _QWORD *v17; // rbx
  _DWORD *v18; // rdi
  _QWORD *v19; // rbp
  _DWORD *v20; // rdi
  _QWORD *v21; // rbx
  _DWORD *v22; // rdi
  _QWORD *v23; // rbx
  _DWORD *v24; // rdi
  _QWORD *v25; // rbx
  _QWORD *v26; // [rsp+0h] [rbp-58h]
  _QWORD *v27; // [rsp+8h] [rbp-50h]
  _QWORD *v28; // [rsp+10h] [rbp-48h]
  char *v29; // [rsp+18h] [rbp-40h]

  v28 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v26 = (_QWORD *)v28[3];
      if ( v26 )
      {
        while ( 1 )
        {
          v27 = (_QWORD *)v26[3];
          if ( v27 )
          {
            while ( 1 )
            {
              v1 = (_QWORD *)v27[3];
              if ( v1 )
              {
                while ( 1 )
                {
                  v2 = (_QWORD *)v1[3];
                  if ( v2 )
                  {
                    while ( 1 )
                    {
                      v3 = (_QWORD *)v2[3];
                      if ( v3 )
                      {
                        while ( 1 )
                        {
                          v4 = (_QWORD *)v3[3];
                          if ( v4 )
                          {
                            while ( 1 )
                            {
                              v5 = (_QWORD *)v4[3];
                              if ( v5 )
                              {
                                while ( 1 )
                                {
                                  v6 = (_QWORD *)v5[3];
                                  while ( v6 )
                                  {
                                    sub_69E630(v6[3]);
                                    v7 = v6;
                                    v29 = (char *)v6;
                                    v6 = (_QWORD *)v6[2];
                                    v8 = (_DWORD *)v7[7];
                                    if ( v8 )
                                    {
                                      v9 = (*v8)-- == 1;
                                      if ( v9 )
                                        operator delete[](v8);
                                    }
                                    sub_25D36E0(v29 + 48);
                                    sub_25A7550(v29 + 40);
                                    operator delete(v29, 0x48u);
                                  }
                                  v12 = (_DWORD *)v5[7];
                                  v13 = (_QWORD *)v5[2];
                                  if ( v12 )
                                  {
                                    v9 = (*v12)-- == 1;
                                    if ( v9 )
                                      operator delete[](v12);
                                  }
                                  sub_25D36E0(v5 + 6);
                                  sub_25A7550(v5 + 5);
                                  operator delete(v5, 0x48u);
                                  if ( !v13 )
                                    break;
                                  v5 = v13;
                                }
                              }
                              v18 = (_DWORD *)v4[7];
                              v19 = (_QWORD *)v4[2];
                              if ( v18 )
                              {
                                v9 = (*v18)-- == 1;
                                if ( v9 )
                                  operator delete[](v18);
                              }
                              sub_25D36E0(v4 + 6);
                              sub_25A7550(v4 + 5);
                              operator delete(v4, 0x48u);
                              if ( !v19 )
                                break;
                              v4 = v19;
                            }
                          }
                          v14 = (_DWORD *)v3[7];
                          v15 = (_QWORD *)v3[2];
                          if ( v14 )
                          {
                            v9 = (*v14)-- == 1;
                            if ( v9 )
                              operator delete[](v14);
                          }
                          sub_25D36E0(v3 + 6);
                          sub_25A7550(v3 + 5);
                          operator delete(v3, 0x48u);
                          if ( !v15 )
                            break;
                          v3 = v15;
                        }
                      }
                      v10 = (_DWORD *)v2[7];
                      v11 = (_QWORD *)v2[2];
                      if ( v10 )
                      {
                        v9 = (*v10)-- == 1;
                        if ( v9 )
                          operator delete[](v10);
                      }
                      sub_25D36E0(v2 + 6);
                      sub_25A7550(v2 + 5);
                      operator delete(v2, 0x48u);
                      if ( !v11 )
                        break;
                      v2 = v11;
                    }
                  }
                  v16 = (_DWORD *)v1[7];
                  v17 = (_QWORD *)v1[2];
                  if ( v16 )
                  {
                    v9 = (*v16)-- == 1;
                    if ( v9 )
                      operator delete[](v16);
                  }
                  sub_25D36E0(v1 + 6);
                  sub_25A7550(v1 + 5);
                  operator delete(v1, 0x48u);
                  if ( !v17 )
                    break;
                  v1 = v17;
                }
              }
              v20 = (_DWORD *)v27[7];
              v21 = (_QWORD *)v27[2];
              if ( v20 )
              {
                v9 = (*v20)-- == 1;
                if ( v9 )
                  operator delete[](v20);
              }
              sub_25D36E0(v27 + 6);
              sub_25A7550(v27 + 5);
              operator delete(v27, 0x48u);
              if ( !v21 )
                break;
              v27 = v21;
            }
          }
          v22 = (_DWORD *)v26[7];
          v23 = (_QWORD *)v26[2];
          if ( v22 )
          {
            v9 = (*v22)-- == 1;
            if ( v9 )
              operator delete[](v22);
          }
          sub_25D36E0(v26 + 6);
          sub_25A7550(v26 + 5);
          operator delete(v26, 0x48u);
          if ( !v23 )
            break;
          v26 = v23;
        }
      }
      v24 = (_DWORD *)v28[7];
      v25 = (_QWORD *)v28[2];
      if ( v24 )
      {
        v9 = (*v24)-- == 1;
        if ( v9 )
          operator delete[](v24);
      }
      sub_25D36E0(v28 + 6);
      sub_25A7550(v28 + 5);
      operator delete(v28, 0x48u);
      if ( !v25 )
        break;
      v28 = v25;
    }
  }
}

