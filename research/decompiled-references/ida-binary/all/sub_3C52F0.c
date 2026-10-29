void __fastcall sub_3C52F0(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // r15
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *v5; // r12
  _QWORD *v6; // r14
  _QWORD *v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  _QWORD *v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  _QWORD *v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  _QWORD *v21; // r12
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  _QWORD *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  _QWORD *v29; // r13
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  _QWORD *v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  _QWORD *v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  _QWORD *v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rdi
  _QWORD *v44; // [rsp+0h] [rbp-58h]
  _QWORD *v45; // [rsp+8h] [rbp-50h]
  _QWORD *v46; // [rsp+10h] [rbp-48h]
  _QWORD *v47; // [rsp+18h] [rbp-40h]

  v46 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v44 = (_QWORD *)v46[3];
      if ( v44 )
      {
        while ( 1 )
        {
          v45 = (_QWORD *)v44[3];
          if ( v45 )
          {
            while ( 1 )
            {
              v2 = (_QWORD *)v45[3];
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
                              if ( v6 )
                              {
                                while ( 1 )
                                {
                                  v7 = (_QWORD *)v6[3];
                                  while ( v7 )
                                  {
                                    sub_3C52F0(v7[3]);
                                    v8 = v7;
                                    v47 = v7;
                                    v7 = (_QWORD *)v7[2];
                                    v9 = v8[12];
                                    if ( v9 )
                                    {
                                      v8[13] = 0;
                                      qfree(v9, a2);
                                    }
                                    v10 = v47[9];
                                    if ( v10 )
                                    {
                                      v47[10] = 0;
                                      qfree(v10, a2);
                                    }
                                    v11 = v47[6];
                                    if ( v11 )
                                    {
                                      v47[7] = 0;
                                      qfree(v11, a2);
                                    }
                                    a2 = (const char *)&qword_80;
                                    operator delete(v47, 0x80u);
                                  }
                                  v12 = v6[12];
                                  v13 = (_QWORD *)v6[2];
                                  if ( v12 )
                                  {
                                    v6[13] = 0;
                                    qfree(v12, a2);
                                  }
                                  v14 = v6[9];
                                  if ( v14 )
                                  {
                                    v6[10] = 0;
                                    qfree(v14, a2);
                                  }
                                  v15 = v6[6];
                                  if ( v15 )
                                  {
                                    v6[7] = 0;
                                    qfree(v15, a2);
                                  }
                                  a2 = (const char *)&qword_80;
                                  operator delete(v6, 0x80u);
                                  if ( !v13 )
                                    break;
                                  v6 = v13;
                                }
                              }
                              v28 = v5[12];
                              v29 = (_QWORD *)v5[2];
                              if ( v28 )
                              {
                                v5[13] = 0;
                                qfree(v28, a2);
                              }
                              v30 = v5[9];
                              if ( v30 )
                              {
                                v5[10] = 0;
                                qfree(v30, a2);
                              }
                              v31 = v5[6];
                              if ( v31 )
                              {
                                v5[7] = 0;
                                qfree(v31, a2);
                              }
                              a2 = (const char *)&qword_80;
                              operator delete(v5, 0x80u);
                              if ( !v29 )
                                break;
                              v5 = v29;
                            }
                          }
                          v20 = v4[12];
                          v21 = (_QWORD *)v4[2];
                          if ( v20 )
                          {
                            v4[13] = 0;
                            qfree(v20, a2);
                          }
                          v22 = v4[9];
                          if ( v22 )
                          {
                            v4[10] = 0;
                            qfree(v22, a2);
                          }
                          v23 = v4[6];
                          if ( v23 )
                          {
                            v4[7] = 0;
                            qfree(v23, a2);
                          }
                          a2 = (const char *)&qword_80;
                          operator delete(v4, 0x80u);
                          if ( !v21 )
                            break;
                          v4 = v21;
                        }
                      }
                      v16 = v3[12];
                      v17 = (_QWORD *)v3[2];
                      if ( v16 )
                      {
                        v3[13] = 0;
                        qfree(v16, a2);
                      }
                      v18 = v3[9];
                      if ( v18 )
                      {
                        v3[10] = 0;
                        qfree(v18, a2);
                      }
                      v19 = v3[6];
                      if ( v19 )
                      {
                        v3[7] = 0;
                        qfree(v19, a2);
                      }
                      a2 = (const char *)&qword_80;
                      operator delete(v3, 0x80u);
                      if ( !v17 )
                        break;
                      v3 = v17;
                    }
                  }
                  v24 = v2[12];
                  v25 = (_QWORD *)v2[2];
                  if ( v24 )
                  {
                    v2[13] = 0;
                    qfree(v24, a2);
                  }
                  v26 = v2[9];
                  if ( v26 )
                  {
                    v2[10] = 0;
                    qfree(v26, a2);
                  }
                  v27 = v2[6];
                  if ( v27 )
                  {
                    v2[7] = 0;
                    qfree(v27, a2);
                  }
                  a2 = (const char *)&qword_80;
                  operator delete(v2, 0x80u);
                  if ( !v25 )
                    break;
                  v2 = v25;
                }
              }
              v32 = v45[12];
              v33 = (_QWORD *)v45[2];
              if ( v32 )
              {
                v45[13] = 0;
                qfree(v32, a2);
              }
              v34 = v45[9];
              if ( v34 )
              {
                v45[10] = 0;
                qfree(v34, a2);
              }
              v35 = v45[6];
              if ( v35 )
              {
                v45[7] = 0;
                qfree(v35, a2);
              }
              a2 = (const char *)&qword_80;
              operator delete(v45, 0x80u);
              if ( !v33 )
                break;
              v45 = v33;
            }
          }
          v36 = v44[12];
          v37 = (_QWORD *)v44[2];
          if ( v36 )
          {
            v44[13] = 0;
            qfree(v36, a2);
          }
          v38 = v44[9];
          if ( v38 )
          {
            v44[10] = 0;
            qfree(v38, a2);
          }
          v39 = v44[6];
          if ( v39 )
          {
            v44[7] = 0;
            qfree(v39, a2);
          }
          a2 = (const char *)&qword_80;
          operator delete(v44, 0x80u);
          if ( !v37 )
            break;
          v44 = v37;
        }
      }
      v40 = v46[12];
      v41 = (_QWORD *)v46[2];
      if ( v40 )
      {
        v46[13] = 0;
        qfree(v40, a2);
      }
      v42 = v46[9];
      if ( v42 )
      {
        v46[10] = 0;
        qfree(v42, a2);
      }
      v43 = v46[6];
      if ( v43 )
      {
        v46[7] = 0;
        qfree(v43, a2);
      }
      a2 = (const char *)&qword_80;
      operator delete(v46, 0x80u);
      if ( !v41 )
        break;
      v46 = v41;
    }
  }
}
