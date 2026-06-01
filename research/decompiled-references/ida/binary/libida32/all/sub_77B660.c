__int64 __fastcall sub_77B660(int *a1, const char *a2)
{
  __int64 v4; // rax
  size_t v5; // r13
  __int64 v6; // r12
  const char *v7; // rsi
  int v8; // eax
  __int64 v9; // rdi
  int *v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  size_t v14; // r13
  int v15; // eax
  __int64 v16; // rdi
  void *v18; // rax
  void *v19; // rax
  const void *v20; // rsi

  v4 = operator new(0x58u);
  v5 = *((_QWORD *)a1 + 5);
  *(_QWORD *)(v4 + 32) = 0;
  v6 = v4;
  *(_OWORD *)(v4 + 40) = 0;
  if ( v5 )
  {
    v19 = (void *)qalloc_or_throw(v5, a2);
    *(_QWORD *)(v6 + 32) = v19;
    v20 = *((const void **)a1 + 4);
    *(_QWORD *)(v6 + 48) = v5;
    memcpy(v19, v20, v5);
    *(_QWORD *)(v6 + 40) = v5;
  }
  *(_BYTE *)(v6 + 56) = 2;
  v7 = (const char *)(a1 + 14);
  *(_QWORD *)(v6 + 80) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  copy_idcv(v6 + 56);
  v8 = *a1;
  v9 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_DWORD *)v6 = v8;
  *(_QWORD *)(v6 + 8) = a2;
  if ( v9 )
  {
    v7 = (const char *)v6;
    *(_QWORD *)(v6 + 24) = sub_77B660(v9, v6);
  }
  v10 = *((int **)a1 + 2);
  if ( v10 )
  {
    v11 = v6;
    do
    {
      v12 = v11;
      v13 = operator new(0x58u);
      *(_QWORD *)(v13 + 32) = 0;
      v11 = v13;
      *(_OWORD *)(v13 + 40) = 0;
      v14 = *((_QWORD *)v10 + 5);
      if ( v14 )
      {
        v18 = (void *)qalloc_or_throw(*((_QWORD *)v10 + 5), v7);
        *(_QWORD *)(v11 + 32) = v18;
        *(_QWORD *)(v11 + 48) = v14;
        memcpy(v18, *((const void **)v10 + 4), v14);
        *(_QWORD *)(v11 + 40) = v14;
      }
      *(_BYTE *)(v11 + 56) = 2;
      v7 = (const char *)(v10 + 14);
      *(_QWORD *)(v11 + 80) = 0;
      *(_OWORD *)(v11 + 64) = 0;
      copy_idcv(v11 + 56);
      v15 = *v10;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *(_DWORD *)v11 = v15;
      *(_QWORD *)(v12 + 16) = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v16 = *((_QWORD *)v10 + 3);
      if ( v16 )
      {
        v7 = (const char *)v11;
        *(_QWORD *)(v11 + 24) = sub_77B660(v16, v11);
      }
      v10 = *((int **)v10 + 2);
    }
    while ( v10 );
  }
  return v6;
}

