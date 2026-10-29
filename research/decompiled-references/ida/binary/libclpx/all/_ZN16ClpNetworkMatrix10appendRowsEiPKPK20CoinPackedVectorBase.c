void __fastcall ClpNetworkMatrix::appendRows(ClpNetworkMatrix *this, int a2, const CoinPackedVectorBase *const *a3)
{
  const CoinPackedVectorBase *const *v4; // rbx
  int v5; // ebp
  const CoinPackedVectorBase *const *v6; // r14
  __int64 (__fastcall ***v7)(_QWORD); // rdi
  void *exception; // r13
  __int64 v9; // [rsp+10h] [rbp-58h]
  __int64 v10; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+20h] [rbp-48h]

  if ( a2 > 0 )
  {
    v4 = a3;
    v5 = 0;
    v6 = &a3[(unsigned int)(a2 - 1) + 1];
    do
    {
      v7 = (__int64 (__fastcall ***)(_QWORD))*v4++;
      v5 += (**v7)(v7);
    }
    while ( v6 != v4 );
    if ( v5 )
    {
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v9 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        start(v9 - 24);
      if ( (_UNKNOWN *)(v10 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        start(v10 - 24);
      if ( (_UNKNOWN *)(v11 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        start(v11 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
  *((_DWORD *)this + 28) += a2;
}

