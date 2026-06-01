void __fastcall sub_495960(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 *v9; // r9
  __int64 *i; // rbp
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // rsi
  __int64 *v14; // r8
  unsigned __int16 v15; // cx
  _DWORD *v16; // r11
  unsigned __int16 v17; // dx
  __int64 v18; // r14
  bool v19; // al
  __int64 *v20; // r9
  char v21; // dl
  __int64 v22; // r10
  unsigned __int16 v23; // ax
  _DWORD *v24; // rax
  int *v25; // rcx
  int *v26; // rdx
  int v27; // edi
  int v28; // eax
  __int64 v29; // rdx
  bool v30; // al
  unsigned __int16 v31; // ax
  _DWORD *v32; // rax
  bool v33; // cf
  int v34; // edx
  _DWORD *v35; // rax
  _DWORD *v36; // rdx
  unsigned __int16 v37; // ax
  unsigned int v38; // edx
  unsigned int v39; // eax
  _DWORD *v40; // r15
  _DWORD *v41; // rax
  __int128 v42; // [rsp-10h] [rbp-48h]

  if ( a2 - (__int64)a1 > 112 )
  {
    v8 = (a2 - (__int64)a1) >> 4;
    sub_495960(a1, &a1[v8], a3, a4);
    sub_495960(&a1[v8], a2, a3, a4);
    *((_QWORD *)&v42 + 1) = a4;
    *(_QWORD *)&v42 = a3;
    sub_495300(a1, &a1[v8], a2, (v8 * 8) >> 3, (a2 - (__int64)&a1[v8]) >> 3, v9, v42);
    return;
  }
  if ( (__int64 *)a2 != a1 )
  {
    for ( i = a1 + 1; (__int64 *)a2 != i; ++i )
    {
      v11 = *i;
      if ( sub_4910B0(*i, *a1) )
      {
        if ( (char *)i - (char *)a1 <= 8 )
        {
          if ( (char *)i - (char *)a1 == 8 )
            *i = v12;
        }
        else
        {
          memmove(a1 + 1, a1, (char *)i - (char *)a1);
        }
        *a1 = v11;
      }
      else
      {
        v13 = *(i - 1);
        v14 = i - 1;
        if ( v11 != v13 )
        {
          v15 = *(_WORD *)(v11 + 4);
          if ( !v15 )
          {
            v16 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
            while ( 1 )
            {
              v20 = v14 + 1;
              v21 = 0;
              v22 = v11;
              if ( v16 && !*v16 && v16[1] == 8 && *(_DWORD *)(v11 + 24) == 1 )
              {
                v22 = *(_QWORD *)(v11 + 32);
                v21 = 1;
              }
              v23 = *(_WORD *)(v13 + 4);
              if ( v23 )
                break;
              v24 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
              if ( !v24 || *v24 || v24[1] != 8 || *(_DWORD *)(v13 + 24) != 1 )
              {
                if ( v22 == v13 || *(_WORD *)(v22 + 4) )
                  goto LABEL_43;
                v18 = v13;
LABEL_29:
                v25 = *(int **)(*(_QWORD *)(v22 + 16) + 24LL);
                v26 = *(int **)(*(_QWORD *)(v18 + 16) + 24LL);
                if ( v25 )
                {
                  v27 = *v25;
                  if ( v26 )
                  {
                    v28 = *v26;
                    if ( v27 != *v26 )
                      goto LABEL_32;
                    v28 = v25[1];
                    v34 = v26[1];
                    if ( v28 != v34 )
                    {
LABEL_66:
                      v19 = v28 < v34;
                      goto LABEL_18;
                    }
                    if ( v27 != 5 )
                      goto LABEL_51;
                    if ( v28 != 2 )
                    {
                      if ( v28 == 4 || v28 == 3 )
                      {
                        if ( *(_DWORD *)(v22 + 24) != 2 )
                        {
                          v35 = nullptr;
                          goto LABEL_106;
                        }
                      }
                      else
                      {
                        if ( v34 != 5 )
                        {
                          if ( v34 != 2 )
                          {
                            if ( v34 == 4 )
                            {
                              if ( *(_DWORD *)(v18 + 24) == 2 )
                              {
                                v35 = nullptr;
                                goto LABEL_76;
                              }
LABEL_51:
                              v33 = *(_DWORD *)v22 < *(_DWORD *)v18;
LABEL_52:
                              v19 = v33;
                              goto LABEL_18;
                            }
                            v35 = nullptr;
                            if ( v34 != 3 )
                            {
LABEL_103:
                              if ( v35 )
                                goto LABEL_43;
                              goto LABEL_51;
                            }
LABEL_106:
                            if ( *(_DWORD *)(v18 + 24) != 2 )
                              goto LABEL_103;
LABEL_76:
                            v36 = *(_DWORD **)(v18 + 40);
                            v18 = *(_QWORD *)(v18 + 32);
                            if ( v35 )
                            {
                              if ( !v36 )
                                goto LABEL_43;
                              if ( v22 == v18 )
                              {
                                v19 = *v35 < *v36;
                              }
                              else
                              {
                                v37 = *(_WORD *)(v22 + 4);
                                v33 = v37 < *(_WORD *)(v18 + 4);
                                if ( v37 != *(_WORD *)(v18 + 4) )
                                  goto LABEL_52;
                                if ( v37 )
                                  goto LABEL_51;
                                v38 = *(unsigned __int16 *)(v22 + 28);
                                v39 = *(unsigned __int16 *)(v18 + 28);
                                v33 = v38 < v39;
                                if ( v38 != v39 )
                                  goto LABEL_52;
                                v40 = sub_490FE0(v22);
                                v41 = sub_490FE0(v18);
                                if ( !v40 || !v41 )
                                {
                                  v33 = v40 < v41;
                                  if ( v40 == v41 )
                                    goto LABEL_51;
                                  goto LABEL_52;
                                }
                                if ( v40 == v41 )
                                  goto LABEL_51;
                                v19 = *v40 < *v41;
                              }
LABEL_18:
                              if ( !v19 )
                                goto LABEL_43;
                              goto LABEL_19;
                            }
LABEL_89:
                            if ( v36 )
                              goto LABEL_19;
                            goto LABEL_51;
                          }
LABEL_87:
                          if ( *(_DWORD *)(v18 + 24) != 2 )
                            goto LABEL_51;
                          v36 = *(_DWORD **)(v18 + 40);
                          v18 = *(_QWORD *)(v18 + 32);
                          goto LABEL_89;
                        }
                        v35 = nullptr;
                        if ( *(_DWORD *)(v22 + 24) != 2 )
                          goto LABEL_106;
                      }
                      v35 = *(_DWORD **)(v22 + 40);
                      v22 = *(_QWORD *)(v22 + 32);
                      goto LABEL_106;
                    }
                    if ( *(_DWORD *)(v22 + 24) == 2 )
                    {
                      v35 = *(_DWORD **)(v22 + 40);
                      v22 = *(_QWORD *)(v22 + 32);
                      if ( *(_DWORD *)(v18 + 24) != 2 )
                        goto LABEL_103;
                      goto LABEL_76;
                    }
                    goto LABEL_87;
                  }
                  v28 = -1;
                  if ( v27 == -1 )
                  {
                    v28 = v25[1];
                    v34 = -1;
                    if ( v28 != -1 )
                      goto LABEL_66;
                    goto LABEL_51;
                  }
                }
                else
                {
                  if ( !v26 )
                    goto LABEL_51;
                  v28 = *v26;
                  if ( *v26 == -1 )
                  {
                    v34 = v26[1];
                    if ( v34 != -1 )
                      goto LABEL_66;
                    goto LABEL_51;
                  }
                  v27 = -1;
                }
LABEL_32:
                v19 = v28 > v27;
                goto LABEL_18;
              }
              v18 = *(_QWORD *)(v13 + 32);
              if ( v22 != v18 )
              {
                v23 = *(_WORD *)(v18 + 4);
                v17 = *(_WORD *)(v22 + 4);
                if ( v17 == v23 )
                {
                  if ( !v17 )
                    goto LABEL_29;
                  goto LABEL_51;
                }
LABEL_17:
                v19 = v17 < v23;
                goto LABEL_18;
              }
              if ( v21 )
                goto LABEL_43;
LABEL_19:
              v14[1] = v13;
              v13 = *(v14 - 1);
              if ( v11 == v13 )
                goto LABEL_44;
              --v14;
            }
            if ( v22 == v13 )
              goto LABEL_43;
            v17 = *(_WORD *)(v22 + 4);
            v18 = v13;
            if ( v23 == v17 )
              goto LABEL_51;
            goto LABEL_17;
          }
          while ( 2 )
          {
            v31 = *(_WORD *)(v13 + 4);
            v20 = v14 + 1;
            if ( !v31 )
            {
              v32 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
              if ( !v32 || *v32 || v32[1] != 8 || *(_DWORD *)(v13 + 24) != 1 )
                goto LABEL_43;
              v29 = *(_QWORD *)(v13 + 32);
              if ( v11 != v29 )
              {
                v31 = *(_WORD *)(v29 + 4);
LABEL_35:
                if ( v15 == v31 )
                  v30 = *(_DWORD *)v11 < *(_DWORD *)v29;
                else
                  v30 = v15 < v31;
                if ( !v30 )
                  goto LABEL_43;
              }
              v14[1] = v13;
              v13 = *(v14 - 1);
              if ( v11 == v13 )
              {
LABEL_44:
                v20 = v14;
                goto LABEL_43;
              }
              --v14;
              continue;
            }
            break;
          }
          if ( v11 == v13 )
            goto LABEL_43;
          v29 = v13;
          goto LABEL_35;
        }
        v20 = i;
LABEL_43:
        *v20 = v11;
      }
    }
  }
}

