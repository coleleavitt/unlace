void __fastcall sub_625280(__int64 a1, char **a2)
{
  _BYTE *v2; // r13
  _QWORD *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  bool v8; // cf
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  char **v13; // rax
  char *v14; // rdx
  _QWORD *v15; // rsi
  char *v16; // rcx
  _DWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r13
  __int64 v24; // r13
  unsigned int v25; // ecx
  unsigned __int64 v26; // rsi
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // r8d
  __int64 v30; // r10
  unsigned int v31; // edi
  unsigned __int64 v32; // r8
  char *v33; // rsi
  char *v34; // r9
  unsigned int v35; // ecx
  unsigned int v36; // esi
  __int64 v37; // rdi
  __int64 v38; // [rsp+8h] [rbp-40h]

  v2 = *(_BYTE **)(a1 + 8);
  v3 = *(_QWORD **)a1;
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
    v11 = 0x7FFFFFFFFFFFFFE0LL;
  }
  else
  {
    v10 = 0x3FFFFFFFFFFFFFFLL;
    if ( v9 <= 0x3FFFFFFFFFFFFFFLL )
      v10 = v9;
    v11 = 32 * v10;
  }
  v12 = operator new(v11);
  v13 = (char **)(v12 + v38);
  v14 = (char *)(a2 + 2);
  v15 = (_QWORD *)(v12 + v38 + 16);
  *(_QWORD *)(v12 + v38) = v15;
  if ( *a2 != (char *)(a2 + 2) )
  {
    *v13 = *a2;
    v13[2] = a2[2];
    v16 = a2[1];
    goto LABEL_10;
  }
  v16 = a2[1];
  v31 = (_DWORD)v16 + 1;
  if ( (unsigned int)((_DWORD)v16 + 1) >= 8 )
  {
    *v15 = *(_QWORD *)v14;
    *(_QWORD *)((char *)v15 + v31 - 8) = *(_QWORD *)&v14[v31 - 8];
    v32 = (unsigned __int64)(v13 + 3) & 0xFFFFFFFFFFFFFFF8LL;
    v33 = (char *)v15 - v32;
    v34 = (char *)(v14 - v33);
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
    v16 = a2[1];
    goto LABEL_10;
  }
  if ( (v31 & 4) == 0 )
  {
    if ( (_DWORD)v16 == -1 )
      goto LABEL_10;
    *(_BYTE *)v15 = *v14;
    if ( (v31 & 2) != 0 )
    {
      *(_WORD *)((char *)v15 + v31 - 2) = *(_WORD *)&v14[v31 - 2];
      v16 = a2[1];
      goto LABEL_10;
    }
    goto LABEL_38;
  }
  *(_DWORD *)v15 = *(_DWORD *)v14;
  *(_DWORD *)((char *)v15 + v31 - 4) = *(_DWORD *)&v14[v31 - 4];
  v16 = a2[1];
LABEL_10:
  v13[1] = v16;
  *a2 = v14;
  a2[1] = nullptr;
  *((_BYTE *)a2 + 16) = 0;
  if ( v3 != (_QWORD *)v2 )
  {
    v17 = (_DWORD *)(v12 + 16);
    v18 = v3 + 2;
    v19 = (__int64)&v2[v12 - (_QWORD)v3 + 16];
    while ( 1 )
    {
      while ( 1 )
      {
        *((_QWORD *)v17 - 2) = v17;
        v20 = (_QWORD *)*(v18 - 2);
        v21 = *(v18 - 1);
        if ( v20 == v18 )
          break;
        *((_QWORD *)v17 - 2) = v20;
        v22 = *v18;
        v17 += 8;
        *((_QWORD *)v17 - 5) = v21;
        *((_QWORD *)v17 - 4) = v22;
        *(v18 - 2) = v18;
        v18 += 4;
        *(v18 - 5) = 0;
        *((_BYTE *)v18 - 32) = 0;
        if ( (_DWORD *)v19 == v17 )
          goto LABEL_14;
      }
      v25 = v21 + 1;
      if ( (unsigned int)(v21 + 1) >= 8 )
        break;
      if ( (v25 & 4) != 0 )
      {
        *v17 = *(_DWORD *)v18;
        *(_DWORD *)((char *)v17 + v25 - 4) = *(_DWORD *)((char *)v18 + v25 - 4);
        v21 = *(v18 - 1);
        goto LABEL_21;
      }
      if ( (_DWORD)v21 != -1 )
      {
        *(_BYTE *)v17 = *(_BYTE *)v18;
        if ( (v25 & 2) != 0 )
        {
          *(_WORD *)((char *)v17 + v25 - 2) = *(_WORD *)((char *)v18 + v25 - 2);
          v21 = *(v18 - 1);
          goto LABEL_21;
        }
        goto LABEL_26;
      }
LABEL_21:
      *((_QWORD *)v17 - 1) = v21;
      v17 += 8;
      *(v18 - 2) = v18;
      v18 += 4;
      *(v18 - 5) = 0;
      *((_BYTE *)v18 - 32) = 0;
      if ( v17 == (_DWORD *)v19 )
      {
LABEL_14:
        v23 = v12 + v2 - (_BYTE *)v3;
        goto LABEL_15;
      }
    }
    *(_QWORD *)v17 = *v18;
    *(_QWORD *)((char *)v17 + v25 - 8) = *(_QWORD *)((char *)v18 + v25 - 8);
    v26 = (unsigned __int64)(v17 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    v27 = ((_DWORD)v17 - v26 + v25) & 0xFFFFFFF8;
    if ( v27 >= 8 )
    {
      v28 = v27 & 0xFFFFFFF8;
      v29 = 0;
      do
      {
        v30 = v29;
        v29 += 8;
        *(_QWORD *)(v26 + v30) = *(_QWORD *)((char *)v18 - ((char *)v17 - v26) + v30);
      }
      while ( v29 < v28 );
    }
LABEL_26:
    v21 = *(v18 - 1);
    goto LABEL_21;
  }
  v23 = v12;
LABEL_15:
  v24 = v23 + 32;
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = v24;
  *(_QWORD *)(a1 + 16) = v11 + v12;
}

