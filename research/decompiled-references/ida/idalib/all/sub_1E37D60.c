__int64 __fastcall sub_1E37D60(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // r13
  char *v7; // r15
  char *v8; // rbx
  char *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rbp
  int *v12; // r14
  __int64 *i; // rbx
  int v14; // eax
  __int64 *v16; // rbx
  __int64 v17; // rbp
  __int64 *v18; // r14
  int v19; // eax
  __int64 *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r15
  char *v24; // r14
  char *v25; // rbx
  char *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // r13
  __int64 v29; // r14
  int v30; // eax
  __int64 *v31; // rsi
  __int64 v32; // rdi
  unsigned int v34; // [rsp+14h] [rbp-44h]
  unsigned __int64 v35; // [rsp+18h] [rbp-40h]

  if ( (__int64 *)a1 != a2 )
  {
    v4 = *(unsigned int *)(a1 + 8);
    v5 = *(_QWORD *)a1;
    v34 = *((_DWORD *)a2 + 2);
    v3 = v34;
    if ( v34 <= v4 )
    {
      v22 = *(_QWORD *)a1;
      if ( v34 )
      {
        v27 = v5 + 8;
        v28 = *a2 + 8;
        v29 = 136LL * v34;
        do
        {
          v30 = *(_DWORD *)(v28 - 8);
          v31 = (__int64 *)v28;
          v32 = v27;
          v27 += 136;
          v28 += 136;
          *(_DWORD *)(v27 - 144) = v30;
          sub_15192D0(v32, v31);
        }
        while ( v5 + 8 + v29 != v27 );
        v5 += v29;
        v22 = *(_QWORD *)a1;
        v4 = *(unsigned int *)(a1 + 8);
      }
      v23 = v22 + 136 * v4;
      while ( v5 != v23 )
      {
        v23 -= 136;
        v24 = *(char **)(v23 + 8);
        v25 = &v24[56 * *(unsigned int *)(v23 + 16)];
        if ( v24 != v25 )
        {
          do
          {
            while ( 1 )
            {
              v25 -= 56;
              v26 = *((char **)v25 + 2);
              if ( v26 == v25 + 32 )
                break;
              free(v26);
              if ( v24 == v25 )
                goto LABEL_32;
            }
          }
          while ( v24 != v25 );
LABEL_32:
          v24 = *(char **)(v23 + 8);
        }
        if ( v24 != (char *)(v23 + 24) )
          free(v24);
      }
    }
    else
    {
      if ( v34 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        v10 = *a2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          v16 = (__int64 *)(v10 + 8);
          v17 = v5 + 8;
          v4 *= 136LL;
          v18 = (__int64 *)((char *)v16 + v4);
          do
          {
            v19 = *((_DWORD *)v16 - 2);
            v20 = v16;
            v21 = v17;
            v16 += 17;
            v35 = v4;
            v17 += 136;
            *(_DWORD *)(v17 - 144) = v19;
            sub_15192D0(v21, v20);
            v4 = v35;
          }
          while ( v18 != v16 );
          v5 = *(_QWORD *)a1;
          v3 = *((unsigned int *)a2 + 2);
          v10 = *a2;
        }
      }
      else
      {
        v6 = v5 + 136 * v4;
        while ( v6 != v5 )
        {
          while ( 1 )
          {
            v6 -= 136;
            v7 = *(char **)(v6 + 8);
            v8 = &v7[56 * *(unsigned int *)(v6 + 16)];
            if ( v7 != v8 )
            {
              do
              {
                while ( 1 )
                {
                  v8 -= 56;
                  v9 = *((char **)v8 + 2);
                  if ( v9 == v8 + 32 )
                    break;
                  free(v9);
                  if ( v7 == v8 )
                    goto LABEL_9;
                }
              }
              while ( v7 != v8 );
LABEL_9:
              v7 = *(char **)(v6 + 8);
            }
            if ( v7 == (char *)(v6 + 24) )
              break;
            free(v7);
            if ( v6 == v5 )
              goto LABEL_12;
          }
        }
LABEL_12:
        *(_DWORD *)(a1 + 8) = 0;
        sub_EC16A0(a1, v34);
        v5 = *(_QWORD *)a1;
        v4 = 0;
        v3 = *((unsigned int *)a2 + 2);
        v10 = *a2;
      }
      v11 = v4 + v5;
      v12 = (int *)(v10 + 136 * v3);
      for ( i = (__int64 *)(v4 + v10); v12 != (int *)i; v11 += 136 )
      {
        v14 = *(_DWORD *)i;
        *(_DWORD *)(v11 + 16) = 0;
        *(_DWORD *)(v11 + 20) = 2;
        *(_DWORD *)v11 = v14;
        *(_QWORD *)(v11 + 8) = v11 + 24;
        if ( *((_DWORD *)i + 4) )
          sub_15192D0(v11 + 8, i + 1);
        i += 17;
      }
    }
    *(_DWORD *)(a1 + 8) = v34;
  }
  return a1;
}
