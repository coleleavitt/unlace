__int64 __fastcall sub_166FDB0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  _QWORD *v6; // r14
  unsigned __int64 v7; // rcx
  __int64 v8; // rbp
  char *v9; // r14
  __int64 v10; // rbp
  char v11; // al
  __int64 v12; // rax
  _QWORD *v13; // rbp
  _QWORD *v14; // rdi
  __int64 v16; // rbx
  void *v17; // rdi
  _QWORD *v18; // rdx
  _QWORD *v19; // rbx
  _QWORD *v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // rbx
  void *v23; // rdi
  char ***v24; // rbp
  char ***v25; // r14
  __int64 v26; // rbx
  __int64 v27; // r15
  int v28; // eax
  char ***v29; // rsi
  char ***v30; // rdi
  _QWORD *v31; // rbx
  _QWORD *v32; // rdi
  char ***v33; // rbp
  char ***v34; // r15
  __int64 v35; // rbx
  int v36; // eax
  char ***v37; // rsi
  char ***v38; // rdi
  unsigned __int64 v39; // [rsp+0h] [rbp-48h]
  __int64 v40; // [rsp+0h] [rbp-48h]
  unsigned int v41; // [rsp+Ch] [rbp-3Ch]

  if ( (__int64 *)a1 != a2 )
  {
    v3 = *a2;
    v4 = (__int64)(a2 + 2);
    v6 = *(_QWORD **)a1;
    v7 = *(unsigned int *)(a1 + 8);
    if ( a2 + 2 == (__int64 *)*a2 )
    {
      v41 = *((_DWORD *)a2 + 2);
      v8 = v41;
      if ( v41 <= v7 )
      {
        v18 = *(_QWORD **)a1;
        if ( v41 )
        {
          v33 = (char ***)(a2 + 4);
          v34 = (char ***)(v6 + 2);
          v40 = 7LL * v41;
          v35 = (__int64)&a2[v40 + 4];
          do
          {
            v36 = *((_DWORD *)v33 - 4);
            v37 = v33;
            v38 = v34;
            v33 += 7;
            v34 += 7;
            *((_DWORD *)v34 - 18) = v36;
            *(v34 - 8) = *(v33 - 8);
            sub_1668090(v38, v37);
            *((_BYTE *)v34 - 24) = *((_BYTE *)v33 - 24);
          }
          while ( (char ***)v35 != v33 );
          v6 = (_QWORD *)((char *)v6 + v40 * 8);
          v18 = *(_QWORD **)a1;
          v7 = *(unsigned int *)(a1 + 8);
        }
        v19 = &v18[7 * v7];
        while ( v6 != v19 )
        {
          while ( 1 )
          {
            v19 -= 7;
            v20 = (_QWORD *)v19[2];
            if ( v20 == v19 + 4 )
              break;
            free(v20);
            if ( v6 == v19 )
              goto LABEL_32;
          }
        }
LABEL_32:
        v21 = *a2;
        *(_DWORD *)(a1 + 8) = v41;
        v22 = v21 + 56LL * *((unsigned int *)a2 + 2);
        while ( v21 != v22 )
        {
          while ( 1 )
          {
            v22 -= 56;
            v23 = *(void **)(v22 + 16);
            if ( v23 == (void *)(v22 + 32) )
              break;
            free(v23);
            if ( v21 == v22 )
              goto LABEL_24;
          }
        }
      }
      else
      {
        if ( v41 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          v31 = &v6[7 * v7];
          while ( v6 != v31 )
          {
            while ( 1 )
            {
              v31 -= 7;
              v32 = (_QWORD *)v31[2];
              if ( v32 == v31 + 4 )
                break;
              free(v32);
              if ( v6 == v31 )
                goto LABEL_45;
            }
          }
LABEL_45:
          *(_DWORD *)(a1 + 8) = 0;
          sub_1668DF0(a1, v41);
          v3 = *a2;
          v8 = *((unsigned int *)a2 + 2);
          v7 = 0;
          v6 = *(_QWORD **)a1;
          v4 = *a2;
        }
        else if ( *(_DWORD *)(a1 + 8) )
        {
          v24 = (char ***)(v6 + 2);
          v25 = (char ***)(a2 + 4);
          v26 = 56 * v7;
          v7 = v26;
          v27 = (__int64)&a2[(unsigned __int64)v26 / 8 + 4];
          do
          {
            v28 = *((_DWORD *)v25 - 4);
            v29 = v25;
            v30 = v24;
            v39 = v7;
            v25 += 7;
            v24 += 7;
            *((_DWORD *)v24 - 18) = v28;
            *(v24 - 8) = *(v25 - 8);
            sub_1668090(v30, v29);
            v7 = v39;
            *((_BYTE *)v24 - 24) = *((_BYTE *)v25 - 24);
          }
          while ( v25 != (char ***)v27 );
          v3 = *a2;
          v8 = *((unsigned int *)a2 + 2);
          v6 = *(_QWORD **)a1;
          v4 = *a2 + v26;
        }
        v9 = (char *)v6 + v7;
        v10 = v3 + 56 * v8;
        if ( v10 != v4 )
        {
          do
          {
            *(_DWORD *)v9 = *(_DWORD *)v4;
            v12 = *(_QWORD *)(v4 + 8);
            *((_DWORD *)v9 + 6) = 0;
            *((_QWORD *)v9 + 1) = v12;
            *((_QWORD *)v9 + 2) = v9 + 32;
            *((_DWORD *)v9 + 7) = 4;
            if ( *(_DWORD *)(v4 + 24) )
              sub_1668090((char ***)v9 + 2, (char ***)(v4 + 16));
            v11 = *(_BYTE *)(v4 + 48);
            v4 += 56;
            v9 += 56;
            *(v9 - 8) = v11;
          }
          while ( v10 != v4 );
          v3 = *a2;
        }
        *(_DWORD *)(a1 + 8) = v41;
        v16 = v3 + 56LL * *((unsigned int *)a2 + 2);
        while ( v3 != v16 )
        {
          while ( 1 )
          {
            v16 -= 56;
            v17 = *(void **)(v16 + 16);
            if ( v17 == (void *)(v16 + 32) )
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
      v13 = &v6[7 * v7];
      if ( v6 != v13 )
      {
        do
        {
          while ( 1 )
          {
            v13 -= 7;
            v14 = (_QWORD *)v13[2];
            if ( v14 == v13 + 4 )
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
