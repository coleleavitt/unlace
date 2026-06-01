__int64 __fastcall sub_5FE370(int *a1, __int64 a2)
{
  __int64 v4; // rax
  size_t v5; // r13
  __int64 v6; // r12
  size_t v7; // r13
  int v8; // eax
  __int64 v9; // rdi
  int *v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  size_t v14; // r13
  size_t v15; // r13
  int v16; // eax
  __int64 v17; // rdi
  void *v19; // rax
  void *v20; // rax
  void *v21; // rax
  const void *v22; // rsi
  void *v23; // rax
  const void *v24; // rsi

  v4 = operator new(0x50u);
  v5 = *((_QWORD *)a1 + 5);
  *(_QWORD *)(v4 + 32) = 0;
  v6 = v4;
  *(_OWORD *)(v4 + 40) = 0;
  if ( v5 )
  {
    v21 = (void *)qalloc_or_throw(v5);
    *(_QWORD *)(v6 + 32) = v21;
    v22 = *((const void **)a1 + 4);
    *(_QWORD *)(v6 + 48) = v5;
    memcpy(v21, v22, v5);
    *(_QWORD *)(v6 + 40) = v5;
  }
  v7 = *((_QWORD *)a1 + 8);
  *(_QWORD *)(v6 + 56) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  if ( v7 )
  {
    v23 = (void *)qalloc_or_throw(v7);
    *(_QWORD *)(v6 + 56) = v23;
    v24 = *((const void **)a1 + 7);
    *(_QWORD *)(v6 + 72) = v7;
    memcpy(v23, v24, v7);
    *(_QWORD *)(v6 + 64) = v7;
  }
  v8 = *a1;
  v9 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_DWORD *)v6 = v8;
  *(_QWORD *)(v6 + 8) = a2;
  if ( v9 )
    *(_QWORD *)(v6 + 24) = sub_5FE370(v9, v6);
  v10 = *((int **)a1 + 2);
  if ( v10 )
  {
    v11 = v6;
    do
    {
      v12 = v11;
      v13 = operator new(0x50u);
      *(_QWORD *)(v13 + 32) = 0;
      v11 = v13;
      *(_OWORD *)(v13 + 40) = 0;
      v14 = *((_QWORD *)v10 + 5);
      if ( v14 )
      {
        v19 = (void *)qalloc_or_throw(*((_QWORD *)v10 + 5));
        *(_QWORD *)(v11 + 32) = v19;
        *(_QWORD *)(v11 + 48) = v14;
        memcpy(v19, *((const void **)v10 + 4), v14);
        *(_QWORD *)(v11 + 40) = v14;
      }
      *(_QWORD *)(v11 + 56) = 0;
      *(_OWORD *)(v11 + 64) = 0;
      v15 = *((_QWORD *)v10 + 8);
      if ( v15 )
      {
        v20 = (void *)qalloc_or_throw(*((_QWORD *)v10 + 8));
        *(_QWORD *)(v11 + 56) = v20;
        *(_QWORD *)(v11 + 72) = v15;
        memcpy(v20, *((const void **)v10 + 7), v15);
        *(_QWORD *)(v11 + 64) = v15;
      }
      v16 = *v10;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *(_DWORD *)v11 = v16;
      *(_QWORD *)(v12 + 16) = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v17 = *((_QWORD *)v10 + 3);
      if ( v17 )
        *(_QWORD *)(v11 + 24) = sub_5FE370(v17, v11);
      v10 = *((int **)v10 + 2);
    }
    while ( v10 );
  }
  return v6;
}
