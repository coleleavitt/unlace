void __fastcall sub_79CA60(__int64 a1, __int64 a2)
{
  char *v2; // r13
  __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // r12
  char *v7; // rbx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  char v12; // cl
  int v13; // ecx
  _QWORD *v14; // rcx
  unsigned int v15; // esi
  char *v16; // r14
  char *v17; // rdi
  int v18; // r14d
  unsigned __int64 v19; // rcx
  unsigned int v20; // esi
  unsigned int v21; // esi
  unsigned int v22; // r8d
  __int64 v23; // r9
  __int64 v24[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (char *)(a1 + 16);
  v4 = sub_25D5F70(a1, a1 + 16, a2, 64, v24);
  v5 = *(char **)a1;
  v6 = v4;
  v7 = (char *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6));
  if ( *(char **)a1 == v7 )
    goto LABEL_17;
  v8 = (_QWORD *)(v4 + 40);
  v9 = v5 + 40;
  v10 = v6 + v7 - v5 + 40;
  do
  {
    *(v8 - 5) = *(v9 - 5);
    *((_DWORD *)v8 - 8) = *((_DWORD *)v9 - 8);
    *(_QWORD *)((char *)v8 - 28) = *(_QWORD *)((char *)v9 - 28);
    v13 = *((_DWORD *)v9 - 5);
    *(v8 - 2) = v8;
    *((_DWORD *)v8 - 5) = v13;
    v14 = (_QWORD *)*(v9 - 2);
    if ( v14 != v9 )
    {
      *(v8 - 2) = v14;
      *v8 = *v9;
LABEL_4:
      v11 = *(v9 - 1);
      goto LABEL_5;
    }
    v11 = *(v9 - 1);
    v15 = v11 + 1;
    if ( (unsigned int)(v11 + 1) >= 8 )
    {
      *v8 = *v9;
      *(_QWORD *)((char *)v8 + v15 - 8) = *(_QWORD *)((char *)v9 + v15 - 8);
      v19 = (unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v20 = ((_DWORD)v8 - v19 + v15) & 0xFFFFFFF8;
      if ( v20 >= 8 )
      {
        v21 = v20 & 0xFFFFFFF8;
        v22 = 0;
        do
        {
          v23 = v22;
          v22 += 8;
          *(_QWORD *)(v19 + v23) = *(_QWORD *)((char *)v9 - ((char *)v8 - v19) + v23);
        }
        while ( v22 < v21 );
      }
      goto LABEL_4;
    }
    if ( (v15 & 4) != 0 )
    {
      *(_DWORD *)v8 = *(_DWORD *)v9;
      *(_DWORD *)((char *)v8 + v15 - 4) = *(_DWORD *)((char *)v9 + v15 - 4);
      v11 = *(v9 - 1);
    }
    else if ( (_DWORD)v11 != -1 )
    {
      *(_BYTE *)v8 = *(_BYTE *)v9;
      if ( (v15 & 2) == 0 )
        goto LABEL_4;
      *(_WORD *)((char *)v8 + v15 - 2) = *(_WORD *)((char *)v9 + v15 - 2);
      v11 = *(v9 - 1);
    }
LABEL_5:
    *(v8 - 1) = v11;
    v12 = *((_BYTE *)v9 + 16);
    v8 += 8;
    *(v9 - 2) = v9;
    v9 += 8;
    *(v9 - 9) = 0;
    *((_BYTE *)v9 - 64) = 0;
    *((_BYTE *)v8 - 48) = v12;
  }
  while ( v8 != (_QWORD *)v10 );
  v16 = *(char **)a1;
  v7 = (char *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6));
  if ( *(char **)a1 != v7 )
  {
    do
    {
      v7 -= 64;
      v17 = *((char **)v7 + 3);
      if ( v17 != v7 + 40 )
        operator delete(v17, *((_QWORD *)v7 + 5) + 1LL);
    }
    while ( v16 != v7 );
    v7 = *(char **)a1;
  }
LABEL_17:
  v18 = v24[0];
  if ( v2 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v18;
}

