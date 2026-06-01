__int64 __fastcall CoinParamUtils::getIntField(CoinParamUtils *this, __int64 a2, const char **a3, int *a4)
{
  int *v5; // rax
  int *v6; // r14
  unsigned int v7; // ebx
  char *v8; // rax
  const char *v10; // rbx
  size_t v11; // rax
  int v12; // edx
  int v13; // edx
  char *nptr; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v15[6]; // [rsp+18h] [rbp-30h] BYREF

  nptr = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  if ( !(unsigned int)std::string::compare((std::string *)&qword_4D71E8, "") )
  {
    std::string::assign((std::string *)&nptr, "EOL", 3u);
    if ( dword_4D6D4C <= 0 )
    {
      sub_23D1F0((std::string *)v15, nullptr);
      std::string::swap((std::string *)&nptr, (std::string *)v15);
      if ( (_UNKNOWN *)(v15[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v15[0] - 8LL), 0xFFFFFFFF);
        }
        else
        {
          v13 = *(_DWORD *)(v15[0] - 8LL);
          *(_DWORD *)(v15[0] - 8LL) = v13 - 1;
        }
        if ( v13 <= 0 )
          std::string::_Rep::_M_destroy();
      }
    }
    else if ( dword_4D6D4C < (int)this )
    {
      v10 = *(const char **)(a2 + 8LL * dword_4D6D4C++);
      v11 = strlen(v10);
      std::string::assign((std::string *)&nptr, v10, v11);
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
  v7 = std::string::compare((std::string *)&nptr, "EOL");
  if ( v7 )
    v7 = strtol(nptr, nullptr, 10);
  if ( !a3 )
  {
LABEL_8:
    v8 = nptr;
    if ( nptr - 24 == (char *)&std::string::_Rep::_S_empty_rep_storage )
      return v7;
    goto LABEL_14;
  }
  if ( (unsigned int)std::string::compare((std::string *)&nptr, "EOL") )
  {
    *(_DWORD *)a3 = *v6 != 0;
    goto LABEL_8;
  }
  v8 = nptr;
  *(_DWORD *)a3 = 2;
  if ( v8 - 24 == (char *)&std::string::_Rep::_S_empty_rep_storage )
    return v7;
LABEL_14:
  if ( &_pthread_key_create )
  {
    v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v8 - 2, 0xFFFFFFFF);
  }
  else
  {
    v12 = *((_DWORD *)v8 - 2);
    *((_DWORD *)v8 - 2) = v12 - 1;
  }
  if ( v12 <= 0 )
    std::string::_Rep::_M_destroy();
  return v7;
}

