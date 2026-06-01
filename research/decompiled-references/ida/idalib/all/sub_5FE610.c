__int64 __fastcall sub_5FE610(int *a1, __int64 a2)
{
  __int64 v4; // rax
  size_t v5; // r13
  __int64 v6; // r12
  int *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdi
  int *v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rax
  size_t v20; // r14
  int *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdi
  void *v31; // rax
  void *v32; // rax
  const void *v33; // rsi

  v4 = operator new(0x68u);
  v5 = *((_QWORD *)a1 + 5);
  *(_QWORD *)(v4 + 32) = 0;
  v6 = v4;
  *(_OWORD *)(v4 + 40) = 0;
  if ( v5 )
  {
    v32 = (void *)qalloc_or_throw(v5);
    *(_QWORD *)(v6 + 32) = v32;
    v33 = *((const void **)a1 + 4);
    *(_QWORD *)(v6 + 48) = v5;
    memcpy(v32, v33, v5);
    *(_QWORD *)(v6 + 40) = v5;
  }
  v7 = *((int **)a1 + 9);
  *(_DWORD *)(v6 + 64) = 0;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)(v6 + 80) = v6 + 64;
  *(_QWORD *)(v6 + 88) = v6 + 64;
  *(_QWORD *)(v6 + 96) = 0;
  if ( v7 )
  {
    v8 = sub_5FE370(v7, v6 + 64);
    v9 = v8;
    do
    {
      v10 = v9;
      v9 = *(_QWORD *)(v9 + 16);
    }
    while ( v9 );
    *(_QWORD *)(v6 + 80) = v10;
    v11 = v8;
    do
    {
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 24);
    }
    while ( v11 );
    v13 = *((_QWORD *)a1 + 12);
    *(_QWORD *)(v6 + 88) = v12;
    *(_QWORD *)(v6 + 72) = v8;
    *(_QWORD *)(v6 + 96) = v13;
  }
  v14 = *a1;
  v15 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_DWORD *)v6 = v14;
  *(_QWORD *)(v6 + 8) = a2;
  if ( v15 )
    *(_QWORD *)(v6 + 24) = sub_5FE610(v15, v6);
  v16 = *((int **)a1 + 2);
  if ( v16 )
  {
    v17 = v6;
    do
    {
      v18 = v17;
      v19 = operator new(0x68u);
      *(_QWORD *)(v19 + 32) = 0;
      v17 = v19;
      *(_OWORD *)(v19 + 40) = 0;
      v20 = *((_QWORD *)v16 + 5);
      if ( v20 )
      {
        v31 = (void *)qalloc_or_throw(*((_QWORD *)v16 + 5));
        *(_QWORD *)(v17 + 32) = v31;
        *(_QWORD *)(v17 + 48) = v20;
        memcpy(v31, *((const void **)v16 + 4), v20);
        *(_QWORD *)(v17 + 40) = v20;
      }
      *(_DWORD *)(v17 + 64) = 0;
      *(_QWORD *)(v17 + 72) = 0;
      *(_QWORD *)(v17 + 80) = v17 + 64;
      *(_QWORD *)(v17 + 88) = v17 + 64;
      *(_QWORD *)(v17 + 96) = 0;
      v21 = *((int **)v16 + 9);
      if ( v21 )
      {
        v22 = sub_5FE370(v21, v17 + 64);
        v23 = v22;
        do
        {
          v24 = v23;
          v23 = *(_QWORD *)(v23 + 16);
        }
        while ( v23 );
        *(_QWORD *)(v17 + 80) = v24;
        v25 = v22;
        do
        {
          v26 = v25;
          v25 = *(_QWORD *)(v25 + 24);
        }
        while ( v25 );
        *(_QWORD *)(v17 + 88) = v26;
        v27 = *((_QWORD *)v16 + 12);
        *(_QWORD *)(v17 + 72) = v22;
        *(_QWORD *)(v17 + 96) = v27;
      }
      v28 = *v16;
      *(_QWORD *)(v17 + 16) = 0;
      *(_QWORD *)(v17 + 24) = 0;
      *(_DWORD *)v17 = v28;
      *(_QWORD *)(v18 + 16) = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v29 = *((_QWORD *)v16 + 3);
      if ( v29 )
        *(_QWORD *)(v17 + 24) = sub_5FE610(v29, v17);
      v16 = *((int **)v16 + 2);
    }
    while ( v16 );
  }
  return v6;
}
