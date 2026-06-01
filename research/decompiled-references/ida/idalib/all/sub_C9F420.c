__int64 __fastcall sub_C9F420(__int64 a1, __int64 a2)
{
  char ***v3; // r14
  char ***v4; // r15
  void **v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rbp
  char ***v10; // r15
  void **v11; // rbp
  void **v13; // rbx
  void **v14; // rax
  char ***v15; // rbp
  char ***v16; // r15
  char ***v17; // rsi
  char ***v18; // rdi
  void **v19; // rbp
  void **v20; // rbp
  void **v21; // rbx
  __int64 v22; // rbp
  void **v23; // r15
  char ***v24; // rsi
  char ***v25; // rdi
  void **v26; // rbp
  __int64 v27; // rax
  void **v28; // r15
  __int64 v29; // r14
  void **v30; // rbp
  int v31; // edx
  void **v32; // r15
  int v33; // r14d
  unsigned int v34; // [rsp+4h] [rbp-54h]
  __int64 v35; // [rsp+8h] [rbp-50h]
  __int64 v36[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( a1 != a2 )
  {
    v3 = *(char ****)a2;
    v4 = (char ***)(a2 + 16);
    v6 = *(void ***)a1;
    v7 = *(unsigned int *)(a1 + 8);
    if ( v4 == v3 )
    {
      v34 = *(_DWORD *)(a2 + 8);
      v8 = v34;
      if ( v34 <= v7 )
      {
        v14 = *(void ***)a1;
        if ( v34 )
        {
          v35 = 18LL * v34;
          v15 = &v3[v35];
          v16 = *(char ****)a1;
          do
          {
            v17 = v3;
            v18 = v16;
            v3 += 18;
            v16 += 18;
            sub_C9F300(v18, v17);
          }
          while ( v3 != v15 );
          v14 = *(void ***)a1;
          v7 = *(unsigned int *)(a1 + 8);
          v6 = (void **)((char *)v6 + v35 * 8);
        }
        v19 = &v14[18 * v7];
        while ( v6 != v19 )
        {
          while ( 1 )
          {
            v19 -= 18;
            if ( *v19 == v19 + 2 )
              break;
            free(*v19);
            if ( v6 == v19 )
              goto LABEL_35;
          }
        }
LABEL_35:
        v20 = *(void ***)a2;
        *(_DWORD *)(a1 + 8) = v34;
        v21 = &v20[18 * *(unsigned int *)(a2 + 8)];
        while ( v20 != v21 )
        {
          while ( 1 )
          {
            v21 -= 18;
            if ( *v21 == v21 + 2 )
              break;
            free(*v21);
            if ( v20 == v21 )
              goto LABEL_24;
          }
        }
      }
      else
      {
        if ( v34 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          v26 = &v6[18 * v7];
          while ( v6 != v26 )
          {
            while ( 1 )
            {
              v26 -= 18;
              if ( *v26 == v26 + 2 )
                break;
              free(*v26);
              if ( v6 == v26 )
                goto LABEL_48;
            }
          }
LABEL_48:
          *(_DWORD *)(a1 + 8) = 0;
          v27 = sub_2237400(a1, a1 + 16, v34, 144, v36);
          v28 = *(void ***)a1;
          v6 = (void **)v27;
          v29 = v27;
          v30 = (void **)(*(_QWORD *)a1 + 144LL * *(unsigned int *)(a1 + 8));
          if ( *(void ***)a1 != v30 )
          {
            do
            {
              *(_DWORD *)(v29 + 8) = 0;
              *(_DWORD *)(v29 + 12) = 8;
              v31 = *((_DWORD *)v28 + 2);
              *(_QWORD *)v29 = v29 + 16;
              if ( v31 )
                sub_C9F300((char ***)v29, (char ***)v28);
              v28 += 18;
              v29 += 144;
            }
            while ( v30 != v28 );
            v32 = *(void ***)a1;
            v30 = (void **)(*(_QWORD *)a1 + 144LL * *(unsigned int *)(a1 + 8));
            if ( *(void ***)a1 != v30 )
            {
              do
              {
                while ( 1 )
                {
                  v30 -= 18;
                  if ( *v30 == v30 + 2 )
                    break;
                  free(*v30);
                  if ( v30 == v32 )
                    goto LABEL_56;
                }
              }
              while ( v30 != v32 );
LABEL_56:
              v30 = *(void ***)a1;
            }
          }
          v33 = v36[0];
          if ( (void **)(a1 + 16) != v30 )
            free(v30);
          *(_DWORD *)(a1 + 12) = v33;
          v8 = *(unsigned int *)(a2 + 8);
          *(_QWORD *)a1 = v6;
          v3 = *(char ****)a2;
          v9 = *(_QWORD *)a2;
        }
        else
        {
          v9 = (__int64)v3;
          if ( *(_DWORD *)(a1 + 8) )
          {
            v22 = 144 * v7;
            v23 = &v6[18 * v7];
            do
            {
              v24 = v3;
              v25 = (char ***)v6;
              v6 += 18;
              v3 += 18;
              sub_C9F300(v25, v24);
            }
            while ( v6 != v23 );
            v3 = *(char ****)a2;
            v8 = *(unsigned int *)(a2 + 8);
            v6 = (void **)(v22 + *(_QWORD *)a1);
            v9 = *(_QWORD *)a2 + v22;
          }
        }
        v10 = &v3[18 * v8];
        if ( v10 != (char ***)v9 )
        {
          do
          {
            *((_DWORD *)v6 + 2) = 0;
            *v6 = v6 + 2;
            *((_DWORD *)v6 + 3) = 8;
            if ( *(_DWORD *)(v9 + 8) )
              sub_C9F300((char ***)v6, (char ***)v9);
            v9 += 144;
            v6 += 18;
          }
          while ( v10 != (char ***)v9 );
          v3 = *(char ****)a2;
        }
        *(_DWORD *)(a1 + 8) = v34;
        v13 = (void **)&v3[18 * *(unsigned int *)(a2 + 8)];
        while ( v13 != (void **)v3 )
        {
          while ( 1 )
          {
            v13 -= 18;
            if ( *v13 == v13 + 2 )
              break;
            free(*v13);
            if ( v13 == (void **)v3 )
              goto LABEL_24;
          }
        }
      }
LABEL_24:
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v11 = &v6[18 * v7];
      if ( v6 != v11 )
      {
        do
        {
          while ( 1 )
          {
            v11 -= 18;
            if ( *v11 == v11 + 2 )
              break;
            free(*v11);
            if ( v6 == v11 )
              goto LABEL_14;
          }
        }
        while ( v6 != v11 );
LABEL_14:
        v11 = *(void ***)a1;
      }
      if ( v11 != (void **)(a1 + 16) )
        free(v11);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = v4;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}
