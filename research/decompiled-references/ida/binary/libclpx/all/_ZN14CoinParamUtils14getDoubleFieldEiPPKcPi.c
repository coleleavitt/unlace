double __fastcall CoinParamUtils::getDoubleField(CoinParamUtils *this, __int64 a2, const char **a3, int *a4)
{
  int *v5; // rax
  int *v6; // r13
  double result; // xmm0_8
  char *v8; // rax
  const char *v9; // r13
  size_t v10; // rax
  int v11; // edx
  int v12; // edx
  char *nptr; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[6]; // [rsp+28h] [rbp-30h] BYREF

  nptr = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  if ( !(unsigned int)std::string::compare((std::string *)&qword_4D71E8, "") )
  {
    std::string::assign((std::string *)&nptr, "EOL", 3u);
    if ( dword_4D6D4C <= 0 )
    {
      sub_23D1F0((std::string *)v14, nullptr);
      std::string::swap((std::string *)&nptr, (std::string *)v14);
      if ( (_UNKNOWN *)(v14[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14[0] - 8LL), 0xFFFFFFFF);
        }
        else
        {
          v12 = *(_DWORD *)(v14[0] - 8LL);
          *(_DWORD *)(v14[0] - 8LL) = v12 - 1;
        }
        if ( v12 <= 0 )
          std::string::_Rep::_M_destroy();
      }
    }
    else if ( dword_4D6D4C < (int)this )
    {
      v9 = *(const char **)(a2 + 8LL * dword_4D6D4C++);
      v10 = strlen(v9);
      std::string::assign((std::string *)&nptr, v9, v10);
    }
  }
  else
  {
    std::string::assign((std::string *)&nptr, (const std::string *)&qword_4D71E8);
    std::string::assign((std::string *)&qword_4D71E8, "", 0);
  }
  v5 = __errno_location();
  *v5 = 0;
  v6 = v5;
  result = 0.0;
  if ( (unsigned int)std::string::compare((std::string *)&nptr, "EOL") )
    result = strtod(nptr, nullptr);
  if ( a3 )
  {
    if ( !(unsigned int)std::string::compare((std::string *)&nptr, "EOL") )
    {
      v8 = nptr;
      *(_DWORD *)a3 = 2;
      if ( v8 - 24 == (char *)&std::string::_Rep::_S_empty_rep_storage )
        return result;
      goto LABEL_14;
    }
    *(_DWORD *)a3 = *v6 != 0;
  }
  v8 = nptr;
  if ( nptr - 24 == (char *)&std::string::_Rep::_S_empty_rep_storage )
    return result;
LABEL_14:
  if ( &_pthread_key_create )
  {
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v8 - 2, 0xFFFFFFFF);
  }
  else
  {
    v11 = *((_DWORD *)v8 - 2);
    *((_DWORD *)v8 - 2) = v11 - 1;
  }
  if ( v11 <= 0 )
    std::string::_Rep::_M_destroy();
  return result;
}

