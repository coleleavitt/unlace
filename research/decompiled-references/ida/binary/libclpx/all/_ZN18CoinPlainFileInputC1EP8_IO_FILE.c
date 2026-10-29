// Alternative name is '_ZN18CoinPlainFileInputC2EP8_IO_FILE'
void __fastcall CoinPlainFileInput::CoinPlainFileInput(CoinPlainFileInput *this, _IO_FILE *a2)
{
  int v2; // edx
  _QWORD v3[4]; // [rsp+8h] [rbp-20h] BYREF

  std::string::string();
  CoinFileInput::CoinFileInput(this, (const std::string *)v3);
  if ( (_UNKNOWN *)(v3[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3[0] - 8LL), 0xFFFFFFFF);
    }
    else
    {
      v2 = *(_DWORD *)(v3[0] - 8LL);
      *(_DWORD *)(v3[0] - 8LL) = v2 - 1;
    }
    if ( v2 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  *((_QWORD *)this + 3) = a2;
  *(_QWORD *)this = off_4D1650;
  std::string::assign((CoinPlainFileInput *)((char *)this + 8), "plain", 5u);
}

