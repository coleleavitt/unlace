CoinParamUtils *__fastcall CoinParamUtils::getStringField(CoinParamUtils *this, int a2, const char **a3, int *a4)
{
  const char *v7; // r13
  size_t v8; // rax
  int v9; // edx
  _QWORD v10[6]; // [rsp+8h] [rbp-30h] BYREF

  *(_QWORD *)this = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  if ( !(unsigned int)std::string::compare((std::string *)&qword_4D71E8, "") )
  {
    std::string::assign(this, "EOL", 3u);
    if ( dword_4D6D4C <= 0 )
    {
      sub_23D1F0((std::string *)v10, nullptr);
      std::string::swap(this, (std::string *)v10);
      if ( (_UNKNOWN *)(v10[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10[0] - 8LL), 0xFFFFFFFF);
        }
        else
        {
          v9 = *(_DWORD *)(v10[0] - 8LL);
          *(_DWORD *)(v10[0] - 8LL) = v9 - 1;
        }
        if ( v9 <= 0 )
          std::string::_Rep::_M_destroy();
      }
    }
    else if ( dword_4D6D4C < a2 )
    {
      v7 = a3[dword_4D6D4C++];
      v8 = strlen(v7);
      std::string::assign(this, v7, v8);
    }
  }
  else
  {
    std::string::assign(this, (const std::string *)&qword_4D71E8);
    std::string::assign((std::string *)&qword_4D71E8, "", 0);
  }
  if ( a4 )
    *a4 = 2 * ((unsigned int)std::string::compare(this, "EOL") == 0);
  return this;
}

