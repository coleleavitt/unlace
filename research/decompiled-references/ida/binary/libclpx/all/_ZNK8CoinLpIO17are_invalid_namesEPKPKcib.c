__int64 __fastcall CoinLpIO::are_invalid_names(
        CoinMessageHandler **this,
        const char *const *a2,
        int a3,
        char a4,
        double a5)
{
  int NumRows; // r14d
  __int64 v9; // rax
  __int64 v10; // r12
  int v11; // r13d
  bool v12; // dl
  unsigned int is_invalid_name; // eax
  const char *v15; // rcx
  CoinMessageHandler *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // eax
  void *exception; // r12
  __int64 v24; // [rsp+0h] [rbp-2088h]
  unsigned int v25; // [rsp+Ch] [rbp-207Ch]
  __int64 RowSense; // [rsp+10h] [rbp-2078h]
  __int64 v27; // [rsp+30h] [rbp-2058h]
  __int64 v28; // [rsp+38h] [rbp-2050h]
  __int64 v29; // [rsp+40h] [rbp-2048h]
  __int64 v30; // [rsp+48h] [rbp-2040h]
  char v31[8248]; // [rsp+50h] [rbp-2038h] BYREF

  NumRows = CoinLpIO::getNumRows((CoinLpIO *)this);
  RowSense = CoinLpIO::getRowSense((CoinLpIO *)this);
  if ( a4 && NumRows + 1 != a3 )
  {
    v22 = CoinLpIO::getNumRows((CoinLpIO *)this);
    sprintf(v31, "### ERROR: card_vnames: %d   number of rows: %d\n", a3, v22);
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v27 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v27 - 24);
    if ( (_UNKNOWN *)(v28 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v28 - 24);
    if ( (_UNKNOWN *)(v29 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v29 - 24);
    if ( (_UNKNOWN *)(v30 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v30 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  if ( a3 <= 0 )
  {
    return 0;
  }
  else
  {
    v25 = 0;
    v9 = (unsigned int)(a3 - 1) + 1LL;
    v10 = 0;
    v24 = v9;
    do
    {
      while ( 1 )
      {
        v11 = v10;
        v12 = NumRows > (int)v10 && a4 && *(_BYTE *)(RowSense + v10) == 82;
        is_invalid_name = CoinLpIO::is_invalid_name((CoinLpIO *)this, a2[v10], v12);
        if ( is_invalid_name )
          break;
        if ( v24 == ++v10 )
          return v25;
      }
      v15 = a2[v10];
      v25 = is_invalid_name;
      ++v10;
      sprintf(v31, "### CoinLpIO::are_invalid_names(): Invalid name: vnames[%d]: %s", v11, v15);
      v16 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 1), 30, (const CoinMessages *)(this + 3));
      v21 = CoinMessageHandler::operator<<(v16, (__int64)v31, v17, v18, v19, v20, v24);
      CoinMessageHandler::operator<<(v21, 0, a5);
    }
    while ( v10 != v24 );
    return v25;
  }
}

