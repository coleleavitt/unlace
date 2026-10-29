__int64 __fastcall sub_E9D5C0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rbx
  _QWORD *v6; // r15
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  char *v9; // rbp
  __int64 v10; // r15
  int v11; // eax
  char ***v12; // rsi
  char ***v13; // rdi
  __int64 v14; // rbx
  void *v15; // rdi
  _QWORD *v17; // rbp
  _QWORD *v18; // rdi
  _QWORD *v19; // rdx
  _QWORD *v20; // rbx
  _QWORD *v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rbx
  void *v24; // rdi
  char ***v25; // r14
  char ***v26; // rbx
  char **v27; // rax
  char ***v28; // rsi
  char ***v29; // rdi
  _QWORD *v30; // rbx
  _QWORD *v31; // rdi
  char ***v32; // r14
  char ***v33; // rbp
  __int64 v34; // rbx
  char **v35; // rax
  char ***v36; // rsi
  char ***v37; // rdi
  int v38; // [rsp+4h] [rbp-44h]
  __int64 v39; // [rsp+8h] [rbp-40h]

  if ( (__int64 *)a1 != a2 )
  {
    v3 = *a2;
    v4 = (unsigned __int64)(a2 + 2);
    v6 = *(_QWORD **)a1;
    v7 = *(unsigned int *)(a1 + 8);
    if ( a2 + 2 == (__int64 *)*a2 )
    {
      v8 = *((unsigned int *)a2 + 2);
      v38 = v8;
      if ( v8 <= v7 )
      {
        v19 = *(_QWORD **)a1;
        if ( v8 )
        {
          v32 = (char ***)(a2 + 4);
          v33 = (char ***)(v6 + 2);
          v39 = 56 * v8;
          v34 = (__int64)&a2[7 * v8 + 4];
          do
          {
            v35 = *(v32 - 2);
            v36 = v32;
            v37 = v33;
            v32 += 7;
            v33 += 7;
            *(v33 - 9) = v35;
            *((_DWORD *)v33 - 16) = *((_DWORD *)v32 - 16);
            sub_E9D0F0(v37, v36);
          }
          while ( (char ***)v34 != v32 );
          v6 = (_QWORD *)((char *)v6 + v39);
          v19 = *(_QWORD **)a1;
          v7 = *(unsigned int *)(a1 + 8);
        }
        v20 = &v19[7 * v7];
        while ( v6 != v20 )
        {
          while ( 1 )
          {
            v20 -= 7;
            v21 = (_QWORD *)v20[2];
            if ( v21 == v20 + 4 )
              break;
            free(v21);
            if ( v6 == v20 )
              goto LABEL_32;
          }
        }
LABEL_32:
        v22 = *a2;
        *(_DWORD *)(a1 + 8) = v38;
        v23 = v22 + 56LL * *((unsigned int *)a2 + 2);
        while ( v22 != v23 )
        {
          while ( 1 )
          {
            v23 -= 56;
            v24 = *(void **)(v23 + 16);
            if ( v24 == (void *)(v23 + 32) )
              break;
            free(v24);
            if ( v22 == v23 )
              goto LABEL_16;
          }
        }
      }
      else
      {
        if ( v8 > *(unsigned int *)(a1 + 12) )
        {
          v30 = &v6[7 * v7];
          while ( v6 != v30 )
          {
            while ( 1 )
            {
              v30 -= 7;
              v31 = (_QWORD *)v30[2];
              if ( v31 == v30 + 4 )
                break;
              free(v31);
              if ( v6 == v30 )
                goto LABEL_45;
            }
          }
LABEL_45:
          *(_DWORD *)(a1 + 8) = 0;
          v7 = 0;
          sub_E9D490(a1, v8);
          v3 = *a2;
          v8 = *((unsigned int *)a2 + 2);
          v6 = *(_QWORD **)a1;
          v4 = *a2;
        }
        else if ( *(_DWORD *)(a1 + 8) )
        {
          v25 = (char ***)(a2 + 4);
          v26 = (char ***)(v6 + 2);
          v7 *= 56LL;
          do
          {
            v27 = *(v25 - 2);
            v28 = v25;
            v29 = v26;
            v25 += 7;
            v26 += 7;
            *(v26 - 9) = v27;
            *((_DWORD *)v26 - 16) = *((_DWORD *)v25 - 16);
            sub_E9D0F0(v29, v28);
          }
          while ( v25 != (char ***)((char *)a2 + v7 + 32) );
          v3 = *a2;
          v8 = *((unsigned int *)a2 + 2);
          v6 = *(_QWORD **)a1;
          v4 = *a2 + v7;
        }
        v9 = (char *)v6 + v7;
        v10 = v3 + 56 * v8;
        if ( v10 != v4 )
        {
          do
          {
            while ( 1 )
            {
              *(_QWORD *)v9 = *(_QWORD *)v4;
              v11 = *(_DWORD *)(v4 + 8);
              *((_DWORD *)v9 + 6) = 0;
              *((_DWORD *)v9 + 2) = v11;
              *((_QWORD *)v9 + 2) = v9 + 32;
              *((_DWORD *)v9 + 7) = 1;
              if ( *(_DWORD *)(v4 + 24) )
                break;
              v4 += 56LL;
              v9 += 56;
              if ( v10 == v4 )
                goto LABEL_11;
            }
            v12 = (char ***)(v4 + 16);
            v13 = (char ***)(v9 + 16);
            v4 += 56LL;
            v9 += 56;
            sub_E9D0F0(v13, v12);
          }
          while ( v10 != v4 );
LABEL_11:
          v3 = *a2;
        }
        *(_DWORD *)(a1 + 8) = v38;
        v14 = v3 + 56LL * *((unsigned int *)a2 + 2);
        while ( v3 != v14 )
        {
          while ( 1 )
          {
            v14 -= 56;
            v15 = *(void **)(v14 + 16);
            if ( v15 == (void *)(v14 + 32) )
              break;
            free(v15);
            if ( v3 == v14 )
              goto LABEL_16;
          }
        }
      }
LABEL_16:
      *((_DWORD *)a2 + 2) = 0;
    }
    else
    {
      v17 = &v6[7 * v7];
      if ( v6 != v17 )
      {
        do
        {
          while ( 1 )
          {
            v17 -= 7;
            v18 = (_QWORD *)v17[2];
            if ( v18 == v17 + 4 )
              break;
            free(v18);
            if ( v6 == v17 )
              goto LABEL_21;
          }
        }
        while ( v6 != v17 );
LABEL_21:
        v17 = *(_QWORD **)a1;
      }
      if ( v17 != (_QWORD *)(a1 + 16) )
        free(v17);
      *(_QWORD *)a1 = *a2;
      *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
      *(_DWORD *)(a1 + 12) = *((_DWORD *)a2 + 3);
      *a2 = v4;
      a2[1] = 0;
    }
  }
  return a1;
}

