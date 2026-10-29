void *__fastcall sub_962700(__int64 a1)
{
  void *result; // rax
  char v3; // r13
  __int64 v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rbp
  void *v7; // rdi
  __int64 v8; // r12
  unsigned __int64 v9; // r12
  _QWORD *v10; // rbp
  void *v11; // rdi
  __int64 v12; // r12
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // r14
  char *v17; // r14
  char *v18; // r15
  void *v19; // rdi
  __int64 v20; // r15
  __int64 v21; // r14
  char *v22; // r14
  char *v23; // r15
  void *v24; // rdi
  void *v25[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( *(_BYTE *)(a1 + 121) )
    return *(void **)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 96);
  *(_BYTE *)(a1 + 96) = 0;
  v4 = sub_B685F0(*(_QWORD *)(a1 + 8));
  v5 = sub_9607F0((__int64 *)a1, v25);
  sub_982990(v25, *(_QWORD *)(a1 + 8), v5, v4, a1 + 40);
  result = v25[0];
  v6 = *(_QWORD **)(a1 + 24);
  v25[0] = nullptr;
  *(_QWORD *)(a1 + 24) = result;
  if ( v6 )
  {
    operator delete();
    v7 = (void *)v6[8];
    if ( v7 )
      operator delete(v7);
    v8 = v6[4];
    if ( (v8 & 4) != 0 )
    {
      v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v9 )
      {
        v15 = *(_QWORD *)(v9 + 16);
        v16 = v15 + 8LL * *(unsigned int *)(v9 + 24);
        while ( v16 != v15 )
        {
          v15 += 8;
          operator delete();
        }
        v17 = *(char **)(v9 + 64);
        v18 = &v17[16 * *(unsigned int *)(v9 + 72)];
        if ( v17 != v18 )
        {
          do
          {
            v17 += 16;
            operator delete();
          }
          while ( v18 != v17 );
          v18 = *(char **)(v9 + 64);
        }
        if ( v18 != (char *)(v9 + 80) )
          free(v18);
        v19 = *(void **)(v9 + 16);
        if ( v19 != (void *)(v9 + 32) )
          free(v19);
        operator delete((void *)v9, 0x60u);
      }
    }
    operator delete(v6, 0x70u);
    v10 = v25[0];
    if ( v25[0] )
    {
      operator delete();
      v11 = (void *)v10[8];
      if ( v11 )
        operator delete(v11);
      v12 = v10[4];
      if ( (v12 & 4) != 0 )
      {
        v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v13 )
        {
          v20 = *(_QWORD *)(v13 + 16);
          v21 = v20 + 8LL * *(unsigned int *)(v13 + 24);
          while ( v21 != v20 )
          {
            v20 += 8;
            operator delete();
          }
          v22 = *(char **)(v13 + 64);
          v23 = &v22[16 * *(unsigned int *)(v13 + 72)];
          if ( v22 != v23 )
          {
            do
            {
              v22 += 16;
              operator delete();
            }
            while ( v23 != v22 );
            v23 = *(char **)(v13 + 64);
          }
          if ( v23 != (char *)(v13 + 80) )
            free(v23);
          v24 = *(void **)(v13 + 16);
          if ( v24 != (void *)(v13 + 32) )
            free(v24);
          operator delete((void *)v13, 0x60u);
        }
      }
      operator delete(v10, 0x70u);
    }
    result = *(void **)(a1 + 24);
  }
  v14 = *(_QWORD *)(a1 + 128);
  *(_BYTE *)(a1 + 121) = 1;
  if ( v14 )
  {
    if ( result )
    {
      sub_9625D0((__int64)result, v14);
      result = *(void **)(a1 + 24);
    }
  }
  *(_QWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 96) = v3;
  return result;
}

