void __fastcall sub_9A20E0(__int64 a1, __int64 a2)
{
  void **v4; // r14
  unsigned __int64 v5; // rax
  void **v6; // rbx
  unsigned __int64 v7; // r15
  int v8; // r13d
  void **v9; // rcx
  signed __int64 v10; // rcx
  unsigned __int64 v11; // rax
  void **v12; // r12
  void **v13; // rbx
  void *v14; // rdi
  void **v15; // r13
  void *v16; // rdi
  void **v17; // rdx
  void **v18; // r14
  void *v19; // rdi
  void **v20; // r12
  void **v21; // rbx
  void *v22; // rdi
  __int64 v23; // r15
  void **v24; // rdx
  void *v25; // rax
  void *v26; // rdi
  void **v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  void **v30; // r14
  void *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  void **v34; // r15
  void **v35; // rcx
  void *v36; // rdx
  void *v37; // rdi
  void **v38; // [rsp+0h] [rbp-48h]
  void **v39; // [rsp+0h] [rbp-48h]
  __int64 v40; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v4 = *(void ***)a2;
    v5 = *(unsigned int *)(a1 + 8);
    v6 = *(void ***)a1;
    if ( *(_QWORD *)a2 == a2 + 16 )
    {
      v7 = *(unsigned int *)(a2 + 8);
      v8 = *(_DWORD *)(a2 + 8);
      if ( v5 >= v7 )
      {
        v17 = *(void ***)a1;
        if ( *(_DWORD *)(a2 + 8) )
        {
          v33 = v7;
          v34 = *(void ***)a1;
          v40 = v33 * 8;
          v35 = &v4[v33];
          do
          {
            v36 = *v4;
            *v4 = nullptr;
            v37 = *v34;
            *v34 = v36;
            if ( v37 )
            {
              v39 = v35;
              operator delete[](v37);
              v35 = v39;
            }
            ++v4;
            ++v34;
          }
          while ( v4 != v35 );
          v17 = *(void ***)a1;
          v6 = (void **)((char *)v6 + v40);
          v5 = *(unsigned int *)(a1 + 8);
        }
        v18 = &v17[v5];
        while ( v18 != v6 )
        {
          while ( 1 )
          {
            v19 = *--v18;
            if ( !v19 )
              break;
            operator delete[](v19);
            *v18 = nullptr;
            if ( v18 == v6 )
              goto LABEL_28;
          }
        }
LABEL_28:
        *(_DWORD *)(a1 + 8) = v8;
        v20 = *(void ***)a2;
        v21 = (void **)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8));
        if ( *(void ***)a2 != v21 )
        {
          while ( 1 )
          {
            v22 = *--v21;
            if ( v22 )
              break;
LABEL_32:
            if ( v20 == v21 )
              goto LABEL_11;
          }
          while ( 1 )
          {
            operator delete[](v22);
            *v21 = nullptr;
            if ( v20 == v21 )
              break;
            v22 = *--v21;
            if ( !v22 )
              goto LABEL_32;
          }
        }
        goto LABEL_11;
      }
      if ( *(unsigned int *)(a1 + 12) < v7 )
      {
        v30 = &v6[v5];
        while ( v30 != v6 )
        {
          while ( 1 )
          {
            v31 = *--v30;
            if ( !v31 )
              break;
            operator delete[](v31);
            *v30 = nullptr;
            if ( v30 == v6 )
              goto LABEL_46;
          }
        }
LABEL_46:
        *(_DWORD *)(a1 + 8) = 0;
        v32 = v7;
        v23 = 0;
        sub_9A1FE0(a1, v32);
        v27 = *(void ***)a2;
        v28 = *(unsigned int *)(a2 + 8);
        v4 = *(void ***)a2;
      }
      else
      {
        v9 = &v4[v7];
        if ( !*(_DWORD *)(a1 + 8) )
        {
LABEL_6:
          v10 = (char *)v9 - (char *)v4;
          v11 = 0;
          do
          {
            v6[v11 / 8] = v4[v11 / 8];
            v4[v11 / 8] = nullptr;
            v11 += 8LL;
          }
          while ( v11 != v10 );
LABEL_8:
          *(_DWORD *)(a1 + 8) = v8;
          v12 = *(void ***)a2;
          v13 = (void **)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8));
          if ( *(void ***)a2 != v13 )
          {
            do
            {
              while ( 1 )
              {
                v14 = *--v13;
                if ( !v14 )
                  break;
                operator delete[](v14);
                *v13 = nullptr;
                if ( v12 == v13 )
                  goto LABEL_11;
              }
            }
            while ( v12 != v13 );
          }
LABEL_11:
          *(_DWORD *)(a2 + 8) = 0;
          return;
        }
        v23 = 8 * v5;
        v24 = &v4[v5];
        do
        {
          v25 = *v4;
          *v4 = nullptr;
          v26 = *v6;
          *v6 = v25;
          if ( v26 )
          {
            v38 = v24;
            operator delete[](v26);
            v24 = v38;
          }
          ++v4;
          ++v6;
        }
        while ( v4 != v24 );
        v27 = *(void ***)a2;
        v28 = *(unsigned int *)(a2 + 8);
        v4 = (void **)(*(_QWORD *)a2 + v23);
      }
      v29 = 8 * v28;
      v9 = &v27[(unsigned __int64)v29 / 8];
      v6 = (void **)(v23 + *(_QWORD *)a1);
      if ( v29 == v23 )
        goto LABEL_8;
      goto LABEL_6;
    }
    v15 = &v6[v5];
    if ( v15 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v16 = *--v15;
          if ( !v16 )
            break;
          operator delete[](v16);
          *v15 = nullptr;
          if ( v15 == v6 )
            goto LABEL_17;
        }
      }
      while ( v15 != v6 );
LABEL_17:
      v6 = *(void ***)a1;
    }
    if ( v6 != (void **)(a1 + 16) )
      free(v6);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)a2 = a2 + 16;
    *(_QWORD *)(a2 + 8) = 0;
  }
}

