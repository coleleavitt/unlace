void __fastcall ClpNetworkMatrix::deleteCols(ClpNetworkMatrix *this, int a2, const int *a3)
{
  char *v6; // r12
  int v7; // r13d
  const int *v8; // rdx
  int v9; // ecx
  const int *v10; // rsi
  int v11; // ebx
  char *v12; // rax
  __int64 v13; // rax
  void *v14; // rdi
  int v15; // ebx
  __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  __int64 v18; // r13
  int v19; // eax
  __int64 v20; // rdx
  int v21; // edi
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rax
  void *v25; // rdi
  void *exception; // r13
  __int64 v27; // [rsp+10h] [rbp-58h]
  __int64 v28; // [rsp+18h] [rbp-50h]
  __int64 v29; // [rsp+20h] [rbp-48h]

  v6 = (char *)operator new[](*((int *)this + 29));
  v7 = *((_DWORD *)this + 29);
  memset(v6, 0, v7);
  if ( a2 <= 0 )
  {
    v11 = 0;
  }
  else
  {
    v8 = a3;
    v9 = 0;
    v10 = &a3[a2 - 1 + 1];
    v11 = 0;
    do
    {
      while ( 1 )
      {
        v13 = *v8;
        if ( v7 > (int)v13 && (int)v13 >= 0 )
          break;
        ++v8;
        ++v9;
        if ( v10 == v8 )
          goto LABEL_9;
      }
      v12 = &v6[v13];
      if ( *v12 )
        ++v11;
      else
        *v12 = 1;
      ++v8;
    }
    while ( v10 != v8 );
LABEL_9:
    if ( v9 )
    {
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v27 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        start(v27 - 24);
      if ( (_UNKNOWN *)(v28 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        start(v28 - 24);
      if ( (_UNKNOWN *)(v29 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        start(v29 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
  v14 = *((void **)this + 12);
  v15 = v7 - a2 + v11;
  if ( v14 )
    operator delete[](v14);
  v16 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 12) = 0;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  *((_QWORD *)this + 11) = 0;
  v17 = 2 * v15;
  if ( v17 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v18 = operator new[](4 * v17);
  v19 = *((_DWORD *)this + 29);
  if ( v19 > 0 )
  {
    v20 = 0;
    v21 = 0;
    v22 = (unsigned int)(v19 - 1) + 1LL;
    do
    {
      if ( !v6[v20] )
      {
        v23 = *((_QWORD *)this + 13);
        v24 = v21;
        v21 += 2;
        *(_DWORD *)(v18 + 4 * v24) = *(_DWORD *)(v23 + 8LL * (_DWORD)v20);
        *(_DWORD *)(v18 + 4 * v24 + 4) = *(_DWORD *)(v23 + 4LL * (2 * (int)v20 + 1));
      }
      ++v20;
    }
    while ( v22 != v20 );
  }
  operator delete[](v6);
  v25 = *((void **)this + 13);
  if ( v25 )
    operator delete[](v25);
  *((_QWORD *)this + 13) = v18;
  *((_DWORD *)this + 29) = v15;
}

