void __fastcall ClpNetworkMatrix::deleteRows(ClpNetworkMatrix *this, int a2, const int *a3)
{
  unsigned __int64 v4; // rdi
  void *v6; // rax
  __int64 v7; // r12
  _DWORD *v8; // rcx
  const int *v9; // rdx
  const int *v10; // rsi
  int v11; // ebx
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rsi
  void *exception; // r13
  __int64 v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  __int64 v23; // [rsp+20h] [rbp-48h]

  v4 = *((int *)this + 28);
  if ( v4 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v6 = (void *)operator new[](4 * v4);
  v7 = *((int *)this + 28);
  v8 = memset(v6, 0, 4 * v7);
  if ( a2 <= 0 )
  {
    v13 = *((_DWORD *)this + 29);
    if ( v13 <= 0 )
    {
      if ( (int)v7 <= 0 )
      {
        v11 = 0;
        goto LABEL_25;
      }
      goto LABEL_18;
    }
  }
  else
  {
    v9 = a3;
    v10 = &a3[a2 - 1 + 1];
    v11 = 0;
    do
    {
      while ( 1 )
      {
        v12 = *v9;
        if ( (int)v7 <= (int)v12 || (int)v12 < 0 )
          break;
        ++v9;
        v8[v12] = 1;
        if ( v9 == v10 )
          goto LABEL_8;
      }
      ++v9;
      ++v11;
    }
    while ( v9 != v10 );
LABEL_8:
    if ( v11 )
    {
LABEL_34:
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v21 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        start(v21 - 24);
      if ( (_UNKNOWN *)(v22 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        start(v22 - 24);
      if ( (_UNKNOWN *)(v23 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        start(v23 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
    v13 = *((_DWORD *)this + 29);
    if ( v13 <= 0 )
    {
      if ( (int)v7 <= 0 )
        goto LABEL_25;
      goto LABEL_18;
    }
  }
  v14 = *((_QWORD *)this + 13);
  v15 = 0;
  v11 = 0;
  do
  {
    if ( v8[*(int *)(v14 + 8 * v15)] )
      ++v11;
    if ( v8[*(int *)(v14 + 8 * v15 + 4)] )
      ++v11;
    ++v15;
  }
  while ( v13 > (int)v15 );
  if ( v11 )
    goto LABEL_34;
  if ( (int)v7 <= 0 )
    goto LABEL_23;
LABEL_18:
  v16 = 0;
  v11 = 0;
  do
  {
    while ( !v8[v16] )
    {
      v8[v16++] = v11++;
      if ( (int)v7 <= (int)v16 )
        goto LABEL_21;
    }
    v8[v16++] = -1;
  }
  while ( (int)v7 > (int)v16 );
LABEL_21:
  if ( v13 > 0 )
  {
    v14 = *((_QWORD *)this + 13);
LABEL_23:
    v17 = v14 + 4;
    v18 = 0;
    do
    {
      v19 = *(int *)(v17 - 4);
      ++v18;
      v17 += 8;
      *(_DWORD *)(v17 - 12) = v8[v19];
      *(_DWORD *)(v17 - 8) = v8[*(int *)(v17 - 8)];
    }
    while ( *((_DWORD *)this + 29) > v18 );
  }
LABEL_25:
  operator delete[](v8);
  *((_DWORD *)this + 28) = v11;
}

