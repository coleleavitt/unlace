__int64 __fastcall sub_5C8190(__int64 a1, const char *a2)
{
  const char *v2; // rbp
  __int64 v4; // rax
  size_t v5; // r13
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  int *v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rax
  size_t v13; // r13
  int v14; // eax
  __int64 v15; // rdi
  void *v17; // rax
  void *v18; // rax

  v2 = a2;
  v4 = operator new(0x40u);
  v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(v4 + 32) = 0;
  v6 = v4;
  *(_OWORD *)(v4 + 40) = 0;
  if ( v5 )
  {
    v18 = (void *)qalloc_or_throw(v5, a2);
    *(_QWORD *)(v6 + 32) = v18;
    a2 = *(const char **)(a1 + 32);
    *(_QWORD *)(v6 + 48) = v5;
    memcpy(v18, a2, v5);
    *(_QWORD *)(v6 + 40) = v5;
  }
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 56) = v7;
  LODWORD(v7) = *(_DWORD *)a1;
  *(_QWORD *)(v6 + 8) = v2;
  *(_DWORD *)v6 = v7;
  if ( v8 )
  {
    a2 = (const char *)v6;
    *(_QWORD *)(v6 + 24) = sub_5C8190(v8, v6);
  }
  v9 = *(int **)(a1 + 16);
  if ( v9 )
  {
    v10 = v6;
    do
    {
      v11 = v10;
      v12 = operator new(0x40u);
      *(_QWORD *)(v12 + 32) = 0;
      v10 = v12;
      *(_OWORD *)(v12 + 40) = 0;
      v13 = *((_QWORD *)v9 + 5);
      if ( v13 )
      {
        v17 = (void *)qalloc_or_throw(*((_QWORD *)v9 + 5), a2);
        *(_QWORD *)(v10 + 32) = v17;
        *(_QWORD *)(v10 + 48) = v13;
        a2 = *((const char **)v9 + 4);
        memcpy(v17, a2, v13);
        *(_QWORD *)(v10 + 40) = v13;
      }
      *(_QWORD *)(v10 + 56) = *((_QWORD *)v9 + 7);
      v14 = *v9;
      *(_QWORD *)(v10 + 16) = 0;
      *(_DWORD *)v10 = v14;
      *(_QWORD *)(v10 + 24) = 0;
      *(_QWORD *)(v11 + 16) = v10;
      *(_QWORD *)(v10 + 8) = v11;
      v15 = *((_QWORD *)v9 + 3);
      if ( v15 )
      {
        a2 = (const char *)v10;
        *(_QWORD *)(v10 + 24) = sub_5C8190(v15, v10);
      }
      v9 = *((int **)v9 + 2);
    }
    while ( v9 );
  }
  return v6;
}

