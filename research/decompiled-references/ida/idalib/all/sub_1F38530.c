void __fastcall sub_1F38530(__int64 a1, __int64 a2)
{
  char *v3; // r13
  __int64 v4; // r14
  char *v5; // rax
  char *v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // r12
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  void *v11; // rdi
  unsigned int v12; // ebp
  _QWORD *v13; // rax
  char *v14; // rbx
  char *v15; // rdi
  int v16; // ebx
  const void *v17; // rsi
  size_t v18; // rdx
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = (char *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 40, v21);
  v5 = *(char **)a1;
  v6 = (char *)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
  if ( *(char **)a1 == v6 )
    goto LABEL_12;
  v7 = v5 + 24;
  v8 = v4 + 8;
  v9 = (unsigned __int64)&v5[((v6 - v5 - 40) & 0xFFFFFFFFFFFFFFF8LL) + 64];
  do
  {
    while ( 1 )
    {
      v10 = *(v7 - 3);
      v11 = (void *)(v8 + 16);
      *(_DWORD *)(v8 + 8) = 0;
      *(_DWORD *)(v8 + 12) = 2;
      *(_QWORD *)(v8 - 8) = v10;
      v12 = *((_DWORD *)v7 - 2);
      *(_QWORD *)v8 = v8 + 16;
      if ( v12 )
      {
        if ( (_QWORD *)v8 != v7 - 2 )
          break;
      }
LABEL_3:
      v7 += 5;
      v8 += 40;
      if ( (_QWORD *)v9 == v7 )
        goto LABEL_8;
    }
    v13 = (_QWORD *)*(v7 - 2);
    if ( v13 == v7 )
    {
      v17 = v7;
      v18 = 8LL * v12;
      if ( v12 <= 2uLL
        || (v20 = v9,
            sub_2237220(v8, v8 + 16, v12, 8),
            v11 = *(void **)v8,
            v17 = (const void *)*(v7 - 2),
            v9 = v20,
            (v18 = 8LL * *((unsigned int *)v7 - 2)) != 0) )
      {
        v19 = v9;
        memcpy(v11, v17, v18);
        v9 = v19;
        *(_DWORD *)(v8 + 8) = v12;
        *((_DWORD *)v7 - 2) = 0;
      }
      else
      {
        *(_DWORD *)(v8 + 8) = v12;
        *((_DWORD *)v7 - 2) = 0;
      }
      goto LABEL_3;
    }
    *(_QWORD *)v8 = v13;
    v8 += 40;
    *(_DWORD *)(v8 - 32) = v12;
    *(_DWORD *)(v8 - 28) = *((_DWORD *)v7 - 1);
    *(v7 - 2) = v7;
    v7 += 5;
    *((_DWORD *)v7 - 11) = 0;
    *((_DWORD *)v7 - 12) = 0;
  }
  while ( (_QWORD *)v9 != v7 );
LABEL_8:
  v14 = *(char **)a1;
  v6 = (char *)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
  if ( *(char **)a1 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v6 -= 40;
        v15 = *((char **)v6 + 1);
        if ( v15 == v6 + 24 )
          break;
        free(v15);
        if ( v6 == v14 )
        {
          v6 = *(char **)a1;
          goto LABEL_12;
        }
      }
    }
    while ( v6 != v14 );
    v6 = *(char **)a1;
  }
LABEL_12:
  v16 = v21[0];
  if ( v3 != v6 )
    free(v6);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v16;
}
