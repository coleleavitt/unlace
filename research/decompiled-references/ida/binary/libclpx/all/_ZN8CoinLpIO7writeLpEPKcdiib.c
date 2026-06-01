__int64 __fastcall CoinLpIO::writeLp(CoinLpIO *this, const char *filename, double a3, int a4, int a5, bool a6)
{
  FILE *v9; // rax
  FILE *v10; // rbx
  unsigned int v11; // ebp
  void *exception; // r12
  __int64 v14; // [rsp+20h] [rbp-2058h]
  __int64 v15; // [rsp+28h] [rbp-2050h]
  __int64 v16; // [rsp+30h] [rbp-2048h]
  __int64 v17; // [rsp+38h] [rbp-2040h]
  char s[8248]; // [rsp+40h] [rbp-2038h] BYREF

  v9 = fopen(filename, "w");
  if ( !v9 )
  {
    sprintf(s, "### ERROR: unable to open file %s\n", filename);
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v14 - 24);
    if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v15 - 24);
    if ( (_UNKNOWN *)(v16 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v16 - 24);
    if ( (_UNKNOWN *)(v17 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v17 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  v10 = v9;
  v11 = CoinLpIO::writeLp(this, v9, a3, a4, a5, a6);
  fclose(v10);
  return v11;
}

