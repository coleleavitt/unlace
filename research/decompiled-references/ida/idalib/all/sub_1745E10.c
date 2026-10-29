__int64 __fastcall sub_1745E10(__int64 a1, __int64 a2)
{
  char ***v3; // r14
  void **v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  char ***v8; // r15
  char *v9; // rbx
  char ***v10; // rbp
  char ***v11; // rsi
  char ***v12; // rdi
  void **v13; // rbx
  void **v15; // rbp
  void **v16; // rax
  char ***v17; // rbp
  char ***v18; // r15
  char ***v19; // rsi
  char ***v20; // rdi
  void **v21; // rbp
  void **v22; // rbp
  void **v23; // rbx
  void *v24; // rdi
  void **v25; // r15
  char ***v26; // rsi
  char ***v27; // rdi
  void **v28; // rbp
  int v29; // [rsp+4h] [rbp-44h]
  unsigned __int64 v30; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(char ****)a2;
    v5 = *(void ***)a1;
    v6 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v7 = *(unsigned int *)(a2 + 8);
      v29 = v7;
      if ( v7 <= v6 )
      {
        v16 = *(void ***)a1;
        if ( v7 )
        {
          v17 = *(char ****)a1;
          v30 = v7 << 6;
          v18 = &v3[8 * v7];
          do
          {
            v19 = v3;
            v20 = v17;
            v3 += 8;
            v17 += 8;
            sub_1745BE0(v20, v19);
          }
          while ( v3 != v18 );
          v16 = *(void ***)a1;
          v6 = *(unsigned int *)(a1 + 8);
          v5 = (void **)((char *)v5 + v30);
        }
        v21 = &v16[8 * v6];
        while ( v5 != v21 )
        {
          while ( 1 )
          {
            v21 -= 8;
            if ( *v21 == v21 + 2 )
              break;
            free(*v21);
            if ( v5 == v21 )
              goto LABEL_35;
          }
        }
LABEL_35:
        v22 = *(void ***)a2;
        *(_DWORD *)(a1 + 8) = v29;
        v23 = &v22[8 * (unsigned __int64)*(unsigned int *)(a2 + 8)];
        if ( v22 != v23 )
        {
          while ( 1 )
          {
            v23 -= 8;
            v24 = *v23;
            if ( *v23 != v23 + 2 )
              break;
LABEL_39:
            if ( v22 == v23 )
              goto LABEL_16;
          }
          while ( 1 )
          {
            free(v24);
            if ( v22 == v23 )
              break;
            v23 -= 8;
            v24 = *v23;
            if ( *v23 == v23 + 2 )
              goto LABEL_39;
          }
        }
      }
      else
      {
        if ( v7 > *(unsigned int *)(a1 + 12) )
        {
          v28 = &v5[8 * v6];
          while ( v5 != v28 )
          {
            while ( 1 )
            {
              v28 -= 8;
              if ( *v28 == v28 + 2 )
                break;
              free(*v28);
              if ( v5 == v28 )
                goto LABEL_48;
            }
          }
LABEL_48:
          *(_DWORD *)(a1 + 8) = 0;
          v6 = 0;
          sub_1745D00(a1, v7);
          v3 = *(char ****)a2;
          v7 = *(unsigned int *)(a2 + 8);
          v5 = *(void ***)a1;
          v8 = *(char ****)a2;
        }
        else
        {
          v8 = v3;
          if ( *(_DWORD *)(a1 + 8) )
          {
            v6 <<= 6;
            v25 = (void **)((char *)v5 + v6);
            do
            {
              v26 = v3;
              v27 = (char ***)v5;
              v5 += 8;
              v3 += 8;
              sub_1745BE0(v27, v26);
            }
            while ( v25 != v5 );
            v3 = *(char ****)a2;
            v7 = *(unsigned int *)(a2 + 8);
            v5 = *(void ***)a1;
            v8 = (char ***)(*(_QWORD *)a2 + v6);
          }
        }
        v9 = (char *)v5 + v6;
        v10 = &v3[8 * v7];
        if ( v8 != v10 )
        {
          do
          {
            while ( 1 )
            {
              *((_DWORD *)v9 + 2) = 0;
              *(_QWORD *)v9 = v9 + 16;
              *((_DWORD *)v9 + 3) = 12;
              if ( *((_DWORD *)v8 + 2) )
                break;
              v8 += 8;
              v9 += 64;
              if ( v10 == v8 )
                goto LABEL_11;
            }
            v11 = v8;
            v12 = (char ***)v9;
            v8 += 8;
            v9 += 64;
            sub_1745BE0(v12, v11);
          }
          while ( v10 != v8 );
LABEL_11:
          v3 = *(char ****)a2;
        }
        *(_DWORD *)(a1 + 8) = v29;
        v13 = (void **)&v3[8 * (unsigned __int64)*(unsigned int *)(a2 + 8)];
        while ( v13 != (void **)v3 )
        {
          while ( 1 )
          {
            v13 -= 8;
            if ( *v13 == v13 + 2 )
              break;
            free(*v13);
            if ( v13 == (void **)v3 )
              goto LABEL_16;
          }
        }
      }
LABEL_16:
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v15 = &v5[8 * v6];
      if ( v5 != v15 )
      {
        do
        {
          while ( 1 )
          {
            v15 -= 8;
            if ( *v15 == v15 + 2 )
              break;
            free(*v15);
            if ( v5 == v15 )
              goto LABEL_21;
          }
        }
        while ( v5 != v15 );
LABEL_21:
        v15 = *(void ***)a1;
      }
      if ( v15 != (void **)(a1 + 16) )
        free(v15);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = a2 + 16;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}
