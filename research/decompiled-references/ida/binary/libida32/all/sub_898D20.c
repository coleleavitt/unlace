void *__fastcall sub_898D20(size_t *a1, unsigned int a2, char a3)
{
  size_t *v5; // r13
  __int64 i; // rbx
  void *v7; // rcx
  size_t v8; // rax
  __int64 v9; // rax
  size_t v10; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  size_t v15; // rax
  size_t *v16; // rsi
  size_t v17; // rdx

  v5 = &a1[a2 % 0xC7FF];
  i = v5[3];
  if ( i )
  {
    while ( a2 != *(_DWORD *)(i + 24) )
    {
      i = *(_QWORD *)i;
      if ( !i )
        goto LABEL_11;
    }
    goto LABEL_5;
  }
LABEL_11:
  for ( i = *(_QWORD *)(a1[51202] + 8); *(_BYTE *)(i + 29); i = *(_QWORD *)(i + 8) )
    ;
  if ( *(_BYTE *)(i + 28) )
    sub_898B00((__int64)a1, i);
  v12 = *(_DWORD *)(i + 24);
  if ( v12 != -1 )
  {
    v13 = v12 % 0xC7FF;
    v14 = (unsigned int)(v13 + 3);
    v15 = a1[v13 + 3];
    v16 = &a1[v14];
    if ( v15 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)v15;
        if ( v12 == *(_DWORD *)(v15 + 24) )
          break;
        v16 = (size_t *)v15;
        if ( !v17 )
          goto LABEL_16;
        v15 = *(_QWORD *)v15;
      }
      *v16 = v17;
      *(_QWORD *)v15 = 0;
    }
  }
LABEL_16:
  *(_DWORD *)(i + 24) = a2;
  *(_QWORD *)i = v5[3];
  v5[3] = i;
  if ( a3 )
  {
    sub_898C70((__int64)a1, i);
LABEL_5:
    v7 = (void *)(i + 30);
    goto LABEL_6;
  }
  v7 = memset((void *)(i + 30), 0, *a1);
LABEL_6:
  v8 = a1[51202];
  if ( v8 != i )
  {
    if ( *(_QWORD *)(v8 + 8) != i )
    {
      v9 = *(_QWORD *)(i + 16);
      *(_QWORD *)(*(_QWORD *)(i + 8) + 16LL) = v9;
      *(_QWORD *)(v9 + 8) = *(_QWORD *)(i + 8);
      *(_QWORD *)(i + 8) = *(_QWORD *)(a1[51202] + 8);
      v10 = a1[51202];
      *(_QWORD *)(i + 16) = v10;
      *(_QWORD *)(*(_QWORD *)(v10 + 8) + 16LL) = i;
      *(_QWORD *)(a1[51202] + 8) = i;
    }
    a1[51202] = i;
  }
  return v7;
}

