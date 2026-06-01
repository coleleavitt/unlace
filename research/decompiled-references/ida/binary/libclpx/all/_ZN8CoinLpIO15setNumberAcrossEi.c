void __fastcall CoinLpIO::setNumberAcross(CoinLpIO *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  void *exception; // rbp
  __int64 v9; // [rsp+6h] [rbp-2058h]
  __int64 v10; // [rsp+Eh] [rbp-2050h]
  __int64 v11; // [rsp+16h] [rbp-2048h]
  __int64 v12; // [rsp+1Eh] [rbp-2040h]
  char s[8200]; // [rsp+26h] [rbp-2038h] BYREF
  __int64 v14; // [rsp+202Eh] [rbp-30h]
  __int64 v15; // [rsp+2036h] [rbp-28h]
  __int64 v16; // [rsp+203Eh] [rbp-20h]
  __int64 v17; // [rsp+2046h] [rbp-18h]
  __int64 v18; // [rsp+204Eh] [rbp-10h]
  __int64 v19; // [rsp+2056h] [rbp-8h]

  if ( a2 <= 0 )
  {
    v19 = v7;
    v18 = v6;
    v17 = v5;
    v16 = v4;
    v15 = v3;
    v14 = v2;
    sprintf(s, "### ERROR: value: %d\n", a2);
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v9 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v9 - 24);
    if ( (_UNKNOWN *)(v10 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v10 - 24);
    if ( (_UNKNOWN *)(v11 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v11 - 24);
    if ( (_UNKNOWN *)(v12 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v12 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  *((_DWORD *)this + 58) = a2;
}

