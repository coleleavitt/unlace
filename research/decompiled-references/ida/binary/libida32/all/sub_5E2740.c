__int64 __fastcall sub_5E2740(int *a1, const char *a2)
{
  __int64 v4; // rax
  size_t v5; // r13
  __int64 v6; // r12
  int *v7; // rdi
  const char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdi
  int *v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // r13
  __int64 v20; // rax
  size_t v21; // r14
  int *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdi
  void *v32; // rax
  void *v33; // rax
  const void *v34; // rsi

  v4 = operator new(0x68u);
  v5 = *((_QWORD *)a1 + 5);
  *(_QWORD *)(v4 + 32) = 0;
  v6 = v4;
  *(_OWORD *)(v4 + 40) = 0;
  if ( v5 )
  {
    v33 = (void *)qalloc_or_throw(v5, a2);
    *(_QWORD *)(v6 + 32) = v33;
    v34 = *((const void **)a1 + 4);
    *(_QWORD *)(v6 + 48) = v5;
    memcpy(v33, v34, v5);
    *(_QWORD *)(v6 + 40) = v5;
  }
  v7 = *((int **)a1 + 9);
  v8 = (const char *)(v6 + 64);
  *(_DWORD *)(v6 + 64) = 0;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)(v6 + 80) = v6 + 64;
  *(_QWORD *)(v6 + 88) = v6 + 64;
  *(_QWORD *)(v6 + 96) = 0;
  if ( v7 )
  {
    v9 = sub_5E24A0(v7, v8);
    v10 = v9;
    do
    {
      v11 = v10;
      v10 = *(_QWORD *)(v10 + 16);
    }
    while ( v10 );
    *(_QWORD *)(v6 + 80) = v11;
    v12 = v9;
    do
    {
      v13 = v12;
      v12 = *(_QWORD *)(v12 + 24);
    }
    while ( v12 );
    v14 = *((_QWORD *)a1 + 12);
    *(_QWORD *)(v6 + 88) = v13;
    *(_QWORD *)(v6 + 72) = v9;
    *(_QWORD *)(v6 + 96) = v14;
  }
  v15 = *a1;
  v16 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_DWORD *)v6 = v15;
  *(_QWORD *)(v6 + 8) = a2;
  if ( v16 )
  {
    v8 = (const char *)v6;
    *(_QWORD *)(v6 + 24) = sub_5E2740(v16, v6);
  }
  v17 = *((int **)a1 + 2);
  if ( v17 )
  {
    v18 = v6;
    do
    {
      v19 = v18;
      v20 = operator new(0x68u);
      *(_QWORD *)(v20 + 32) = 0;
      v18 = v20;
      *(_OWORD *)(v20 + 40) = 0;
      v21 = *((_QWORD *)v17 + 5);
      if ( v21 )
      {
        v32 = (void *)qalloc_or_throw(*((_QWORD *)v17 + 5), v8);
        *(_QWORD *)(v18 + 32) = v32;
        *(_QWORD *)(v18 + 48) = v21;
        memcpy(v32, *((const void **)v17 + 4), v21);
        *(_QWORD *)(v18 + 40) = v21;
      }
      v8 = (const char *)(v18 + 64);
      *(_DWORD *)(v18 + 64) = 0;
      *(_QWORD *)(v18 + 72) = 0;
      *(_QWORD *)(v18 + 80) = v18 + 64;
      *(_QWORD *)(v18 + 88) = v18 + 64;
      *(_QWORD *)(v18 + 96) = 0;
      v22 = *((int **)v17 + 9);
      if ( v22 )
      {
        v23 = sub_5E24A0(v22, v8);
        v24 = v23;
        do
        {
          v25 = v24;
          v24 = *(_QWORD *)(v24 + 16);
        }
        while ( v24 );
        *(_QWORD *)(v18 + 80) = v25;
        v26 = v23;
        do
        {
          v27 = v26;
          v26 = *(_QWORD *)(v26 + 24);
        }
        while ( v26 );
        *(_QWORD *)(v18 + 88) = v27;
        v28 = *((_QWORD *)v17 + 12);
        *(_QWORD *)(v18 + 72) = v23;
        *(_QWORD *)(v18 + 96) = v28;
      }
      v29 = *v17;
      *(_QWORD *)(v18 + 16) = 0;
      *(_QWORD *)(v18 + 24) = 0;
      *(_DWORD *)v18 = v29;
      *(_QWORD *)(v19 + 16) = v18;
      *(_QWORD *)(v18 + 8) = v19;
      v30 = *((_QWORD *)v17 + 3);
      if ( v30 )
      {
        v8 = (const char *)v18;
        *(_QWORD *)(v18 + 24) = sub_5E2740(v30, v18);
      }
      v17 = *((int **)v17 + 2);
    }
    while ( v17 );
  }
  return v6;
}

