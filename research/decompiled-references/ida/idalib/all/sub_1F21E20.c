void __fastcall sub_1F21E20(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  char v5; // al
  void *v6; // rax
  unsigned int v7; // r12d
  const void *v8; // rsi
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rbx
  void *v13; // rdi
  size_t v14; // rdx

  v2 = *a1;
  v3 = *a1 + 56LL * *((unsigned int *)a1 + 2);
  if ( *a1 == v3 )
    return;
  do
  {
    while ( 1 )
    {
      *(_BYTE *)a2 = *(_BYTE *)v2;
      v5 = *(_BYTE *)(v2 + 1);
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)(a2 + 1) = v5;
      v6 = (void *)(a2 + 24);
      *(_DWORD *)(a2 + 20) = 4;
      v7 = *(_DWORD *)(v2 + 16);
      *(_QWORD *)(a2 + 8) = a2 + 24;
      if ( v7 )
      {
        if ( a2 + 8 != v2 + 8 )
          break;
      }
LABEL_3:
      v2 += 56;
      a2 += 56;
      if ( v3 == v2 )
        goto LABEL_8;
    }
    v8 = *(const void **)(v2 + 8);
    v9 = v2 + 24;
    if ( (const void *)(v2 + 24) == v8 )
    {
      v14 = 8LL * v7;
      if ( v7 <= 4uLL
        || (sub_2237220(a2 + 8, a2 + 24, v7, 8),
            v6 = *(void **)(a2 + 8),
            v8 = *(const void **)(v2 + 8),
            (v14 = 8LL * *(unsigned int *)(v2 + 16)) != 0) )
      {
        memcpy(v6, v8, v14);
      }
      *(_DWORD *)(a2 + 16) = v7;
      *(_DWORD *)(v2 + 16) = 0;
      goto LABEL_3;
    }
    *(_DWORD *)(a2 + 16) = v7;
    v10 = *(_DWORD *)(v2 + 20);
    v2 += 56;
    a2 += 56;
    *(_QWORD *)(a2 - 48) = v8;
    *(_DWORD *)(a2 - 36) = v10;
    *(_QWORD *)(v2 - 48) = v9;
    *(_DWORD *)(v2 - 36) = 0;
    *(_DWORD *)(v2 - 40) = 0;
  }
  while ( v3 != v2 );
LABEL_8:
  v11 = *a1;
  v12 = *a1 + 56LL * *((unsigned int *)a1 + 2);
  while ( v12 != v11 )
  {
    while ( 1 )
    {
      v12 -= 56;
      v13 = *(void **)(v12 + 8);
      if ( v13 == (void *)(v12 + 24) )
        break;
      free(v13);
      if ( v12 == v11 )
        return;
    }
  }
}
