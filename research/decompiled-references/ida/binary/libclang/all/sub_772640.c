void __fastcall sub_772640(__int64 a1, __int64 a2)
{
  int *v4; // r14
  unsigned __int64 v5; // rax
  char *v6; // rbx
  int *v7; // r13
  _QWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdi
  int *v12; // r12
  __int64 v13; // rbx
  void *v14; // rdi
  char *v15; // r13
  char *v16; // rdi
  char *v17; // rcx
  __int64 v18; // r13
  char *v19; // r15
  __int64 v20; // r14
  int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // rdi
  char *v24; // r14
  char *v25; // rdi
  int *v26; // r12
  __int64 v27; // rbx
  void *v28; // rdi
  __int64 v29; // r13
  char *v30; // r14
  __int64 v31; // r15
  __int64 v32; // rbx
  int v33; // ecx
  __int64 v34; // rsi
  __int64 v35; // rdi
  int *v36; // rdx
  __int64 v37; // rcx
  char *v38; // r14
  char *v39; // rdi
  unsigned int v40; // [rsp+0h] [rbp-44h]
  __int64 v41; // [rsp+4h] [rbp-40h]
  __int64 v42; // [rsp+4h] [rbp-40h]

  if ( a1 != a2 )
  {
    v4 = *(int **)a2;
    v5 = *(unsigned int *)(a1 + 8);
    v6 = *(char **)a1;
    if ( *(_QWORD *)a2 == a2 + 16 )
    {
      v40 = *(_DWORD *)(a2 + 8);
      if ( v5 < v40 )
      {
        if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)v40 )
        {
          v38 = &v6[120 * v5];
          while ( v38 != v6 )
          {
            while ( 1 )
            {
              v38 -= 120;
              v39 = *((char **)v38 + 1);
              if ( v39 == v38 + 24 )
                break;
              free(v39);
              if ( v38 == v6 )
                goto LABEL_48;
            }
          }
LABEL_48:
          *(_DWORD *)(a1 + 8) = 0;
          v31 = 0;
          sub_771B80(a1, v40);
          v36 = *(int **)a2;
          v37 = *(unsigned int *)(a2 + 8);
          v4 = *(int **)a2;
        }
        else
        {
          if ( !*(_DWORD *)(a1 + 8) )
          {
            v7 = &v4[30 * v40];
            goto LABEL_7;
          }
          v29 = a2 + 24;
          v30 = v6 + 8;
          v42 = 120 * v5;
          v31 = 120 * v5;
          v32 = a2 + 24 + 120 * v5;
          do
          {
            v33 = *(_DWORD *)(v29 - 8);
            v34 = v29;
            v35 = (__int64)v30;
            v29 += 120;
            v30 += 120;
            *((_DWORD *)v30 - 32) = v33;
            sub_76D690(v35, v34);
          }
          while ( v29 != v32 );
          v36 = *(int **)a2;
          v37 = *(unsigned int *)(a2 + 8);
          v4 = (int *)(*(_QWORD *)a2 + v42);
        }
        v6 = (char *)(v31 + *(_QWORD *)a1);
        v7 = &v36[30 * v37];
        if ( 120 * v37 == v31 )
        {
LABEL_11:
          *(_DWORD *)(a1 + 8) = v40;
          v12 = *(int **)a2;
          v13 = *(_QWORD *)a2 + 120LL * *(unsigned int *)(a2 + 8);
          if ( *(_QWORD *)a2 != v13 )
          {
            do
            {
              v13 -= 120;
              v14 = *(void **)(v13 + 8);
              if ( v14 != (void *)(v13 + 24) )
                free(v14);
            }
            while ( v12 != (int *)v13 );
          }
LABEL_15:
          *(_DWORD *)(a2 + 8) = 0;
          return;
        }
LABEL_7:
        v8 = v6 + 8;
        do
        {
          while ( 1 )
          {
            v9 = *v4;
            v8[1] = 0x400000000LL;
            *((_DWORD *)v8 - 2) = v9;
            *v8 = v8 + 2;
            if ( v4[4] )
              break;
            v4 += 30;
            v8 += 15;
            if ( v7 == v4 )
              goto LABEL_11;
          }
          v10 = (__int64)(v4 + 2);
          v11 = (__int64)v8;
          v4 += 30;
          v8 += 15;
          sub_76D690(v11, v10);
        }
        while ( v7 != v4 );
        goto LABEL_11;
      }
      v17 = *(char **)a1;
      if ( v40 )
      {
        v18 = a2 + 24;
        v19 = v6 + 8;
        v41 = 120LL * v40;
        v20 = a2 + 24 + v41;
        do
        {
          v21 = *(_DWORD *)(v18 - 8);
          v22 = v18;
          v23 = (__int64)v19;
          v18 += 120;
          v19 += 120;
          *((_DWORD *)v19 - 32) = v21;
          sub_76D690(v23, v22);
        }
        while ( v20 != v18 );
        v17 = *(char **)a1;
        v6 += v41;
        v5 = *(unsigned int *)(a1 + 8);
      }
      v24 = &v17[120 * v5];
      while ( v24 != v6 )
      {
        while ( 1 )
        {
          v24 -= 120;
          v25 = *((char **)v24 + 1);
          if ( v25 == v24 + 24 )
            break;
          free(v25);
          if ( v24 == v6 )
            goto LABEL_33;
        }
      }
LABEL_33:
      *(_DWORD *)(a1 + 8) = v40;
      v26 = *(int **)a2;
      v27 = *(_QWORD *)a2 + 120LL * *(unsigned int *)(a2 + 8);
      if ( *(_QWORD *)a2 == v27 )
        goto LABEL_15;
      do
      {
        v27 -= 120;
        v28 = *(void **)(v27 + 8);
        if ( v28 != (void *)(v27 + 24) )
          free(v28);
      }
      while ( v26 != (int *)v27 );
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v15 = &v6[120 * v5];
      if ( v15 != v6 )
      {
        do
        {
          v15 -= 120;
          v16 = *((char **)v15 + 1);
          if ( v16 != v15 + 24 )
            free(v16);
        }
        while ( v15 != v6 );
        v6 = *(char **)a1;
      }
      if ( v6 != (char *)(a1 + 16) )
        free(v6);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = a2 + 16;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
}

