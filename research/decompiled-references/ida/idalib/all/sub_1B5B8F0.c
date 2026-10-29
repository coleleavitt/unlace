__int64 __fastcall sub_1B5B8F0(__int64 a1, __int64 a2)
{
  char ***v3; // r14
  void **v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // r15
  char ***v8; // rbp
  char *v9; // rbx
  char ***v10; // r15
  void **v11; // rbp
  void **v13; // rbx
  void **v14; // rax
  char ***v15; // rbp
  char ***v16; // r15
  char ***v17; // rsi
  char ***v18; // rdi
  void **v19; // rbp
  char ***v20; // rbp
  void **v21; // rbx
  __int64 v22; // rbp
  void **v23; // r15
  char ***v24; // rdi
  void **v25; // rbp
  __int64 v26; // [rsp+0h] [rbp-48h]
  unsigned __int64 v27; // [rsp+0h] [rbp-48h]
  unsigned int v28; // [rsp+Ch] [rbp-3Ch]

  if ( a1 != a2 )
  {
    v3 = *(char ****)a2;
    v5 = *(void ***)a1;
    v6 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v28 = *(_DWORD *)(a2 + 8);
      v7 = v28;
      if ( v28 <= v6 )
      {
        v14 = *(void ***)a1;
        if ( v28 )
        {
          v26 = 18LL * v28;
          v15 = &v3[v26];
          v16 = *(char ****)a1;
          do
          {
            v17 = v3;
            v18 = v16;
            v3 += 18;
            v16 += 18;
            sub_1B5B5A0(v18, v17);
          }
          while ( v3 != v15 );
          v14 = *(void ***)a1;
          v6 = *(unsigned int *)(a1 + 8);
          v5 = (void **)((char *)v5 + v26 * 8);
        }
        v19 = &v14[18 * v6];
        while ( v5 != v19 )
        {
          while ( 1 )
          {
            v19 -= 18;
            if ( *v19 == v19 + 2 )
              break;
            free(*v19);
            if ( v5 == v19 )
              goto LABEL_35;
          }
        }
LABEL_35:
        v20 = *(char ****)a2;
        *(_DWORD *)(a1 + 8) = v28;
        v21 = (void **)&v20[18 * *(unsigned int *)(a2 + 8)];
        while ( v20 != (char ***)v21 )
        {
          while ( 1 )
          {
            v21 -= 18;
            if ( *v21 == v21 + 2 )
              break;
            free(*v21);
            if ( v20 == (char ***)v21 )
              goto LABEL_24;
          }
        }
      }
      else
      {
        if ( v28 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          v25 = &v5[18 * v6];
          while ( v5 != v25 )
          {
            while ( 1 )
            {
              v25 -= 18;
              if ( *v25 == v25 + 2 )
                break;
              free(*v25);
              if ( v5 == v25 )
                goto LABEL_48;
            }
          }
LABEL_48:
          *(_DWORD *)(a1 + 8) = 0;
          sub_1B5B6F0(a1, v28);
          v3 = *(char ****)a2;
          v7 = *(unsigned int *)(a2 + 8);
          v6 = 0;
          v5 = *(void ***)a1;
          v8 = *(char ****)a2;
        }
        else
        {
          v8 = *(char ****)a2;
          if ( *(_DWORD *)(a1 + 8) )
          {
            v22 = 144 * v6;
            v6 = v22;
            v23 = &v5[(unsigned __int64)v22 / 8];
            do
            {
              v24 = (char ***)v5;
              v27 = v6;
              v5 += 18;
              sub_1B5B5A0(v24, v3);
              v3 += 18;
              v6 = v27;
            }
            while ( v23 != v5 );
            v3 = *(char ****)a2;
            v7 = *(unsigned int *)(a2 + 8);
            v5 = *(void ***)a1;
            v8 = (char ***)(*(_QWORD *)a2 + v22);
          }
        }
        v9 = (char *)v5 + v6;
        v10 = &v3[18 * v7];
        if ( v8 != v10 )
        {
          do
          {
            *((_DWORD *)v9 + 2) = 0;
            *(_QWORD *)v9 = v9 + 16;
            *((_DWORD *)v9 + 3) = 8;
            if ( *((_DWORD *)v8 + 2) )
              sub_1B5B5A0((char ***)v9, v8);
            v8 += 18;
            v9 += 144;
          }
          while ( v10 != v8 );
          v3 = *(char ****)a2;
        }
        *(_DWORD *)(a1 + 8) = v28;
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
      v11 = &v5[18 * v6];
      if ( v5 != v11 )
      {
        do
        {
          while ( 1 )
          {
            v11 -= 18;
            if ( *v11 == v11 + 2 )
              break;
            free(*v11);
            if ( v5 == v11 )
              goto LABEL_14;
          }
        }
        while ( v5 != v11 );
LABEL_14:
        v11 = *(void ***)a1;
      }
      if ( v11 != (void **)(a1 + 16) )
        free(v11);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = a2 + 16;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}
