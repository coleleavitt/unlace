void __fastcall sub_21C3980(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r12
  _QWORD *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r15
  _QWORD *v9; // r8
  __int64 v10; // rax
  void *v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rax
  _QWORD *v14; // r13
  _QWORD *v15; // rdi
  int v16; // r13d
  const void *v17; // rsi
  size_t v18; // rax
  _QWORD *v19; // [rsp+8h] [rbp-50h]
  _QWORD *v20; // [rsp+8h] [rbp-50h]
  __int64 v21[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 32, v21);
  v5 = v4;
  v6 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 == v6 )
    goto LABEL_12;
  v7 = *(_QWORD *)a1 + 24LL;
  v8 = v4 + 8;
  v9 = v6 + 3;
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v7 - 24);
      *(_DWORD *)(v8 + 8) = 0;
      v11 = (void *)(v8 + 16);
      *(_DWORD *)(v8 + 12) = 1;
      *(_QWORD *)(v8 - 8) = v10;
      v12 = *(_DWORD *)(v7 - 8);
      *(_QWORD *)v8 = v8 + 16;
      if ( v12 )
      {
        if ( v8 != v7 - 16 )
          break;
      }
LABEL_3:
      v7 += 32;
      v8 += 32;
      if ( v9 == (_QWORD *)v7 )
        goto LABEL_8;
    }
    v13 = *(_QWORD *)(v7 - 16);
    if ( v13 == v7 )
    {
      v17 = (const void *)v7;
      v18 = 8;
      if ( v12 == 1
        || (v20 = v9,
            sub_2237220(v8, v8 + 16, v12, 8),
            v11 = *(void **)v8,
            v17 = *(const void **)(v7 - 16),
            v9 = v20,
            (v18 = 8LL * *(unsigned int *)(v7 - 8)) != 0) )
      {
        v19 = v9;
        memcpy(v11, v17, v18);
        v9 = v19;
        *(_DWORD *)(v8 + 8) = v12;
        *(_DWORD *)(v7 - 8) = 0;
      }
      else
      {
        *(_DWORD *)(v8 + 8) = v12;
        *(_DWORD *)(v7 - 8) = 0;
      }
      goto LABEL_3;
    }
    *(_QWORD *)v8 = v13;
    v8 += 32;
    *(_DWORD *)(v8 - 24) = v12;
    *(_DWORD *)(v8 - 20) = *(_DWORD *)(v7 - 4);
    *(_QWORD *)(v7 - 16) = v7;
    v7 += 32;
    *(_DWORD *)(v7 - 36) = 0;
    *(_DWORD *)(v7 - 40) = 0;
  }
  while ( v9 != (_QWORD *)v7 );
LABEL_8:
  v14 = *(_QWORD **)a1;
  v6 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v6 -= 4;
        v15 = (_QWORD *)v6[1];
        if ( v15 == v6 + 3 )
          break;
        free(v15);
        if ( v6 == v14 )
        {
          v6 = *(_QWORD **)a1;
          goto LABEL_12;
        }
      }
    }
    while ( v6 != v14 );
    v6 = *(_QWORD **)a1;
  }
LABEL_12:
  v16 = v21[0];
  if ( v3 != v6 )
    free(v6);
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 12) = v16;
}
