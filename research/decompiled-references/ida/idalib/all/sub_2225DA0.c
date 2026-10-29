__int64 __fastcall sub_2225DA0(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  int v7; // r13d
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 *v10; // r14
  char **i; // rbx
  int v12; // eax
  char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  void **v16; // r14
  char **v17; // rbx
  char **v18; // r15
  void *v19; // rax
  char **v20; // rsi
  void **v21; // rdi
  __int64 v22; // rbx
  void *v23; // rdi
  __int64 v25; // rbx
  void *v26; // rdi
  void **v27; // rdx
  char **v28; // rbp
  char **v29; // rbx
  void *v30; // rax
  char **v31; // rsi
  __int64 v32; // [rsp+8h] [rbp-40h]
  void **v33; // [rsp+8h] [rbp-40h]

  if ( (__int64 *)a1 != a2 )
  {
    v4 = *(unsigned int *)(a1 + 8);
    v5 = *((unsigned int *)a2 + 2);
    v6 = *(_QWORD *)a1;
    v7 = v5;
    if ( v5 <= v4 )
    {
      v14 = *(_QWORD *)a1;
      if ( v5 )
      {
        v15 = *a2;
        v16 = (void **)(v6 + 8);
        v17 = (char **)(v15 + 8);
        v32 = 80 * v5;
        v18 = &v17[10 * v5];
        do
        {
          v19 = *(v17 - 1);
          v20 = v17;
          v21 = v16;
          v17 += 10;
          v16 += 10;
          *(v16 - 11) = v19;
          sub_9C3B80(v21, v20);
          *((_DWORD *)v16 - 4) = *((_DWORD *)v17 - 4);
        }
        while ( v18 != v17 );
        v14 = *(_QWORD *)a1;
        v4 = *(unsigned int *)(a1 + 8);
        v6 += v32;
      }
      v22 = v14 + 80 * v4;
      while ( v6 != v22 )
      {
        while ( 1 )
        {
          v22 -= 80;
          v23 = *(void **)(v22 + 8);
          if ( v23 == (void *)(v22 + 24) )
            break;
          free(v23);
          if ( v6 == v22 )
            goto LABEL_18;
        }
      }
    }
    else
    {
      if ( v5 > *(unsigned int *)(a1 + 12) )
      {
        v25 = v6 + 80 * v4;
        while ( v25 != v6 )
        {
          while ( 1 )
          {
            v25 -= 80;
            v26 = *(void **)(v25 + 8);
            if ( v26 == (void *)(v25 + 24) )
              break;
            free(v26);
            if ( v25 == v6 )
              goto LABEL_24;
          }
        }
LABEL_24:
        *(_DWORD *)(a1 + 8) = 0;
        v4 = 0;
        sub_2224990(a1, v5);
        v5 = *((unsigned int *)a2 + 2);
        v6 = *(_QWORD *)a1;
        v8 = *a2;
      }
      else
      {
        v8 = *a2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          v27 = (void **)(v6 + 8);
          v4 *= 80LL;
          v28 = (char **)(v8 + 8);
          v29 = (char **)(v8 + 8 + v4);
          do
          {
            v30 = *(v28 - 1);
            v31 = v28;
            v33 = v27;
            v28 += 10;
            *(v27 - 1) = v30;
            sub_9C3B80(v27, v31);
            *((_DWORD *)v33 + 16) = *((_DWORD *)v28 - 4);
            v27 = v33 + 10;
          }
          while ( v28 != v29 );
          v5 = *((unsigned int *)a2 + 2);
          v6 = *(_QWORD *)a1;
          v8 = *a2;
        }
      }
      v9 = v4 + v6;
      v10 = (__int64 *)(v8 + 80 * v5);
      for ( i = (char **)(v4 + v8); v10 != (__int64 *)i; *(_DWORD *)(v9 - 8) = v12 )
      {
        v13 = *i;
        *(_DWORD *)(v9 + 16) = 0;
        *(_DWORD *)(v9 + 20) = 6;
        *(_QWORD *)v9 = v13;
        *(_QWORD *)(v9 + 8) = v9 + 24;
        if ( *((_DWORD *)i + 4) )
          sub_9C3B80((void **)(v9 + 8), i + 1);
        v12 = *((_DWORD *)i + 18);
        i += 10;
        v9 += 80;
      }
    }
LABEL_18:
    *(_DWORD *)(a1 + 8) = v7;
  }
  return a1;
}
