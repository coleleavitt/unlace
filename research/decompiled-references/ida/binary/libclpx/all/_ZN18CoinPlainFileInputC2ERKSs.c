// Alternative name is '_ZN18CoinPlainFileInputC1ERKSs'
void __fastcall CoinPlainFileInput::CoinPlainFileInput(CoinPlainFileInput *this, const std::string *a2)
{
  FILE *v2; // rax
  void *exception; // r14
  __int64 v4; // [rsp+20h] [rbp-58h]
  __int64 v5; // [rsp+28h] [rbp-50h]
  __int64 v6; // [rsp+30h] [rbp-48h]

  CoinFileInput::CoinFileInput(this, a2);
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_4D1650;
  std::string::assign((CoinPlainFileInput *)((char *)this + 8), "plain", 5u);
  if ( !(unsigned int)std::string::compare(a2, "stdin") )
  {
    *((_QWORD *)this + 3) = stdin;
  }
  else
  {
    v2 = fopen(*(const char **)a2, "r");
    *((_QWORD *)this + 3) = v2;
    if ( !v2 )
    {
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_1CBC30(v4 - 24);
      if ( (_UNKNOWN *)(v5 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_1CBC30(v5 - 24);
      if ( (_UNKNOWN *)(v6 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_1CBC30(v6 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
}

