void __fastcall sub_648CA0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rdx
  char *v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  char *v9; // rcx
  char *v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rcx
  char *v13; // rcx
  unsigned int v14; // esi
  unsigned int v15; // r10d
  __int64 v16; // rbp
  __int64 v17; // rbx
  void *v18; // rdi
  unsigned __int64 v19; // rcx
  unsigned int v20; // esi
  unsigned int v21; // esi
  unsigned int v22; // edi
  __int64 v23; // r10
  unsigned __int64 v24; // rsi
  char *v25; // rdi
  char *v26; // rbx
  unsigned int v27; // r10d
  unsigned int v28; // r10d
  unsigned int v29; // edi
  __int64 v30; // r11

  v3 = *a1;
  if ( v3 == v3 + 80LL * *((unsigned int *)a1 + 2) )
    return;
  v4 = (_QWORD *)(a2 + 16);
  v5 = (char *)(v3 + 16);
  v6 = v3 + ((80LL * *((unsigned int *)a1 + 2) - 80) & 0xFFFFFFFFFFFFFFF0LL) + 96;
  do
  {
    *(v4 - 2) = v4;
    v13 = *((char **)v5 - 2);
    if ( v13 != v5 )
    {
      *(v4 - 2) = v13;
      *v4 = *(_QWORD *)v5;
LABEL_4:
      v7 = *((_QWORD *)v5 - 1);
      goto LABEL_5;
    }
    v7 = *((_QWORD *)v5 - 1);
    v14 = v7 + 1;
    if ( (unsigned int)(v7 + 1) >= 8 )
    {
      *v4 = *(_QWORD *)v5;
      *(_QWORD *)((char *)v4 + v14 - 8) = *(_QWORD *)&v5[v14 - 8];
      v19 = (unsigned __int64)(v4 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v20 = ((_DWORD)v4 - v19 + v14) & 0xFFFFFFF8;
      if ( v20 >= 8 )
      {
        v21 = v20 & 0xFFFFFFF8;
        v22 = 0;
        do
        {
          v23 = v22;
          v22 += 8;
          *(_QWORD *)(v19 + v23) = *(_QWORD *)(v5 - ((char *)v4 - v19) + v23);
        }
        while ( v22 < v21 );
      }
      goto LABEL_4;
    }
    if ( (v14 & 4) != 0 )
    {
      *(_DWORD *)v4 = *(_DWORD *)v5;
      *(_DWORD *)((char *)v4 + v14 - 4) = *(_DWORD *)&v5[v14 - 4];
      v7 = *((_QWORD *)v5 - 1);
    }
    else if ( (_DWORD)v7 != -1 )
    {
      *(_BYTE *)v4 = *v5;
      if ( (v14 & 2) == 0 )
        goto LABEL_4;
      *(_WORD *)((char *)v4 + v14 - 2) = *(_WORD *)&v5[v14 - 2];
      v7 = *((_QWORD *)v5 - 1);
    }
LABEL_5:
    v8 = v4 + 4;
    *(v4 - 1) = v7;
    v9 = v5 + 32;
    *((_QWORD *)v5 - 2) = v5;
    *((_QWORD *)v5 - 1) = 0;
    *v5 = 0;
    v4[2] = v4 + 4;
    v10 = *((char **)v5 + 2);
    if ( v10 != v5 + 32 )
    {
      v4[2] = v10;
      v4[4] = *((_QWORD *)v5 + 4);
LABEL_7:
      v11 = *((_QWORD *)v5 + 3);
      goto LABEL_8;
    }
    v11 = *((_QWORD *)v5 + 3);
    v15 = v11 + 1;
    if ( (unsigned int)(v11 + 1) >= 8 )
    {
      *v8 = *(_QWORD *)v9;
      *(_QWORD *)((char *)v8 + v15 - 8) = *(_QWORD *)&v9[v15 - 8];
      v24 = (unsigned __int64)(v4 + 5) & 0xFFFFFFFFFFFFFFF8LL;
      v25 = (char *)v8 - v24;
      v26 = (char *)(v9 - v25);
      v27 = ((_DWORD)v25 + v15) & 0xFFFFFFF8;
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
      goto LABEL_7;
    }
    if ( (v15 & 4) != 0 )
    {
      *(_DWORD *)v8 = *(_DWORD *)v9;
      *(_DWORD *)((char *)v8 + v15 - 4) = *(_DWORD *)&v9[v15 - 4];
      v11 = *((_QWORD *)v5 + 3);
    }
    else if ( (_DWORD)v11 != -1 )
    {
      *(_BYTE *)v8 = *v9;
      if ( (v15 & 2) == 0 )
        goto LABEL_7;
      *(_WORD *)((char *)v8 + v15 - 2) = *(_WORD *)&v9[v15 - 2];
      v11 = *((_QWORD *)v5 + 3);
    }
LABEL_8:
    v4[3] = v11;
    v5 += 80;
    v4 += 10;
    *((_QWORD *)v5 - 8) = v9;
    v12 = *((_QWORD *)v5 - 4);
    *((_QWORD *)v5 - 7) = 0;
    *(v5 - 48) = 0;
    *(v4 - 4) = v12;
    *((_BYTE *)v4 - 24) = *(v5 - 24);
  }
  while ( v5 != (char *)v6 );
  v16 = *a1;
  v17 = *a1 + 80LL * *((unsigned int *)a1 + 2);
  if ( *a1 != v17 )
  {
    do
    {
      v17 -= 80;
      v18 = *(void **)(v17 + 32);
      if ( v18 != (void *)(v17 + 48) )
        operator delete(v18, *(_QWORD *)(v17 + 48) + 1LL);
      if ( *(_QWORD *)v17 != v17 + 16 )
        operator delete(*(void **)v17, *(_QWORD *)(v17 + 16) + 1LL);
    }
    while ( v17 != v16 );
  }
}

