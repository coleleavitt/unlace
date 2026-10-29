void __fastcall sub_1AF35E0(__int64 a1)
{
  _QWORD *v1; // r12
  char *v2; // rdi
  char *v3; // rdi
  char *v4; // rdi
  char *v5; // rdi
  int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r13
  void *v11; // rdi
  char *v12; // rbp
  char *v13; // r13
  __int64 v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // r15
  _QWORD *v21; // r14
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r15
  void **v25; // rcx
  __int64 v26; // rax
  void **v27; // r14
  char *v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+10h] [rbp-48h]
  void **v30; // [rsp+18h] [rbp-40h]

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    v2 = (char *)v1[3460];
    if ( v2 != (char *)(v1 + 3462) )
      free(v2);
    v3 = (char *)v1[3456];
    if ( v3 != (char *)(v1 + 3458) )
      free(v3);
    v4 = (char *)v1[3439];
    if ( v4 != (char *)(v1 + 3441) )
      free(v4);
    v5 = (char *)v1[3435];
    if ( *((_DWORD *)v1 + 6873) )
    {
      v6 = *((_DWORD *)v1 + 6872);
      if ( v6 )
      {
        v7 = 0;
        v8 = 8LL * (unsigned int)(v6 - 1) + 8;
        do
        {
          v9 = *(_QWORD *)&v5[v7];
          if ( v9 != -8 && v9 )
          {
            v10 = *(_QWORD *)v9 + 33LL;
            if ( *(_DWORD *)(v9 + 24) > 0x40u )
            {
              v11 = *(void **)(v9 + 16);
              if ( v11 )
                operator delete[](v11);
            }
            operator delete(v9, v10, 8);
            v5 = (char *)v1[3435];
          }
          v7 += 8;
        }
        while ( v8 != v7 );
      }
    }
    free(v5);
    v28 = (char *)v1[42];
    v12 = &v28[6776 * *((unsigned int *)v1 + 86)];
    if ( v28 != v12 )
    {
      do
      {
        while ( 1 )
        {
          v12 -= 6776;
          v13 = *(char **)v12;
          v14 = *(_QWORD *)v12 + 1688LL * *((unsigned int *)v12 + 2);
          if ( *(_QWORD *)v12 != v14 )
          {
            do
            {
              while ( 1 )
              {
                v14 -= 1688;
                v15 = *(void **)(v14 + 1544);
                if ( v15 != (void *)(v14 + 1560) )
                  free(v15);
                v16 = *(void **)(v14 + 1328);
                if ( v16 != (void *)(v14 + 1344) )
                  free(v16);
                operator delete(*(_QWORD *)(v14 + 1304), 16LL * *(unsigned int *)(v14 + 1320), 8);
                operator delete(*(_QWORD *)(v14 + 1280), 8LL * *(unsigned int *)(v14 + 1296), 8);
                v17 = *(void **)(v14 + 1232);
                if ( v17 != (void *)(v14 + 1248) )
                  free(v17);
                operator delete(*(_QWORD *)(v14 + 1208), 8LL * *(unsigned int *)(v14 + 1224), 8);
                v18 = *(void **)(v14 + 1160);
                if ( v18 != (void *)(v14 + 1176) )
                  free(v18);
                operator delete(*(_QWORD *)(v14 + 1136), 8LL * *(unsigned int *)(v14 + 1152), 8);
                v19 = *(unsigned int *)(v14 + 1048);
                if ( (_DWORD)v19 )
                {
                  v20 = *(_QWORD **)(v14 + 1032);
                  v21 = &v20[11 * v19];
                  do
                  {
                    if ( *v20 != -8192 && *v20 != -4096 )
                    {
                      v22 = (_QWORD *)v20[1];
                      if ( v22 != v20 + 3 )
                        free(v22);
                    }
                    v20 += 11;
                  }
                  while ( v21 != v20 );
                }
                operator delete(*(_QWORD *)(v14 + 1032), 88LL * *(unsigned int *)(v14 + 1048), 8);
                if ( (*(_BYTE *)(v14 + 728) & 1) == 0 )
                  operator delete(*(_QWORD *)(v14 + 736), 24LL * *(unsigned int *)(v14 + 744), 8);
                v23 = *(unsigned int *)(v14 + 720);
                if ( (_DWORD)v23 )
                {
                  v24 = *(_QWORD *)(v14 + 704);
                  v29 = v24 + 1184 * v23;
                  do
                  {
                    if ( *(_QWORD *)v24 != -8192 && *(_QWORD *)v24 != -4096 )
                    {
                      v25 = *(void ***)(v24 + 8);
                      v26 = 18LL * *(unsigned int *)(v24 + 16);
                      v27 = &v25[v26];
                      if ( v25 != &v25[v26] )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v27 -= 18;
                            if ( *v27 == v27 + 2 )
                              break;
                            v30 = v25;
                            free(*v27);
                            v25 = v30;
                            if ( v30 == v27 )
                              goto LABEL_44;
                          }
                        }
                        while ( v25 != v27 );
LABEL_44:
                        v27 = *(void ***)(v24 + 8);
                      }
                      if ( v27 != (void **)(v24 + 24) )
                        free(v27);
                    }
                    v24 += 1184;
                  }
                  while ( v29 != v24 );
                }
                operator delete(*(_QWORD *)(v14 + 704), 1184LL * *(unsigned int *)(v14 + 720), 8);
                if ( (*(_BYTE *)(v14 + 568) & 1) == 0 )
                  operator delete(*(_QWORD *)(v14 + 576), 16LL * *(unsigned int *)(v14 + 584), 8);
                if ( (*(_BYTE *)(v14 + 432) & 1) == 0 )
                  operator delete(*(_QWORD *)(v14 + 440), 16LL * *(unsigned int *)(v14 + 448), 8);
                if ( (*(_BYTE *)(v14 + 328) & 1) == 0 )
                  operator delete(*(_QWORD *)(v14 + 336), 24LL * *(unsigned int *)(v14 + 344), 8);
                if ( (*(_BYTE *)v14 & 1) != 0 )
                  break;
                operator delete(*(_QWORD *)(v14 + 8), 40LL * *(unsigned int *)(v14 + 16), 8);
                if ( v13 == (char *)v14 )
                  goto LABEL_56;
              }
            }
            while ( v13 != (char *)v14 );
LABEL_56:
            v13 = *(char **)v12;
          }
          if ( v13 == v12 + 16 )
            break;
          free(v13);
          if ( v28 == v12 )
          {
            v12 = (char *)v1[42];
            goto LABEL_60;
          }
        }
      }
      while ( v28 != v12 );
      v12 = (char *)v1[42];
    }
LABEL_60:
    if ( v12 != (char *)(v1 + 44) )
      free(v12);
    if ( (*(_BYTE *)v1 & 1) == 0 )
      operator delete(v1[1], 40LL * *((unsigned int *)v1 + 4), 8);
    operator delete(v1, 0x6C50u);
  }
}
