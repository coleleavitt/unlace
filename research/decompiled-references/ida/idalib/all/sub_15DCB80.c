void __fastcall sub_15DCB80(__int64 a1, __int64 a2)
{
  void **v3; // r13
  __int64 v4; // rax
  void **v5; // rbp
  __int64 v6; // r14
  void **v7; // rbx
  __int64 v8; // r12
  void *v9; // rdi
  unsigned int v10; // r8d
  void *v11; // rsi
  void **v12; // rbp
  int v13; // ebp
  size_t v14; // rdx
  unsigned int v15; // [rsp+Ch] [rbp-4Ch]
  unsigned int v16; // [rsp+Ch] [rbp-4Ch]
  __int64 v17[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = (void **)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 80, v17);
  v5 = *(void ***)a1;
  v6 = v4;
  v7 = (void **)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8));
  if ( *(void ***)a1 == v7 )
    goto LABEL_12;
  v8 = v4;
  do
  {
    while ( 1 )
    {
      *(_DWORD *)(v8 + 8) = 0;
      v9 = (void *)(v8 + 16);
      *(_DWORD *)(v8 + 12) = 8;
      v10 = *((_DWORD *)v5 + 2);
      *(_QWORD *)v8 = v8 + 16;
      if ( (void **)v8 != v5 )
      {
        if ( v10 )
          break;
      }
LABEL_3:
      v5 += 10;
      v8 += 80;
      if ( v7 == v5 )
        goto LABEL_8;
    }
    v11 = v5 + 2;
    if ( *v5 == v5 + 2 )
    {
      v14 = 8LL * v10;
      if ( v10 <= 8uLL
        || (v16 = v10,
            sub_2237220(v8, v8 + 16, v10, 8),
            v9 = *(void **)v8,
            v11 = *v5,
            v10 = v16,
            (v14 = 8LL * *((unsigned int *)v5 + 2)) != 0) )
      {
        v15 = v10;
        memcpy(v9, v11, v14);
        *(_DWORD *)(v8 + 8) = v15;
        *((_DWORD *)v5 + 2) = 0;
      }
      else
      {
        *(_DWORD *)(v8 + 8) = v16;
        *((_DWORD *)v5 + 2) = 0;
      }
      goto LABEL_3;
    }
    *(_QWORD *)v8 = *v5;
    v5 += 10;
    v8 += 80;
    *(_DWORD *)(v8 - 72) = v10;
    *(_DWORD *)(v8 - 68) = *((_DWORD *)v5 - 17);
    *(v5 - 10) = v11;
    *((_DWORD *)v5 - 17) = 0;
    *((_DWORD *)v5 - 18) = 0;
  }
  while ( v7 != v5 );
LABEL_8:
  v12 = *(void ***)a1;
  v7 = (void **)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8));
  if ( *(void ***)a1 != v7 )
  {
    do
    {
      while ( 1 )
      {
        v7 -= 10;
        if ( *v7 == v7 + 2 )
          break;
        free(*v7);
        if ( v7 == v12 )
        {
          v7 = *(void ***)a1;
          goto LABEL_12;
        }
      }
    }
    while ( v7 != v12 );
    v7 = *(void ***)a1;
  }
LABEL_12:
  v13 = v17[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v13;
}
