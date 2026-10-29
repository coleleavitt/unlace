void __fastcall sub_6DE780(__int64 a1, char **a2)
{
  char *v2; // r13
  char *v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  bool v8; // cf
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // r14
  char **v12; // rax
  char *v13; // rdx
  _QWORD *v14; // rsi
  char *v15; // rcx
  char *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rsi
  char *v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // r13
  __int64 v23; // r13
  unsigned __int64 v24; // rcx
  char *v25; // rsi
  char *v26; // r9
  unsigned int v27; // edi
  unsigned int v28; // edi
  unsigned int v29; // esi
  __int64 v30; // r10
  unsigned int v31; // edi
  unsigned __int64 v32; // r8
  char *v33; // rsi
  char *v34; // r9
  unsigned int v35; // ecx
  unsigned int v36; // esi
  __int64 v37; // rdi
  __int64 v38; // [rsp+8h] [rbp-40h]

  v2 = *(char **)(a1 + 8);
  v3 = *(char **)a1;
  v4 = (__int64)&v2[-*(_QWORD *)a1] >> 5;
  if ( v4 == 0x3FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  v38 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( v4 )
    v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  v8 = __CFADD__(v5, v4);
  v9 = v5 + v4;
  if ( v8 )
  {
    v10 = 0x7FFFFFFFFFFFFFE0LL;
  }
  else
  {
    if ( v9 > 0x3FFFFFFFFFFFFFFLL )
      v9 = 0x3FFFFFFFFFFFFFFLL;
    v10 = 32 * v9;
  }
  v11 = operator new(v10);
  v12 = (char **)(v11 + v38);
  v13 = (char *)(a2 + 2);
  v14 = (_QWORD *)(v11 + v38 + 16);
  *(_QWORD *)(v11 + v38) = v14;
  if ( *a2 != (char *)(a2 + 2) )
  {
    *v12 = *a2;
    v12[2] = a2[2];
    v15 = a2[1];
    goto LABEL_10;
  }
  v15 = a2[1];
  v31 = (_DWORD)v15 + 1;
  if ( (unsigned int)((_DWORD)v15 + 1) >= 8 )
  {
    *v14 = *(_QWORD *)v13;
    *(_QWORD *)((char *)v14 + v31 - 8) = *(_QWORD *)&v13[v31 - 8];
    v32 = (unsigned __int64)(v12 + 3) & 0xFFFFFFFFFFFFFFF8LL;
    v33 = (char *)v14 - v32;
    v34 = (char *)(v13 - v33);
    if ( ((v31 + (_DWORD)v33) & 0xFFFFFFF8) >= 8 )
    {
      v35 = (v31 + (_DWORD)v33) & 0xFFFFFFF8;
      v36 = 0;
      do
      {
        v37 = v36;
        v36 += 8;
        *(_QWORD *)(v32 + v37) = *(_QWORD *)&v34[v37];
      }
      while ( v36 < v35 );
    }
LABEL_38:
    v15 = a2[1];
    goto LABEL_10;
  }
  if ( (v31 & 4) == 0 )
  {
    if ( (_DWORD)v15 == -1 )
      goto LABEL_10;
    *(_BYTE *)v14 = *v13;
    if ( (v31 & 2) != 0 )
    {
      *(_WORD *)((char *)v14 + v31 - 2) = *(_WORD *)&v13[v31 - 2];
      v15 = a2[1];
      goto LABEL_10;
    }
    goto LABEL_38;
  }
  *(_DWORD *)v14 = *(_DWORD *)v13;
  *(_DWORD *)((char *)v14 + v31 - 4) = *(_DWORD *)&v13[v31 - 4];
  v15 = a2[1];
LABEL_10:
  v12[1] = v15;
  *a2 = v13;
  a2[1] = nullptr;
  *((_BYTE *)a2 + 16) = 0;
  if ( v3 != v2 )
  {
    v16 = v3 + 16;
    v17 = (_QWORD *)v11;
    while ( 1 )
    {
      v19 = v17 + 2;
      *v17 = v17 + 2;
      v20 = *((char **)v16 - 2);
      if ( v16 != v20 )
        break;
      v18 = *((_QWORD *)v16 - 1);
      v21 = v18 + 1;
      if ( (unsigned int)(v18 + 1) >= 8 )
      {
        *v19 = *(_QWORD *)v16;
        *(_QWORD *)((char *)v19 + v21 - 8) = *(_QWORD *)&v16[v21 - 8];
        v24 = (unsigned __int64)(v17 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v25 = (char *)v19 - v24;
        v26 = (char *)(v16 - v25);
        v27 = ((_DWORD)v25 + v21) & 0xFFFFFFF8;
        if ( v27 >= 8 )
        {
          v28 = v27 & 0xFFFFFFF8;
          v29 = 0;
          do
          {
            v30 = v29;
            v29 += 8;
            *(_QWORD *)(v24 + v30) = *(_QWORD *)&v26[v30];
          }
          while ( v29 < v28 );
        }
        goto LABEL_13;
      }
      if ( (v21 & 4) != 0 )
      {
        *(_DWORD *)v19 = *(_DWORD *)v16;
        *(_DWORD *)((char *)v19 + v21 - 4) = *(_DWORD *)&v16[v21 - 4];
        v18 = *((_QWORD *)v16 - 1);
        goto LABEL_14;
      }
      if ( (_DWORD)v18 != -1 )
      {
        *(_BYTE *)v19 = *v16;
        if ( (v21 & 2) != 0 )
        {
          *(_WORD *)((char *)v19 + v21 - 2) = *(_WORD *)&v16[v21 - 2];
          v18 = *((_QWORD *)v16 - 1);
          goto LABEL_14;
        }
        goto LABEL_13;
      }
LABEL_14:
      v16 += 32;
      v17[1] = v18;
      v17 += 4;
      if ( v16 == v2 + 16 )
      {
        v22 = v11 + v2 - v3;
        goto LABEL_22;
      }
    }
    *v17 = v20;
    v17[2] = *(_QWORD *)v16;
LABEL_13:
    v18 = *((_QWORD *)v16 - 1);
    goto LABEL_14;
  }
  v22 = v11;
LABEL_22:
  v23 = v22 + 32;
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = v23;
  *(_QWORD *)(a1 + 16) = v10 + v11;
}

