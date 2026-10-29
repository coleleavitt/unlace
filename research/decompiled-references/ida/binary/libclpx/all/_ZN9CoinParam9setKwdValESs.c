__int64 __fastcall CoinParam::setKwdVal(__int64 a1, const std::string *a2)
{
  __int64 result; // rax
  int v3; // ecx
  unsigned int v4; // [rsp+Ch] [rbp-2Ch]
  _QWORD v5[4]; // [rsp+18h] [rbp-20h] BYREF

  std::string::string((std::string *)v5, a2);
  result = CoinParam::kwdIndex();
  if ( (_UNKNOWN *)(v5[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5[0] - 8LL), 0xFFFFFFFF);
    }
    else
    {
      v3 = *(_DWORD *)(v5[0] - 8LL);
      *(_DWORD *)(v5[0] - 8LL) = v3 - 1;
    }
    if ( v3 <= 0 )
    {
      v4 = result;
      std::string::_Rep::_M_destroy();
      result = v4;
    }
  }
  if ( (int)result >= 0 )
    *(_DWORD *)(a1 + 112) = result;
  return result;
}

