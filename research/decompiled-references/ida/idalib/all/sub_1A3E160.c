void __fastcall sub_1A3E160(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  char ***v4; // r13
  __int64 v5; // r15
  char ***v6; // rbx
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // rdx
  char **v10; // rax
  __int64 v11; // rdx
  char **v12; // rax
  char **v13; // rax
  char ***v14; // r13
  unsigned __int64 *v15; // rdi
  unsigned __int64 *v16; // r12
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  void *v22; // rdi
  void **v23; // rax
  void **v24; // rcx
  char ***v25; // rdi
  int v26; // r12d
  __int64 v27; // rcx
  char ***v28; // [rsp+0h] [rbp-68h]
  unsigned __int64 *v29; // [rsp+8h] [rbp-60h]
  _QWORD *v30; // [rsp+10h] [rbp-58h]
  void **v31; // [rsp+10h] [rbp-58h]
  _QWORD *v32; // [rsp+18h] [rbp-50h]
  void **v33; // [rsp+18h] [rbp-50h]
  __int64 v34[8]; // [rsp+28h] [rbp-40h] BYREF

  v28 = (char ***)(a1 + 16);
  v3 = sub_2237400(a1, a1 + 16, a2, 88, v34);
  v4 = *(char ****)a1;
  v5 = v3;
  v6 = (char ***)(*(_QWORD *)a1 + 88LL * *(unsigned int *)(a1 + 8));
  if ( *(char ****)a1 != v6 )
  {
    v7 = v3;
    do
    {
      *(_QWORD *)v7 = *v4;
      v13 = v4[1];
      *(_DWORD *)(v7 + 24) = 0;
      *(_QWORD *)(v7 + 8) = v13;
      *(_QWORD *)(v7 + 16) = v7 + 32;
      *(_DWORD *)(v7 + 28) = 1;
      if ( *((_DWORD *)v4 + 6) )
        sub_AEA1F0((char ***)(v7 + 16), v4 + 2);
      v8 = *((_DWORD *)v4 + 10);
      v4 += 11;
      v7 += 88;
      *(_DWORD *)(v7 - 48) = v8;
      *(_DWORD *)(v7 - 44) = *((_DWORD *)v4 - 11);
      *(_DWORD *)(v7 - 40) = *((_DWORD *)v4 - 10);
      *(_QWORD *)(v7 - 36) = *(char ***)((char *)v4 - 36);
      *(_BYTE *)(v7 - 28) = *((_BYTE *)v4 - 28);
      LOBYTE(v8) = *((_BYTE *)v4 - 27);
      *(_QWORD *)(v7 - 16) = 0;
      *(_QWORD *)(v7 - 8) = 0;
      *(_QWORD *)(v7 - 24) = 0;
      *(_BYTE *)(v7 - 27) = v8;
      *(_QWORD *)(v7 - 24) = *(v4 - 3);
      v9 = (__int64)*(v4 - 2);
      *(v4 - 3) = nullptr;
      v10 = *(char ***)(v7 - 16);
      *(_QWORD *)(v7 - 16) = v9;
      v11 = (__int64)*(v4 - 1);
      *(v4 - 2) = v10;
      v12 = *(char ***)(v7 - 8);
      *(_QWORD *)(v7 - 8) = v11;
      *(v4 - 1) = v12;
    }
    while ( v6 != v4 );
    v14 = *(char ****)a1;
    v6 = (char ***)(*(_QWORD *)a1 + 88LL * *(unsigned int *)(a1 + 8));
    if ( *(char ****)a1 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v6 -= 11;
          v15 = (unsigned __int64 *)v6[8];
          v29 = (unsigned __int64 *)v6[9];
          v16 = v15;
          if ( v29 != v15 )
          {
            do
            {
              v17 = *v16;
              if ( *v16 )
              {
                v18 = v16[1];
                if ( v18 )
                {
                  if ( v17 < v18 || v17 > v18 + 14848 )
                  {
                    v19 = *(_QWORD **)(v17 + 528);
                    v20 = &v19[8 * (unsigned __int64)*(unsigned int *)(v17 + 536)];
                    if ( v19 != v20 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v20 -= 8;
                          v21 = (_QWORD *)v20[3];
                          if ( v21 == v20 + 5 )
                            break;
                          v32 = v20;
                          v30 = v19;
                          operator delete(v21);
                          v19 = v30;
                          v20 = v32;
                          if ( v30 == v32 )
                            goto LABEL_14;
                        }
                      }
                      while ( v19 != v20 );
LABEL_14:
                      v20 = *(_QWORD **)(v17 + 528);
                    }
                    if ( v20 != (_QWORD *)(v17 + 544) )
                      free(v20);
                    v22 = *(void **)(v17 + 416);
                    if ( v22 != (void *)(v17 + 432) )
                      free(v22);
                    v23 = (void **)(v17 + 384);
                    v24 = (void **)(v17 + 64);
                    do
                    {
                      while ( *v23 != v23 + 2 )
                      {
                        v33 = v23;
                        v31 = v24;
                        operator delete(*v23);
                        v24 = v31;
                        v23 = v33 - 4;
                        if ( v33 - 4 == v31 )
                          goto LABEL_22;
                      }
                      v23 -= 4;
                    }
                    while ( v24 != v23 );
LABEL_22:
                    operator delete((void *)v17, 0x3A0u);
                  }
                  else
                  {
                    v27 = *(unsigned int *)(v18 + 14976);
                    *(_DWORD *)(v18 + 14976) = v27 + 1;
                    *(_QWORD *)(v18 + 8 * v27 + 14848) = v17;
                  }
                }
              }
              v16 += 3;
            }
            while ( v29 != v16 );
            v15 = (unsigned __int64 *)v6[8];
          }
          if ( v15 )
            operator delete(v15);
          v25 = (char ***)v6[2];
          if ( v25 == v6 + 4 )
            break;
          free(v25);
          if ( v14 == v6 )
          {
            v6 = *(char ****)a1;
            goto LABEL_30;
          }
        }
      }
      while ( v14 != v6 );
      v6 = *(char ****)a1;
    }
  }
LABEL_30:
  v26 = v34[0];
  if ( v28 != v6 )
    free(v6);
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 12) = v26;
}
