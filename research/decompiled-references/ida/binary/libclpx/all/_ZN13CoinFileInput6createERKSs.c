CoinPlainFileInput *__fastcall CoinFileInput::create(const char **this, const std::string *a2)
{
  CoinPlainFileInput *v2; // rbp
  FILE *v4; // rax
  FILE *v5; // rbp
  size_t v6; // r12
  void *exception; // r14
  char ptr; // [rsp+Ch] [rbp-5Ch] BYREF
  char v9; // [rsp+Dh] [rbp-5Bh]
  char v10; // [rsp+Eh] [rbp-5Ah]
  __int64 v11; // [rsp+10h] [rbp-58h]
  __int64 v12; // [rsp+18h] [rbp-50h]
  __int64 v13; // [rsp+20h] [rbp-48h]
  char *v14; // [rsp+28h] [rbp-40h]

  if ( (unsigned int)std::string::compare((std::string *)this, "stdin") )
  {
    v4 = fopen(*this, "r");
    v5 = v4;
    if ( v4 )
    {
      v6 = fread(&ptr, 1u, 4u, v4);
      fclose(v5);
      if ( v6 <= 1 )
        goto LABEL_2;
      if ( ptr == 31 )
      {
        if ( v9 != -117 )
          goto LABEL_2;
      }
      else if ( v6 == 2 || ptr != 66 || v9 != 90 || v10 != 104 )
      {
        goto LABEL_2;
      }
      exception = __cxa_allocate_exception(0x30u);
      v14 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v11 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_1CBC30(v11 - 24);
    }
    else
    {
      exception = __cxa_allocate_exception(0x30u);
      v14 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v11 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_1CBC30(v11 - 24);
    }
    if ( (_UNKNOWN *)(v12 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CBC30(v12 - 24);
    if ( (_UNKNOWN *)(v13 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CBC30(v13 - 24);
    if ( v14 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
      sub_1CBC30((__int64)(v14 - 24));
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
LABEL_2:
  v2 = (CoinPlainFileInput *)operator new(0x20u);
  CoinPlainFileInput::CoinPlainFileInput(v2, (const std::string *)this);
  return v2;
}

