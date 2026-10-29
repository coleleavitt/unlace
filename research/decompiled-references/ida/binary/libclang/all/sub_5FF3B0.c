__int64 __fastcall sub_5FF3B0(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  _QWORD *v4; // rsi
  __int64 v5; // rbp
  _QWORD *v6; // rcx
  _QWORD *v7; // r12
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rdx
  _QWORD *v11; // r15
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  _QWORD *v19; // [rsp+0h] [rbp-68h]
  _QWORD *v20; // [rsp+8h] [rbp-60h]
  _QWORD *v21; // [rsp+10h] [rbp-58h]
  _QWORD *v22; // [rsp+18h] [rbp-50h]
  _QWORD *v23; // [rsp+20h] [rbp-48h]

  v1 = *a1;
  v2 = sub_2575D20();
  if ( v1 != v2 )
    return sub_25769A0(a1);
  v4 = (_QWORD *)a1[1];
  v5 = v2;
  v23 = v4;
  if ( v4 )
  {
    v19 = &v4[3 * *(v4 - 1)];
    if ( v4 == v19 )
    {
      v18 = 0;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v19 -= 3;
          if ( v5 == *v19 )
            break;
          sub_25769A0(v19);
          if ( v23 == v19 )
            goto LABEL_38;
        }
        v6 = (_QWORD *)v19[1];
        v22 = v6;
        if ( v6 )
        {
          v7 = &v6[3 * *(v6 - 1)];
          if ( v6 == v7 )
          {
            v17 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v7 -= 3;
                if ( v5 == *v7 )
                  break;
                sub_25769A0(v7);
                if ( v22 == v7 )
                  goto LABEL_35;
              }
              v8 = (_QWORD *)v7[1];
              v21 = v8;
              if ( v8 )
              {
                v9 = &v8[3 * *(v8 - 1)];
                if ( v8 == v9 )
                {
                  v16 = 0;
                }
                else
                {
                  do
                  {
                    while ( 1 )
                    {
                      v9 -= 3;
                      if ( v5 == *v9 )
                        break;
                      sub_25769A0(v9);
                      if ( v21 == v9 )
                        goto LABEL_32;
                    }
                    v10 = (_QWORD *)v9[1];
                    v20 = v10;
                    if ( v10 )
                    {
                      v11 = &v10[3 * *(v10 - 1)];
                      if ( v10 == v11 )
                      {
                        v15 = 0;
                      }
                      else
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v11 -= 3;
                            if ( v5 == *v11 )
                              break;
                            sub_25769A0(v11);
                            if ( v20 == v11 )
                              goto LABEL_29;
                          }
                          v12 = v11[1];
                          if ( v12 )
                          {
                            v13 = v12 + 24LL * *(_QWORD *)(v12 - 8);
                            if ( v12 == v13 )
                            {
                              v14 = 0;
                            }
                            else
                            {
                              do
                              {
                                v13 -= 24;
                                sub_5FF3B0(v13);
                              }
                              while ( v12 != v13 );
                              v14 = 24LL * *(_QWORD *)(v12 - 8);
                            }
                            operator delete[]((void *)(v12 - 8), v14 + 8);
                          }
                          v11[1] = 0;
                        }
                        while ( v20 != v11 );
LABEL_29:
                        v15 = 24LL * *(v20 - 1);
                      }
                      operator delete[](v20 - 1, v15 + 8);
                    }
                    v9[1] = 0;
                  }
                  while ( v21 != v9 );
LABEL_32:
                  v16 = 24LL * *(v21 - 1);
                }
                operator delete[](v21 - 1, v16 + 8);
              }
              v7[1] = 0;
            }
            while ( v22 != v7 );
LABEL_35:
            v17 = 24LL * *(v22 - 1);
          }
          operator delete[](v22 - 1, v17 + 8);
        }
        v19[1] = 0;
      }
      while ( v23 != v19 );
LABEL_38:
      v18 = 24LL * *(v23 - 1);
    }
    operator delete[](v23 - 1, v18 + 8);
  }
  a1[1] = 0;
  return (__int64)a1;
}

