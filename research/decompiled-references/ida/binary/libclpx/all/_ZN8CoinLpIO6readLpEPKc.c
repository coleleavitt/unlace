__int64 __fastcall CoinLpIO::readLp(CoinLpIO *this, const char *filename)
{
  __int64 v4; // rdi
  int v5; // eax
  char *v6; // rsi
  char v7; // r15
  __int64 v8; // rax
  int v9; // edx
  CoinPlainFileInput *v10; // rbx
  FILE *v12; // rbx
  CoinPlainFileInput *v13; // rbp
  int v14; // edx
  void *exception; // [rsp+8h] [rbp-2070h]
  __int64 v16; // [rsp+20h] [rbp-2058h]
  __int64 v17; // [rsp+28h] [rbp-2050h]
  __int64 v18; // [rsp+30h] [rbp-2048h] BYREF
  __int64 v19; // [rsp+38h] [rbp-2040h] BYREF
  char s[8248]; // [rsp+40h] [rbp-2038h] BYREF

  v4 = *((_QWORD *)this + 172);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *((_QWORD *)this + 172) = 0;
  v5 = strlen(filename);
  if ( v5 > 3 && !memcmp(&filename[v5 - 3], ".lp", 3u) )
  {
    v12 = fopen(filename, "r");
    if ( !v12 )
      goto LABEL_14;
    v13 = (CoinPlainFileInput *)operator new(0x20u);
    CoinPlainFileInput::CoinPlainFileInput(v13, v12);
    *((_QWORD *)this + 172) = v13;
  }
  else if ( strstr(filename, ".lp") )
  {
    std::string::string();
    std::string::string();
    v6 = s;
    v7 = fileCoinReadable((std::string *)&v19, (const std::string *)s);
    if ( (_UNKNOWN *)(*(_QWORD *)s - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)s - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v14 = *(_DWORD *)(*(_QWORD *)s - 8LL);
        *(_DWORD *)(*(_QWORD *)s - 8LL) = v14 - 1;
      }
      if ( v14 <= 0 )
      {
        v6 = (char *)&v18;
        std::string::_Rep::_M_destroy();
      }
    }
    if ( v7 )
    {
      *((_QWORD *)this + 172) = CoinFileInput::create((CoinFileInput *)&v19, (const std::string *)v6);
      v8 = v19;
      if ( (_UNKNOWN *)(v19 - 24) == &std::string::_Rep::_S_empty_rep_storage )
        return CoinLpIO::readLp(this);
    }
    else
    {
      v8 = v19;
      if ( (_UNKNOWN *)(v19 - 24) == &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_14;
    }
    if ( &_pthread_key_create )
    {
      v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 - 8), 0xFFFFFFFF);
    }
    else
    {
      v9 = *(_DWORD *)(v8 - 8);
      *(_DWORD *)(v8 - 8) = v9 - 1;
    }
    if ( v9 <= 0 )
      std::string::_Rep::_M_destroy();
    if ( !v7 )
    {
LABEL_14:
      sprintf(s, "### ERROR: Unable to open file %s for reading\n", filename);
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v16 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v16 - 24);
      if ( (_UNKNOWN *)(v17 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v17 - 24);
      if ( (_UNKNOWN *)(v18 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v18 - 24);
      if ( (_UNKNOWN *)(v19 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v19 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
  else
  {
    if ( strcmp(filename, "-") )
      goto LABEL_14;
    v10 = (CoinPlainFileInput *)operator new(0x20u);
    CoinPlainFileInput::CoinPlainFileInput(v10, stdin);
    *((_QWORD *)this + 172) = v10;
  }
  return CoinLpIO::readLp(this);
}

