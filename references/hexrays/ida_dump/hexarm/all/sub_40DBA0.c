__int64 __fastcall sub_40DBA0(__int64 *a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  char v3; // al
  __int64 v4; // r13
  char v5; // al
  __int64 v6; // r14
  char v7; // al
  __int64 v8; // r15
  char v9; // al
  __int64 v10; // rbp
  char v11; // al
  __int64 v12; // r12
  char v13; // al
  __int64 v14; // r9
  char v15; // al
  __int64 v16; // rax
  char v17; // dl
  __int64 v18; // [rsp+0h] [rbp-58h]
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  __int64 v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+18h] [rbp-40h]

  result = *a2;
  v19 = (__int64)a2;
  if ( (_BYTE)result == 1 )
    return sub_63880(a1, *(_DWORD *)(v19 + 8), *(_DWORD *)(v19 + 4));
  while ( (_BYTE)result == 14 )
  {
    v18 = *(_QWORD *)(v19 + 8);
    v3 = *(_BYTE *)v18;
    if ( *(_BYTE *)v18 == 1 )
    {
LABEL_34:
      sub_63880(a1, *(_DWORD *)(v18 + 8), *(_DWORD *)(v18 + 4));
    }
    else
    {
      while ( v3 == 14 )
      {
        v4 = *(_QWORD *)(v18 + 8);
        v5 = *(_BYTE *)v4;
        if ( *(_BYTE *)v4 == 1 )
        {
LABEL_32:
          sub_63880(a1, *(_DWORD *)(v4 + 8), *(_DWORD *)(v4 + 4));
        }
        else
        {
          while ( v5 == 14 )
          {
            v6 = *(_QWORD *)(v4 + 8);
            v7 = *(_BYTE *)v6;
            if ( *(_BYTE *)v6 == 1 )
            {
LABEL_30:
              sub_63880(a1, *(_DWORD *)(v6 + 8), *(_DWORD *)(v6 + 4));
            }
            else
            {
              while ( v7 == 14 )
              {
                v8 = *(_QWORD *)(v6 + 8);
                v9 = *(_BYTE *)v8;
                if ( *(_BYTE *)v8 == 1 )
                {
LABEL_28:
                  sub_63880(a1, *(_DWORD *)(v8 + 8), *(_DWORD *)(v8 + 4));
                }
                else
                {
                  while ( v9 == 14 )
                  {
                    v10 = *(_QWORD *)(v8 + 8);
                    v11 = *(_BYTE *)v10;
                    if ( *(_BYTE *)v10 == 1 )
                    {
LABEL_26:
                      sub_63880(a1, *(_DWORD *)(v10 + 8), *(_DWORD *)(v10 + 4));
                    }
                    else
                    {
                      while ( v11 == 14 )
                      {
                        v12 = *(_QWORD *)(v10 + 8);
                        v13 = *(_BYTE *)v12;
                        if ( *(_BYTE *)v12 == 1 )
                        {
LABEL_24:
                          sub_63880(a1, *(_DWORD *)(v12 + 8), *(_DWORD *)(v12 + 4));
                        }
                        else
                        {
                          while ( v13 == 14 )
                          {
                            v14 = *(_QWORD *)(v12 + 8);
                            v15 = *(_BYTE *)v14;
                            if ( *(_BYTE *)v14 == 1 )
                            {
LABEL_22:
                              sub_63880(a1, *(_DWORD *)(v14 + 8), *(_DWORD *)(v14 + 4));
                            }
                            else
                            {
                              while ( v15 == 14 )
                              {
                                v16 = *(_QWORD *)(v14 + 8);
                                v17 = *(_BYTE *)v16;
                                if ( *(_BYTE *)v16 == 1 )
                                {
LABEL_20:
                                  v21 = v14;
                                  sub_63880(a1, *(_DWORD *)(v16 + 8), *(_DWORD *)(v16 + 4));
                                  v14 = v21;
                                }
                                else
                                {
                                  while ( v17 == 14 )
                                  {
                                    v22 = v14;
                                    v20 = v16;
                                    sub_40DBA0(a1, *(_QWORD *)(v16 + 8));
                                    v14 = v22;
                                    v16 = *(_QWORD *)(v20 + 8) + 16LL;
                                    v17 = *(_BYTE *)v16;
                                    if ( *(_BYTE *)v16 == 1 )
                                      goto LABEL_20;
                                  }
                                }
                                v14 = *(_QWORD *)(v14 + 8) + 16LL;
                                v15 = *(_BYTE *)v14;
                                if ( *(_BYTE *)v14 == 1 )
                                  goto LABEL_22;
                              }
                            }
                            v12 = *(_QWORD *)(v12 + 8) + 16LL;
                            v13 = *(_BYTE *)v12;
                            if ( *(_BYTE *)v12 == 1 )
                              goto LABEL_24;
                          }
                        }
                        v10 = *(_QWORD *)(v10 + 8) + 16LL;
                        v11 = *(_BYTE *)v10;
                        if ( *(_BYTE *)v10 == 1 )
                          goto LABEL_26;
                      }
                    }
                    v8 = *(_QWORD *)(v8 + 8) + 16LL;
                    v9 = *(_BYTE *)v8;
                    if ( *(_BYTE *)v8 == 1 )
                      goto LABEL_28;
                  }
                }
                v6 = *(_QWORD *)(v6 + 8) + 16LL;
                v7 = *(_BYTE *)v6;
                if ( *(_BYTE *)v6 == 1 )
                  goto LABEL_30;
              }
            }
            v4 = *(_QWORD *)(v4 + 8) + 16LL;
            v5 = *(_BYTE *)v4;
            if ( *(_BYTE *)v4 == 1 )
              goto LABEL_32;
          }
        }
        v3 = *(_BYTE *)(*(_QWORD *)(v18 + 8) + 16LL);
        v18 = *(_QWORD *)(v18 + 8) + 16LL;
        if ( v3 == 1 )
          goto LABEL_34;
      }
    }
    result = *(unsigned __int8 *)(*(_QWORD *)(v19 + 8) + 16LL);
    v19 = *(_QWORD *)(v19 + 8) + 16LL;
    if ( (_BYTE)result == 1 )
      return sub_63880(a1, *(_DWORD *)(v19 + 8), *(_DWORD *)(v19 + 4));
  }
  return result;
}
