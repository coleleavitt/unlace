void __fastcall sub_1CB36A0(__int64 a1, int a2, __int64 *a3)
{
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rdx
  _QWORD *v10; // rbp
  _QWORD *v11; // rdi
  void *v12; // rdi
  void **v13; // rbp
  void **v14; // rdx
  void *v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rdx
  _DWORD *v26; // rax
  _QWORD *v27; // rbp
  __int64 v28; // rdx
  int v29; // ecx
  _QWORD *v30; // r14
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rax
  _QWORD *v33; // r15
  _QWORD *v34; // r13
  _QWORD *v35; // rdi
  void *v36; // rdi
  void **v37; // r15
  void **v38; // r13
  int v39; // r12d
  __int64 v40; // rdx
  _QWORD *v41; // [rsp+0h] [rbp-60h]
  void **v42; // [rsp+0h] [rbp-60h]
  _QWORD v44[8]; // [rsp+20h] [rbp-40h] BYREF

  if ( !*(_BYTE *)(a1 + 20) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = v5 + 32LL * *(unsigned int *)(a1 + 40);
LABEL_3:
    while ( v5 != v6 )
    {
      while ( 1 )
      {
        v6 -= 32;
        v7 = *(_QWORD *)(v6 + 8);
        if ( !v7 )
          break;
        v8 = *(_QWORD *)(v6 + 16);
        if ( !v8 )
          break;
        if ( v7 >= v8 && v7 <= v8 + 14848 )
        {
          v20 = *(unsigned int *)(v8 + 14976);
          *(_DWORD *)(v8 + 14976) = v20 + 1;
          *(_QWORD *)(v8 + 8 * v20 + 14848) = v7;
          goto LABEL_3;
        }
        v9 = *(_QWORD **)(v7 + 528);
        v10 = &v9[8 * (unsigned __int64)*(unsigned int *)(v7 + 536)];
        if ( v9 != v10 )
        {
          do
          {
            while ( 1 )
            {
              v10 -= 8;
              v11 = (_QWORD *)v10[3];
              if ( v11 == v10 + 5 )
                break;
              v41 = v9;
              operator delete(v11);
              v9 = v41;
              if ( v41 == v10 )
                goto LABEL_10;
            }
          }
          while ( v9 != v10 );
LABEL_10:
          v10 = *(_QWORD **)(v7 + 528);
        }
        if ( v10 != (_QWORD *)(v7 + 544) )
          free(v10);
        v12 = *(void **)(v7 + 416);
        if ( v12 != (void *)(v7 + 432) )
          free(v12);
        v13 = (void **)(v7 + 384);
        v14 = (void **)(v7 + 64);
        do
        {
          while ( 1 )
          {
            v15 = *v13;
            if ( *v13 == v13 + 2 )
              break;
            v42 = v14;
            v13 -= 4;
            operator delete(v15);
            v14 = v42;
            if ( v42 == v13 )
              goto LABEL_18;
          }
          v13 -= 4;
        }
        while ( v13 != v14 );
LABEL_18:
        operator delete((void *)v7, 0x3A0u);
        if ( v5 == v6 )
          goto LABEL_19;
      }
    }
LABEL_19:
    v16 = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 40) = 0;
    if ( v16 )
    {
      v17 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(v17 + 24) = *((_DWORD *)a3 + 4);
      v18 = a3[1];
      *(_DWORD *)v17 = a2;
      *(_QWORD *)(v17 + 16) = v18;
      v19 = *a3;
      *a3 = 0;
      *(_QWORD *)(v17 + 8) = v19;
      ++*(_DWORD *)(a1 + 40);
    }
    else
    {
      v21 = sub_2237400(a1 + 32, a1 + 48, 0, 32, v44);
      v22 = v21 + 32LL * *(unsigned int *)(a1 + 40);
      *(_DWORD *)(v22 + 24) = *((_DWORD *)a3 + 4);
      v23 = a3[1];
      *(_DWORD *)v22 = a2;
      v24 = *(unsigned int *)(a1 + 40);
      *(_QWORD *)(v22 + 16) = v23;
      v25 = *a3;
      *a3 = 0;
      *(_QWORD *)(v22 + 8) = v25;
      v26 = *(_DWORD **)(a1 + 32);
      v27 = &v26[8 * v24];
      if ( v26 != (_DWORD *)v27 )
      {
        v28 = v21;
        do
        {
          v29 = *v26;
          *(_QWORD *)(v28 + 16) = 0;
          v26 += 8;
          v28 += 32;
          *(_QWORD *)(v28 - 24) = 0;
          *(_DWORD *)(v28 - 32) = v29;
          *(_DWORD *)(v28 - 8) = *(v26 - 2);
          *(_QWORD *)(v28 - 16) = *((_QWORD *)v26 - 2);
          *(_QWORD *)(v28 - 24) = *((_QWORD *)v26 - 3);
          *((_QWORD *)v26 - 3) = 0;
        }
        while ( v27 != (_QWORD *)v26 );
        v30 = *(_QWORD **)(a1 + 32);
        v27 = &v30[4 * *(unsigned int *)(a1 + 40)];
        if ( v30 != v27 )
        {
          do
          {
            v27 -= 4;
            v31 = v27[1];
            if ( v31 )
            {
              v32 = v27[2];
              if ( v32 )
              {
                if ( v31 < v32 || v31 > v32 + 14848 )
                {
                  v33 = *(_QWORD **)(v31 + 528);
                  v34 = &v33[8 * (unsigned __int64)*(unsigned int *)(v31 + 536)];
                  if ( v33 != v34 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v34 -= 8;
                        v35 = (_QWORD *)v34[3];
                        if ( v35 == v34 + 5 )
                          break;
                        operator delete(v35);
                        if ( v33 == v34 )
                          goto LABEL_38;
                      }
                    }
                    while ( v33 != v34 );
LABEL_38:
                    v34 = *(_QWORD **)(v31 + 528);
                  }
                  if ( v34 != (_QWORD *)(v31 + 544) )
                    free(v34);
                  v36 = *(void **)(v31 + 416);
                  if ( v36 != (void *)(v31 + 432) )
                    free(v36);
                  v37 = (void **)(v31 + 384);
                  v38 = (void **)(v31 + 64);
                  do
                  {
                    while ( *v37 != v37 + 2 )
                    {
                      operator delete(*v37);
                      v37 -= 4;
                      if ( v38 == v37 )
                        goto LABEL_46;
                    }
                    v37 -= 4;
                  }
                  while ( v37 != v38 );
LABEL_46:
                  operator delete((void *)v31, 0x3A0u);
                }
                else
                {
                  v40 = *(unsigned int *)(v32 + 14976);
                  *(_DWORD *)(v32 + 14976) = v40 + 1;
                  *(_QWORD *)(v32 + 8 * v40 + 14848) = v31;
                }
              }
            }
          }
          while ( v30 != v27 );
          v27 = *(_QWORD **)(a1 + 32);
        }
      }
      v39 = v44[0];
      if ( v27 != (_QWORD *)(a1 + 48) )
        free(v27);
      *(_DWORD *)(a1 + 44) = v39;
      ++*(_DWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 32) = v21;
    }
    *(_BYTE *)(a1 + 20) = 1;
  }
}
