__int64 __fastcall sub_20456D0(__int64 a1, __int64 a2)
{
  __int64 *v3; // r15
  _QWORD *v5; // r14
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  int v8; // r13d
  __int64 *v9; // rax
  char *v10; // rdi
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 *v17; // rbx
  void *v18; // rdi
  __int64 v20; // rdx
  _QWORD *v21; // rbx
  void *v22; // rdi
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // rax
  void *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // rbx
  void *v32; // rdi
  __int64 *v33; // r13
  __int64 v34; // rbx
  void *v35; // rdi
  __int64 *v36; // rbx
  __int64 v37; // rax
  void *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // r15
  void *v44; // rdi
  unsigned __int64 v45; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(__int64 **)a2;
    v5 = *(_QWORD **)a1;
    v6 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v7 = *(unsigned int *)(a2 + 8);
      v8 = *(_DWORD *)(a2 + 8);
      if ( v7 <= v6 )
      {
        v23 = *(_QWORD **)a1;
        if ( *(_DWORD *)(a2 + 8) )
        {
          v24 = &v5[4 * v7];
          do
          {
            v25 = *v3;
            v26 = (void *)v5[1];
            v5[2] = 0;
            v5[3] = 0;
            v5[1] = 0;
            *v5 = v25;
            v5[1] = v3[1];
            v27 = v3[2];
            v3[1] = 0;
            v28 = v5[2];
            v5[2] = v27;
            v29 = v3[3];
            v3[2] = v28;
            v30 = v5[3];
            v5[3] = v29;
            v3[3] = v30;
            if ( v26 )
              operator delete(v26);
            v5 += 4;
            v3 += 4;
          }
          while ( v5 != v24 );
          v23 = *(_QWORD **)a1;
          v6 = *(unsigned int *)(a1 + 8);
        }
        v31 = &v23[4 * v6];
        while ( v5 != v31 )
        {
          while ( 1 )
          {
            v31 -= 4;
            v32 = (void *)v31[1];
            if ( !v32 )
              break;
            operator delete(v32);
            if ( v5 == v31 )
              goto LABEL_34;
          }
        }
LABEL_34:
        *(_DWORD *)(a1 + 8) = v8;
        v33 = *(__int64 **)a2;
        v34 = *(_QWORD *)a2 + 32LL * *(unsigned int *)(a2 + 8);
        if ( *(_QWORD *)a2 != v34 )
        {
          while ( 1 )
          {
            v34 -= 32;
            v35 = *(void **)(v34 + 8);
            if ( v35 )
              break;
LABEL_38:
            if ( v33 == (__int64 *)v34 )
              goto LABEL_13;
          }
          while ( 1 )
          {
            operator delete(v35);
            if ( v33 == (__int64 *)v34 )
              break;
            v34 -= 32;
            v35 = *(void **)(v34 + 8);
            if ( !v35 )
              goto LABEL_38;
          }
        }
      }
      else
      {
        if ( v7 > *(unsigned int *)(a1 + 12) )
        {
          v43 = &v5[4 * v6];
          while ( v43 != v5 )
          {
            while ( 1 )
            {
              v43 -= 4;
              v44 = (void *)v43[1];
              if ( !v44 )
                break;
              operator delete(v44);
              if ( v43 == v5 )
                goto LABEL_49;
            }
          }
LABEL_49:
          *(_DWORD *)(a1 + 8) = 0;
          sub_2034AC0(a1, v7);
          v3 = *(__int64 **)a2;
          v7 = *(unsigned int *)(a2 + 8);
          v6 = 0;
          v5 = *(_QWORD **)a1;
          v9 = *(__int64 **)a2;
        }
        else
        {
          v9 = *(__int64 **)a2;
          if ( *(_DWORD *)(a1 + 8) )
          {
            v6 *= 32LL;
            v36 = (__int64 *)((char *)v3 + v6);
            do
            {
              v37 = *v3;
              v38 = (void *)v5[1];
              v5[2] = 0;
              v5[3] = 0;
              v5[1] = 0;
              *v5 = v37;
              v5[1] = v3[1];
              v39 = v3[2];
              v3[1] = 0;
              v40 = v5[2];
              v5[2] = v39;
              v41 = v3[3];
              v3[2] = v40;
              v42 = v5[3];
              v5[3] = v41;
              v3[3] = v42;
              if ( v38 )
              {
                v45 = v6;
                operator delete(v38);
                v6 = v45;
              }
              v3 += 4;
              v5 += 4;
            }
            while ( v3 != v36 );
            v3 = *(__int64 **)a2;
            v7 = *(unsigned int *)(a2 + 8);
            v5 = *(_QWORD **)a1;
            v9 = (__int64 *)(*(_QWORD *)a2 + v6);
          }
        }
        v10 = (char *)v5 + v6;
        v11 = &v3[4 * v7];
        if ( v11 != v9 )
        {
          do
          {
            v12 = *v9;
            *((_QWORD *)v10 + 2) = 0;
            v9 += 4;
            v10 += 32;
            *((_QWORD *)v10 - 1) = 0;
            *((_QWORD *)v10 - 3) = 0;
            *((_QWORD *)v10 - 4) = v12;
            *((_QWORD *)v10 - 3) = *(v9 - 3);
            v13 = *(v9 - 2);
            *(v9 - 3) = 0;
            v14 = *((_QWORD *)v10 - 2);
            *((_QWORD *)v10 - 2) = v13;
            v15 = *(v9 - 1);
            *(v9 - 2) = v14;
            v16 = *((_QWORD *)v10 - 1);
            *((_QWORD *)v10 - 1) = v15;
            *(v9 - 1) = v16;
          }
          while ( v11 != v9 );
          v3 = *(__int64 **)a2;
        }
        *(_DWORD *)(a1 + 8) = v8;
        v17 = &v3[4 * *(unsigned int *)(a2 + 8)];
        while ( v17 != v3 )
        {
          while ( 1 )
          {
            v17 -= 4;
            v18 = (void *)v17[1];
            if ( !v18 )
              break;
            operator delete(v18);
            if ( v17 == v3 )
              goto LABEL_13;
          }
        }
      }
LABEL_13:
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v20 = 4 * v6;
      v21 = &v5[v20];
      if ( &v5[v20] != v5 )
      {
        do
        {
          while ( 1 )
          {
            v21 -= 4;
            v22 = (void *)v21[1];
            if ( !v22 )
              break;
            operator delete(v22);
            if ( v21 == v5 )
              goto LABEL_18;
          }
        }
        while ( v21 != v5 );
LABEL_18:
        v5 = *(_QWORD **)a1;
      }
      if ( v5 != (_QWORD *)(a1 + 16) )
        free(v5);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = a2 + 16;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}
