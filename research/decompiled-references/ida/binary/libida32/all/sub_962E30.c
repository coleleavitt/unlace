void *__fastcall sub_962E30(__int64 a1)
{
  void *result; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  _QWORD *v5; // rbp
  void *v6; // rdi
  __int64 v7; // r12
  unsigned __int64 v8; // r12
  _QWORD *v9; // rbp
  void *v10; // rdi
  __int64 v11; // r12
  unsigned __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // r15
  __int64 v15; // r13
  char *v16; // r13
  char *v17; // r14
  void *v18; // rdi
  __int64 v19; // r15
  __int64 v20; // r13
  char *v21; // r13
  char *v22; // r14
  void *v23; // rdi
  void *v24[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( !*(_BYTE *)(a1 + 96) )
    return sub_962700(a1);
  if ( *(_BYTE *)(a1 + 120) )
    return *(void **)(a1 + 16);
  v3 = sub_B685F0(*(_QWORD *)(a1 + 8));
  v4 = sub_9607F0((__int64 *)a1, v24);
  sub_982990(v24, *(_QWORD *)(a1 + 8), v4, v3, a1 + 40);
  result = v24[0];
  v5 = *(_QWORD **)(a1 + 16);
  v24[0] = nullptr;
  *(_QWORD *)(a1 + 16) = result;
  if ( v5 )
  {
    operator delete();
    v6 = (void *)v5[8];
    if ( v6 )
      operator delete(v6);
    v7 = v5[4];
    if ( (v7 & 4) != 0 )
    {
      v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v8 )
      {
        v19 = *(_QWORD *)(v8 + 16);
        v20 = v19 + 8LL * *(unsigned int *)(v8 + 24);
        while ( v20 != v19 )
        {
          v19 += 8;
          operator delete();
        }
        v21 = *(char **)(v8 + 64);
        v22 = &v21[16 * *(unsigned int *)(v8 + 72)];
        if ( v21 != v22 )
        {
          do
          {
            v21 += 16;
            operator delete();
          }
          while ( v22 != v21 );
          v22 = *(char **)(v8 + 64);
        }
        if ( v22 != (char *)(v8 + 80) )
          free(v22);
        v23 = *(void **)(v8 + 16);
        if ( v23 != (void *)(v8 + 32) )
          free(v23);
        operator delete((void *)v8, 0x60u);
      }
    }
    operator delete(v5, 0x70u);
    v9 = v24[0];
    if ( v24[0] )
    {
      operator delete();
      v10 = (void *)v9[8];
      if ( v10 )
        operator delete(v10);
      v11 = v9[4];
      if ( (v11 & 4) != 0 )
      {
        v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v12 )
        {
          v14 = *(_QWORD *)(v12 + 16);
          v15 = v14 + 8LL * *(unsigned int *)(v12 + 24);
          while ( v15 != v14 )
          {
            v14 += 8;
            operator delete();
          }
          v16 = *(char **)(v12 + 64);
          v17 = &v16[16 * *(unsigned int *)(v12 + 72)];
          if ( v16 != v17 )
          {
            do
            {
              v16 += 16;
              operator delete();
            }
            while ( v17 != v16 );
            v17 = *(char **)(v12 + 64);
          }
          if ( v17 != (char *)(v12 + 80) )
            free(v17);
          v18 = *(void **)(v12 + 16);
          if ( v18 != (void *)(v12 + 32) )
            free(v18);
          operator delete((void *)v12, 0x60u);
        }
      }
      operator delete(v9, 0x70u);
    }
    result = *(void **)(a1 + 16);
  }
  v13 = *(_QWORD *)(a1 + 128);
  *(_BYTE *)(a1 + 120) = 1;
  if ( v13 )
  {
    if ( result )
    {
      sub_9625D0((__int64)result, v13);
      result = *(void **)(a1 + 16);
    }
  }
  *(_QWORD *)(a1 + 88) = 0;
  return result;
}

