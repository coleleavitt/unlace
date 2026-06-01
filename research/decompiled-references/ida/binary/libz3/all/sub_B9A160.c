void __fastcall sub_B9A160(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int16 v10; // dx
  __int64 *v11; // r12
  __int64 v12; // rax
  __int64 *v13; // r13
  __int64 v14; // rax
  __int16 v15; // dx
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int16 v21; // cx
  __int64 *v22; // r10
  __int64 v23; // rdx
  __int64 *v24; // r11
  __int64 v25; // rsi
  __int16 v26; // dx
  __int64 *v27; // [rsp+8h] [rbp-58h]
  __int64 v28; // [rsp+10h] [rbp-50h]
  __int64 *v29; // [rsp+18h] [rbp-48h]
  __int64 *v30; // [rsp+20h] [rbp-40h]

  ++*a3;
  if ( (*(_BYTE *)(a2 + 30) & 1) == 0 )
  {
    v6 = (__int64 *)(a2 + 32);
    v7 = 8LL * *(unsigned int *)(a2 + 24);
    v8 = a2 + 32 + v7;
    if ( v7 )
    {
      do
      {
        v9 = *v6;
        v10 = *(_WORD *)(*v6 + 4);
        if ( v10 == 1 )
        {
          ++*a3;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL * *(unsigned int *)(v9 + 16)) == -1 )
            ++*a4;
        }
        else if ( !v10 )
        {
          ++*a3;
          if ( (*(_BYTE *)(v9 + 30) & 1) == 0 )
          {
            v11 = (__int64 *)(v9 + 32);
            v12 = *(unsigned int *)(v9 + 24);
            v13 = &v11[v12];
            if ( v12 * 8 )
            {
              v14 = *v11;
              v15 = *(_WORD *)(*v11 + 4);
              if ( v15 != 1 )
              {
LABEL_12:
                if ( !v15 )
                {
                  ++*a3;
                  if ( (*(_BYTE *)(v14 + 30) & 1) == 0 )
                  {
                    v16 = (__int64 *)(v14 + 32);
                    v17 = 8LL * *(unsigned int *)(v14 + 24);
                    v18 = v14 + 32 + v17;
                    if ( v17 )
                    {
                      v19 = (__int64 *)(v14 + 32);
                      v20 = *v16;
                      v21 = *(_WORD *)(*v16 + 4);
                      if ( v21 == 1 )
                        goto LABEL_24;
                      while ( 1 )
                      {
                        if ( !v21 )
                        {
                          ++*a3;
                          if ( (*(_BYTE *)(v20 + 30) & 1) == 0 )
                          {
                            v22 = (__int64 *)(v20 + 32);
                            v23 = *(unsigned int *)(v20 + 24);
                            v24 = &v22[v23];
                            if ( v23 * 8 )
                            {
                              v25 = *v22;
                              v26 = *(_WORD *)(*v22 + 4);
                              if ( v26 != 1 )
                              {
LABEL_29:
                                if ( !v26 )
                                {
                                  v30 = v19;
                                  v29 = v24;
                                  v28 = v18;
                                  v27 = v22;
                                  sub_B9A160(a1, v25, a3, a4);
                                  v19 = v30;
                                  v24 = v29;
                                  v18 = v28;
                                  v22 = v27;
                                }
                                goto LABEL_31;
                              }
                              while ( 1 )
                              {
                                ++*a3;
                                if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL * *(unsigned int *)(v25 + 16)) == -1 )
                                  ++*a4;
LABEL_31:
                                if ( v24 == ++v22 )
                                  break;
                                v25 = *v22;
                                v26 = *(_WORD *)(*v22 + 4);
                                if ( v26 != 1 )
                                  goto LABEL_29;
                              }
                            }
                          }
                        }
                        while ( 1 )
                        {
                          if ( (__int64 *)v18 == ++v19 )
                            goto LABEL_13;
                          v20 = *v19;
                          v21 = *(_WORD *)(*v19 + 4);
                          if ( v21 != 1 )
                            break;
LABEL_24:
                          ++*a3;
                          if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL * *(unsigned int *)(v20 + 16)) == -1 )
                            ++*a4;
                        }
                      }
                    }
                  }
                }
                goto LABEL_13;
              }
              while ( 1 )
              {
                ++*a3;
                if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL * *(unsigned int *)(v14 + 16)) == -1 )
                  ++*a4;
LABEL_13:
                if ( v13 == ++v11 )
                  break;
                v14 = *v11;
                v15 = *(_WORD *)(*v11 + 4);
                if ( v15 != 1 )
                  goto LABEL_12;
              }
            }
          }
        }
        ++v6;
      }
      while ( (__int64 *)v8 != v6 );
    }
  }
}

