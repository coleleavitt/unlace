void __fastcall sub_649850(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rbx
  _QWORD *v8; // rdx
  char *v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  char *v13; // rcx
  char *v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rcx
  char *v17; // rcx
  unsigned int v18; // esi
  unsigned int v19; // r9d
  __int64 v20; // r14
  void *v21; // rdi
  int v22; // r14d
  unsigned __int64 v23; // rsi
  char *v24; // rdi
  char *v25; // r11
  unsigned int v26; // r9d
  unsigned int v27; // r9d
  unsigned int v28; // edi
  __int64 v29; // r10
  unsigned __int64 v30; // rcx
  unsigned int v31; // esi
  unsigned int v32; // esi
  unsigned int v33; // edi
  __int64 v34; // r9
  __int64 v35[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a1 + 16;
  v4 = sub_25D5F70(a1, a1 + 16, a2, 80, v35);
  v5 = *(_QWORD *)a1;
  v6 = v4;
  v7 = *(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 == v7 )
    goto LABEL_27;
  v8 = (_QWORD *)(v4 + 16);
  v9 = (char *)(v5 + 16);
  v10 = v5 + ((v7 - v5 - 80) & 0xFFFFFFFFFFFFFFF0LL) + 96;
  do
  {
    *(v8 - 2) = v8;
    v17 = *((char **)v9 - 2);
    if ( v17 != v9 )
    {
      *(v8 - 2) = v17;
      *v8 = *(_QWORD *)v9;
LABEL_4:
      v11 = *((_QWORD *)v9 - 1);
      goto LABEL_5;
    }
    v11 = *((_QWORD *)v9 - 1);
    v18 = v11 + 1;
    if ( (unsigned int)(v11 + 1) >= 8 )
    {
      *v8 = *(_QWORD *)v9;
      *(_QWORD *)((char *)v8 + v18 - 8) = *(_QWORD *)&v9[v18 - 8];
      v30 = (unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v31 = ((_DWORD)v8 - v30 + v18) & 0xFFFFFFF8;
      if ( v31 >= 8 )
      {
        v32 = v31 & 0xFFFFFFF8;
        v33 = 0;
        do
        {
          v34 = v33;
          v33 += 8;
          *(_QWORD *)(v30 + v34) = *(_QWORD *)(v9 - ((char *)v8 - v30) + v34);
        }
        while ( v33 < v32 );
      }
      goto LABEL_4;
    }
    if ( (v18 & 4) != 0 )
    {
      *(_DWORD *)v8 = *(_DWORD *)v9;
      *(_DWORD *)((char *)v8 + v18 - 4) = *(_DWORD *)&v9[v18 - 4];
      v11 = *((_QWORD *)v9 - 1);
    }
    else if ( (_DWORD)v11 != -1 )
    {
      *(_BYTE *)v8 = *v9;
      if ( (v18 & 2) == 0 )
        goto LABEL_4;
      *(_WORD *)((char *)v8 + v18 - 2) = *(_WORD *)&v9[v18 - 2];
      v11 = *((_QWORD *)v9 - 1);
    }
LABEL_5:
    v12 = v8 + 4;
    *(v8 - 1) = v11;
    v13 = v9 + 32;
    *((_QWORD *)v9 - 2) = v9;
    *((_QWORD *)v9 - 1) = 0;
    *v9 = 0;
    v8[2] = v8 + 4;
    v14 = *((char **)v9 + 2);
    if ( v14 != v9 + 32 )
    {
      v8[2] = v14;
      v8[4] = *((_QWORD *)v9 + 4);
LABEL_7:
      v15 = *((_QWORD *)v9 + 3);
      goto LABEL_8;
    }
    v15 = *((_QWORD *)v9 + 3);
    v19 = v15 + 1;
    if ( (unsigned int)(v15 + 1) >= 8 )
    {
      *v12 = *(_QWORD *)v13;
      *(_QWORD *)((char *)v12 + v19 - 8) = *(_QWORD *)&v13[v19 - 8];
      v23 = (unsigned __int64)(v8 + 5) & 0xFFFFFFFFFFFFFFF8LL;
      v24 = (char *)v12 - v23;
      v25 = (char *)(v13 - v24);
      v26 = ((_DWORD)v24 + v19) & 0xFFFFFFF8;
      if ( v26 >= 8 )
      {
        v27 = v26 & 0xFFFFFFF8;
        v28 = 0;
        do
        {
          v29 = v28;
          v28 += 8;
          *(_QWORD *)(v23 + v29) = *(_QWORD *)&v25[v29];
        }
        while ( v28 < v27 );
      }
      goto LABEL_7;
    }
    if ( (v19 & 4) != 0 )
    {
      *(_DWORD *)v12 = *(_DWORD *)v13;
      *(_DWORD *)((char *)v12 + v19 - 4) = *(_DWORD *)&v13[v19 - 4];
      v15 = *((_QWORD *)v9 + 3);
    }
    else if ( (_DWORD)v15 != -1 )
    {
      *(_BYTE *)v12 = *v13;
      if ( (v19 & 2) == 0 )
        goto LABEL_7;
      *(_WORD *)((char *)v12 + v19 - 2) = *(_WORD *)&v13[v19 - 2];
      v15 = *((_QWORD *)v9 + 3);
    }
LABEL_8:
    v8[3] = v15;
    v9 += 80;
    v8 += 10;
    *((_QWORD *)v9 - 8) = v13;
    v16 = *((_QWORD *)v9 - 4);
    *((_QWORD *)v9 - 7) = 0;
    *(v9 - 48) = 0;
    *(v8 - 4) = v16;
    *((_BYTE *)v8 - 24) = *(v9 - 24);
  }
  while ( v9 != (char *)v10 );
  v20 = *(_QWORD *)a1;
  v7 = *(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v7 )
  {
    do
    {
      v7 -= 80;
      v21 = *(void **)(v7 + 32);
      if ( v21 != (void *)(v7 + 48) )
        operator delete(v21, *(_QWORD *)(v7 + 48) + 1LL);
      if ( *(_QWORD *)v7 != v7 + 16 )
        operator delete(*(void **)v7, *(_QWORD *)(v7 + 16) + 1LL);
    }
    while ( v20 != v7 );
    v7 = *(_QWORD *)a1;
  }
LABEL_27:
  v22 = v35[0];
  if ( v2 != v7 )
    free((void *)v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v22;
}

