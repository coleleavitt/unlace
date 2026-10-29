__int64 __fastcall sub_2224B70(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rbx
  _QWORD *v6; // r15
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  char *v9; // rbp
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rdi
  __int64 v16; // rbx
  void *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // rbx
  void *v23; // rdi
  char ***v24; // r14
  char ***v25; // rbx
  char **v26; // rax
  char ***v27; // rsi
  char ***v28; // rdi
  _QWORD *v29; // rbx
  _QWORD *v30; // rdi
  char ***v31; // r14
  char ***v32; // rbp
  __int64 v33; // rbx
  char **v34; // rax
  char ***v35; // rsi
  char ***v36; // rdi
  int v37; // [rsp+4h] [rbp-44h]
  __int64 v38; // [rsp+8h] [rbp-40h]

  if ( (__int64 *)a1 != a2 )
  {
    v3 = *a2;
    v4 = (unsigned __int64)(a2 + 2);
    v6 = *(_QWORD **)a1;
    v7 = *(unsigned int *)(a1 + 8);
    if ( a2 + 2 == (__int64 *)*a2 )
    {
      v8 = *((unsigned int *)a2 + 2);
      v37 = v8;
      if ( v8 <= v7 )
      {
        v18 = *(_QWORD **)a1;
        if ( v8 )
        {
          v31 = (char ***)(a2 + 3);
          v38 = 80 * v8;
          v32 = (char ***)(v6 + 1);
          v33 = (__int64)&a2[10 * v8 + 3];
          do
          {
            v34 = *(v31 - 1);
            v35 = v31;
            v36 = v32;
            v31 += 10;
            v32 += 10;
            *(v32 - 11) = v34;
            sub_9B8670(v36, v35);
            *((_DWORD *)v32 - 4) = *((_DWORD *)v31 - 4);
          }
          while ( (char ***)v33 != v31 );
          v6 = (_QWORD *)((char *)v6 + v38);
          v18 = *(_QWORD **)a1;
          v7 = *(unsigned int *)(a1 + 8);
        }
        v19 = &v18[10 * v7];
        while ( v6 != v19 )
        {
          while ( 1 )
          {
            v19 -= 10;
            v20 = (_QWORD *)v19[1];
            if ( v20 == v19 + 3 )
              break;
            free(v20);
            if ( v6 == v19 )
              goto LABEL_32;
          }
        }
LABEL_32:
        v21 = *a2;
        *(_DWORD *)(a1 + 8) = v37;
        v22 = v21 + 80LL * *((unsigned int *)a2 + 2);
        while ( v21 != v22 )
        {
          while ( 1 )
          {
            v22 -= 80;
            v23 = *(void **)(v22 + 8);
            if ( v23 == (void *)(v22 + 24) )
              break;
            free(v23);
            if ( v21 == v22 )
              goto LABEL_24;
          }
        }
      }
      else
      {
        if ( v8 > *(unsigned int *)(a1 + 12) )
        {
          v29 = &v6[10 * v7];
          while ( v6 != v29 )
          {
            while ( 1 )
            {
              v29 -= 10;
              v30 = (_QWORD *)v29[1];
              if ( v30 == v29 + 3 )
                break;
              free(v30);
              if ( v6 == v29 )
                goto LABEL_45;
            }
          }
LABEL_45:
          *(_DWORD *)(a1 + 8) = 0;
          v7 = 0;
          sub_2224990(a1, v8);
          v3 = *a2;
          v8 = *((unsigned int *)a2 + 2);
          v6 = *(_QWORD **)a1;
          v4 = *a2;
        }
        else if ( *(_DWORD *)(a1 + 8) )
        {
          v24 = (char ***)(a2 + 3);
          v7 *= 80LL;
          v25 = (char ***)(v6 + 1);
          do
          {
            v26 = *(v24 - 1);
            v27 = v24;
            v28 = v25;
            v24 += 10;
            v25 += 10;
            *(v25 - 11) = v26;
            sub_9B8670(v28, v27);
            *((_DWORD *)v25 - 4) = *((_DWORD *)v24 - 4);
          }
          while ( v24 != (char ***)((char *)a2 + v7 + 24) );
          v3 = *a2;
          v8 = *((unsigned int *)a2 + 2);
          v6 = *(_QWORD **)a1;
          v4 = *a2 + v7;
        }
        v9 = (char *)v6 + v7;
        v10 = v3 + 80 * v8;
        if ( v10 != v4 )
        {
          do
          {
            v12 = *(_QWORD *)v4;
            *((_DWORD *)v9 + 4) = 0;
            *((_DWORD *)v9 + 5) = 6;
            *(_QWORD *)v9 = v12;
            *((_QWORD *)v9 + 1) = v9 + 24;
            if ( *(_DWORD *)(v4 + 16) )
              sub_9B8670((char ***)v9 + 1, (char ***)(v4 + 8));
            v11 = *(_DWORD *)(v4 + 72);
            v4 += 80LL;
            v9 += 80;
            *((_DWORD *)v9 - 2) = v11;
          }
          while ( v10 != v4 );
          v3 = *a2;
        }
        *(_DWORD *)(a1 + 8) = v37;
        v16 = v3 + 80LL * *((unsigned int *)a2 + 2);
        while ( v3 != v16 )
        {
          while ( 1 )
          {
            v16 -= 80;
            v17 = *(void **)(v16 + 8);
            if ( v17 == (void *)(v16 + 24) )
              break;
            free(v17);
            if ( v3 == v16 )
              goto LABEL_24;
          }
        }
      }
LABEL_24:
      *((_DWORD *)a2 + 2) = 0;
    }
    else
    {
      v13 = &v6[10 * v7];
      if ( v6 != v13 )
      {
        do
        {
          while ( 1 )
          {
            v13 -= 10;
            v14 = (_QWORD *)v13[1];
            if ( v14 == v13 + 3 )
              break;
            free(v14);
            if ( v6 == v13 )
              goto LABEL_14;
          }
        }
        while ( v6 != v13 );
LABEL_14:
        v13 = *(_QWORD **)a1;
      }
      if ( v13 != (_QWORD *)(a1 + 16) )
        free(v13);
      *(_QWORD *)a1 = *a2;
      *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
      *(_DWORD *)(a1 + 12) = *((_DWORD *)a2 + 3);
      *a2 = v4;
      a2[1] = 0;
    }
  }
  return a1;
}
