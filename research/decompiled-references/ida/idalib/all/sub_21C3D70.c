__int64 __fastcall sub_21C3D70(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rdx
  __int64 v6; // rbp
  int v7; // r13d
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 *v10; // r15
  __int64 *i; // rbx
  __int64 v12; // rax
  char **v13; // rsi
  void **v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  void *v18; // rdi
  __int64 v19; // rbx
  void *v20; // rdi
  void **v21; // rbx
  __int64 v22; // r15
  void *v23; // rax
  char **v24; // rsi
  void **v25; // rdi
  void **v26; // r15
  char **v27; // rbp
  char **v28; // rbx
  void *v29; // rax
  char **v30; // rsi
  void **v31; // rdi
  __int64 v32; // [rsp+8h] [rbp-40h]
  unsigned __int64 v33; // [rsp+8h] [rbp-40h]

  if ( (__int64 *)a1 != a2 )
  {
    v3 = *((unsigned int *)a2 + 2);
    v4 = *(unsigned int *)(a1 + 8);
    v6 = *(_QWORD *)a1;
    v7 = *((_DWORD *)a2 + 2);
    if ( v3 <= v4 )
    {
      v16 = *(_QWORD *)a1;
      if ( *((_DWORD *)a2 + 2) )
      {
        v21 = (void **)(v6 + 8);
        v32 = 32 * v3;
        v22 = *a2 + 8;
        do
        {
          v23 = *(void **)(v22 - 8);
          v24 = (char **)v22;
          v25 = v21;
          v21 += 4;
          v22 += 32;
          *(v21 - 5) = v23;
          sub_9C3B80(v25, v24);
        }
        while ( (void **)(v6 + 8 + v32) != v21 );
        v6 += v32;
        v16 = *(_QWORD *)a1;
        v4 = *(unsigned int *)(a1 + 8);
      }
      v17 = v16 + 32 * v4;
      while ( v6 != v17 )
      {
        while ( 1 )
        {
          v17 -= 32;
          v18 = *(void **)(v17 + 8);
          if ( v18 == (void *)(v17 + 24) )
            break;
          free(v18);
          if ( v6 == v17 )
          {
            *(_DWORD *)(a1 + 8) = v7;
            return a1;
          }
        }
      }
    }
    else
    {
      if ( v3 > *(unsigned int *)(a1 + 12) )
      {
        v19 = v6 + 32 * v4;
        while ( v6 != v19 )
        {
          while ( 1 )
          {
            v19 -= 32;
            v20 = *(void **)(v19 + 8);
            if ( v20 == (void *)(v19 + 24) )
              break;
            free(v20);
            if ( v6 == v19 )
              goto LABEL_22;
          }
        }
LABEL_22:
        *(_DWORD *)(a1 + 8) = 0;
        sub_21C3980(a1, v3);
        v3 = *((unsigned int *)a2 + 2);
        v6 = *(_QWORD *)a1;
        v4 = 0;
        v8 = *a2;
      }
      else
      {
        v8 = *a2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          v4 *= 32LL;
          v26 = (void **)(v6 + 8);
          v27 = (char **)(v8 + 8);
          v28 = (char **)(v8 + 8 + v4);
          do
          {
            v29 = *(v27 - 1);
            v30 = v27;
            v31 = v26;
            v27 += 4;
            v33 = v4;
            v26 += 4;
            *(v26 - 5) = v29;
            sub_9C3B80(v31, v30);
            v4 = v33;
          }
          while ( v27 != v28 );
          v3 = *((unsigned int *)a2 + 2);
          v6 = *(_QWORD *)a1;
          v8 = *a2;
        }
      }
      v9 = v4 + v6;
      v10 = (__int64 *)(v8 + 32 * v3);
      for ( i = (__int64 *)(v4 + v8); v10 != i; i += 4 )
      {
        while ( 1 )
        {
          v12 = *i;
          *(_DWORD *)(v9 + 16) = 0;
          *(_DWORD *)(v9 + 20) = 1;
          *(_QWORD *)v9 = v12;
          *(_QWORD *)(v9 + 8) = v9 + 24;
          if ( *((_DWORD *)i + 4) )
            break;
          i += 4;
          v9 += 32;
          if ( v10 == i )
            goto LABEL_10;
        }
        v13 = (char **)(i + 1);
        v14 = (void **)(v9 + 8);
        v9 += 32;
        sub_9C3B80(v14, v13);
      }
    }
LABEL_10:
    *(_DWORD *)(a1 + 8) = v7;
  }
  return a1;
}
