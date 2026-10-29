CoinFileOutput *__fastcall CoinFileOutput::create(std::string *a1, int a2)
{
  CoinFileOutput *v2; // rbx
  FILE *v4; // rax
  void *v5; // r14
  void *exception; // r14
  __int64 v7; // [rsp+20h] [rbp-58h]
  __int64 v8; // [rsp+28h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-48h]

  if ( a2 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v7 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CBC30(v7 - 24);
    if ( (_UNKNOWN *)(v8 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CBC30(v8 - 24);
    if ( (_UNKNOWN *)(v9 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CBC30(v9 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  v2 = (CoinFileOutput *)operator new(0x20u);
  CoinFileOutput::CoinFileOutput(v2, a1);
  *((_QWORD *)v2 + 3) = 0;
  *(_QWORD *)v2 = off_4D16B0;
  if ( !(unsigned int)std::string::compare(a1, "-") || !(unsigned int)std::string::compare(a1, "stdout") )
  {
    *((_QWORD *)v2 + 3) = stdout;
  }
  else
  {
    v4 = fopen(*(const char **)a1, "w");
    *((_QWORD *)v2 + 3) = v4;
    if ( !v4 )
    {
      v5 = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v7 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_1CBC30(v7 - 24);
      if ( (_UNKNOWN *)(v8 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_1CBC30(v8 - 24);
      if ( (_UNKNOWN *)(v9 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_1CBC30(v9 - 24);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
  return v2;
}

