__int64 __fastcall sub_9F0880(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r14
  char *v6; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  int v9; // r15d
  __int64 v10; // rdi
  __int64 v11; // r13
  unsigned __int64 v12; // rbx
  void *v13; // rdi
  char *v15; // rbx
  char *v16; // rdi
  char *v17; // rax
  char *v18; // rbx
  char *v19; // rdi
  __int64 v20; // r13
  unsigned __int64 v21; // rbx
  void *v22; // rdi
  _BYTE *v23; // r14
  _QWORD *v24; // r13
  _BYTE *v25; // rcx
  __int64 v26; // rdx
  _BYTE *v27; // rdi
  _BYTE *v28; // rax
  size_t v29; // rdx
  char *v30; // rbx
  char *v31; // rdi
  _BYTE *v32; // rbx
  _QWORD *v33; // r14
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  _BYTE *v37; // rdi
  _BYTE *v38; // rax
  size_t v39; // rdx
  _BYTE *v40; // [rsp+0h] [rbp-48h]
  unsigned __int64 v41; // [rsp+0h] [rbp-48h]
  __int64 v42; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(_QWORD *)a2;
    v4 = a2 + 16;
    v6 = *(char **)a1;
    v7 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v8 = *(unsigned int *)(a2 + 8);
      v9 = v8;
      if ( v8 > v7 )
      {
        if ( v8 > *(unsigned int *)(a1 + 12) )
        {
          v30 = &v6[64 * v7];
          while ( v30 != v6 )
          {
            while ( 1 )
            {
              v30 -= 64;
              v31 = *((char **)v30 + 3);
              if ( v31 == v30 + 40 )
                break;
              operator delete(v31);
              if ( v30 == v6 )
                goto LABEL_48;
            }
          }
LABEL_48:
          *(_DWORD *)(a1 + 8) = 0;
          v7 = 0;
          sub_9EE9B0(a1, v8);
          v3 = *(_QWORD *)a2;
          v8 = *(unsigned int *)(a2 + 8);
          v6 = *(char **)a1;
          v10 = *(_QWORD *)a2;
          goto LABEL_6;
        }
        v10 = v4;
        if ( !v7 )
        {
LABEL_6:
          sub_9F07C0(v10, v3 + (v8 << 6), (__int64)&v6[v7]);
          *(_DWORD *)(a1 + 8) = v9;
          v11 = *(_QWORD *)a2;
          v12 = *(_QWORD *)a2 + ((unsigned __int64)*(unsigned int *)(a2 + 8) << 6);
          while ( v11 != v12 )
          {
            while ( 1 )
            {
              v12 -= 64LL;
              v13 = *(void **)(v12 + 24);
              if ( v13 == (void *)(v12 + 40) )
                break;
              operator delete(v13);
              if ( v11 == v12 )
                goto LABEL_10;
            }
          }
LABEL_10:
          *(_DWORD *)(a2 + 8) = 0;
          return a1;
        }
        v7 <<= 6;
        v23 = (_BYTE *)(a2 + 56);
        v24 = v6 + 40;
        v25 = (_BYTE *)(a2 + 56 + v7);
        while ( 1 )
        {
          v27 = (_BYTE *)*(v24 - 2);
          *(v24 - 5) = *((_QWORD *)v23 - 5);
          *((_BYTE *)v24 - 32) = *(v23 - 32);
          *(_QWORD *)((char *)v24 - 28) = *(_QWORD *)(v23 - 28);
          *((_BYTE *)v24 - 20) = *(v23 - 20);
          v28 = *((_BYTE **)v23 - 2);
          if ( v28 == v23 )
          {
            v29 = *((_QWORD *)v23 - 1);
            if ( v29 )
            {
              if ( v29 == 1 )
              {
                *v27 = *v23;
                v29 = *((_QWORD *)v23 - 1);
                v27 = (_BYTE *)*(v24 - 2);
              }
              else
              {
                v40 = v25;
                memcpy(v27, v23, v29);
                v29 = *((_QWORD *)v23 - 1);
                v27 = (_BYTE *)*(v24 - 2);
                v25 = v40;
              }
            }
            *(v24 - 1) = v29;
            v27[v29] = 0;
            v27 = *((_BYTE **)v23 - 2);
            goto LABEL_34;
          }
          if ( v27 == (_BYTE *)v24 )
            break;
          *(v24 - 2) = v28;
          v26 = *v24;
          *(v24 - 1) = *((_QWORD *)v23 - 1);
          *v24 = *(_QWORD *)v23;
          if ( !v27 )
            goto LABEL_43;
          *((_QWORD *)v23 - 2) = v27;
          *(_QWORD *)v23 = v26;
LABEL_34:
          *((_QWORD *)v23 - 1) = 0;
          v23 += 64;
          v24 += 8;
          *v27 = 0;
          *((_BYTE *)v24 - 48) = *(v23 - 48);
          if ( v23 == v25 )
          {
            v3 = *(_QWORD *)a2;
            v8 = *(unsigned int *)(a2 + 8);
            v6 = *(char **)a1;
            v10 = *(_QWORD *)a2 + v7;
            goto LABEL_6;
          }
        }
        *(v24 - 2) = v28;
        *(v24 - 1) = *((_QWORD *)v23 - 1);
        *v24 = *(_QWORD *)v23;
LABEL_43:
        *((_QWORD *)v23 - 2) = v23;
        v27 = v23;
        goto LABEL_34;
      }
      v17 = *(char **)a1;
      if ( !v8 )
      {
LABEL_22:
        v18 = &v17[64 * v7];
        while ( v6 != v18 )
        {
          while ( 1 )
          {
            v18 -= 64;
            v19 = *((char **)v18 + 3);
            if ( v19 == v18 + 40 )
              break;
            operator delete(v19);
            if ( v6 == v18 )
              goto LABEL_26;
          }
        }
LABEL_26:
        *(_DWORD *)(a1 + 8) = v8;
        v20 = *(_QWORD *)a2;
        v21 = *(_QWORD *)a2 + ((unsigned __int64)*(unsigned int *)(a2 + 8) << 6);
        if ( *(_QWORD *)a2 != v21 )
        {
          do
          {
            while ( 1 )
            {
              v21 -= 64LL;
              v22 = *(void **)(v21 + 24);
              if ( v22 == (void *)(v21 + 40) )
                break;
              operator delete(v22);
              if ( v20 == v21 )
                goto LABEL_10;
            }
          }
          while ( v20 != v21 );
        }
        goto LABEL_10;
      }
      v32 = (_BYTE *)(a2 + 56);
      v33 = v6 + 40;
      v34 = v8 << 6;
      v35 = a2 + 56 + (v8 << 6);
      while ( 1 )
      {
        v37 = (_BYTE *)*(v33 - 2);
        *(v33 - 5) = *((_QWORD *)v32 - 5);
        *((_BYTE *)v33 - 32) = *(v32 - 32);
        *(_QWORD *)((char *)v33 - 28) = *(_QWORD *)(v32 - 28);
        *((_BYTE *)v33 - 20) = *(v32 - 20);
        v38 = *((_BYTE **)v32 - 2);
        if ( v38 == v32 )
        {
          v39 = *((_QWORD *)v32 - 1);
          if ( v39 )
          {
            if ( v39 == 1 )
            {
              *v37 = *v32;
              v39 = *((_QWORD *)v32 - 1);
              v37 = (_BYTE *)*(v33 - 2);
            }
            else
            {
              v42 = v35;
              v41 = v34;
              memcpy(v37, v32, v39);
              v39 = *((_QWORD *)v32 - 1);
              v37 = (_BYTE *)*(v33 - 2);
              v35 = v42;
              v34 = v41;
            }
          }
          *(v33 - 1) = v39;
          v37[v39] = 0;
          v37 = *((_BYTE **)v32 - 2);
          goto LABEL_54;
        }
        if ( v33 == (_QWORD *)v37 )
          break;
        *(v33 - 2) = v38;
        v36 = *v33;
        *(v33 - 1) = *((_QWORD *)v32 - 1);
        *v33 = *(_QWORD *)v32;
        if ( !v37 )
          goto LABEL_61;
        *((_QWORD *)v32 - 2) = v37;
        *(_QWORD *)v32 = v36;
LABEL_54:
        *((_QWORD *)v32 - 1) = 0;
        v32 += 64;
        v33 += 8;
        *v37 = 0;
        *((_BYTE *)v33 - 48) = *(v32 - 48);
        if ( (_BYTE *)v35 == v32 )
        {
          v6 += v34;
          v17 = *(char **)a1;
          v7 = *(unsigned int *)(a1 + 8);
          goto LABEL_22;
        }
      }
      *(v33 - 2) = v38;
      *(v33 - 1) = *((_QWORD *)v32 - 1);
      *v33 = *(_QWORD *)v32;
LABEL_61:
      *((_QWORD *)v32 - 2) = v32;
      v37 = v32;
      goto LABEL_54;
    }
    v15 = &v6[64 * v7];
    if ( v15 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v15 -= 64;
          v16 = *((char **)v15 + 3);
          if ( v16 == v15 + 40 )
            break;
          operator delete(v16);
          if ( v15 == v6 )
            goto LABEL_15;
        }
      }
      while ( v15 != v6 );
LABEL_15:
      v6 = *(char **)a1;
    }
    if ( v6 != (char *)(a1 + 16) )
      free(v6);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = 0;
  }
  return a1;
}
