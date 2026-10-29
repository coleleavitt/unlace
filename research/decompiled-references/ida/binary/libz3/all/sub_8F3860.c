__int64 __fastcall sub_8F3860(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rdx
  _DWORD *v4; // rax
  __int64 v5; // r12
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // r13
  unsigned __int64 v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // rdx
  unsigned int v16; // ecx
  char *v17; // rdi
  __int64 v18; // rcx
  char *v19; // r8
  char *v20; // rax
  int v21; // ecx
  int **v22; // r14
  int **v23; // r8
  int **v24; // r9
  __int64 v25; // r14
  __int64 v26; // rax
  int **v27; // r13
  unsigned int v28; // r12d
  int *v29; // rbp
  int *v30; // rbx
  int v31; // edx
  __int64 v32; // rsi
  char v33; // cl
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // [rsp+0h] [rbp-58h]
  int **v37; // [rsp+8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+10h] [rbp-48h]
  __int64 v39; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 9400);
  if ( v3 )
  {
    v4 = *(_DWORD **)(a1 + 9400);
    v5 = a1;
    do
    {
      if ( (_DWORD *)(v3 + 4LL * *(unsigned int *)(v3 - 4)) == v4 )
        return 1;
    }
    while ( !*v4++ );
    v8 = *(_QWORD *)(v5 + 8920);
    if ( !v8 )
      return 1;
    v9 = *(_DWORD *)(v8 - 4);
    if ( a2 >= v9 )
      return 1;
    v10 = 4LL * a2;
    v11 = 4 * (a2 + (unsigned __int64)(v9 - a2 - 1));
LABEL_9:
    v12 = *(_DWORD *)(v8 + v10);
    v13 = v12 >> 5;
    if ( !v3 || (unsigned int)v13 >= *(_DWORD *)(v3 - 4) || (*(_DWORD *)(v3 + 4 * v13) & (1 << v12)) == 0 )
      goto LABEL_38;
    v14 = *(unsigned int *)(v5 + 9424);
    v15 = *(char **)(v5 + 9416);
    v16 = v14 - 1;
    v14 *= 24;
    v17 = &v15[v14];
    v18 = 24LL * (v12 & v16);
    v19 = &v15[v18];
    if ( v18 == v14 )
    {
LABEL_40:
      while ( v19 != v15 )
      {
        v35 = *((_DWORD *)v15 + 1);
        if ( v35 == 2 )
        {
          if ( v12 == *(_DWORD *)v15 && v12 == *((_DWORD *)v15 + 2) )
          {
            v20 = v15;
            goto LABEL_19;
          }
        }
        else if ( !v35 )
        {
          break;
        }
        v15 += 24;
      }
LABEL_51:
      BUG();
    }
    v20 = &v15[v18];
    while ( 1 )
    {
      v21 = *((_DWORD *)v20 + 1);
      if ( v21 == 2 )
      {
        if ( v12 == *(_DWORD *)v20 && v12 == *((_DWORD *)v20 + 2) )
        {
LABEL_19:
          v22 = *((int ***)v20 + 2);
          if ( v22 )
          {
            v23 = &v22[*((unsigned int *)v22 - 1)];
            if ( v23 != v22 )
            {
              v38 = v11;
              v24 = *((int ***)v20 + 2);
              v25 = v5;
              v39 = v10;
              v26 = 8LL * v12 + 1;
              v27 = v23;
              v28 = v12;
              while ( 2 )
              {
                v29 = *v24;
                if ( *v24 )
                {
                  v30 = &v29[*(v29 - 1)];
                  if ( v30 != v29 )
                  {
                    while ( 2 )
                    {
                      v31 = *v29;
                      if ( *v29 != v28 && v31 != dword_1C7EC64 )
                      {
                        LOBYTE(v2) = v31 == -2 || dword_1C7EC60 == v31;
                        if ( !(_BYTE)v2 )
                        {
                          v32 = v26;
                          v33 = *(_BYTE *)(*(_QWORD *)(v25 + 8848) + (v31 ^ 1u));
                          if ( v33 != -1 )
                          {
                            if ( v33 )
                            {
                              v32 = *(_QWORD *)(v25 + 8984);
                              v34 = qword_1C7EC50;
                            }
                            else
                            {
                              v37 = v24;
                              v36 = v26;
                              sub_8F28B0(v25, v31 ^ 1, v26, 0);
                              v32 = *(_QWORD *)(v25 + 8984);
                              v34 = qword_1C7EC50;
                              v24 = v37;
                              v26 = v36;
                            }
                            goto LABEL_30;
                          }
                          v34 = qword_1C7EC50;
                          if ( *(_QWORD *)(v25 + 8984) != qword_1C7EC50 )
                            return v2;
                          if ( !*(_BYTE *)(v25 + 2416) )
                          {
                            *(_QWORD *)(v25 + 8984) = v26;
                            *(_DWORD *)(v25 + 8992) = v31;
LABEL_30:
                            if ( v32 != v34 )
                              return v2;
                          }
                          if ( *(_BYTE *)(v25 + 2416) )
                            return v2;
                        }
                      }
                      if ( v30 == ++v29 )
                        break;
                      continue;
                    }
                  }
                }
                if ( v27 != ++v24 )
                  continue;
                break;
              }
              v11 = v38;
              v10 = v39;
              v5 = v25;
            }
          }
LABEL_38:
          if ( v11 != v10 )
          {
            v3 = *(_QWORD *)(v5 + 9400);
            v8 = *(_QWORD *)(v5 + 8920);
            v10 += 4;
            goto LABEL_9;
          }
          return 1;
        }
      }
      else if ( !v21 )
      {
        goto LABEL_51;
      }
      v20 += 24;
      if ( v17 == v20 )
        goto LABEL_40;
    }
  }
  return 1;
}

