__int64 __fastcall CoinLpIO::writeLp(CoinLpIO *this, const char *filename, bool a3)
{
  FILE *v4; // rax
  FILE *v5; // rbx
  unsigned int v6; // ebp
  void *exception; // r12
  __int64 v9; // [rsp+10h] [rbp-2058h]
  __int64 v10; // [rsp+18h] [rbp-2050h]
  __int64 v11; // [rsp+20h] [rbp-2048h]
  __int64 v12; // [rsp+28h] [rbp-2040h]
  char s[8248]; // [rsp+30h] [rbp-2038h] BYREF

  v4 = fopen(filename, "w");
  if ( !v4 )
  {
    sprintf(s, "### ERROR: unable to open file %s\n", filename);
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
  v5 = v4;
  v6 = CoinLpIO::writeLp(this, v4, a3);
  fclose(v5);
  return v6;
}

